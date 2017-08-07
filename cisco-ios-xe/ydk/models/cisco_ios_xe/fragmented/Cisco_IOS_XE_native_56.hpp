#ifndef _CISCO_IOS_XE_NATIVE_56_
#define _CISCO_IOS_XE_NATIVE_56_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_17.hpp"
#include "Cisco_IOS_XE_native_55.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime


class Native::Interface::Cellular::Standby::StandbyList::Track : public ydk::Entity
{
    public:
        Track();
        ~Track();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf decrement; //type: uint8
        ydk::YLeaf shutdown; //type: empty

}; // Native::Interface::Cellular::Standby::StandbyList::Track


class Native::Interface::Cellular::AccessSession : public ydk::Entity
{
    public:
        AccessSession();
        ~AccessSession();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf closed; //type: empty
        ydk::YLeaf host_mode; //type: HostMode
        class PortControl; //type: Native::Interface::Cellular::AccessSession::PortControl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::AccessSession::PortControl> port_control;
                class HostMode;

}; // Native::Interface::Cellular::AccessSession


class Native::Interface::Cellular::AccessSession::PortControl : public ydk::Entity
{
    public:
        PortControl();
        ~PortControl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_; //type: empty

}; // Native::Interface::Cellular::AccessSession::PortControl


class Native::Interface::Cellular::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::Cellular::StormControl::Action
        class Broadcast; //type: Native::Interface::Cellular::StormControl::Broadcast
        class Multicast; //type: Native::Interface::Cellular::StormControl::Multicast
        class Unicast; //type: Native::Interface::Cellular::StormControl::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Unicast> unicast;
        
}; // Native::Interface::Cellular::StormControl


class Native::Interface::Cellular::StormControl::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: decimal64
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::Interface::Cellular::StormControl::Action


class Native::Interface::Cellular::StormControl::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Include; //type: Native::Interface::Cellular::StormControl::Broadcast::Include
        class Level; //type: Native::Interface::Cellular::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Broadcast::Include> include;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Broadcast::Level> level;
        
}; // Native::Interface::Cellular::StormControl::Broadcast


class Native::Interface::Cellular::StormControl::Broadcast::Include : public ydk::Entity
{
    public:
        Include();
        ~Include();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast; //type: empty

}; // Native::Interface::Cellular::StormControl::Broadcast::Include


class Native::Interface::Cellular::StormControl::Broadcast::Level : public ydk::Entity
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

        ydk::YLeaf threshold; //type: decimal64
        class Bps; //type: Native::Interface::Cellular::StormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::Cellular::StormControl::Broadcast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::Cellular::StormControl::Broadcast::Level


class Native::Interface::Cellular::StormControl::Broadcast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Cellular::StormControl::Broadcast::Level::Bps


class Native::Interface::Cellular::StormControl::Broadcast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Cellular::StormControl::Broadcast::Level::Pps


class Native::Interface::Cellular::StormControl::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::Interface::Cellular::StormControl::Multicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Multicast::Level> level;
        
}; // Native::Interface::Cellular::StormControl::Multicast


class Native::Interface::Cellular::StormControl::Multicast::Level : public ydk::Entity
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

        ydk::YLeaf threshold; //type: decimal64
        class Bps; //type: Native::Interface::Cellular::StormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::Cellular::StormControl::Multicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::Cellular::StormControl::Multicast::Level


class Native::Interface::Cellular::StormControl::Multicast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Cellular::StormControl::Multicast::Level::Bps


class Native::Interface::Cellular::StormControl::Multicast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Cellular::StormControl::Multicast::Level::Pps


class Native::Interface::Cellular::StormControl::Unicast : public ydk::Entity
{
    public:
        Unicast();
        ~Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::Interface::Cellular::StormControl::Unicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Unicast::Level> level;
        
}; // Native::Interface::Cellular::StormControl::Unicast


class Native::Interface::Cellular::StormControl::Unicast::Level : public ydk::Entity
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

        class Threshold; //type: Native::Interface::Cellular::StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::Cellular::StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::Cellular::StormControl::Unicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Unicast::Level::Pps> pps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Unicast::Level::Threshold> threshold;
        
}; // Native::Interface::Cellular::StormControl::Unicast::Level


class Native::Interface::Cellular::StormControl::Unicast::Level::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: decimal64
        ydk::YLeaf falling_threshold; //type: decimal64

}; // Native::Interface::Cellular::StormControl::Unicast::Level::Threshold


class Native::Interface::Cellular::StormControl::Unicast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Cellular::StormControl::Unicast::Level::Bps


class Native::Interface::Cellular::StormControl::Unicast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::Cellular::StormControl::Unicast::Level::Pps


class Native::Interface::Cellular::Trust : public ydk::Entity
{
    public:
        Trust();
        ~Trust();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf device; //type: Device
        class Device;

}; // Native::Interface::Cellular::Trust


class Native::Interface::Cellular::Utd : public ydk::Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::Interface::Cellular::Utd


class Native::Interface::Cellular::PriorityQueue : public ydk::Entity
{
    public:
        PriorityQueue();
        ~PriorityQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out; //type: empty
        class CosMap; //type: Native::Interface::Cellular::PriorityQueue::CosMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::PriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::Cellular::PriorityQueue


class Native::Interface::Cellular::PriorityQueue::CosMap : public ydk::Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::Cellular::PriorityQueue::CosMap


class Native::Interface::Cellular::RcvQueue : public ydk::Entity
{
    public:
        RcvQueue();
        ~RcvQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CosMap; //type: Native::Interface::Cellular::RcvQueue::CosMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::RcvQueue::CosMap> > cos_map;
        
}; // Native::Interface::Cellular::RcvQueue


class Native::Interface::Cellular::RcvQueue::CosMap : public ydk::Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint8
        ydk::YLeaf threshold_id; //type: uint8
        ydk::YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::Cellular::RcvQueue::CosMap


class Native::Interface::Cellular::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Default_; //type: Native::Interface::Cellular::Peer::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::Peer::Default_> default_;
        
}; // Native::Interface::Cellular::Peer


class Native::Interface::Cellular::Peer::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Interface::Cellular::Peer::Default_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::Peer::Default_::Ip> ip;
        
}; // Native::Interface::Cellular::Peer::Default_


class Native::Interface::Cellular::Peer::Default_::Ip : public ydk::Entity
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

        class Address; //type: Native::Interface::Cellular::Peer::Default_::Ip::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::Peer::Default_::Ip::Address> address;
        
}; // Native::Interface::Cellular::Peer::Default_::Ip


class Native::Interface::Cellular::Peer::Default_::Ip::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dhcp; //type: empty
        class DhcpPool; //type: Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::Cellular::Peer::Default_::Ip::Address


class Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool : public ydk::Entity
{
    public:
        DhcpPool();
        ~DhcpPool();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pools; //type: string

}; // Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool


class Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pools; //type: string

}; // Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool


class Native::Interface::Cellular::PmPath : public ydk::Entity
{
    public:
        PmPath();
        ~PmPath();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf interface_id; //type: uint8

}; // Native::Interface::Cellular::PmPath


class Native::Interface::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: uint16
        ydk::YLeaf cisco_ios_xe_interfaces_description; //type: string
        ydk::YLeaf cisco_ios_xe_interfaces_mac_address; //type: string
        ydk::YLeaf cisco_ios_xe_interfaces_shutdown; //type: empty
        ydk::YLeaf keepalive; //type: boolean
        ydk::YLeaf cisco_ios_xe_interfaces_if_state; //type: IfState
        ydk::YLeaf cisco_ios_xe_interfaces_delay; //type: uint32
        ydk::YLeaf cisco_ios_xe_interfaces_load_interval; //type: uint16
        ydk::YLeaf cisco_ios_xe_interfaces_max_reserved_bandwidth; //type: uint8
        ydk::YLeaf cisco_ios_xe_interfaces_mtu; //type: uint16
        ydk::YLeaf cisco_ios_xe_interfaces_service_insertion; //type: ServiceInsertion
        ydk::YLeaf cisco_ios_xe_interfaces_description_; //type: string
        ydk::YLeaf cisco_ios_xe_interfaces_mac_address_; //type: string
        ydk::YLeaf cisco_ios_xe_interfaces_shutdown_; //type: empty
        ydk::YLeaf keepalive_; //type: boolean
        ydk::YLeaf cisco_ios_xe_interfaces_if_state_; //type: IfState
        ydk::YLeaf cisco_ios_xe_interfaces_delay_; //type: uint32
        ydk::YLeaf cisco_ios_xe_interfaces_load_interval_; //type: uint16
        ydk::YLeaf cisco_ios_xe_interfaces_max_reserved_bandwidth_; //type: uint8
        ydk::YLeaf cisco_ios_xe_interfaces_mtu_; //type: uint16
        ydk::YLeaf cisco_ios_xe_interfaces_service_insertion_; //type: ServiceInsertion
        class CiscoIosXeInterfaces_SwitchportConf; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf
        class CiscoIosXeInterfaces_Switchport; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport
        class CiscoIosXeInterfaces_Arp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Arp
        class CiscoIosXeInterfaces_Backup; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Backup
        class CiscoIosXeInterfaces_Cemoudp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp
        class CiscoIosXeInterfaces_CwsTunnel; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel
        class CiscoIosXeInterfaces_L2ProtocolTunnel; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel
        class CiscoIosXeInterfaces_Encapsulation; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation
        class CiscoIosXeInterfaces_FairQueueConf; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf
        class CiscoIosXeInterfaces_FairQueue; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue
        class CiscoIosXeInterfaces_Flowcontrol; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol
        class CiscoIosXeInterfaces_Isis; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis
        class KeepaliveSettings; //type: Native::Interface::Vlan::KeepaliveSettings
        class CiscoIosXeInterfaces_Bfd; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd
        class CiscoIosXeInterfaces_Bandwidth; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth
        class CiscoIosXeInterfaces_Dampening; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening
        class CiscoIosXeInterfaces_Domain; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Domain
        class CiscoIosXeInterfaces_HoldQueue; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue
        class CiscoIosXeInterfaces_Mpls; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls
        class IpVrf; //type: Native::Interface::Vlan::IpVrf
        class Vrf; //type: Native::Interface::Vlan::Vrf
        class CiscoIosXeInterfaces_Ip; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip
        class CiscoIosXeInterfaces_Ipv6; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6
        class CiscoIosXeInterfaces_Logging; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Logging
        class CiscoIosXeInterfaces_Mdix; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix
        class CiscoIosXeInterfaces_Mop; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Mop
        class CiscoIosXeInterfaces_Interface_Qos; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos
        class CiscoIosXeInterfaces_Standby; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby
        class CiscoIosXeInterfaces_AccessSession; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession
        class CiscoIosXeInterfaces_StormControl; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl
        class CiscoIosXeInterfaces_Trust; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Trust
        class CiscoIosXeInterfaces_Utd; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Utd
        class CiscoIosXeInterfaces_PriorityQueue; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue
        class CiscoIosXeInterfaces_RcvQueue; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue
        class CiscoIosXeInterfaces_Peer; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Peer
        class CiscoIosXeInterfaces_PmPath; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath
        class Crypto; //type: Native::Interface::Vlan::Crypto
        class Cts; //type: Native::Interface::Vlan::Cts
        class ServicePolicy; //type: Native::Interface::Vlan::ServicePolicy
        class Lisp; //type: Native::Interface::Vlan::Lisp
        class PrivateVlan; //type: Native::Interface::Vlan::PrivateVlan
        class Vrrp; //type: Native::Interface::Vlan::Vrrp
        class ServiceRouting; //type: Native::Interface::Vlan::ServiceRouting
        class Glbp; //type: Native::Interface::Vlan::Glbp
        class CiscoIosXeInterfaces_SwitchportConf_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf_
        class CiscoIosXeInterfaces_Switchport_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport_
        class CiscoIosXeInterfaces_Arp_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Arp_
        class CiscoIosXeInterfaces_Backup_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Backup_
        class CiscoIosXeInterfaces_Cemoudp_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp_
        class CiscoIosXeInterfaces_CwsTunnel_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel_
        class CiscoIosXeInterfaces_L2ProtocolTunnel_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel_
        class CiscoIosXeInterfaces_Encapsulation_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation_
        class CiscoIosXeInterfaces_FairQueueConf_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf_
        class CiscoIosXeInterfaces_FairQueue_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue_
        class CiscoIosXeInterfaces_Flowcontrol_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol_
        class CiscoIosXeInterfaces_Isis_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis_
        class KeepaliveSettings_; //type: Native::Interface::Vlan::KeepaliveSettings_
        class CiscoIosXeInterfaces_Bfd_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd_
        class CiscoIosXeInterfaces_Bandwidth_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth_
        class CiscoIosXeInterfaces_Dampening_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening_
        class CiscoIosXeInterfaces_Domain_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Domain_
        class CiscoIosXeInterfaces_HoldQueue_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue_
        class CiscoIosXeInterfaces_Mpls_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls_
        class IpVrf_; //type: Native::Interface::Vlan::IpVrf_
        class Vrf_; //type: Native::Interface::Vlan::Vrf_
        class CiscoIosXeInterfaces_Ip_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip_
        class CiscoIosXeInterfaces_Ipv6_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6_
        class CiscoIosXeInterfaces_Logging_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Logging_
        class CiscoIosXeInterfaces_Mdix_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix_
        class CiscoIosXeInterfaces_Mop_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Mop_
        class CiscoIosXeInterfaces_Interface_Qos_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos_
        class CiscoIosXeInterfaces_Standby_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby_
        class CiscoIosXeInterfaces_AccessSession_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession_
        class CiscoIosXeInterfaces_StormControl_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl_
        class CiscoIosXeInterfaces_Trust_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Trust_
        class CiscoIosXeInterfaces_Utd_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Utd_
        class CiscoIosXeInterfaces_PriorityQueue_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue_
        class CiscoIosXeInterfaces_RcvQueue_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue_
        class CiscoIosXeInterfaces_Peer_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Peer_
        class CiscoIosXeInterfaces_PmPath_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath_
        class ZoneMember; //type: Native::Interface::Vlan::ZoneMember

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession> cisco_ios_xe_interfaces_access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession_> cisco_ios_xe_interfaces_access_session_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Arp> cisco_ios_xe_interfaces_arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Arp_> cisco_ios_xe_interfaces_arp_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup> cisco_ios_xe_interfaces_backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup_> cisco_ios_xe_interfaces_backup_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth> cisco_ios_xe_interfaces_bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth_> cisco_ios_xe_interfaces_bandwidth_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd> cisco_ios_xe_interfaces_bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd_> cisco_ios_xe_interfaces_bfd_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp> cisco_ios_xe_interfaces_cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp_> cisco_ios_xe_interfaces_cemoudp_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel> cisco_ios_xe_interfaces_cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel_> cisco_ios_xe_interfaces_cws_tunnel_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening> cisco_ios_xe_interfaces_dampening;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening_> cisco_ios_xe_interfaces_dampening_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Domain> cisco_ios_xe_interfaces_domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Domain_> cisco_ios_xe_interfaces_domain_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation> cisco_ios_xe_interfaces_encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation_> cisco_ios_xe_interfaces_encapsulation_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue> cisco_ios_xe_interfaces_fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue_> cisco_ios_xe_interfaces_fair_queue_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf> cisco_ios_xe_interfaces_fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf_> cisco_ios_xe_interfaces_fair_queue_conf_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol> cisco_ios_xe_interfaces_flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol_> cisco_ios_xe_interfaces_flowcontrol_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue> > cisco_ios_xe_interfaces_hold_queue;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue_> > cisco_ios_xe_interfaces_hold_queue_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos> cisco_ios_xe_interfaces_interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos_> cisco_ios_xe_interfaces_interface_qos_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip> cisco_ios_xe_interfaces_ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip_> cisco_ios_xe_interfaces_ip_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6> cisco_ios_xe_interfaces_ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6_> cisco_ios_xe_interfaces_ipv6_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis> cisco_ios_xe_interfaces_isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis_> cisco_ios_xe_interfaces_isis_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel> cisco_ios_xe_interfaces_l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel_> cisco_ios_xe_interfaces_l2protocol_tunnel_; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Logging> cisco_ios_xe_interfaces_logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Logging_> cisco_ios_xe_interfaces_logging_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix> cisco_ios_xe_interfaces_mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix_> cisco_ios_xe_interfaces_mdix_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Mop> cisco_ios_xe_interfaces_mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Mop_> cisco_ios_xe_interfaces_mop_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls> cisco_ios_xe_interfaces_mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls_> cisco_ios_xe_interfaces_mpls_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Peer> cisco_ios_xe_interfaces_peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Peer_> cisco_ios_xe_interfaces_peer_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath> cisco_ios_xe_interfaces_pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath_> cisco_ios_xe_interfaces_pm_path_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue> cisco_ios_xe_interfaces_priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue_> cisco_ios_xe_interfaces_priority_queue_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue> cisco_ios_xe_interfaces_rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue_> cisco_ios_xe_interfaces_rcv_queue_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby> cisco_ios_xe_interfaces_standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby_> cisco_ios_xe_interfaces_standby_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl> cisco_ios_xe_interfaces_storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl_> cisco_ios_xe_interfaces_storm_control_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport> cisco_ios_xe_interfaces_switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport_> cisco_ios_xe_interfaces_switchport_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf> cisco_ios_xe_interfaces_switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf_> cisco_ios_xe_interfaces_switchport_conf_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Trust> cisco_ios_xe_interfaces_trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Trust_> cisco_ios_xe_interfaces_trust_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Utd> cisco_ios_xe_interfaces_utd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Utd_> cisco_ios_xe_interfaces_utd_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Crypto> crypto;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Cts> cts;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp> glbp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf_> ip_vrf_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::KeepaliveSettings_> keepalive_settings_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::PrivateVlan> private_vlan;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::ServiceRouting> service_routing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Vrf> vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Vrf_> vrf_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Vrrp> > vrrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::ZoneMember> zone_member;
                class IfState;
        class ServiceInsertion;
        class IfState;
        class ServiceInsertion;

}; // Native::Interface::Vlan


class Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_SwitchportConf();
        ~CiscoIosXeInterfaces_SwitchportConf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switchport; //type: boolean

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf


class Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_Switchport();
        ~CiscoIosXeInterfaces_Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport


class Native::Interface::Vlan::CiscoIosXeInterfaces_Arp : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_Arp();
        ~CiscoIosXeInterfaces_Arp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Arp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_Backup();
        ~CiscoIosXeInterfaces_Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay
        class Interface_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_
        class Load; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load> load;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Backup


class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay : public ydk::Entity
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

        ydk::YLeaf failure; //type: one of uint32, enumeration
        ydk::YLeaf secondary_disable; //type: one of uint32, enumeration
        class Failure;
        class SecondaryDisable;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay


class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_ : public ydk::Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        class AtmSubinterface; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_


class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface : public ydk::Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface


class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface : public ydk::Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface


class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface : public ydk::Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface


class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface


class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load : public ydk::Entity
{
    public:
        Load();
        ~Load();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kickin; //type: one of uint32, enumeration
        ydk::YLeaf kickout; //type: one of uint32, enumeration
        class Kickin;
        class Kickout;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load


class Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_Cemoudp();
        ~CiscoIosXeInterfaces_Cemoudp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reserve; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve> reserve;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve : public ydk::Entity
{
    public:
        Reserve();
        ~Reserve();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acr; //type: uint8

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve


class Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_CwsTunnel();
        ~CiscoIosXeInterfaces_CwsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in; //type: empty
        class Out; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out> out;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel


class Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_number; //type: uint16

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out


class Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_L2ProtocolTunnel();
        ~CiscoIosXeInterfaces_L2ProtocolTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cdp; //type: empty
        ydk::YLeaf stp; //type: empty
        ydk::YLeaf vtp; //type: empty
        class DropThreshold; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel


class Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold : public ydk::Entity
{
    public:
        DropThreshold();
        ~DropThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_rate; //type: uint16
        ydk::YLeaf cdp; //type: uint16
        ydk::YLeaf stp; //type: uint16
        ydk::YLeaf vtp; //type: uint16

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold


class Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold : public ydk::Entity
{
    public:
        ShutdownThreshold();
        ~ShutdownThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_rate; //type: uint16
        ydk::YLeaf cdp; //type: uint16
        ydk::YLeaf stp; //type: uint16
        ydk::YLeaf vtp; //type: uint16

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_Encapsulation();
        ~CiscoIosXeInterfaces_Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Q; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl
        class Ppp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp
        class Slip; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl> isl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip> slip; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q : public ydk::Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16
        ydk::YLeaf native; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl : public ydk::Entity
{
    public:
        Isl();
        ~Isl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp : public ydk::Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip : public ydk::Entity
{
    public:
        Slip();
        ~Slip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay : public ydk::Entity
{
    public:
        FrameRelay();
        ~FrameRelay();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ietf; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay


class Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_FairQueueConf();
        ~CiscoIosXeInterfaces_FairQueueConf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fair_queue; //type: boolean

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf


class Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_FairQueue();
        ~CiscoIosXeInterfaces_FairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incomplete; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue


class Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_Flowcontrol();
        ~CiscoIosXeInterfaces_Flowcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: Receive
        ydk::YLeaf send; //type: Send
        class Receive;
        class Send;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_Isis();
        ~CiscoIosXeInterfaces_Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_interval; //type: uint32
        ydk::YLeaf mesh_group; //type: one of uint32, enumeration
        ydk::YLeaf network; //type: Network
        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf retransmit_interval; //type: uint16
        ydk::YLeaf retransmit_throttle_interval; //type: uint16
        ydk::YLeaf tag; //type: uint32
        class AdjacencyFilter; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::AdjacencyFilter
        class Advertise; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Advertise
        class Authentication; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication
        class CircuitType; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType
        class CsnpInterval; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval
        class Hello; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello
        class HelloInterval; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval
        class HelloMultiplier; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier
        class Ipv6; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6
        class Metric; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric
        class Password; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password
        class Priority; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority
        class ThreeWayHandshake; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::AdjacencyFilter> adjacency_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Advertise> advertise;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType> circuit_type; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval> csnp_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval> hello_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier> hello_multiplier;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric> metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority> priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake> three_way_handshake; // presence node
                class MeshGroup;
        class Network;
        class Protocol;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::AdjacencyFilter : public ydk::Entity
{
    public:
        AdjacencyFilter();
        ~AdjacencyFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf match_all; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::AdjacencyFilter


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Advertise


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mode; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode
        class KeyChain; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain
        class SendOnly; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly> send_only; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Md5; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5
        class Text; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5> md5; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text> text; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5 : public ydk::Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: AuthenticationLevelType

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text : public ydk::Entity
{
    public:
        Text();
        ~Text();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: AuthenticationLevelType

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class KeyChainList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList> > key_chain_list;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList : public ydk::Entity
{
    public:
        KeyChainList();
        ~KeyChainList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: AuthenticationLevelType
        ydk::YLeaf name; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly : public ydk::Entity
{
    public:
        SendOnly();
        ~SendOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: AuthenticationLevelType

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType : public ydk::Entity
{
    public:
        CircuitType();
        ~CircuitType();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        class Levels;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval : public ydk::Entity
{
    public:
        CsnpInterval();
        ~CsnpInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        class CsnpIntervalList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList> > csnp_interval_list;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList : public ydk::Entity
{
    public:
        CsnpIntervalList();
        ~CsnpIntervalList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: uint16
        class Levels;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello : public ydk::Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Padding; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding> padding; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding : public ydk::Entity
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

        ydk::YLeaf always; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval : public ydk::Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: one of enumeration, uint16
        class HelloIntervalList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList> > hello_interval_list;
                class Value_;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList : public ydk::Entity
{
    public:
        HelloIntervalList();
        ~HelloIntervalList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: one of enumeration, uint16
        class Levels;
        class Value_;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier : public ydk::Entity
{
    public:
        HelloMultiplier();
        ~HelloMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        class HelloMultiplierList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList> > hello_multiplier_list;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList : public ydk::Entity
{
    public:
        HelloMultiplierList();
        ~HelloMultiplierList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: uint16
        class Levels;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6 : public ydk::Entity
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

        ydk::YLeaf tag; //type: uint32
        class Metric; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric> metric;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: one of uint32, enumeration
        class MetricList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList> > metric_list;
                class Value_;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList : public ydk::Entity
{
    public:
        MetricList();
        ~MetricList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: one of uint32, enumeration
        class Levels;
        class Value_;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: one of uint32, enumeration
        class MetricList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList> > metric_list;
                class Value_;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList : public ydk::Entity
{
    public:
        MetricList();
        ~MetricList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: one of uint32, enumeration
        class Levels;
        class Value_;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password : public ydk::Entity
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

        ydk::YLeaf password; //type: string
        class PasswordList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList> > password_list;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList : public ydk::Entity
{
    public:
        PasswordList();
        ~PasswordList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf password; //type: string
        class Levels;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8
        class PriorityList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList> > priority_list;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList : public ydk::Entity
{
    public:
        PriorityList();
        ~PriorityList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: uint8
        class Levels;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake : public ydk::Entity
{
    public:
        ThreeWayHandshake();
        ~ThreeWayHandshake();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf implementor; //type: Implementor
        class Implementor;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake


class Native::Interface::Vlan::KeepaliveSettings : public ydk::Entity
{
    public:
        KeepaliveSettings();
        ~KeepaliveSettings();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Keepalive; //type: Native::Interface::Vlan::KeepaliveSettings::Keepalive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::Vlan::KeepaliveSettings


class Native::Interface::Vlan::KeepaliveSettings::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf period; //type: uint16
        ydk::YLeaf retries; //type: uint8

}; // Native::Interface::Vlan::KeepaliveSettings::Keepalive


class Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_Bfd();
        ~CiscoIosXeInterfaces_Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd


class Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_Bandwidth();
        ~CiscoIosXeInterfaces_Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qos_reference; //type: uint32
        ydk::YLeaf kilobits; //type: uint32
        class Receive; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive
        class Inherit; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit> inherit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive> receive;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth


class Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive : public ydk::Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inherit; //type: empty
        ydk::YLeaf kilobits; //type: uint32

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive


class Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit : public ydk::Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kilobits; //type: uint32

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit


class Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_Dampening();
        ~CiscoIosXeInterfaces_Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dampening_time; //type: uint16
        ydk::YLeaf start_reusing_time; //type: uint16
        ydk::YLeaf start_supressing_time; //type: uint16
        ydk::YLeaf maximum_supressing_time; //type: uint16
        class Restart; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart> restart;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening


class Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart : public ydk::Entity
{
    public:
        Restart();
        ~Restart();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restart; //type: empty
        ydk::YLeaf restart_penalty; //type: uint16

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart


class Native::Interface::Vlan::CiscoIosXeInterfaces_Domain : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_Domain();
        ~CiscoIosXeInterfaces_Domain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf internet_bound; //type: empty
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf path_last_resort; //type: empty
        ydk::YLeaf zero_sla; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Domain


class Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_HoldQueue();
        ~CiscoIosXeInterfaces_HoldQueue();

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
        ydk::YLeaf queue_length; //type: uint16
        class Direction;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue


class Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_Mpls();
        ~CiscoIosXeInterfaces_Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls


class Native::Interface::Vlan::IpVrf : public ydk::Entity
{
    public:
        IpVrf();
        ~IpVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Interface::Vlan::IpVrf::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf::Ip> ip;
        
}; // Native::Interface::Vlan::IpVrf


class Native::Interface::Vlan::IpVrf::Ip : public ydk::Entity
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

        class Vrf; //type: Native::Interface::Vlan::IpVrf::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::Vlan::IpVrf::Ip


class Native::Interface::Vlan::IpVrf::Ip::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarding; //type: string

}; // Native::Interface::Vlan::IpVrf::Ip::Vrf


class Native::Interface::Vlan::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarding; //type: string

}; // Native::Interface::Vlan::Vrf


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip : public ydk::Entity
{
    public:
        CiscoIosXeInterfaces_Ip();
        ~CiscoIosXeInterfaces_Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admission; //type: string
        ydk::YLeaf unnumbered; //type: string
        ydk::YLeaf directed_broadcast; //type: one of string, uint16
        ydk::YLeaf local_proxy_arp; //type: empty
        ydk::YLeaf proxy_arp; //type: boolean
        ydk::YLeaf redirects; //type: boolean
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf mroute_cache; //type: boolean
        class AccessGroup; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup
        class Arp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp
        class Vrf; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf
        class NoAddress; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress
        class Address; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address
        class HelloInterval; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval
        class Authentication; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication
        class HoldTime; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime
        class HelperAddress; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress
        class Pim; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim
        class Policy; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy
        class Rip; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Rip
        class RouteCacheConf; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf
        class RouteCache; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache
        class Router; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router
        class Tcp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp
        class VirtualReassembly; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly
        class Dhcp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp
        class SummaryAddress; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress
        class Verify; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify
        class Nbar; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup> access_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress> > helper_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime> hold_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar> nbar;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress> no_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim> pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Rip> rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache> route_cache; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf> route_cache_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router> router;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress> summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify> verify;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf> vrf;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class In; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In
        class Out; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In> in;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out> out;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommonAcl; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl> common_acl;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl : public ydk::Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common; //type: one of string, uint16
        ydk::YLeaf in; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: one of string, uint16
        ydk::YLeaf in; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommonAcl; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl> common_acl;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl : public ydk::Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common; //type: one of string, uint16
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: one of string, uint16
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp : public ydk::Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inspection; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection> inspection;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection : public ydk::Entity
{
    public:
        Inspection();
        ~Inspection();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trust; //type: empty
        class Limit; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

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
        ydk::YLeaf rate; //type: uint32

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: string
        ydk::YLeaf sitemap; //type: string
        class Forwarding; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding> forwarding;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding : public ydk::Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf liin_vrf; //type: empty
        ydk::YLeaf mgmtvrf; //type: empty
        ydk::YLeaf word; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress : public ydk::Entity
{
    public:
        NoAddress();
        ~NoAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: boolean

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf negotiated; //type: empty
        class Primary; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary
        class Secondary; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary
        class Dhcp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp> dhcp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary> primary;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary> > secondary;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary : public ydk::Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hostname; //type: string
        class ClientId; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId> client_id;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId : public ydk::Entity
{
    public:
        ClientId();
        ~ClientId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval : public ydk::Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf seconds; //type: uint16

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyChain; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain
        class Mode; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode> mode;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf name; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf md5; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf seconds; //type: uint16

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress : public ydk::Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf global; //type: empty
        ydk::YLeaf vrf; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim : public ydk::Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sparse_mode; //type: SparseMode
        ydk::YLeaf nbma_mode; //type: empty
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf spt_threshold; //type: SptThreshold
        class AcceptRegister; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister
        class QueryInterval; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister> accept_register;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval> query_interval;
                class SparseMode;
        class SptThreshold;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister : public ydk::Entity
{
    public:
        AcceptRegister();
        ~AcceptRegister();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf list; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval : public ydk::Entity
{
    public:
        QueryInterval();
        ~QueryInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds_interval; //type: uint16
        ydk::YLeaf milliseconds_interval; //type: uint16
        ydk::YLeaf msec; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authentication; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Rip::Authentication

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Rip::Authentication> authentication;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Rip


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Rip::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_chain; //type: string
        class Mode; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Rip::Authentication::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Rip::Authentication::Mode> mode;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Rip::Authentication


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Rip::Authentication::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf md5; //type: empty
        ydk::YLeaf text; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Rip::Authentication::Mode


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf : public ydk::Entity
{
    public:
        RouteCacheConf();
        ~RouteCacheConf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_cache; //type: boolean

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache : public ydk::Entity
{
    public:
        RouteCache();
        ~RouteCache();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cef; //type: boolean
        ydk::YLeaf flow; //type: boolean
        ydk::YLeaf policy; //type: boolean
        ydk::YLeaf same_interface; //type: boolean

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router : public ydk::Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Isis; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis> isis; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjust_mss; //type: uint16

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly : public ydk::Entity
{
    public:
        VirtualReassembly();
        ~VirtualReassembly();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_reassemblies; //type: uint32
        ydk::YLeaf max_fragments; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf drop_fragments; //type: empty
        ydk::YLeaf in; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Client; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client
        class Relay; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay
        class Snooping; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay> relay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping> snooping;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hostname; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay : public ydk::Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_interface; //type: string
        class Information; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information> information;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_action; //type: PolicyAction
        ydk::YLeaf trusted; //type: empty
        class CheckReply; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply
        class Option; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option
        class OptionInsert; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply> check_reply; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option> option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert> option_insert; // presence node
                class PolicyAction;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply : public ydk::Entity
{
    public:
        CheckReply();
        ~CheckReply();

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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber_id; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert : public ydk::Entity
{
    public:
        OptionInsert();
        ~OptionInsert();

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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert

class Native::Interface::Cellular::AccessSession::HostMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf multi_auth;
        static const ydk::Enum::YLeaf multi_domain;
        static const ydk::Enum::YLeaf multi_host;
        static const ydk::Enum::YLeaf single_host;

};

class Native::Interface::Cellular::Trust::Device : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_phone;
        static const ydk::Enum::YLeaf cts;
        static const ydk::Enum::YLeaf ip_camera;
        static const ydk::Enum::YLeaf media_player;

};

class Native::Interface::Vlan::IfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nhrp;

};

class Native::Interface::Vlan::ServiceInsertion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf waas;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::Failure : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::SecondaryDisable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::Kickin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::Kickout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::Receive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::Send : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::MeshGroup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf blocked;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Network : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf point_to_point;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf shutdown;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_1_2;
        static const ydk::Enum::YLeaf level_2_only;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf minimal;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf minimal;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake::Implementor : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf ietf;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::SparseMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sparse_dense_mode;
        static const ydk::Enum::YLeaf sparse_mode;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::SptThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf infinity;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::PolicyAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf encapsulate;
        static const ydk::Enum::YLeaf keep;
        static const ydk::Enum::YLeaf replace;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_56_ */

