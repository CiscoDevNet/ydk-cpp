#ifndef _CISCO_IOS_XE_NATIVE_51_
#define _CISCO_IOS_XE_NATIVE_51_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_49.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet : public Entity
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

        class Oam; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam> oam; // presence node
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam : public Entity
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
        class LinkMonitor; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor
        class RemoteFailure; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure
        class RemoteLoopback; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteLoopback

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor> link_monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure> remote_failure;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteLoopback> remote_loopback;
                class ModeEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor : public Entity
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
        class Frame; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame
        class FramePeriod; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod
        class FrameSeconds; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds
        class HighThreshold; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold
        class ReceiveCrc; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc
        class SymbolPeriod; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame> frame;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod> frame_period;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds> frame_seconds;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold> high_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc> receive_crc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod> symbol_period;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame : public Entity
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
        class Threshold; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold> threshold;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold : public Entity
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
        class High; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High> high;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod : public Entity
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
        class Threshold; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold> threshold;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold : public Entity
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
        class High; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High> high;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds : public Entity
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
        class Threshold; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold> threshold;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold : public Entity
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
        class High; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High> high;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold : public Entity
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

        class Action; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action> action;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc : public Entity
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
        class Threshold; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold> threshold;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold : public Entity
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
        class High; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High> high;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod : public Entity
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
        class Threshold; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold> threshold;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold : public Entity
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
        class High; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High> high;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure : public Entity
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

        class CriticalEvent; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent
        class DyingGasp; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp
        class LinkFault; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent> critical_event;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp> dying_gasp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault> link_fault;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent : public Entity
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

        class Action; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action> action;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp : public Entity
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

        class Action; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action> action; // presence node
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault : public Entity
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

        class Action; //type: Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action> action; // presence node
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action


class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteLoopback : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::RemoteLoopback


class Native::Interface::PortChannelSubinterface::PortChannel::Negotiation : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Negotiation


class Native::Interface::PortChannelSubinterface::PortChannel::Synchronous : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Synchronous


class Native::Interface::PortChannelSubinterface::PortChannel::Speed : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Speed


class Native::Interface::PortChannelSubinterface::PortChannel::Plim : public Entity
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

        class Ethernet; //type: Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet
        class Qos; //type: Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos> qos;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Plim


class Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet : public Entity
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

        class Vlan; //type: Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan> vlan;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet


class Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan : public Entity
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

        class Filter; //type: Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::Filter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::Filter> filter;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan


class Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::Filter : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Plim::Ethernet::Vlan::Filter


class Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos : public Entity
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

        class Input; //type: Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input> input;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos


class Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input : public Entity
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

        class Queue; //type: Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue> queue;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input


class Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue : public Entity
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

        class Zero; //type: Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero
        class StrictPriority; //type: Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority> strict_priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero> zero;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue


class Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero : public Entity
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

        class Pause; //type: Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause> pause;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero


class Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause


class Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority : public Entity
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

        class Pause; //type: Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause> pause;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority


class Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause


class Native::Interface::PortChannelSubinterface::PortChannel::Pppoe : public Entity
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
        class Enable; //type: Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::Enable

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::Enable> enable; // presence node
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Pppoe


class Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::Enable : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::Enable


class Native::Interface::PortChannelSubinterface::PortChannel::Service : public Entity
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

        class Instance; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance> > instance;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance : public Entity
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
        class Encapsulation; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation
        class Ip; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip
        class Ipv6; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ipv6
        class Rewrite; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite
        class Errdisable; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable
        class EthernetContainer; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer
        class Snmp; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp
        class BridgeDomain; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain
        class Mac; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac
        class ServicePolicy; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy
        class Cfm; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm
        class L2Protocol; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain> bridge_domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm> cfm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable> errdisable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer> ethernet_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol> l2protocol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac> mac;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite> rewrite;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp> snmp;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation : public Entity
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
        class Dot1Ad; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad
        class Dot1Q; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q
        class PriorityTagged; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged
        class Untagged; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Untagged

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad> dot1ad;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged> priority_tagged;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Untagged> untagged; // presence node
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad : public Entity
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
        class Cos2; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2> cos2;
                class IdEnum;
        class Dot1QEnum;
        class EtypeEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2 : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q : public Entity
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
        class Cos2; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2> cos2;
                class IdEnum;
        class SecondDot1QEnum;
        class EtypeEnum;
        class VlanTypeEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2 : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged : public Entity
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
        class CosContainer; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer> cos_container;
                class EtypeEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Untagged : public Entity
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


}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Untagged


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip : public Entity
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

        class Acl; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Acl
        class Dhcp; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp
        class Verify; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Verify

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Verify> verify;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Acl : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Acl


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp : public Entity
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

        class Relay; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay> relay;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay : public Entity
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

        class Information; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information> information;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information : public Entity
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

        class Option; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option> option;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Verify : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ip::Verify


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ipv6 : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Ipv6


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite : public Entity
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

        class Ingress; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress> ingress;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress : public Entity
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

        class Tag; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag> tag;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag : public Entity
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

        class Pop; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop
        class Push; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push
        class Translate; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop> pop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push> push;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate> translate;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate : public Entity
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

        class T1To1; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1
        class T1To2; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2
        class T2To1; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1
        class T2To2; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1> t1_to_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2> t1_to_2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1> t2_to_1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2> t2_to_2;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1 : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2 : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1 : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2 : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable : public Entity
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

        class Recovery; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery> recovery;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery : public Entity
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

        class Cause; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::Cause

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::Cause> cause;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::Cause : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Errdisable::Recovery::Cause


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer : public Entity
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

        class Ethernet; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet> ethernet;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet : public Entity
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

        class Lmi; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi
        class Loopback; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi> lmi;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback> loopback;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi : public Entity
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

        class CeVlan; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan> ce_vlan;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan : public Entity
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

        class Map; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map> map;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map : public Entity
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
        class VlanRange; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange> vlan_range;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map::VlanRange


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback : public Entity
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

        class Permit; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit> permit;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp : public Entity
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

        class Trap; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Trap
        class Ifindex; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Ifindex

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Ifindex> ifindex;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Trap> trap;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Trap : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Trap


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Ifindex : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Snmp::Ifindex


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain : public Entity
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
        class SplitHorizon; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon> split_horizon;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::BridgeDomain::SplitHorizon


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac : public Entity
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

        class Security; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security> security; // presence node
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security : public Entity
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
        class Maximum; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::Maximum

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::Maximum> maximum;
                class ViolationEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::Maximum : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::Maximum


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy : public Entity
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

        class Input; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Input
        class Output; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Output

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Input> > input;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Output> > output;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Input : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Input


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Output : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::ServicePolicy::Output


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm : public Entity
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

        class Encapsulation; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation
        class Mep; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mep
        class Mip; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mep> mep;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mip> mip;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation : public Entity
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

        class Dot1Ad; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad
        class Dot1Q; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad> dot1ad;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q> dot1q;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Ad


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Encapsulation::Dot1Q


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mep : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mep


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mip : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Cfm::Mip


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol : public Entity
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

        class Peer; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer
        class Forward; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward
        class Tunnel; //type: Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward> forward; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer> peer; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel> tunnel; // presence node
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward


class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel : public Entity
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

}; // Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel


class Native::Interface::PortChannelSubinterface::PortChannel::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qos; //type: Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos> qos;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Auto_


class Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos : public Entity
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

        class Classify; //type: Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Classify
        class Trust; //type: Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Trust
        class Video; //type: Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Video
        class Voip; //type: Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Voip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Classify> classify; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Trust> trust; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Video> video;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Voip> voip; // presence node
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos


class Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Classify : public Entity
{
    public:
        Classify();
        ~Classify();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf police; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Classify


class Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Trust : public Entity
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

        YLeaf cos; //type: empty
        YLeaf dscp; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Trust


class Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Video : public Entity
{
    public:
        Video();
        ~Video();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cts; //type: empty
        YLeaf ip_camera; //type: empty
        YLeaf media_player; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Video


class Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Voip : public Entity
{
    public:
        Voip();
        ~Voip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cisco_phone; //type: empty
        YLeaf cisco_softphone; //type: empty
        YLeaf trust; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Auto_::Qos::Voip


class Native::Interface::PortChannelSubinterface::PortChannel::Datalink : public Entity
{
    public:
        Datalink();
        ~Datalink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flow; //type: Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow> flow;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Datalink


class Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow : public Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Monitor; //type: Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Monitor

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Monitor> monitor; // presence node
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow


class Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Monitor : public Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf user_defined_flow; //type: string
        YLeaf input_output; //type: InputOutputEnum
        class InputOutputEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Monitor


class Native::Interface::PortChannelSubinterface::PortChannel::Energywise : public Entity
{
    public:
        Energywise();
        ~Energywise();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf activitycheck; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Energywise


class Native::Interface::PortChannelSubinterface::PortChannel::Location : public Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CivicLocationId; //type: Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId> civic_location_id;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Location


class Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId : public Entity
{
    public:
        CivicLocationId();
        ~CivicLocationId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location_identifier; //type: string
        class Host; //type: Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::Host
        class None; //type: Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::None

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::Host> host; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::None> none; // presence node
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId


class Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::Host : public Entity
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

        YLeaf port_location; //type: string

}; // Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::Host


class Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::None : public Entity
{
    public:
        None();
        ~None();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_location; //type: string

}; // Native::Interface::PortChannelSubinterface::PortChannel::Location::CivicLocationId::None


class Native::Interface::PortChannelSubinterface::PortChannel::Mac : public Entity
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

        class AccessGroup; //type: Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup> access_group;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Mac


class Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup : public Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AclName; //type: Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName> acl_name;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup


class Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName : public Entity
{
    public:
        AclName();
        ~AclName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_name; //type: string
        YLeaf apply_to; //type: ApplyToEnum
        class ApplyToEnum;

}; // Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName


class Native::Interface::PortChannelSubinterface::PortChannel::Macro : public Entity
{
    public:
        Macro();
        ~Macro();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        class Auto_; //type: Native::Interface::PortChannelSubinterface::PortChannel::Macro::Auto_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Macro::Auto_> auto_;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Macro


class Native::Interface::PortChannelSubinterface::PortChannel::Macro::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processing; //type: boolean

}; // Native::Interface::PortChannelSubinterface::PortChannel::Macro::Auto_


class Native::Interface::PortChannelSubinterface::PortChannel::DualActive : public Entity
{
    public:
        DualActive();
        ~DualActive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fast_hello; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::DualActive


class Native::Interface::PortChannelSubinterface::PortChannel::Lldp : public Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: boolean
        YLeaf transmit; //type: boolean

}; // Native::Interface::PortChannelSubinterface::PortChannel::Lldp


class Native::Interface::PortChannelSubinterface::PortChannel::LoadBalancing : public Entity
{
    public:
        LoadBalancing();
        ~LoadBalancing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flow; //type: empty
        YLeaf vlan; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::LoadBalancing


class Native::Interface::PortChannelSubinterface::PortChannel::VlanRange : public Entity
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

        YLeaf id; //type: one of uint16, string
        class ServicePolicy; //type: Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::ServicePolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::ServicePolicy> service_policy;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::VlanRange


class Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::ServicePolicy : public Entity
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

        YLeaf input; //type: string
        YLeaf output; //type: string

}; // Native::Interface::PortChannelSubinterface::PortChannel::VlanRange::ServicePolicy


class Native::Interface::PortChannelSubinterface::PortChannel::Switch : public Entity
{
    public:
        Switch();
        ~Switch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Virtual_; //type: Native::Interface::PortChannelSubinterface::PortChannel::Switch::Virtual_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::Switch::Virtual_> virtual_;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::Switch


class Native::Interface::PortChannelSubinterface::PortChannel::Switch::Virtual_ : public Entity
{
    public:
        Virtual_();
        ~Virtual_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link; //type: uint8

}; // Native::Interface::PortChannelSubinterface::PortChannel::Switch::Virtual_


class Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue : public Entity
{
    public:
        SrrQueue();
        ~SrrQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bandwidth; //type: Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth> bandwidth;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue


class Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth : public Entity
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

        class Shape; //type: Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Shape
        class Share; //type: Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Share

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Shape> shape;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Share> share;
        
}; // Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth


class Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Shape : public Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf weight1; //type: uint16
        YLeaf weight2; //type: uint16
        YLeaf weight3; //type: uint16
        YLeaf weight4; //type: uint16

}; // Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Shape


class Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Share : public Entity
{
    public:
        Share();
        ~Share();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf weight1; //type: uint8
        YLeaf weight2; //type: uint8
        YLeaf weight3; //type: uint8
        YLeaf weight4; //type: uint8

}; // Native::Interface::PortChannelSubinterface::PortChannel::SrrQueue::Bandwidth::Share


class Native::Interface::PortChannelSubinterface::PortChannel::Macsec : public Entity
{
    public:
        Macsec();
        ~Macsec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf network_link; //type: empty

}; // Native::Interface::PortChannelSubinterface::PortChannel::Macsec


class Native::Interface::Pseudowire : public Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: uint32
        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf control_word; //type: empty
        YLeaf interworking; //type: InterworkingEnum
        YLeaf sequencing; //type: SequencingEnum
        class Ip; //type: Native::Interface::Pseudowire::Ip
        class LoadBalance; //type: Native::Interface::Pseudowire::LoadBalance
        class Monitor; //type: Native::Interface::Pseudowire::Monitor
        class PreferredPath; //type: Native::Interface::Pseudowire::PreferredPath
        class ProtocolMpls; //type: Native::Interface::Pseudowire::ProtocolMpls
        class ProtocolL2Tpv2; //type: Native::Interface::Pseudowire::ProtocolL2Tpv2
        class ProtocolL2Tpv3; //type: Native::Interface::Pseudowire::ProtocolL2Tpv3
        class Status; //type: Native::Interface::Pseudowire::Status
        class Switching; //type: Native::Interface::Pseudowire::Switching

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::LoadBalance> load_balance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::Monitor> monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::PreferredPath> preferred_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::ProtocolL2Tpv2> protocol_l2tpv2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::ProtocolL2Tpv3> protocol_l2tpv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::ProtocolMpls> protocol_mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::Status> status; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::Switching> switching;
                class EncapsulationEnum;
        class InterworkingEnum;
        class SequencingEnum;

}; // Native::Interface::Pseudowire


class Native::Interface::Pseudowire::Ip : public Entity
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

        YLeaf protocol; //type: ProtocolEnum
        YLeaf ttl; //type: uint8
        class Dfbit; //type: Native::Interface::Pseudowire::Ip::Dfbit
        class Local; //type: Native::Interface::Pseudowire::Ip::Local
        class Pmtu; //type: Native::Interface::Pseudowire::Ip::Pmtu
        class Tos; //type: Native::Interface::Pseudowire::Ip::Tos

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::Ip::Dfbit> dfbit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::Ip::Local> local;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::Ip::Pmtu> pmtu; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::Ip::Tos> tos;
                class ProtocolEnum;

}; // Native::Interface::Pseudowire::Ip


class Native::Interface::Pseudowire::Ip::Dfbit : public Entity
{
    public:
        Dfbit();
        ~Dfbit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf set; //type: empty

}; // Native::Interface::Pseudowire::Ip::Dfbit


class Native::Interface::Pseudowire::Ip::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface_; //type: Native::Interface::Pseudowire::Ip::Local::Interface_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::Ip::Local::Interface_> interface;
        
}; // Native::Interface::Pseudowire::Ip::Local


class Native::Interface::Pseudowire::Ip::Local::Interface_ : public Entity
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
        class AtmSubinterface; //type: Native::Interface::Pseudowire::Ip::Local::Interface_::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::Pseudowire::Ip::Local::Interface_::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::Pseudowire::Ip::Local::Interface_::LispSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Pseudowire::Ip::Local::Interface_::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::Ip::Local::Interface_::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::Ip::Local::Interface_::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::Ip::Local::Interface_::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::Ip::Local::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Pseudowire::Ip::Local::Interface_


class Native::Interface::Pseudowire::Ip::Local::Interface_::AtmSubinterface : public Entity
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

}; // Native::Interface::Pseudowire::Ip::Local::Interface_::AtmSubinterface


class Native::Interface::Pseudowire::Ip::Local::Interface_::AtmAcrsubinterface : public Entity
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

}; // Native::Interface::Pseudowire::Ip::Local::Interface_::AtmAcrsubinterface


class Native::Interface::Pseudowire::Ip::Local::Interface_::LispSubinterface : public Entity
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

}; // Native::Interface::Pseudowire::Ip::Local::Interface_::LispSubinterface


class Native::Interface::Pseudowire::Ip::Local::Interface_::PortChannelSubinterface : public Entity
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

}; // Native::Interface::Pseudowire::Ip::Local::Interface_::PortChannelSubinterface


class Native::Interface::Pseudowire::Ip::Pmtu : public Entity
{
    public:
        Pmtu();
        ~Pmtu();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: uint16

}; // Native::Interface::Pseudowire::Ip::Pmtu


class Native::Interface::Pseudowire::Ip::Tos : public Entity
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

        YLeaf reflect; //type: empty
        YLeaf value_; //type: uint8

}; // Native::Interface::Pseudowire::Ip::Tos


class Native::Interface::Pseudowire::LoadBalance : public Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flow; //type: Native::Interface::Pseudowire::LoadBalance::Flow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::LoadBalance::Flow> flow; // presence node
        
}; // Native::Interface::Pseudowire::LoadBalance


class Native::Interface::Pseudowire::LoadBalance::Flow : public Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ethernet; //type: EthernetEnum
        class EthernetEnum;

}; // Native::Interface::Pseudowire::LoadBalance::Flow


class Native::Interface::Pseudowire::Monitor : public Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Native::Interface::Pseudowire::Monitor::Peer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Pseudowire::Monitor::Peer> peer;
        
}; // Native::Interface::Pseudowire::Monitor

class Native::Interface::PortChannelSubinterface::PortChannel::ChannelGroup::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf desirable;
        static const Enum::YLeaf on;
        static const Enum::YLeaf passive;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Ethernet::Oam::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf passive;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Pppoe::Enable::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf global;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::IdEnum : public Enum
{
    public:
        static const Enum::YLeaf any;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Dot1QEnum : public Enum
{
    public:
        static const Enum::YLeaf any;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::EtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf pppoe_all;
        static const Enum::YLeaf pppoe_discovery;
        static const Enum::YLeaf pppoe_session;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::IdEnum : public Enum
{
    public:
        static const Enum::YLeaf any;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::SecondDot1QEnum : public Enum
{
    public:
        static const Enum::YLeaf any;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::EtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf pppoe_all;
        static const Enum::YLeaf pppoe_discovery;
        static const Enum::YLeaf pppoe_session;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::Dot1Q::VlanTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0x88A8;
        static const Enum::YLeaf Y_0x9100;
        static const Enum::YLeaf Y_0x9200;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::EtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf pppoe_all;
        static const Enum::YLeaf pppoe_discovery;
        static const Enum::YLeaf pppoe_session;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::WayEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf symmetric;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::Mac::Security::ViolationEnum : public Enum
{
    public:
        static const Enum::YLeaf protect;
        static const Enum::YLeaf restrict;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Peer::ProtocolEnum : public Enum
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

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Forward::ProtocolEnum : public Enum
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

class Native::Interface::PortChannelSubinterface::PortChannel::Service::Instance::L2Protocol::Tunnel::ProtocolEnum : public Enum
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

class Native::Interface::PortChannelSubinterface::PortChannel::Datalink::Flow::Monitor::InputOutputEnum : public Enum
{
    public:
        static const Enum::YLeaf input;
        static const Enum::YLeaf output;

};

class Native::Interface::PortChannelSubinterface::PortChannel::Mac::AccessGroup::AclName::ApplyToEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::Pseudowire::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf l2tpv2;
        static const Enum::YLeaf l2tpv3;
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf udp;

};

class Native::Interface::Pseudowire::InterworkingEnum : public Enum
{
    public:
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf ip;
        static const Enum::YLeaf vlan;

};

class Native::Interface::Pseudowire::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf resync;
        static const Enum::YLeaf transmit;

};

class Native::Interface::Pseudowire::Ip::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf l2tp;
        static const Enum::YLeaf uti;

};

class Native::Interface::Pseudowire::LoadBalance::Flow::EthernetEnum : public Enum
{
    public:
        static const Enum::YLeaf dst_mac;
        static const Enum::YLeaf src_dst_mac;
        static const Enum::YLeaf src_mac;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_51_ */

