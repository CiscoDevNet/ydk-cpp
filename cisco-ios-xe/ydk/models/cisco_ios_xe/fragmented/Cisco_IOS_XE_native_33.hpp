#ifndef _CISCO_IOS_XE_NATIVE_33_
#define _CISCO_IOS_XE_NATIVE_33_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_20.hpp"
#include "Cisco_IOS_XE_native_30.hpp"
#include "Cisco_IOS_XE_native_32.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::FastEthernet::Standby::StandbyList::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelloInterval; //type: Native::Interface::FastEthernet::Standby::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::FastEthernet::Standby::StandbyList::Timers::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Standby::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Standby::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::FastEthernet::Standby::StandbyList::Timers


class Native::Interface::FastEthernet::Standby::StandbyList::Timers::HelloInterval : public ydk::Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::FastEthernet::Standby::StandbyList::Timers::HelloInterval


class Native::Interface::FastEthernet::Standby::StandbyList::Timers::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::FastEthernet::Standby::StandbyList::Timers::HoldTime


class Native::Interface::FastEthernet::Standby::StandbyList::Track : public ydk::Entity
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

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf decrement; //type: uint8
        ydk::YLeaf shutdown; //type: empty

}; // Native::Interface::FastEthernet::Standby::StandbyList::Track


class Native::Interface::FastEthernet::AccessSession : public ydk::Entity
{
    public:
        AccessSession();
        ~AccessSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf closed; //type: empty
        ydk::YLeaf host_mode; //type: HostMode
        class PortControl; //type: Native::Interface::FastEthernet::AccessSession::PortControl
        class ControlDirection; //type: Native::Interface::FastEthernet::AccessSession::ControlDirection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::AccessSession::PortControl> port_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::AccessSession::ControlDirection> control_direction;
                class HostMode;

}; // Native::Interface::FastEthernet::AccessSession


class Native::Interface::FastEthernet::AccessSession::PortControl : public ydk::Entity
{
    public:
        PortControl();
        ~PortControl();

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

}; // Native::Interface::FastEthernet::AccessSession::PortControl


class Native::Interface::FastEthernet::AccessSession::ControlDirection : public ydk::Entity
{
    public:
        ControlDirection();
        ~ControlDirection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in; //type: empty

}; // Native::Interface::FastEthernet::AccessSession::ControlDirection


class Native::Interface::FastEthernet::StormControl : public ydk::Entity
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

        class Action; //type: Native::Interface::FastEthernet::StormControl::Action
        class Broadcast; //type: Native::Interface::FastEthernet::StormControl::Broadcast
        class Multicast; //type: Native::Interface::FastEthernet::StormControl::Multicast
        class Unicast; //type: Native::Interface::FastEthernet::StormControl::Unicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::StormControl::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::StormControl::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::StormControl::Multicast> multicast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::StormControl::Unicast> unicast;
        
}; // Native::Interface::FastEthernet::StormControl


class Native::Interface::FastEthernet::StormControl::Action : public ydk::Entity
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

        ydk::YLeaf level; //type: decimal64
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::Interface::FastEthernet::StormControl::Action


class Native::Interface::FastEthernet::StormControl::Broadcast : public ydk::Entity
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

        class Include; //type: Native::Interface::FastEthernet::StormControl::Broadcast::Include
        class Level; //type: Native::Interface::FastEthernet::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::StormControl::Broadcast::Include> include;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::StormControl::Broadcast::Level> level;
        
}; // Native::Interface::FastEthernet::StormControl::Broadcast


class Native::Interface::FastEthernet::StormControl::Broadcast::Include : public ydk::Entity
{
    public:
        Include();
        ~Include();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast; //type: empty

}; // Native::Interface::FastEthernet::StormControl::Broadcast::Include


class Native::Interface::FastEthernet::StormControl::Broadcast::Level : public ydk::Entity
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

        class Threshold; //type: Native::Interface::FastEthernet::StormControl::Broadcast::Level::Threshold
        class Bps; //type: Native::Interface::FastEthernet::StormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::FastEthernet::StormControl::Broadcast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::StormControl::Broadcast::Level::Threshold> threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::FastEthernet::StormControl::Broadcast::Level


class Native::Interface::FastEthernet::StormControl::Broadcast::Level::Threshold : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: decimal64
        ydk::YLeaf falling_threshold; //type: decimal64

}; // Native::Interface::FastEthernet::StormControl::Broadcast::Level::Threshold


class Native::Interface::FastEthernet::StormControl::Broadcast::Level::Bps : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::FastEthernet::StormControl::Broadcast::Level::Bps


class Native::Interface::FastEthernet::StormControl::Broadcast::Level::Pps : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::FastEthernet::StormControl::Broadcast::Level::Pps


class Native::Interface::FastEthernet::StormControl::Multicast : public ydk::Entity
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

        class Level; //type: Native::Interface::FastEthernet::StormControl::Multicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::StormControl::Multicast::Level> level;
        
}; // Native::Interface::FastEthernet::StormControl::Multicast


class Native::Interface::FastEthernet::StormControl::Multicast::Level : public ydk::Entity
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

        class Threshold; //type: Native::Interface::FastEthernet::StormControl::Multicast::Level::Threshold
        class Bps; //type: Native::Interface::FastEthernet::StormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::FastEthernet::StormControl::Multicast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::StormControl::Multicast::Level::Threshold> threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::StormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::StormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::FastEthernet::StormControl::Multicast::Level


class Native::Interface::FastEthernet::StormControl::Multicast::Level::Threshold : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: decimal64
        ydk::YLeaf falling_threshold; //type: decimal64

}; // Native::Interface::FastEthernet::StormControl::Multicast::Level::Threshold


class Native::Interface::FastEthernet::StormControl::Multicast::Level::Bps : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::FastEthernet::StormControl::Multicast::Level::Bps


class Native::Interface::FastEthernet::StormControl::Multicast::Level::Pps : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::FastEthernet::StormControl::Multicast::Level::Pps


class Native::Interface::FastEthernet::StormControl::Unicast : public ydk::Entity
{
    public:
        Unicast();
        ~Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::Interface::FastEthernet::StormControl::Unicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::StormControl::Unicast::Level> level;
        
}; // Native::Interface::FastEthernet::StormControl::Unicast


class Native::Interface::FastEthernet::StormControl::Unicast::Level : public ydk::Entity
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

        class Threshold; //type: Native::Interface::FastEthernet::StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::FastEthernet::StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::FastEthernet::StormControl::Unicast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::StormControl::Unicast::Level::Threshold> threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::StormControl::Unicast::Level::Pps> pps;
        
}; // Native::Interface::FastEthernet::StormControl::Unicast::Level


class Native::Interface::FastEthernet::StormControl::Unicast::Level::Threshold : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: decimal64
        ydk::YLeaf falling_threshold; //type: decimal64

}; // Native::Interface::FastEthernet::StormControl::Unicast::Level::Threshold


class Native::Interface::FastEthernet::StormControl::Unicast::Level::Bps : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::FastEthernet::StormControl::Unicast::Level::Bps


class Native::Interface::FastEthernet::StormControl::Unicast::Level::Pps : public ydk::Entity
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

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::FastEthernet::StormControl::Unicast::Level::Pps


class Native::Interface::FastEthernet::Trust : public ydk::Entity
{
    public:
        Trust();
        ~Trust();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf device; //type: Device
        class Device;

}; // Native::Interface::FastEthernet::Trust


class Native::Interface::FastEthernet::PriorityQueue : public ydk::Entity
{
    public:
        PriorityQueue();
        ~PriorityQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out; //type: empty
        class CosMap; //type: Native::Interface::FastEthernet::PriorityQueue::CosMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::PriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::FastEthernet::PriorityQueue


class Native::Interface::FastEthernet::PriorityQueue::CosMap : public ydk::Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::FastEthernet::PriorityQueue::CosMap


class Native::Interface::FastEthernet::RcvQueue : public ydk::Entity
{
    public:
        RcvQueue();
        ~RcvQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CosMap; //type: Native::Interface::FastEthernet::RcvQueue::CosMap

        ydk::YList cos_map;
        
}; // Native::Interface::FastEthernet::RcvQueue


class Native::Interface::FastEthernet::RcvQueue::CosMap : public ydk::Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint8
        ydk::YLeaf threshold_id; //type: uint8
        ydk::YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::FastEthernet::RcvQueue::CosMap


class Native::Interface::FastEthernet::Peer : public ydk::Entity
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

        class Default; //type: Native::Interface::FastEthernet::Peer::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Peer::Default> default_;
        
}; // Native::Interface::FastEthernet::Peer


class Native::Interface::FastEthernet::Peer::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Interface::FastEthernet::Peer::Default::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Peer::Default::Ip> ip;
        
}; // Native::Interface::FastEthernet::Peer::Default


class Native::Interface::FastEthernet::Peer::Default::Ip : public ydk::Entity
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

        class Address; //type: Native::Interface::FastEthernet::Peer::Default::Ip::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Peer::Default::Ip::Address> address;
        
}; // Native::Interface::FastEthernet::Peer::Default::Ip


class Native::Interface::FastEthernet::Peer::Default::Ip::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dhcp; //type: empty
        class DhcpPool; //type: Native::Interface::FastEthernet::Peer::Default::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::FastEthernet::Peer::Default::Ip::Address::Pool

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Peer::Default::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Peer::Default::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::FastEthernet::Peer::Default::Ip::Address


class Native::Interface::FastEthernet::Peer::Default::Ip::Address::DhcpPool : public ydk::Entity
{
    public:
        DhcpPool();
        ~DhcpPool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pools; //type: string

}; // Native::Interface::FastEthernet::Peer::Default::Ip::Address::DhcpPool


class Native::Interface::FastEthernet::Peer::Default::Ip::Address::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pools; //type: string

}; // Native::Interface::FastEthernet::Peer::Default::Ip::Address::Pool


class Native::Interface::FastEthernet::PmPath : public ydk::Entity
{
    public:
        PmPath();
        ~PmPath();

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
        ydk::YLeaf interface_id; //type: uint8

}; // Native::Interface::FastEthernet::PmPath


class Native::Interface::FastEthernet::Power : public ydk::Entity
{
    public:
        Power();
        ~Power();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inline; //type: Native::Interface::FastEthernet::Power::Inline

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Power::Inline> inline_;
        
}; // Native::Interface::FastEthernet::Power


class Native::Interface::FastEthernet::Power::Inline : public ydk::Entity
{
    public:
        Inline();
        ~Inline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf consumption; //type: uint16
        ydk::YLeaf never; //type: empty
        class Auto; //type: Native::Interface::FastEthernet::Power::Inline::Auto
        class FourPair; //type: Native::Interface::FastEthernet::Power::Inline::FourPair
        class Police; //type: Native::Interface::FastEthernet::Power::Inline::Police
        class Port; //type: Native::Interface::FastEthernet::Power::Inline::Port
        class Static; //type: Native::Interface::FastEthernet::Power::Inline::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Power::Inline::Auto> auto_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Power::Inline::FourPair> four_pair;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Power::Inline::Police> police; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Power::Inline::Port> port;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Power::Inline::Static> static_; // presence node
        
}; // Native::Interface::FastEthernet::Power::Inline


class Native::Interface::FastEthernet::Power::Inline::Auto : public ydk::Entity
{
    public:
        Auto();
        ~Auto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: int32

}; // Native::Interface::FastEthernet::Power::Inline::Auto


class Native::Interface::FastEthernet::Power::Inline::FourPair : public ydk::Entity
{
    public:
        FourPair();
        ~FourPair();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forced; //type: empty

}; // Native::Interface::FastEthernet::Power::Inline::FourPair


class Native::Interface::FastEthernet::Power::Inline::Police : public ydk::Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::FastEthernet::Power::Inline::Police::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Power::Inline::Police::Action> action;
        
}; // Native::Interface::FastEthernet::Power::Inline::Police


class Native::Interface::FastEthernet::Power::Inline::Police::Action : public ydk::Entity
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

        ydk::YLeaf errdisable; //type: empty
        ydk::YLeaf log; //type: empty

}; // Native::Interface::FastEthernet::Power::Inline::Police::Action


class Native::Interface::FastEthernet::Power::Inline::Port : public ydk::Entity
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

        ydk::YLeaf poe_ha; //type: empty
        ydk::YLeaf perpetual_poe_ha; //type: empty
        ydk::YLeaf two_event; //type: empty

}; // Native::Interface::FastEthernet::Power::Inline::Port


class Native::Interface::FastEthernet::Power::Inline::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: int32

}; // Native::Interface::FastEthernet::Power::Inline::Static


class Native::Interface::FastEthernet::CarrierDelay : public ydk::Entity
{
    public:
        CarrierDelay();
        ~CarrierDelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16
        class Down; //type: Native::Interface::FastEthernet::CarrierDelay::Down
        class Up; //type: Native::Interface::FastEthernet::CarrierDelay::Up

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::CarrierDelay::Down> down;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::CarrierDelay::Up> up;
        
}; // Native::Interface::FastEthernet::CarrierDelay


class Native::Interface::FastEthernet::CarrierDelay::Down : public ydk::Entity
{
    public:
        Down();
        ~Down();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::FastEthernet::CarrierDelay::Down


class Native::Interface::FastEthernet::CarrierDelay::Up : public ydk::Entity
{
    public:
        Up();
        ~Up();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::FastEthernet::CarrierDelay::Up


class Native::Interface::FastEthernet::ChannelGroup : public ydk::Entity
{
    public:
        ChannelGroup();
        ~ChannelGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf non_silent; //type: empty
        ydk::YLeaf link; //type: uint8
        ydk::YLeaf auto_; //type: empty
        class Mode;

}; // Native::Interface::FastEthernet::ChannelGroup


class Native::Interface::FastEthernet::Ethernet : public ydk::Entity
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

        class Oam; //type: Native::Interface::FastEthernet::Ethernet::Oam
        class Dot1ad; //type: Native::Interface::FastEthernet::Ethernet::Dot1ad

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam> oam; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Dot1ad> dot1ad;
        
}; // Native::Interface::FastEthernet::Ethernet


class Native::Interface::FastEthernet::Ethernet::Oam : public ydk::Entity
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

        ydk::YLeaf max_rate; //type: uint8
        ydk::YLeaf min_rate; //type: uint8
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf timeout; //type: uint8
        class LinkMonitor; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor
        class RemoteFailure; //type: Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure
        class RemoteLoopback; //type: Native::Interface::FastEthernet::Ethernet::Oam::RemoteLoopback

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor> link_monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure> remote_failure;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::RemoteLoopback> remote_loopback;
                class Mode;

}; // Native::Interface::FastEthernet::Ethernet::Oam


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor : public ydk::Entity
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

        ydk::YLeaf on; //type: empty
        ydk::YLeaf supported; //type: empty
        class Frame; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame
        class FramePeriod; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod
        class FrameSeconds; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds
        class HighThreshold; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold
        class ReceiveCrc; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc
        class SymbolPeriod; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame> frame;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod> frame_period;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds> frame_seconds;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold> high_threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc> receive_crc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod> symbol_period;
        
}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame : public ydk::Entity
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

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold> threshold;
        
}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold : public ydk::Entity
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
        class High; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High> high;
        
}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::Frame::Threshold::High


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod : public ydk::Entity
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
        class Threshold; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold> threshold;
        
}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold : public ydk::Entity
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
        class High; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High> high;
        
}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds : public ydk::Entity
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
        class Threshold; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold> threshold;
        
}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold : public ydk::Entity
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
        class High; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High> high;
        
}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold : public ydk::Entity
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

        class Action; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action> action;
        
}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::HighThreshold::Action


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc : public ydk::Entity
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
        class Threshold; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold> threshold;
        
}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold : public ydk::Entity
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
        class High; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High> high;
        
}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod : public ydk::Entity
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
        class Threshold; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold> threshold;
        
}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold : public ydk::Entity
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
        class High; //type: Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High> high;
        
}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold


class Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High


class Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure : public ydk::Entity
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

        class CriticalEvent; //type: Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent
        class DyingGasp; //type: Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp
        class LinkFault; //type: Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent> critical_event;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp> dying_gasp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault> link_fault;
        
}; // Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure


class Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent : public ydk::Entity
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

        class Action; //type: Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action> action;
        
}; // Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent


class Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::CriticalEvent::Action


class Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp : public ydk::Entity
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

        class Action; //type: Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action> action; // presence node
        
}; // Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp


class Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::DyingGasp::Action


class Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault : public ydk::Entity
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

        class Action; //type: Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action> action; // presence node
        
}; // Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault


class Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Ethernet::Oam::RemoteFailure::LinkFault::Action


class Native::Interface::FastEthernet::Ethernet::Oam::RemoteLoopback : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Ethernet::Oam::RemoteLoopback


class Native::Interface::FastEthernet::Ethernet::Dot1ad : public ydk::Entity
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
        class Uni; //type: Native::Interface::FastEthernet::Ethernet::Dot1ad::Uni

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Ethernet::Dot1ad::Uni> uni;
        
}; // Native::Interface::FastEthernet::Ethernet::Dot1ad


class Native::Interface::FastEthernet::Ethernet::Dot1ad::Uni : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Ethernet::Dot1ad::Uni


class Native::Interface::FastEthernet::Eapol : public ydk::Entity
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

        class DestinationAddress; //type: Native::Interface::FastEthernet::Eapol::DestinationAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Eapol::DestinationAddress> destination_address;
        
}; // Native::Interface::FastEthernet::Eapol


class Native::Interface::FastEthernet::Eapol::DestinationAddress : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Eapol::DestinationAddress


class Native::Interface::FastEthernet::Synchronous : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Synchronous


class Native::Interface::FastEthernet::Speed : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Speed


class Native::Interface::FastEthernet::Negotiation : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Negotiation


class Native::Interface::FastEthernet::Plim : public ydk::Entity
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

        class Ethernet; //type: Native::Interface::FastEthernet::Plim::Ethernet
        class Qos; //type: Native::Interface::FastEthernet::Plim::Qos

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Plim::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Plim::Qos> qos;
        
}; // Native::Interface::FastEthernet::Plim


class Native::Interface::FastEthernet::Plim::Ethernet : public ydk::Entity
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

        class Vlan; //type: Native::Interface::FastEthernet::Plim::Ethernet::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Plim::Ethernet::Vlan> vlan;
        
}; // Native::Interface::FastEthernet::Plim::Ethernet


class Native::Interface::FastEthernet::Plim::Ethernet::Vlan : public ydk::Entity
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

        class Filter; //type: Native::Interface::FastEthernet::Plim::Ethernet::Vlan::Filter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Plim::Ethernet::Vlan::Filter> filter;
        
}; // Native::Interface::FastEthernet::Plim::Ethernet::Vlan


class Native::Interface::FastEthernet::Plim::Ethernet::Vlan::Filter : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Plim::Ethernet::Vlan::Filter


class Native::Interface::FastEthernet::Plim::Qos : public ydk::Entity
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

        class Input; //type: Native::Interface::FastEthernet::Plim::Qos::Input

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Plim::Qos::Input> input;
        
}; // Native::Interface::FastEthernet::Plim::Qos


class Native::Interface::FastEthernet::Plim::Qos::Input : public ydk::Entity
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

        class Queue; //type: Native::Interface::FastEthernet::Plim::Qos::Input::Queue

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Plim::Qos::Input::Queue> queue;
        
}; // Native::Interface::FastEthernet::Plim::Qos::Input


class Native::Interface::FastEthernet::Plim::Qos::Input::Queue : public ydk::Entity
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

        class Zero; //type: Native::Interface::FastEthernet::Plim::Qos::Input::Queue::Zero
        class StrictPriority; //type: Native::Interface::FastEthernet::Plim::Qos::Input::Queue::StrictPriority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Plim::Qos::Input::Queue::Zero> zero;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Plim::Qos::Input::Queue::StrictPriority> strict_priority;
        
}; // Native::Interface::FastEthernet::Plim::Qos::Input::Queue


class Native::Interface::FastEthernet::Plim::Qos::Input::Queue::Zero : public ydk::Entity
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

        class Pause; //type: Native::Interface::FastEthernet::Plim::Qos::Input::Queue::Zero::Pause

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Plim::Qos::Input::Queue::Zero::Pause> pause;
        
}; // Native::Interface::FastEthernet::Plim::Qos::Input::Queue::Zero


class Native::Interface::FastEthernet::Plim::Qos::Input::Queue::Zero::Pause : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Plim::Qos::Input::Queue::Zero::Pause


class Native::Interface::FastEthernet::Plim::Qos::Input::Queue::StrictPriority : public ydk::Entity
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

        class Pause; //type: Native::Interface::FastEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause> pause;
        
}; // Native::Interface::FastEthernet::Plim::Qos::Input::Queue::StrictPriority


class Native::Interface::FastEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Plim::Qos::Input::Queue::StrictPriority::Pause


class Native::Interface::FastEthernet::Pppoe : public ydk::Entity
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
        class Enable; //type: Native::Interface::FastEthernet::Pppoe::Enable

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Pppoe::Enable> enable; // presence node
        
}; // Native::Interface::FastEthernet::Pppoe


class Native::Interface::FastEthernet::Pppoe::Enable : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Pppoe::Enable


class Native::Interface::FastEthernet::Service : public ydk::Entity
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

        class Instance; //type: Native::Interface::FastEthernet::Service::Instance

        ydk::YList instance;
        
}; // Native::Interface::FastEthernet::Service


class Native::Interface::FastEthernet::Service::Instance : public ydk::Entity
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
        class Encapsulation; //type: Native::Interface::FastEthernet::Service::Instance::Encapsulation
        class Ip; //type: Native::Interface::FastEthernet::Service::Instance::Ip
        class Ipv6; //type: Native::Interface::FastEthernet::Service::Instance::Ipv6
        class Rewrite; //type: Native::Interface::FastEthernet::Service::Instance::Rewrite
        class Errdisable; //type: Native::Interface::FastEthernet::Service::Instance::Errdisable
        class EthernetContainer; //type: Native::Interface::FastEthernet::Service::Instance::EthernetContainer
        class Snmp; //type: Native::Interface::FastEthernet::Service::Instance::Snmp
        class BridgeDomain; //type: Native::Interface::FastEthernet::Service::Instance::BridgeDomain
        class Mac; //type: Native::Interface::FastEthernet::Service::Instance::Mac
        class ServicePolicy; //type: Native::Interface::FastEthernet::Service::Instance::ServicePolicy
        class Cfm; //type: Native::Interface::FastEthernet::Service::Instance::Cfm
        class L2protocol; //type: Native::Interface::FastEthernet::Service::Instance::L2protocol
        class Xconnect; //type: Native::Interface::FastEthernet::Service::Instance::Xconnect
        class XconnectPwClass; //type: Native::Interface::FastEthernet::Service::Instance::XconnectPwClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Rewrite> rewrite;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Errdisable> errdisable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::EthernetContainer> ethernet_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Snmp> snmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::BridgeDomain> bridge_domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Mac> mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Cfm> cfm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::L2protocol> l2protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::FastEthernet::Service::Instance


class Native::Interface::FastEthernet::Service::Instance::Encapsulation : public ydk::Entity
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
        class Dot1ad; //type: Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1ad
        class Dot1q; //type: Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1q
        class PriorityTagged; //type: Native::Interface::FastEthernet::Service::Instance::Encapsulation::PriorityTagged
        class Untagged; //type: Native::Interface::FastEthernet::Service::Instance::Encapsulation::Untagged

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1ad> dot1ad;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1q> dot1q;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Encapsulation::PriorityTagged> priority_tagged; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Encapsulation::Untagged> untagged; // presence node
        
}; // Native::Interface::FastEthernet::Service::Instance::Encapsulation


class Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1ad : public ydk::Entity
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
        class Cos2; //type: Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2> cos2;
                class Id;
        class Dot1q;
        class Etype;

}; // Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1ad


class Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2 : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1ad::Cos2


class Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1q : public ydk::Entity
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
        class Cos2; //type: Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1q::Cos2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1q::Cos2> cos2;
                class Id;
        class SecondDot1q;
        class Etype;
        class VlanType;

}; // Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1q


class Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1q::Cos2 : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1q::Cos2


class Native::Interface::FastEthernet::Service::Instance::Encapsulation::PriorityTagged : public ydk::Entity
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
        class CosContainer; //type: Native::Interface::FastEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer> cos_container;
                class Etype;

}; // Native::Interface::FastEthernet::Service::Instance::Encapsulation::PriorityTagged


class Native::Interface::FastEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Encapsulation::PriorityTagged::CosContainer


class Native::Interface::FastEthernet::Service::Instance::Encapsulation::Untagged : public ydk::Entity
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


}; // Native::Interface::FastEthernet::Service::Instance::Encapsulation::Untagged


class Native::Interface::FastEthernet::Service::Instance::Ip : public ydk::Entity
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

        class Acl; //type: Native::Interface::FastEthernet::Service::Instance::Ip::Acl
        class Dhcp; //type: Native::Interface::FastEthernet::Service::Instance::Ip::Dhcp
        class Verify; //type: Native::Interface::FastEthernet::Service::Instance::Ip::Verify

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Ip::Acl> acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Ip::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Ip::Verify> verify;
        
}; // Native::Interface::FastEthernet::Service::Instance::Ip


class Native::Interface::FastEthernet::Service::Instance::Ip::Acl : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Ip::Acl


class Native::Interface::FastEthernet::Service::Instance::Ip::Dhcp : public ydk::Entity
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

        class Relay; //type: Native::Interface::FastEthernet::Service::Instance::Ip::Dhcp::Relay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Ip::Dhcp::Relay> relay;
        
}; // Native::Interface::FastEthernet::Service::Instance::Ip::Dhcp


class Native::Interface::FastEthernet::Service::Instance::Ip::Dhcp::Relay : public ydk::Entity
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

        class Information; //type: Native::Interface::FastEthernet::Service::Instance::Ip::Dhcp::Relay::Information

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Ip::Dhcp::Relay::Information> information;
        
}; // Native::Interface::FastEthernet::Service::Instance::Ip::Dhcp::Relay


class Native::Interface::FastEthernet::Service::Instance::Ip::Dhcp::Relay::Information : public ydk::Entity
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

        class Option; //type: Native::Interface::FastEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option> option;
        
}; // Native::Interface::FastEthernet::Service::Instance::Ip::Dhcp::Relay::Information


class Native::Interface::FastEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Ip::Dhcp::Relay::Information::Option


class Native::Interface::FastEthernet::Service::Instance::Ip::Verify : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Ip::Verify


class Native::Interface::FastEthernet::Service::Instance::Ipv6 : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Ipv6


class Native::Interface::FastEthernet::Service::Instance::Rewrite : public ydk::Entity
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

        class Ingress; //type: Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress> ingress;
        
}; // Native::Interface::FastEthernet::Service::Instance::Rewrite


class Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress : public ydk::Entity
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

        class Tag; //type: Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag> tag;
        
}; // Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress


class Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag : public ydk::Entity
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

        class Pop; //type: Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop
        class Push; //type: Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Push
        class Translate; //type: Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop> pop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Push> push;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate> translate;
        
}; // Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag


class Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop


class Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Push : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Push


class Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate : public ydk::Entity
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

        class T1To1; //type: Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1
        class T1To2; //type: Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2
        class T2To1; //type: Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1
        class T2To2; //type: Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1> t1_to_1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2> t1_to_2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1> t2_to_1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2> t2_to_2;
        
}; // Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate


class Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1 : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1


class Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2 : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2


class Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1 : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1


class Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2 : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2


class Native::Interface::FastEthernet::Service::Instance::Errdisable : public ydk::Entity
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

        class Recovery; //type: Native::Interface::FastEthernet::Service::Instance::Errdisable::Recovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Errdisable::Recovery> recovery;
        
}; // Native::Interface::FastEthernet::Service::Instance::Errdisable


class Native::Interface::FastEthernet::Service::Instance::Errdisable::Recovery : public ydk::Entity
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

        class Cause; //type: Native::Interface::FastEthernet::Service::Instance::Errdisable::Recovery::Cause

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Errdisable::Recovery::Cause> cause;
        
}; // Native::Interface::FastEthernet::Service::Instance::Errdisable::Recovery


class Native::Interface::FastEthernet::Service::Instance::Errdisable::Recovery::Cause : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Errdisable::Recovery::Cause


class Native::Interface::FastEthernet::Service::Instance::EthernetContainer : public ydk::Entity
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

        class Ethernet; //type: Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet> ethernet;
        
}; // Native::Interface::FastEthernet::Service::Instance::EthernetContainer


class Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet : public ydk::Entity
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

        class Lmi; //type: Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi
        class Loopback; //type: Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi> lmi;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback> loopback;
        
}; // Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet


class Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi : public ydk::Entity
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

        class CeVlan; //type: Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan> ce_vlan;
        
}; // Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi


class Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan : public ydk::Entity
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

        class Map; //type: Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map> map;
        
}; // Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan


class Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Lmi::CeVlan::Map


class Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback : public ydk::Entity
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

        class Permit; //type: Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit> permit;
        
}; // Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback


class Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::EthernetContainer::Ethernet::Loopback::Permit


class Native::Interface::FastEthernet::Service::Instance::Snmp : public ydk::Entity
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

        class Trap; //type: Native::Interface::FastEthernet::Service::Instance::Snmp::Trap
        class Ifindex; //type: Native::Interface::FastEthernet::Service::Instance::Snmp::Ifindex

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Snmp::Trap> trap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Snmp::Ifindex> ifindex;
        
}; // Native::Interface::FastEthernet::Service::Instance::Snmp


class Native::Interface::FastEthernet::Service::Instance::Snmp::Trap : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Snmp::Trap


class Native::Interface::FastEthernet::Service::Instance::Snmp::Ifindex : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Snmp::Ifindex


class Native::Interface::FastEthernet::Service::Instance::BridgeDomain : public ydk::Entity
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
        class SplitHorizon; //type: Native::Interface::FastEthernet::Service::Instance::BridgeDomain::SplitHorizon

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::BridgeDomain::SplitHorizon> split_horizon;
        
}; // Native::Interface::FastEthernet::Service::Instance::BridgeDomain


class Native::Interface::FastEthernet::Service::Instance::BridgeDomain::SplitHorizon : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::BridgeDomain::SplitHorizon


class Native::Interface::FastEthernet::Service::Instance::Mac : public ydk::Entity
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

        class Security; //type: Native::Interface::FastEthernet::Service::Instance::Mac::Security
        class AccessGroup; //type: Native::Interface::FastEthernet::Service::Instance::Mac::AccessGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Mac::Security> security; // presence node
        ydk::YList access_group;
        
}; // Native::Interface::FastEthernet::Service::Instance::Mac


class Native::Interface::FastEthernet::Service::Instance::Mac::Security : public ydk::Entity
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
        class Maximum; //type: Native::Interface::FastEthernet::Service::Instance::Mac::Security::Maximum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Mac::Security::Maximum> maximum;
                class Violation;

}; // Native::Interface::FastEthernet::Service::Instance::Mac::Security


class Native::Interface::FastEthernet::Service::Instance::Mac::Security::Maximum : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Mac::Security::Maximum


class Native::Interface::FastEthernet::Service::Instance::Mac::AccessGroup : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Mac::AccessGroup


class Native::Interface::FastEthernet::Service::Instance::ServicePolicy : public ydk::Entity
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

        class Input; //type: Native::Interface::FastEthernet::Service::Instance::ServicePolicy::Input
        class Output; //type: Native::Interface::FastEthernet::Service::Instance::ServicePolicy::Output

        ydk::YList input;
        ydk::YList output;
        
}; // Native::Interface::FastEthernet::Service::Instance::ServicePolicy


class Native::Interface::FastEthernet::Service::Instance::ServicePolicy::Input : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::ServicePolicy::Input


class Native::Interface::FastEthernet::Service::Instance::ServicePolicy::Output : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::ServicePolicy::Output


class Native::Interface::FastEthernet::Service::Instance::Cfm : public ydk::Entity
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

        class Encapsulation; //type: Native::Interface::FastEthernet::Service::Instance::Cfm::Encapsulation
        class Mep; //type: Native::Interface::FastEthernet::Service::Instance::Cfm::Mep
        class Mip; //type: Native::Interface::FastEthernet::Service::Instance::Cfm::Mip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Cfm::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Cfm::Mep> mep;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Cfm::Mip> mip;
        
}; // Native::Interface::FastEthernet::Service::Instance::Cfm


class Native::Interface::FastEthernet::Service::Instance::Cfm::Encapsulation : public ydk::Entity
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

        class Dot1ad; //type: Native::Interface::FastEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad
        class Dot1q; //type: Native::Interface::FastEthernet::Service::Instance::Cfm::Encapsulation::Dot1q

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad> dot1ad;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FastEthernet::Service::Instance::Cfm::Encapsulation::Dot1q> dot1q;
        
}; // Native::Interface::FastEthernet::Service::Instance::Cfm::Encapsulation


class Native::Interface::FastEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad : public ydk::Entity
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

}; // Native::Interface::FastEthernet::Service::Instance::Cfm::Encapsulation::Dot1ad

class Native::Interface::FastEthernet::AccessSession::HostMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf multi_auth;
        static const ydk::Enum::YLeaf multi_domain;
        static const ydk::Enum::YLeaf multi_host;
        static const ydk::Enum::YLeaf single_host;

        static int get_enum_value(const std::string & name) {
            if (name == "multi-auth") return 0;
            if (name == "multi-domain") return 1;
            if (name == "multi-host") return 2;
            if (name == "single-host") return 3;
            return -1;
        }
};

class Native::Interface::FastEthernet::Trust::Device : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_phone;
        static const ydk::Enum::YLeaf cts;
        static const ydk::Enum::YLeaf ip_camera;
        static const ydk::Enum::YLeaf media_player;

        static int get_enum_value(const std::string & name) {
            if (name == "cisco-phone") return 0;
            if (name == "cts") return 1;
            if (name == "ip-camera") return 2;
            if (name == "media-player") return 3;
            return -1;
        }
};

class Native::Interface::FastEthernet::ChannelGroup::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf desirable;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf passive;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 0;
            if (name == "auto") return 1;
            if (name == "desirable") return 2;
            if (name == "on") return 3;
            if (name == "passive") return 4;
            return -1;
        }
};

class Native::Interface::FastEthernet::Ethernet::Oam::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 0;
            if (name == "passive") return 1;
            return -1;
        }
};

class Native::Interface::FastEthernet::Pppoe::Enable::Group : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf global;

        static int get_enum_value(const std::string & name) {
            if (name == "global") return 0;
            return -1;
        }
};

class Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1ad::Id : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;

        static int get_enum_value(const std::string & name) {
            if (name == "any") return 0;
            return -1;
        }
};

class Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1ad::Dot1q : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;

        static int get_enum_value(const std::string & name) {
            if (name == "any") return 0;
            return -1;
        }
};

class Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1ad::Etype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pppoe_all;
        static const ydk::Enum::YLeaf pppoe_discovery;
        static const ydk::Enum::YLeaf pppoe_session;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 0;
            if (name == "ipv6") return 1;
            if (name == "pppoe-all") return 2;
            if (name == "pppoe-discovery") return 3;
            if (name == "pppoe-session") return 4;
            return -1;
        }
};

class Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1q::Id : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;

        static int get_enum_value(const std::string & name) {
            if (name == "any") return 0;
            return -1;
        }
};

class Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1q::SecondDot1q : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;

        static int get_enum_value(const std::string & name) {
            if (name == "any") return 0;
            return -1;
        }
};

class Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1q::Etype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pppoe_all;
        static const ydk::Enum::YLeaf pppoe_discovery;
        static const ydk::Enum::YLeaf pppoe_session;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 0;
            if (name == "ipv6") return 1;
            if (name == "pppoe-all") return 2;
            if (name == "pppoe-discovery") return 3;
            if (name == "pppoe-session") return 4;
            return -1;
        }
};

class Native::Interface::FastEthernet::Service::Instance::Encapsulation::Dot1q::VlanType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0x88A8;
        static const ydk::Enum::YLeaf Y_0x9100;
        static const ydk::Enum::YLeaf Y_0x9200;

        static int get_enum_value(const std::string & name) {
            if (name == "0x88A8") return 0;
            if (name == "0x9100") return 1;
            if (name == "0x9200") return 2;
            return -1;
        }
};

class Native::Interface::FastEthernet::Service::Instance::Encapsulation::PriorityTagged::Etype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pppoe_all;
        static const ydk::Enum::YLeaf pppoe_discovery;
        static const ydk::Enum::YLeaf pppoe_session;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 0;
            if (name == "ipv6") return 1;
            if (name == "pppoe-all") return 2;
            if (name == "pppoe-discovery") return 3;
            if (name == "pppoe-session") return 4;
            return -1;
        }
};

class Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Way : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

        static int get_enum_value(const std::string & name) {
            if (name == "1") return 0;
            if (name == "2") return 1;
            return -1;
        }
};

class Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Pop::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

        static int get_enum_value(const std::string & name) {
            if (name == "symmetric") return 0;
            return -1;
        }
};

class Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Push::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

        static int get_enum_value(const std::string & name) {
            if (name == "symmetric") return 0;
            return -1;
        }
};

class Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

        static int get_enum_value(const std::string & name) {
            if (name == "symmetric") return 0;
            return -1;
        }
};

class Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

        static int get_enum_value(const std::string & name) {
            if (name == "symmetric") return 0;
            return -1;
        }
};

class Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

        static int get_enum_value(const std::string & name) {
            if (name == "symmetric") return 0;
            return -1;
        }
};

class Native::Interface::FastEthernet::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

        static int get_enum_value(const std::string & name) {
            if (name == "symmetric") return 0;
            return -1;
        }
};

class Native::Interface::FastEthernet::Service::Instance::Mac::Security::Violation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protect;
        static const ydk::Enum::YLeaf restrict;

        static int get_enum_value(const std::string & name) {
            if (name == "protect") return 0;
            if (name == "restrict") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_33_ */

