#ifndef _CISCO_IOS_XE_NATIVE_27_
#define _CISCO_IOS_XE_NATIVE_27_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_25.hpp"
#include "Cisco_IOS_XE_native_26.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::BDI::Ethernet::Oam::LinkMonitor::Frame::Threshold : public ydk::Entity
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
        class High; //type: Native::Interface::BDI::Ethernet::Oam::LinkMonitor::Frame::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet::Oam::LinkMonitor::Frame::Threshold::High> high;
        
}; // Native::Interface::BDI::Ethernet::Oam::LinkMonitor::Frame::Threshold


class Native::Interface::BDI::Ethernet::Oam::LinkMonitor::Frame::Threshold::High : public ydk::Entity
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

        ydk::YLeaf thresh; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Interface::BDI::Ethernet::Oam::LinkMonitor::Frame::Threshold::High


class Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FramePeriod : public ydk::Entity
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
        class Threshold; //type: Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold> threshold;
        
}; // Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FramePeriod


class Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold : public ydk::Entity
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
        class High; //type: Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High> high;
        
}; // Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold


class Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High : public ydk::Entity
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

        ydk::YLeaf f_thresh; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High


class Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FrameSeconds : public ydk::Entity
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
        class Threshold; //type: Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold> threshold;
        
}; // Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FrameSeconds


class Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold : public ydk::Entity
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
        class High; //type: Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High> high;
        
}; // Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold


class Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High : public ydk::Entity
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

        ydk::YLeaf e_thresh; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Interface::BDI::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High


class Native::Interface::BDI::Ethernet::Oam::LinkMonitor::HighThreshold : public ydk::Entity
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

        class Action; //type: Native::Interface::BDI::Ethernet::Oam::LinkMonitor::HighThreshold::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet::Oam::LinkMonitor::HighThreshold::Action> action;
        
}; // Native::Interface::BDI::Ethernet::Oam::LinkMonitor::HighThreshold


class Native::Interface::BDI::Ethernet::Oam::LinkMonitor::HighThreshold::Action : public ydk::Entity
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

}; // Native::Interface::BDI::Ethernet::Oam::LinkMonitor::HighThreshold::Action


class Native::Interface::BDI::Ethernet::Oam::LinkMonitor::ReceiveCrc : public ydk::Entity
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
        class Threshold; //type: Native::Interface::BDI::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold> threshold;
        
}; // Native::Interface::BDI::Ethernet::Oam::LinkMonitor::ReceiveCrc


class Native::Interface::BDI::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold : public ydk::Entity
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
        class High; //type: Native::Interface::BDI::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High> high;
        
}; // Native::Interface::BDI::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold


class Native::Interface::BDI::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High : public ydk::Entity
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

        ydk::YLeaf crc_thresh; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Interface::BDI::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High


class Native::Interface::BDI::Ethernet::Oam::LinkMonitor::SymbolPeriod : public ydk::Entity
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
        class Threshold; //type: Native::Interface::BDI::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold> threshold;
        
}; // Native::Interface::BDI::Ethernet::Oam::LinkMonitor::SymbolPeriod


class Native::Interface::BDI::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold : public ydk::Entity
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
        class High; //type: Native::Interface::BDI::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High> high;
        
}; // Native::Interface::BDI::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold


class Native::Interface::BDI::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High : public ydk::Entity
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

        ydk::YLeaf err_thresh; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Interface::BDI::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High


class Native::Interface::BDI::Ethernet::Oam::RemoteFailure : public ydk::Entity
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

        class CriticalEvent; //type: Native::Interface::BDI::Ethernet::Oam::RemoteFailure::CriticalEvent
        class DyingGasp; //type: Native::Interface::BDI::Ethernet::Oam::RemoteFailure::DyingGasp
        class LinkFault; //type: Native::Interface::BDI::Ethernet::Oam::RemoteFailure::LinkFault

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet::Oam::RemoteFailure::CriticalEvent> critical_event;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet::Oam::RemoteFailure::DyingGasp> dying_gasp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet::Oam::RemoteFailure::LinkFault> link_fault;
        
}; // Native::Interface::BDI::Ethernet::Oam::RemoteFailure


class Native::Interface::BDI::Ethernet::Oam::RemoteFailure::CriticalEvent : public ydk::Entity
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

        class Action; //type: Native::Interface::BDI::Ethernet::Oam::RemoteFailure::CriticalEvent::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet::Oam::RemoteFailure::CriticalEvent::Action> action;
        
}; // Native::Interface::BDI::Ethernet::Oam::RemoteFailure::CriticalEvent


class Native::Interface::BDI::Ethernet::Oam::RemoteFailure::CriticalEvent::Action : public ydk::Entity
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

}; // Native::Interface::BDI::Ethernet::Oam::RemoteFailure::CriticalEvent::Action


class Native::Interface::BDI::Ethernet::Oam::RemoteFailure::DyingGasp : public ydk::Entity
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

        class Action; //type: Native::Interface::BDI::Ethernet::Oam::RemoteFailure::DyingGasp::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet::Oam::RemoteFailure::DyingGasp::Action> action; // presence node
        
}; // Native::Interface::BDI::Ethernet::Oam::RemoteFailure::DyingGasp


class Native::Interface::BDI::Ethernet::Oam::RemoteFailure::DyingGasp::Action : public ydk::Entity
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

}; // Native::Interface::BDI::Ethernet::Oam::RemoteFailure::DyingGasp::Action


class Native::Interface::BDI::Ethernet::Oam::RemoteFailure::LinkFault : public ydk::Entity
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

        class Action; //type: Native::Interface::BDI::Ethernet::Oam::RemoteFailure::LinkFault::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet::Oam::RemoteFailure::LinkFault::Action> action; // presence node
        
}; // Native::Interface::BDI::Ethernet::Oam::RemoteFailure::LinkFault


class Native::Interface::BDI::Ethernet::Oam::RemoteFailure::LinkFault::Action : public ydk::Entity
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

}; // Native::Interface::BDI::Ethernet::Oam::RemoteFailure::LinkFault::Action


class Native::Interface::BDI::Ethernet::Oam::RemoteLoopback : public ydk::Entity
{
    public:
        RemoteLoopback();
        ~RemoteLoopback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty
        ydk::YLeaf timeout; //type: uint8

}; // Native::Interface::BDI::Ethernet::Oam::RemoteLoopback


class Native::Interface::BDI::Ethernet::Dot1ad : public ydk::Entity
{
    public:
        Dot1ad();
        ~Dot1ad();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nni; //type: empty
        class Uni; //type: Native::Interface::BDI::Ethernet::Dot1ad::Uni

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet::Dot1ad::Uni> uni;
        
}; // Native::Interface::BDI::Ethernet::Dot1ad


class Native::Interface::BDI::Ethernet::Dot1ad::Uni : public ydk::Entity
{
    public:
        Uni();
        ~Uni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf c_port; //type: empty
        ydk::YLeaf s_port; //type: empty

}; // Native::Interface::BDI::Ethernet::Dot1ad::Uni


class Native::Interface::BDI::Eapol : public ydk::Entity
{
    public:
        Eapol();
        ~Eapol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestinationAddress; //type: Native::Interface::BDI::Eapol::DestinationAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Eapol::DestinationAddress> destination_address;
        
}; // Native::Interface::BDI::Eapol


class Native::Interface::BDI::Eapol::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast_address; //type: empty

}; // Native::Interface::BDI::Eapol::DestinationAddress


class Native::Interface::BDI::Synchronous : public ydk::Entity
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

        ydk::YLeaf mode; //type: empty

}; // Native::Interface::BDI::Synchronous


class Native::Interface::BDI::Speed : public ydk::Entity
{
    public:
        Speed();
        ~Speed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_; //type: empty
        ydk::YLeaf value_10; //type: empty
        ydk::YLeaf value_100; //type: empty
        ydk::YLeaf value_1000; //type: empty
        ydk::YLeaf value_10000; //type: empty
        ydk::YLeaf nonegotiate; //type: empty

}; // Native::Interface::BDI::Speed


class Native::Interface::BDI::Negotiation : public ydk::Entity
{
    public:
        Negotiation();
        ~Negotiation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_; //type: boolean

}; // Native::Interface::BDI::Negotiation


class Native::Interface::BDI::Plim : public ydk::Entity
{
    public:
        Plim();
        ~Plim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ethernet; //type: Native::Interface::BDI::Plim::Ethernet
        class Qos; //type: Native::Interface::BDI::Plim::Qos

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Plim::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Plim::Qos> qos;
        
}; // Native::Interface::BDI::Plim


class Native::Interface::BDI::Plim::Ethernet : public ydk::Entity
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

        class Vlan; //type: Native::Interface::BDI::Plim::Ethernet::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Plim::Ethernet::Vlan> vlan;
        
}; // Native::Interface::BDI::Plim::Ethernet


class Native::Interface::BDI::Plim::Ethernet::Vlan : public ydk::Entity
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

        class Filter; //type: Native::Interface::BDI::Plim::Ethernet::Vlan::Filter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Plim::Ethernet::Vlan::Filter> filter;
        
}; // Native::Interface::BDI::Plim::Ethernet::Vlan


class Native::Interface::BDI::Plim::Ethernet::Vlan::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

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

}; // Native::Interface::BDI::Plim::Ethernet::Vlan::Filter


class Native::Interface::BDI::Plim::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: Native::Interface::BDI::Plim::Qos::Input

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Plim::Qos::Input> input;
        
}; // Native::Interface::BDI::Plim::Qos


class Native::Interface::BDI::Plim::Qos::Input : public ydk::Entity
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

        class Queue; //type: Native::Interface::BDI::Plim::Qos::Input::Queue

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Plim::Qos::Input::Queue> queue;
        
}; // Native::Interface::BDI::Plim::Qos::Input


class Native::Interface::BDI::Plim::Qos::Input::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Zero; //type: Native::Interface::BDI::Plim::Qos::Input::Queue::Zero
        class StrictPriority; //type: Native::Interface::BDI::Plim::Qos::Input::Queue::StrictPriority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Plim::Qos::Input::Queue::Zero> zero;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Plim::Qos::Input::Queue::StrictPriority> strict_priority;
        
}; // Native::Interface::BDI::Plim::Qos::Input::Queue


class Native::Interface::BDI::Plim::Qos::Input::Queue::Zero : public ydk::Entity
{
    public:
        Zero();
        ~Zero();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pause; //type: Native::Interface::BDI::Plim::Qos::Input::Queue::Zero::Pause

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Plim::Qos::Input::Queue::Zero::Pause> pause;
        
}; // Native::Interface::BDI::Plim::Qos::Input::Queue::Zero


class Native::Interface::BDI::Plim::Qos::Input::Queue::Zero::Pause : public ydk::Entity
{
    public:
        Pause();
        ~Pause();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf threshold; //type: uint8

}; // Native::Interface::BDI::Plim::Qos::Input::Queue::Zero::Pause


class Native::Interface::BDI::Plim::Qos::Input::Queue::StrictPriority : public ydk::Entity
{
    public:
        StrictPriority();
        ~StrictPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pause; //type: Native::Interface::BDI::Plim::Qos::Input::Queue::StrictPriority::Pause

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Plim::Qos::Input::Queue::StrictPriority::Pause> pause;
        
}; // Native::Interface::BDI::Plim::Qos::Input::Queue::StrictPriority


class Native::Interface::BDI::Plim::Qos::Input::Queue::StrictPriority::Pause : public ydk::Entity
{
    public:
        Pause();
        ~Pause();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf threshold; //type: uint8

}; // Native::Interface::BDI::Plim::Qos::Input::Queue::StrictPriority::Pause


class Native::Interface::BDI::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_sessions; //type: uint16
        class Enable; //type: Native::Interface::BDI::Pppoe::Enable

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Pppoe::Enable> enable; // presence node
        
}; // Native::Interface::BDI::Pppoe


class Native::Interface::BDI::Pppoe::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: one of string, enumeration
        class Group;

}; // Native::Interface::BDI::Pppoe::Enable


class Native::Interface::BDI::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Native::Interface::BDI::Service::Instance

        ydk::YList instance;
        
}; // Native::Interface::BDI::Service


class Native::Interface::BDI::Service::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf gigabitethernet; //type: empty
        ydk::YLeaf ethernet; //type: empty
        ydk::YLeaf ethernet_evc_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf evc_name; //type: string
        ydk::YLeaf group; //type: uint32
        ydk::YLeaf shutdown; //type: empty
        class Encapsulation; //type: Native::Interface::BDI::Service::Instance::Encapsulation
        class Ip; //type: Native::Interface::BDI::Service::Instance::Ip
        class Ipv6; //type: Native::Interface::BDI::Service::Instance::Ipv6
        class Rewrite; //type: Native::Interface::BDI::Service::Instance::Rewrite
        class Errdisable; //type: Native::Interface::BDI::Service::Instance::Errdisable
        class EthernetContainer; //type: Native::Interface::BDI::Service::Instance::EthernetContainer
        class Snmp; //type: Native::Interface::BDI::Service::Instance::Snmp
        class BridgeDomain; //type: Native::Interface::BDI::Service::Instance::BridgeDomain
        class Mac; //type: Native::Interface::BDI::Service::Instance::Mac
        class ServicePolicy; //type: Native::Interface::BDI::Service::Instance::ServicePolicy
        class Cfm; //type: Native::Interface::BDI::Service::Instance::Cfm
        class L2protocol; //type: Native::Interface::BDI::Service::Instance::L2protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Rewrite> rewrite;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Errdisable> errdisable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::EthernetContainer> ethernet_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Snmp> snmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::BridgeDomain> bridge_domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Mac> mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Cfm> cfm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::L2protocol> l2protocol;
        
}; // Native::Interface::BDI::Service::Instance


class Native::Interface::BDI::Service::Instance::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: empty
        class Dot1ad; //type: Native::Interface::BDI::Service::Instance::Encapsulation::Dot1ad
        class Dot1q; //type: Native::Interface::BDI::Service::Instance::Encapsulation::Dot1q
        class PriorityTagged; //type: Native::Interface::BDI::Service::Instance::Encapsulation::PriorityTagged
        class Untagged; //type: Native::Interface::BDI::Service::Instance::Encapsulation::Untagged

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Encapsulation::Dot1ad> dot1ad;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Encapsulation::Dot1q> dot1q;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Encapsulation::PriorityTagged> priority_tagged; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Encapsulation::Untagged> untagged; // presence node
        
}; // Native::Interface::BDI::Service::Instance::Encapsulation


class Native::Interface::BDI::Service::Instance::Encapsulation::Dot1ad : public ydk::Entity
{
    public:
        Dot1ad();
        ~Dot1ad();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exact; //type: empty
        ydk::YLeafList id; //type: list of  one of uint16, string, enumeration
        ydk::YLeafList cos; //type: list of  uint8
        ydk::YLeafList dot1q; //type: list of  one of uint16, string, enumeration
        ydk::YLeafList etype; //type: list of  Etype
        class Cos2; //type: Native::Interface::BDI::Service::Instance::Encapsulation::Dot1ad::Cos2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Encapsulation::Dot1ad::Cos2> cos2;
                class Id;
        class Dot1q;
        class Etype;

}; // Native::Interface::BDI::Service::Instance::Encapsulation::Dot1ad


class Native::Interface::BDI::Service::Instance::Encapsulation::Dot1ad::Cos2 : public ydk::Entity
{
    public:
        Cos2();
        ~Cos2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList cos; //type: list of  uint8

}; // Native::Interface::BDI::Service::Instance::Encapsulation::Dot1ad::Cos2


class Native::Interface::BDI::Service::Instance::Encapsulation::Dot1q : public ydk::Entity
{
    public:
        Dot1q();
        ~Dot1q();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exact; //type: empty
        ydk::YLeaf vlan_type; //type: VlanType
        ydk::YLeafList id; //type: list of  one of uint16, string, enumeration
        ydk::YLeafList cos; //type: list of  uint8
        ydk::YLeafList second_dot1q; //type: list of  one of uint16, string, enumeration
        ydk::YLeafList etype; //type: list of  Etype
        class Cos2; //type: Native::Interface::BDI::Service::Instance::Encapsulation::Dot1q::Cos2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Encapsulation::Dot1q::Cos2> cos2;
                class Id;
        class SecondDot1q;
        class Etype;
        class VlanType;

}; // Native::Interface::BDI::Service::Instance::Encapsulation::Dot1q


class Native::Interface::BDI::Service::Instance::Encapsulation::Dot1q::Cos2 : public ydk::Entity
{
    public:
        Cos2();
        ~Cos2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList cos; //type: list of  uint8

}; // Native::Interface::BDI::Service::Instance::Encapsulation::Dot1q::Cos2


class Native::Interface::BDI::Service::Instance::Encapsulation::PriorityTagged : public ydk::Entity
{
    public:
        PriorityTagged();
        ~PriorityTagged();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList etype; //type: list of  Etype
        class CosContainer; //type: Native::Interface::BDI::Service::Instance::Encapsulation::PriorityTagged::CosContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Encapsulation::PriorityTagged::CosContainer> cos_container;
                class Etype;

}; // Native::Interface::BDI::Service::Instance::Encapsulation::PriorityTagged


class Native::Interface::BDI::Service::Instance::Encapsulation::PriorityTagged::CosContainer : public ydk::Entity
{
    public:
        CosContainer();
        ~CosContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList cos; //type: list of  uint8

}; // Native::Interface::BDI::Service::Instance::Encapsulation::PriorityTagged::CosContainer


class Native::Interface::BDI::Service::Instance::Encapsulation::Untagged : public ydk::Entity
{
    public:
        Untagged();
        ~Untagged();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::BDI::Service::Instance::Encapsulation::Untagged


class Native::Interface::BDI::Service::Instance::Ip : public ydk::Entity
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

        class Acl; //type: Native::Interface::BDI::Service::Instance::Ip::Acl
        class Dhcp; //type: Native::Interface::BDI::Service::Instance::Ip::Dhcp
        class Verify; //type: Native::Interface::BDI::Service::Instance::Ip::Verify

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Ip::Acl> acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Ip::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Ip::Verify> verify;
        
}; // Native::Interface::BDI::Service::Instance::Ip


class Native::Interface::BDI::Service::Instance::Ip::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_group; //type: one of uint16, string
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Interface::BDI::Service::Instance::Ip::Acl


class Native::Interface::BDI::Service::Instance::Ip::Dhcp : public ydk::Entity
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

        class Relay; //type: Native::Interface::BDI::Service::Instance::Ip::Dhcp::Relay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Ip::Dhcp::Relay> relay;
        
}; // Native::Interface::BDI::Service::Instance::Ip::Dhcp


class Native::Interface::BDI::Service::Instance::Ip::Dhcp::Relay : public ydk::Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Information; //type: Native::Interface::BDI::Service::Instance::Ip::Dhcp::Relay::Information

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Ip::Dhcp::Relay::Information> information;
        
}; // Native::Interface::BDI::Service::Instance::Ip::Dhcp::Relay


class Native::Interface::BDI::Service::Instance::Ip::Dhcp::Relay::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Option; //type: Native::Interface::BDI::Service::Instance::Ip::Dhcp::Relay::Information::Option

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Ip::Dhcp::Relay::Information::Option> option;
        
}; // Native::Interface::BDI::Service::Instance::Ip::Dhcp::Relay::Information


class Native::Interface::BDI::Service::Instance::Ip::Dhcp::Relay::Information::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber_id; //type: string

}; // Native::Interface::BDI::Service::Instance::Ip::Dhcp::Relay::Information::Option


class Native::Interface::BDI::Service::Instance::Ip::Verify : public ydk::Entity
{
    public:
        Verify();
        ~Verify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: empty
        ydk::YLeaf vlan; //type: empty
        ydk::YLeaf dhcp_snooping; //type: empty
        ydk::YLeaf port_security; //type: empty

}; // Native::Interface::BDI::Service::Instance::Ip::Verify


class Native::Interface::BDI::Service::Instance::Ipv6 : public ydk::Entity
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

        ydk::YLeaf traffic_filter; //type: string
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Interface::BDI::Service::Instance::Ipv6


class Native::Interface::BDI::Service::Instance::Rewrite : public ydk::Entity
{
    public:
        Rewrite();
        ~Rewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ingress; //type: Native::Interface::BDI::Service::Instance::Rewrite::Ingress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Rewrite::Ingress> ingress;
        
}; // Native::Interface::BDI::Service::Instance::Rewrite


class Native::Interface::BDI::Service::Instance::Rewrite::Ingress : public ydk::Entity
{
    public:
        Ingress();
        ~Ingress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tag; //type: Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag> tag;
        
}; // Native::Interface::BDI::Service::Instance::Rewrite::Ingress


class Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag : public ydk::Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pop; //type: Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Pop
        class Push; //type: Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Push
        class Translate; //type: Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Pop> pop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Push> push;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate> translate;
        
}; // Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag


class Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Pop : public ydk::Entity
{
    public:
        Pop();
        ~Pop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf way; //type: Way
        ydk::YLeaf mode; //type: Mode
        class Way;
        class Mode;

}; // Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Pop


class Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Push : public ydk::Entity
{
    public:
        Push();
        ~Push();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Push


class Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate : public ydk::Entity
{
    public:
        Translate();
        ~Translate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class T1To1; //type: Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1
        class T1To2; //type: Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2
        class T2To1; //type: Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1
        class T2To2; //type: Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1> t1_to_1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2> t1_to_2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1> t2_to_1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2> t2_to_2;
        
}; // Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate


class Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1 : public ydk::Entity
{
    public:
        T1To1();
        ~T1To1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1


class Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2 : public ydk::Entity
{
    public:
        T1To2();
        ~T1To2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf second_dot1q; //type: uint16
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2


class Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1 : public ydk::Entity
{
    public:
        T2To1();
        ~T2To1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1


class Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2 : public ydk::Entity
{
    public:
        T2To2();
        ~T2To2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf second_dot1q; //type: uint16
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2


class Native::Interface::BDI::Service::Instance::Errdisable : public ydk::Entity
{
    public:
        Errdisable();
        ~Errdisable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Recovery; //type: Native::Interface::BDI::Service::Instance::Errdisable::Recovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Errdisable::Recovery> recovery;
        
}; // Native::Interface::BDI::Service::Instance::Errdisable


class Native::Interface::BDI::Service::Instance::Errdisable::Recovery : public ydk::Entity
{
    public:
        Recovery();
        ~Recovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cause; //type: Native::Interface::BDI::Service::Instance::Errdisable::Recovery::Cause

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Errdisable::Recovery::Cause> cause;
        
}; // Native::Interface::BDI::Service::Instance::Errdisable::Recovery


class Native::Interface::BDI::Service::Instance::Errdisable::Recovery::Cause : public ydk::Entity
{
    public:
        Cause();
        ~Cause();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_security; //type: uint32

}; // Native::Interface::BDI::Service::Instance::Errdisable::Recovery::Cause


class Native::Interface::BDI::Service::Instance::EthernetContainer : public ydk::Entity
{
    public:
        EthernetContainer();
        ~EthernetContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ethernet; //type: Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet> ethernet;
        
}; // Native::Interface::BDI::Service::Instance::EthernetContainer


class Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet : public ydk::Entity
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

        class Lmi; //type: Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Lmi
        class Loopback; //type: Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Loopback

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Lmi> lmi;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Loopback> loopback;
        
}; // Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet


class Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Lmi : public ydk::Entity
{
    public:
        Lmi();
        ~Lmi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CeVlan; //type: Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan> ce_vlan;
        
}; // Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Lmi


class Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan : public ydk::Entity
{
    public:
        CeVlan();
        ~CeVlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Map; //type: Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map> map;
        
}; // Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan


class Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map : public ydk::Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf untagged; //type: empty
        ydk::YLeaf vlan_range; //type: string

}; // Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map


class Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Loopback : public ydk::Entity
{
    public:
        Loopback();
        ~Loopback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Permit; //type: Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit> permit;
        
}; // Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Loopback


class Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external; //type: empty
        ydk::YLeaf internal; //type: empty

}; // Native::Interface::BDI::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit


class Native::Interface::BDI::Service::Instance::Snmp : public ydk::Entity
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

        class Trap; //type: Native::Interface::BDI::Service::Instance::Snmp::Trap
        class Ifindex; //type: Native::Interface::BDI::Service::Instance::Snmp::Ifindex

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Snmp::Trap> trap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Snmp::Ifindex> ifindex;
        
}; // Native::Interface::BDI::Service::Instance::Snmp


class Native::Interface::BDI::Service::Instance::Snmp::Trap : public ydk::Entity
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

        ydk::YLeaf link_status; //type: empty

}; // Native::Interface::BDI::Service::Instance::Snmp::Trap


class Native::Interface::BDI::Service::Instance::Snmp::Ifindex : public ydk::Entity
{
    public:
        Ifindex();
        ~Ifindex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf persist; //type: empty

}; // Native::Interface::BDI::Service::Instance::Snmp::Ifindex


class Native::Interface::BDI::Service::Instance::BridgeDomain : public ydk::Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_id; //type: uint16
        ydk::YLeaf from_encapsulation; //type: empty
        class SplitHorizon; //type: Native::Interface::BDI::Service::Instance::BridgeDomain::SplitHorizon

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::BridgeDomain::SplitHorizon> split_horizon;
        
}; // Native::Interface::BDI::Service::Instance::BridgeDomain


class Native::Interface::BDI::Service::Instance::BridgeDomain::SplitHorizon : public ydk::Entity
{
    public:
        SplitHorizon();
        ~SplitHorizon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: uint8

}; // Native::Interface::BDI::Service::Instance::BridgeDomain::SplitHorizon


class Native::Interface::BDI::Service::Instance::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Security; //type: Native::Interface::BDI::Service::Instance::Mac::Security
        class AccessGroup; //type: Native::Interface::BDI::Service::Instance::Mac::AccessGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Mac::Security> security; // presence node
        ydk::YList access_group;
        
}; // Native::Interface::BDI::Service::Instance::Mac


class Native::Interface::BDI::Service::Instance::Mac::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf violation; //type: Violation
        class Maximum; //type: Native::Interface::BDI::Service::Instance::Mac::Security::Maximum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Mac::Security::Maximum> maximum;
                class Violation;

}; // Native::Interface::BDI::Service::Instance::Mac::Security


class Native::Interface::BDI::Service::Instance::Mac::Security::Maximum : public ydk::Entity
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

        ydk::YLeaf addresses; //type: uint16

}; // Native::Interface::BDI::Service::Instance::Mac::Security::Maximum


class Native::Interface::BDI::Service::Instance::Mac::AccessGroup : public ydk::Entity
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

        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Interface::BDI::Service::Instance::Mac::AccessGroup


class Native::Interface::BDI::Service::Instance::ServicePolicy : public ydk::Entity
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

        class Input; //type: Native::Interface::BDI::Service::Instance::ServicePolicy::Input
        class Output; //type: Native::Interface::BDI::Service::Instance::ServicePolicy::Output

        ydk::YList input;
        ydk::YList output;
        
}; // Native::Interface::BDI::Service::Instance::ServicePolicy


class Native::Interface::BDI::Service::Instance::ServicePolicy::Input : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Interface::BDI::Service::Instance::ServicePolicy::Input


class Native::Interface::BDI::Service::Instance::ServicePolicy::Output : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Interface::BDI::Service::Instance::ServicePolicy::Output


class Native::Interface::BDI::Service::Instance::Cfm : public ydk::Entity
{
    public:
        Cfm();
        ~Cfm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Encapsulation; //type: Native::Interface::BDI::Service::Instance::Cfm::Encapsulation
        class Mep; //type: Native::Interface::BDI::Service::Instance::Cfm::Mep
        class Mip; //type: Native::Interface::BDI::Service::Instance::Cfm::Mip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Cfm::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Cfm::Mep> mep;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Cfm::Mip> mip;
        
}; // Native::Interface::BDI::Service::Instance::Cfm


class Native::Interface::BDI::Service::Instance::Cfm::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1ad; //type: Native::Interface::BDI::Service::Instance::Cfm::Encapsulation::Dot1ad
        class Dot1q; //type: Native::Interface::BDI::Service::Instance::Cfm::Encapsulation::Dot1q

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Cfm::Encapsulation::Dot1ad> dot1ad;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::Cfm::Encapsulation::Dot1q> dot1q;
        
}; // Native::Interface::BDI::Service::Instance::Cfm::Encapsulation


class Native::Interface::BDI::Service::Instance::Cfm::Encapsulation::Dot1ad : public ydk::Entity
{
    public:
        Dot1ad();
        ~Dot1ad();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16
        ydk::YLeaf cos; //type: uint8
        ydk::YLeaf dot1q; //type: uint16

}; // Native::Interface::BDI::Service::Instance::Cfm::Encapsulation::Dot1ad


class Native::Interface::BDI::Service::Instance::Cfm::Encapsulation::Dot1q : public ydk::Entity
{
    public:
        Dot1q();
        ~Dot1q();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16
        ydk::YLeaf cos; //type: uint8
        ydk::YLeaf second_dot1q; //type: uint16

}; // Native::Interface::BDI::Service::Instance::Cfm::Encapsulation::Dot1q


class Native::Interface::BDI::Service::Instance::Cfm::Mep : public ydk::Entity
{
    public:
        Mep();
        ~Mep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain; //type: string
        ydk::YLeaf mpid; //type: uint16

}; // Native::Interface::BDI::Service::Instance::Cfm::Mep


class Native::Interface::BDI::Service::Instance::Cfm::Mip : public ydk::Entity
{
    public:
        Mip();
        ~Mip();

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

}; // Native::Interface::BDI::Service::Instance::Cfm::Mip


class Native::Interface::BDI::Service::Instance::L2protocol : public ydk::Entity
{
    public:
        L2protocol();
        ~L2protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Discard; //type: Native::Interface::BDI::Service::Instance::L2protocol::Discard
        class Peer; //type: Native::Interface::BDI::Service::Instance::L2protocol::Peer
        class Forward; //type: Native::Interface::BDI::Service::Instance::L2protocol::Forward
        class Tunnel; //type: Native::Interface::BDI::Service::Instance::L2protocol::Tunnel

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::L2protocol::Discard> discard; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::L2protocol::Peer> peer; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::L2protocol::Forward> forward; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service::Instance::L2protocol::Tunnel> tunnel; // presence node
        
}; // Native::Interface::BDI::Service::Instance::L2protocol


class Native::Interface::BDI::Service::Instance::L2protocol::Discard : public ydk::Entity
{
    public:
        Discard();
        ~Discard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList protocol; //type: list of  Protocol
        class Protocol;

}; // Native::Interface::BDI::Service::Instance::L2protocol::Discard


class Native::Interface::BDI::Service::Instance::L2protocol::Peer : public ydk::Entity
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

        ydk::YLeafList protocol; //type: list of  Protocol
        class Protocol;

}; // Native::Interface::BDI::Service::Instance::L2protocol::Peer


class Native::Interface::BDI::Service::Instance::L2protocol::Forward : public ydk::Entity
{
    public:
        Forward();
        ~Forward();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList protocol; //type: list of  Protocol
        class Protocol;

}; // Native::Interface::BDI::Service::Instance::L2protocol::Forward


class Native::Interface::BDI::Service::Instance::L2protocol::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList protocol; //type: list of  Protocol
        class Protocol;

}; // Native::Interface::BDI::Service::Instance::L2protocol::Tunnel


class Native::Interface::BDI::ServicePolicy : public ydk::Entity
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

        ydk::YLeaf history; //type: empty
        ydk::YLeaf input; //type: string
        ydk::YLeaf output; //type: string
        class Type; //type: Native::Interface::BDI::ServicePolicy::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::ServicePolicy::Type> type;
        
}; // Native::Interface::BDI::ServicePolicy


class Native::Interface::BDI::ServicePolicy::Type : public ydk::Entity
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

        class Control; //type: Native::Interface::BDI::ServicePolicy::Type::Control
        class PerformanceMonitor; //type: Native::Interface::BDI::ServicePolicy::Type::PerformanceMonitor
        class ServiceChain; //type: Native::Interface::BDI::ServicePolicy::Type::ServiceChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::ServicePolicy::Type::Control> control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::ServicePolicy::Type::PerformanceMonitor> performance_monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::ServicePolicy::Type::ServiceChain> service_chain;
        
}; // Native::Interface::BDI::ServicePolicy::Type


class Native::Interface::BDI::ServicePolicy::Type::Control : public ydk::Entity
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

        ydk::YLeaf subscriber; //type: string

}; // Native::Interface::BDI::ServicePolicy::Type::Control


class Native::Interface::BDI::ServicePolicy::Type::PerformanceMonitor : public ydk::Entity
{
    public:
        PerformanceMonitor();
        ~PerformanceMonitor();

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
        ydk::YLeaf name; //type: string
        class Direction;

}; // Native::Interface::BDI::ServicePolicy::Type::PerformanceMonitor


class Native::Interface::BDI::ServicePolicy::Type::ServiceChain : public ydk::Entity
{
    public:
        ServiceChain();
        ~ServiceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: Native::Interface::BDI::ServicePolicy::Type::ServiceChain::Input
        class Output; //type: Native::Interface::BDI::ServicePolicy::Type::ServiceChain::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::ServicePolicy::Type::ServiceChain::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::ServicePolicy::Type::ServiceChain::Output> output;
        
}; // Native::Interface::BDI::ServicePolicy::Type::ServiceChain


class Native::Interface::BDI::ServicePolicy::Type::ServiceChain::Input : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Interface::BDI::ServicePolicy::Type::ServiceChain::Input


class Native::Interface::BDI::ServicePolicy::Type::ServiceChain::Output : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Interface::BDI::ServicePolicy::Type::ServiceChain::Output


class Native::Interface::CEM : public ydk::Entity
{
    public:
        CEM();
        ~CEM();

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
        ydk::YLeaf load_interval; //type: uint32
        ydk::YLeaf cdp; //type: Cdp
        class Ip; //type: Native::Interface::CEM::Ip
        class Atm; //type: Native::Interface::CEM::Atm
        class Cem; //type: Native::Interface::CEM::Cem
        class Pvc; //type: Native::Interface::CEM::Pvc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Atm> atm;
        ydk::YList cem;
        ydk::YList pvc;
                class Cdp;

}; // Native::Interface::CEM


class Native::Interface::CEM::Ip : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf split_horizon; //type: empty

}; // Native::Interface::CEM::Ip


class Native::Interface::CEM::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: Bandwidth
        ydk::YLeaf enable_ilmi_trap; //type: boolean
        ydk::YLeaf ilmi_keepalive; //type: empty
        ydk::YLeaf route_bridged; //type: RouteBridged
        class Pvp; //type: Native::Interface::CEM::Atm::Pvp

        ydk::YList pvp;
                class Bandwidth;
        class RouteBridged;

}; // Native::Interface::CEM::Atm


class Native::Interface::CEM::Atm::Pvp : public ydk::Entity
{
    public:
        Pvp();
        ~Pvp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pvp_number; //type: uint16
        ydk::YLeaf l2transport; //type: empty
        class Xconnect; //type: Native::Interface::CEM::Atm::Pvp::Xconnect
        class XconnectPwClass; //type: Native::Interface::CEM::Atm::Pvp::XconnectPwClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Atm::Pvp::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Atm::Pvp::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::CEM::Atm::Pvp


class Native::Interface::CEM::Atm::Pvp::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf manual; //type: empty
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf sequencing; //type: Sequencing
        ydk::YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::CEM::Atm::Pvp::Xconnect::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Atm::Pvp::Xconnect::Backup> backup;
                class Encapsulation;
        class Sequencing;

}; // Native::Interface::CEM::Atm::Pvp::Xconnect


class Native::Interface::CEM::Atm::Pvp::Xconnect::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Delay> delay;
        
}; // Native::Interface::CEM::Atm::Pvp::Xconnect::Backup


class Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Peer : public ydk::Entity
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

        ydk::YLeaf peer_router_ip_addr; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Peer


class Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Delay : public ydk::Entity
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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Delay


class Native::Interface::CEM::Atm::Pvp::XconnectPwClass : public ydk::Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xconnect; //type: Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::CEM::Atm::Pvp::XconnectPwClass


class Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect


class Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp : public ydk::Entity
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

        class Port; //type: Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp


class Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local; //type: uint32
        ydk::YLeaf remote; //type: uint32

}; // Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::CEM::Cem : public ydk::Entity
{
    public:
        Cem();
        ~Cem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class Xconnect; //type: Native::Interface::CEM::Cem::Xconnect
        class XconnectPwClass; //type: Native::Interface::CEM::Cem::XconnectPwClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Cem::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Cem::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::CEM::Cem


class Native::Interface::CEM::Cem::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf manual; //type: empty
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf sequencing; //type: Sequencing
        ydk::YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::CEM::Cem::Xconnect::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Cem::Xconnect::Backup> backup;
                class Encapsulation;
        class Sequencing;

}; // Native::Interface::CEM::Cem::Xconnect


class Native::Interface::CEM::Cem::Xconnect::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: Native::Interface::CEM::Cem::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::CEM::Cem::Xconnect::Backup::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Cem::Xconnect::Backup::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Cem::Xconnect::Backup::Delay> delay;
        
}; // Native::Interface::CEM::Cem::Xconnect::Backup


class Native::Interface::CEM::Cem::Xconnect::Backup::Peer : public ydk::Entity
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

        ydk::YLeaf peer_router_ip_addr; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Native::Interface::CEM::Cem::Xconnect::Backup::Peer


class Native::Interface::CEM::Cem::Xconnect::Backup::Delay : public ydk::Entity
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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Interface::CEM::Cem::Xconnect::Backup::Delay


class Native::Interface::CEM::Cem::XconnectPwClass : public ydk::Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xconnect; //type: Native::Interface::CEM::Cem::XconnectPwClass::Xconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Cem::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::CEM::Cem::XconnectPwClass


class Native::Interface::CEM::Cem::XconnectPwClass::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::CEM::Cem::XconnectPwClass::Xconnect


class Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp : public ydk::Entity
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

        class Port; //type: Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp


class Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local; //type: uint32
        ydk::YLeaf remote; //type: uint32

}; // Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::CEM::Pvc : public ydk::Entity
{
    public:
        Pvc();
        ~Pvc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_vpi_vci; //type: string
        ydk::YLeaf remote_vpi_vci; //type: string
        ydk::YLeaf l2transport; //type: empty
        ydk::YLeaf ubr; //type: uint32
        ydk::YLeaf cbr; //type: uint32
        ydk::YLeaf vbr; //type: uint32
        ydk::YLeaf vbr_rt; //type: uint32
        ydk::YLeaf vbr_nrt; //type: uint32
        class Ubrplus; //type: Native::Interface::CEM::Pvc::Ubrplus
        class OamPvc; //type: Native::Interface::CEM::Pvc::OamPvc
        class ServicePolicy; //type: Native::Interface::CEM::Pvc::ServicePolicy
        class Encapsulation; //type: Native::Interface::CEM::Pvc::Encapsulation
        class Xconnect; //type: Native::Interface::CEM::Pvc::Xconnect
        class XconnectPwClass; //type: Native::Interface::CEM::Pvc::XconnectPwClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Pvc::Ubrplus> ubrplus;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Pvc::OamPvc> oam_pvc; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Pvc::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Pvc::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Pvc::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Pvc::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::CEM::Pvc


class Native::Interface::CEM::Pvc::Ubrplus : public ydk::Entity
{
    public:
        Ubrplus();
        ~Ubrplus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcr; //type: uint32
        ydk::YLeaf mcr; //type: uint32

}; // Native::Interface::CEM::Pvc::Ubrplus


class Native::Interface::CEM::Pvc::OamPvc : public ydk::Entity
{
    public:
        OamPvc();
        ~OamPvc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loopback_frequency; //type: uint32
        ydk::YLeaf manage; //type: empty

}; // Native::Interface::CEM::Pvc::OamPvc


class Native::Interface::CEM::Pvc::ServicePolicy : public ydk::Entity
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

        ydk::YLeaf input; //type: string
        ydk::YLeaf output; //type: string

}; // Native::Interface::CEM::Pvc::ServicePolicy


class Native::Interface::CEM::Pvc::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aal5nlpid; //type: empty
        ydk::YLeaf aal5snap; //type: empty
        class Aal5autoppp; //type: Native::Interface::CEM::Pvc::Encapsulation::Aal5autoppp
        class Aal5ciscoppp; //type: Native::Interface::CEM::Pvc::Encapsulation::Aal5ciscoppp
        class Aal5mux; //type: Native::Interface::CEM::Pvc::Encapsulation::Aal5mux

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Pvc::Encapsulation::Aal5autoppp> aal5autoppp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Pvc::Encapsulation::Aal5ciscoppp> aal5ciscoppp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Pvc::Encapsulation::Aal5mux> aal5mux;
        
}; // Native::Interface::CEM::Pvc::Encapsulation


class Native::Interface::CEM::Pvc::Encapsulation::Aal5autoppp : public ydk::Entity
{
    public:
        Aal5autoppp();
        ~Aal5autoppp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_template; //type: uint32

}; // Native::Interface::CEM::Pvc::Encapsulation::Aal5autoppp


class Native::Interface::CEM::Pvc::Encapsulation::Aal5ciscoppp : public ydk::Entity
{
    public:
        Aal5ciscoppp();
        ~Aal5ciscoppp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_template; //type: uint32

}; // Native::Interface::CEM::Pvc::Encapsulation::Aal5ciscoppp


class Native::Interface::CEM::Pvc::Encapsulation::Aal5mux : public ydk::Entity
{
    public:
        Aal5mux();
        ~Aal5mux();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ppp; //type: Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Ppp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Ppp> ppp;
        
}; // Native::Interface::CEM::Pvc::Encapsulation::Aal5mux


class Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Ppp : public ydk::Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_template; //type: uint32
        ydk::YLeaf dialer; //type: empty

}; // Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Ppp


class Native::Interface::CEM::Pvc::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf manual; //type: empty
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf sequencing; //type: Sequencing
        ydk::YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::CEM::Pvc::Xconnect::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Pvc::Xconnect::Backup> backup;
                class Encapsulation;
        class Sequencing;

}; // Native::Interface::CEM::Pvc::Xconnect


class Native::Interface::CEM::Pvc::Xconnect::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Peer; //type: Native::Interface::CEM::Pvc::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::CEM::Pvc::Xconnect::Backup::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Pvc::Xconnect::Backup::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Pvc::Xconnect::Backup::Delay> delay;
        
}; // Native::Interface::CEM::Pvc::Xconnect::Backup


class Native::Interface::CEM::Pvc::Xconnect::Backup::Peer : public ydk::Entity
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

        ydk::YLeaf peer_router_ip_addr; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Native::Interface::CEM::Pvc::Xconnect::Backup::Peer


class Native::Interface::CEM::Pvc::Xconnect::Backup::Delay : public ydk::Entity
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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Interface::CEM::Pvc::Xconnect::Backup::Delay


class Native::Interface::CEM::Pvc::XconnectPwClass : public ydk::Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xconnect; //type: Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::CEM::Pvc::XconnectPwClass


class Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect


class Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp : public ydk::Entity
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

        class Port; //type: Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp


class Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local; //type: uint32
        ydk::YLeaf remote; //type: uint32

}; // Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Port

class Native::Interface::BDI::Pppoe::Enable::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf global;

};

class Native::Interface::BDI::Service::Instance::Encapsulation::Dot1ad::Id : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;

};

class Native::Interface::BDI::Service::Instance::Encapsulation::Dot1ad::Dot1q : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;

};

class Native::Interface::BDI::Service::Instance::Encapsulation::Dot1ad::Etype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pppoe_all;
        static const ydk::Enum::YLeaf pppoe_discovery;
        static const ydk::Enum::YLeaf pppoe_session;

};

class Native::Interface::BDI::Service::Instance::Encapsulation::Dot1q::Id : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;

};

class Native::Interface::BDI::Service::Instance::Encapsulation::Dot1q::SecondDot1q : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;

};

class Native::Interface::BDI::Service::Instance::Encapsulation::Dot1q::Etype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pppoe_all;
        static const ydk::Enum::YLeaf pppoe_discovery;
        static const ydk::Enum::YLeaf pppoe_session;

};

class Native::Interface::BDI::Service::Instance::Encapsulation::Dot1q::VlanType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0x88A8;
        static const ydk::Enum::YLeaf Y_0x9100;
        static const ydk::Enum::YLeaf Y_0x9200;

};

class Native::Interface::BDI::Service::Instance::Encapsulation::PriorityTagged::Etype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pppoe_all;
        static const ydk::Enum::YLeaf pppoe_discovery;
        static const ydk::Enum::YLeaf pppoe_session;

};

class Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Pop::Way : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Pop::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

};

class Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Push::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

};

class Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

};

class Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

};

class Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

};

class Native::Interface::BDI::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

};

class Native::Interface::BDI::Service::Instance::Mac::Security::Violation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protect;
        static const ydk::Enum::YLeaf restrict;

};

class Native::Interface::BDI::Service::Instance::L2protocol::Discard::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf R4;
        static const ydk::Enum::YLeaf R5;
        static const ydk::Enum::YLeaf R6;
        static const ydk::Enum::YLeaf R8;
        static const ydk::Enum::YLeaf R9;
        static const ydk::Enum::YLeaf RA;
        static const ydk::Enum::YLeaf RB;
        static const ydk::Enum::YLeaf RC;
        static const ydk::Enum::YLeaf RD;
        static const ydk::Enum::YLeaf RF;
        static const ydk::Enum::YLeaf cdp;
        static const ydk::Enum::YLeaf dtp;
        static const ydk::Enum::YLeaf elmi;
        static const ydk::Enum::YLeaf esmc;
        static const ydk::Enum::YLeaf lacp;
        static const ydk::Enum::YLeaf lldp;
        static const ydk::Enum::YLeaf loam;
        static const ydk::Enum::YLeaf pagp;
        static const ydk::Enum::YLeaf ptppd;
        static const ydk::Enum::YLeaf stp;
        static const ydk::Enum::YLeaf udld;
        static const ydk::Enum::YLeaf vtp;

};

class Native::Interface::BDI::Service::Instance::L2protocol::Peer::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf R4;
        static const ydk::Enum::YLeaf R5;
        static const ydk::Enum::YLeaf R6;
        static const ydk::Enum::YLeaf R8;
        static const ydk::Enum::YLeaf R9;
        static const ydk::Enum::YLeaf RA;
        static const ydk::Enum::YLeaf RB;
        static const ydk::Enum::YLeaf RC;
        static const ydk::Enum::YLeaf RD;
        static const ydk::Enum::YLeaf RF;
        static const ydk::Enum::YLeaf cdp;
        static const ydk::Enum::YLeaf dtp;
        static const ydk::Enum::YLeaf elmi;
        static const ydk::Enum::YLeaf esmc;
        static const ydk::Enum::YLeaf lacp;
        static const ydk::Enum::YLeaf lldp;
        static const ydk::Enum::YLeaf loam;
        static const ydk::Enum::YLeaf pagp;
        static const ydk::Enum::YLeaf ptppd;
        static const ydk::Enum::YLeaf stp;
        static const ydk::Enum::YLeaf udld;
        static const ydk::Enum::YLeaf vtp;

};

class Native::Interface::BDI::Service::Instance::L2protocol::Forward::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf R4;
        static const ydk::Enum::YLeaf R5;
        static const ydk::Enum::YLeaf R6;
        static const ydk::Enum::YLeaf R8;
        static const ydk::Enum::YLeaf R9;
        static const ydk::Enum::YLeaf RA;
        static const ydk::Enum::YLeaf RB;
        static const ydk::Enum::YLeaf RC;
        static const ydk::Enum::YLeaf RD;
        static const ydk::Enum::YLeaf RF;
        static const ydk::Enum::YLeaf cdp;
        static const ydk::Enum::YLeaf dtp;
        static const ydk::Enum::YLeaf elmi;
        static const ydk::Enum::YLeaf esmc;
        static const ydk::Enum::YLeaf lacp;
        static const ydk::Enum::YLeaf lldp;
        static const ydk::Enum::YLeaf loam;
        static const ydk::Enum::YLeaf pagp;
        static const ydk::Enum::YLeaf ptppd;
        static const ydk::Enum::YLeaf stp;
        static const ydk::Enum::YLeaf udld;
        static const ydk::Enum::YLeaf vtp;

};

class Native::Interface::BDI::Service::Instance::L2protocol::Tunnel::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf R4;
        static const ydk::Enum::YLeaf R5;
        static const ydk::Enum::YLeaf R6;
        static const ydk::Enum::YLeaf R8;
        static const ydk::Enum::YLeaf R9;
        static const ydk::Enum::YLeaf RA;
        static const ydk::Enum::YLeaf RB;
        static const ydk::Enum::YLeaf RC;
        static const ydk::Enum::YLeaf RD;
        static const ydk::Enum::YLeaf RF;
        static const ydk::Enum::YLeaf cdp;
        static const ydk::Enum::YLeaf dtp;
        static const ydk::Enum::YLeaf elmi;
        static const ydk::Enum::YLeaf esmc;
        static const ydk::Enum::YLeaf lacp;
        static const ydk::Enum::YLeaf lldp;
        static const ydk::Enum::YLeaf loam;
        static const ydk::Enum::YLeaf pagp;
        static const ydk::Enum::YLeaf ptppd;
        static const ydk::Enum::YLeaf stp;
        static const ydk::Enum::YLeaf udld;
        static const ydk::Enum::YLeaf vtp;

};

class Native::Interface::BDI::ServicePolicy::Type::PerformanceMonitor::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;

};

class Native::Interface::CEM::Cdp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;

};

class Native::Interface::CEM::Atm::Bandwidth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;

};

class Native::Interface::CEM::Atm::RouteBridged : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipv6;

};

class Native::Interface::CEM::Atm::Pvp::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::CEM::Atm::Pvp::Xconnect::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::CEM::Cem::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::CEM::Cem::Xconnect::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::CEM::Pvc::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::CEM::Pvc::Xconnect::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_27_ */

