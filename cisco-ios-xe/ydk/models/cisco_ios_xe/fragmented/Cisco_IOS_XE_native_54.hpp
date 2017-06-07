#ifndef _CISCO_IOS_XE_NATIVE_54_
#define _CISCO_IOS_XE_NATIVE_54_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_53.hpp"
#include "Cisco_IOS_XE_native_55.hpp"
#include "Cisco_IOS_XE_native_56.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Cellular::Standby::StandbyList::Timers : public Entity
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

        class HelloInterval; //type: Native::Interface::Cellular::Standby::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::Standby::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::Cellular::Standby::StandbyList::Timers


class Native::Interface::Cellular::Standby::StandbyList::Timers::HelloInterval : public Entity
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

}; // Native::Interface::Cellular::Standby::StandbyList::Timers::HelloInterval


class Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime : public Entity
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

}; // Native::Interface::Cellular::Standby::StandbyList::Timers::HoldTime


class Native::Interface::Cellular::Standby::StandbyList::Track : public Entity
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

}; // Native::Interface::Cellular::Standby::StandbyList::Track


class Native::Interface::Cellular::AccessSession : public Entity
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
        class PortControl; //type: Native::Interface::Cellular::AccessSession::PortControl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::AccessSession::PortControl> port_control;
                class HostModeEnum;

}; // Native::Interface::Cellular::AccessSession


class Native::Interface::Cellular::AccessSession::PortControl : public Entity
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

}; // Native::Interface::Cellular::AccessSession::PortControl


class Native::Interface::Cellular::StormControl : public Entity
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

        class Action; //type: Native::Interface::Cellular::StormControl::Action
        class Broadcast; //type: Native::Interface::Cellular::StormControl::Broadcast
        class Multicast; //type: Native::Interface::Cellular::StormControl::Multicast
        class Unicast; //type: Native::Interface::Cellular::StormControl::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Unicast> unicast;
        
}; // Native::Interface::Cellular::StormControl


class Native::Interface::Cellular::StormControl::Action : public Entity
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

}; // Native::Interface::Cellular::StormControl::Action


class Native::Interface::Cellular::StormControl::Broadcast : public Entity
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

        class Include; //type: Native::Interface::Cellular::StormControl::Broadcast::Include
        class Level; //type: Native::Interface::Cellular::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Broadcast::Include> include;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Broadcast::Level> level;
        
}; // Native::Interface::Cellular::StormControl::Broadcast


class Native::Interface::Cellular::StormControl::Broadcast::Include : public Entity
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

}; // Native::Interface::Cellular::StormControl::Broadcast::Include


class Native::Interface::Cellular::StormControl::Broadcast::Level : public Entity
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
        class Bps; //type: Native::Interface::Cellular::StormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::Cellular::StormControl::Broadcast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::Cellular::StormControl::Broadcast::Level


class Native::Interface::Cellular::StormControl::Broadcast::Level::Bps : public Entity
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

}; // Native::Interface::Cellular::StormControl::Broadcast::Level::Bps


class Native::Interface::Cellular::StormControl::Broadcast::Level::Pps : public Entity
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

}; // Native::Interface::Cellular::StormControl::Broadcast::Level::Pps


class Native::Interface::Cellular::StormControl::Multicast : public Entity
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

        class Level; //type: Native::Interface::Cellular::StormControl::Multicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Multicast::Level> level;
        
}; // Native::Interface::Cellular::StormControl::Multicast


class Native::Interface::Cellular::StormControl::Multicast::Level : public Entity
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
        class Bps; //type: Native::Interface::Cellular::StormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::Cellular::StormControl::Multicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::Cellular::StormControl::Multicast::Level


class Native::Interface::Cellular::StormControl::Multicast::Level::Bps : public Entity
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

}; // Native::Interface::Cellular::StormControl::Multicast::Level::Bps


class Native::Interface::Cellular::StormControl::Multicast::Level::Pps : public Entity
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

}; // Native::Interface::Cellular::StormControl::Multicast::Level::Pps


class Native::Interface::Cellular::StormControl::Unicast : public Entity
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

        class Level; //type: Native::Interface::Cellular::StormControl::Unicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Unicast::Level> level;
        
}; // Native::Interface::Cellular::StormControl::Unicast


class Native::Interface::Cellular::StormControl::Unicast::Level : public Entity
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

        class Threshold; //type: Native::Interface::Cellular::StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::Cellular::StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::Cellular::StormControl::Unicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Unicast::Level::Pps> pps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Unicast::Level::Threshold> threshold;
        
}; // Native::Interface::Cellular::StormControl::Unicast::Level


class Native::Interface::Cellular::StormControl::Unicast::Level::Threshold : public Entity
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

}; // Native::Interface::Cellular::StormControl::Unicast::Level::Threshold


class Native::Interface::Cellular::StormControl::Unicast::Level::Bps : public Entity
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

}; // Native::Interface::Cellular::StormControl::Unicast::Level::Bps


class Native::Interface::Cellular::StormControl::Unicast::Level::Pps : public Entity
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

}; // Native::Interface::Cellular::StormControl::Unicast::Level::Pps


class Native::Interface::Cellular::Trust : public Entity
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

}; // Native::Interface::Cellular::Trust


class Native::Interface::Cellular::Utd : public Entity
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

}; // Native::Interface::Cellular::Utd


class Native::Interface::Cellular::PriorityQueue : public Entity
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
        class CosMap; //type: Native::Interface::Cellular::PriorityQueue::CosMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::PriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::Cellular::PriorityQueue


class Native::Interface::Cellular::PriorityQueue::CosMap : public Entity
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

}; // Native::Interface::Cellular::PriorityQueue::CosMap


class Native::Interface::Cellular::RcvQueue : public Entity
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

        class CosMap; //type: Native::Interface::Cellular::RcvQueue::CosMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::RcvQueue::CosMap> > cos_map;
        
}; // Native::Interface::Cellular::RcvQueue


class Native::Interface::Cellular::RcvQueue::CosMap : public Entity
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

}; // Native::Interface::Cellular::RcvQueue::CosMap


class Native::Interface::Cellular::Peer : public Entity
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

        class Default_; //type: Native::Interface::Cellular::Peer::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::Peer::Default_> default_;
        
}; // Native::Interface::Cellular::Peer


class Native::Interface::Cellular::Peer::Default_ : public Entity
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

        class Ip; //type: Native::Interface::Cellular::Peer::Default_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::Peer::Default_::Ip> ip;
        
}; // Native::Interface::Cellular::Peer::Default_


class Native::Interface::Cellular::Peer::Default_::Ip : public Entity
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

        class Address; //type: Native::Interface::Cellular::Peer::Default_::Ip::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::Peer::Default_::Ip::Address> address;
        
}; // Native::Interface::Cellular::Peer::Default_::Ip


class Native::Interface::Cellular::Peer::Default_::Ip::Address : public Entity
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
        class DhcpPool; //type: Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::Cellular::Peer::Default_::Ip::Address


class Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool : public Entity
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

}; // Native::Interface::Cellular::Peer::Default_::Ip::Address::DhcpPool


class Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool : public Entity
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

}; // Native::Interface::Cellular::Peer::Default_::Ip::Address::Pool


class Native::Interface::Cellular::PmPath : public Entity
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

}; // Native::Interface::Cellular::PmPath


class Native::Interface::Vlan : public Entity
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

        YLeaf name; //type: uint16
        YLeaf cisco_ios_xe_interfaces_description; //type: string
        YLeaf cisco_ios_xe_interfaces_shutdown; //type: empty
        YLeaf keepalive; //type: boolean
        YLeaf cisco_ios_xe_interfaces_if_state; //type: IfStateEnum
        YLeaf cisco_ios_xe_interfaces_delay; //type: uint32
        YLeaf cisco_ios_xe_interfaces_load_interval; //type: uint16
        YLeaf cisco_ios_xe_interfaces_max_reserved_bandwidth; //type: uint8
        YLeaf cisco_ios_xe_interfaces_mtu; //type: uint16
        YLeaf cisco_ios_xe_interfaces_service_insertion; //type: ServiceInsertionEnum
        YLeaf cisco_ios_xe_interfaces_description_; //type: string
        YLeaf cisco_ios_xe_interfaces_shutdown_; //type: empty
        YLeaf keepalive_; //type: boolean
        YLeaf cisco_ios_xe_interfaces_if_state_; //type: IfStateEnum
        YLeaf cisco_ios_xe_interfaces_delay_; //type: uint32
        YLeaf cisco_ios_xe_interfaces_load_interval_; //type: uint16
        YLeaf cisco_ios_xe_interfaces_max_reserved_bandwidth_; //type: uint8
        YLeaf cisco_ios_xe_interfaces_mtu_; //type: uint16
        YLeaf cisco_ios_xe_interfaces_service_insertion_; //type: ServiceInsertionEnum
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
        class Glbp; //type: Native::Interface::Vlan::Glbp
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
        class ZoneMember; //type: Native::Interface::Vlan::ZoneMember

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession> cisco_ios_xe_interfaces_access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession> cisco_ios_xe_interfaces_access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Arp> cisco_ios_xe_interfaces_arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Arp> cisco_ios_xe_interfaces_arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup> cisco_ios_xe_interfaces_backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup> cisco_ios_xe_interfaces_backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth> cisco_ios_xe_interfaces_bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth> cisco_ios_xe_interfaces_bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd> cisco_ios_xe_interfaces_bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd> cisco_ios_xe_interfaces_bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp> cisco_ios_xe_interfaces_cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp> cisco_ios_xe_interfaces_cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel> cisco_ios_xe_interfaces_cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel> cisco_ios_xe_interfaces_cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening> cisco_ios_xe_interfaces_dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening> cisco_ios_xe_interfaces_dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Domain> cisco_ios_xe_interfaces_domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Domain> cisco_ios_xe_interfaces_domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation> cisco_ios_xe_interfaces_encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation> cisco_ios_xe_interfaces_encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue> cisco_ios_xe_interfaces_fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue> cisco_ios_xe_interfaces_fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf> cisco_ios_xe_interfaces_fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf> cisco_ios_xe_interfaces_fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol> cisco_ios_xe_interfaces_flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol> cisco_ios_xe_interfaces_flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue> cisco_ios_xe_interfaces_hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue> cisco_ios_xe_interfaces_hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos> cisco_ios_xe_interfaces_interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos> cisco_ios_xe_interfaces_interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip> cisco_ios_xe_interfaces_ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip> cisco_ios_xe_interfaces_ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6> cisco_ios_xe_interfaces_ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6> cisco_ios_xe_interfaces_ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis> cisco_ios_xe_interfaces_isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis> cisco_ios_xe_interfaces_isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel> cisco_ios_xe_interfaces_l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel> cisco_ios_xe_interfaces_l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Logging> cisco_ios_xe_interfaces_logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Logging> cisco_ios_xe_interfaces_logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix> cisco_ios_xe_interfaces_mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix> cisco_ios_xe_interfaces_mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Mop> cisco_ios_xe_interfaces_mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Mop> cisco_ios_xe_interfaces_mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls> cisco_ios_xe_interfaces_mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls> cisco_ios_xe_interfaces_mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Peer> cisco_ios_xe_interfaces_peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Peer> cisco_ios_xe_interfaces_peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath> cisco_ios_xe_interfaces_pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath> cisco_ios_xe_interfaces_pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue> cisco_ios_xe_interfaces_priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue> cisco_ios_xe_interfaces_priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue> cisco_ios_xe_interfaces_rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue> cisco_ios_xe_interfaces_rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby> cisco_ios_xe_interfaces_standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby> cisco_ios_xe_interfaces_standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl> cisco_ios_xe_interfaces_storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl> cisco_ios_xe_interfaces_storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport> cisco_ios_xe_interfaces_switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport> cisco_ios_xe_interfaces_switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf> cisco_ios_xe_interfaces_switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf> cisco_ios_xe_interfaces_switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Trust> cisco_ios_xe_interfaces_trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Trust> cisco_ios_xe_interfaces_trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Utd> cisco_ios_xe_interfaces_utd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Utd> cisco_ios_xe_interfaces_utd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Crypto> crypto;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Cts> cts;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp> glbp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::PrivateVlan> private_vlan;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Vrf> vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Vrf> vrf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Vrrp> > vrrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::ZoneMember> zone_member;
                class IfStateEnum;
        class ServiceInsertionEnum;
        class IfStateEnum;
        class ServiceInsertionEnum;

}; // Native::Interface::Vlan


class Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf : public Entity
{
    public:
        CiscoIosXeInterfaces_SwitchportConf();
        ~CiscoIosXeInterfaces_SwitchportConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switchport; //type: boolean

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf


class Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport : public Entity
{
    public:
        CiscoIosXeInterfaces_Switchport();
        ~CiscoIosXeInterfaces_Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport


class Native::Interface::Vlan::CiscoIosXeInterfaces_Arp : public Entity
{
    public:
        CiscoIosXeInterfaces_Arp();
        ~CiscoIosXeInterfaces_Arp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Arp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup : public Entity
{
    public:
        CiscoIosXeInterfaces_Backup();
        ~CiscoIosXeInterfaces_Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Delay; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay
        class Interface_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_
        class Load; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load> load;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Backup


class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay


class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_ : public Entity
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
        class AtmSubinterface; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_


class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface


class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface


class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface


class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface


class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load


class Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp : public Entity
{
    public:
        CiscoIosXeInterfaces_Cemoudp();
        ~CiscoIosXeInterfaces_Cemoudp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Reserve; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve> reserve;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve


class Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel : public Entity
{
    public:
        CiscoIosXeInterfaces_CwsTunnel();
        ~CiscoIosXeInterfaces_CwsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in; //type: empty
        class Out; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out> out;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel


class Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_CwsTunnel::Out


class Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel : public Entity
{
    public:
        CiscoIosXeInterfaces_L2ProtocolTunnel();
        ~CiscoIosXeInterfaces_L2ProtocolTunnel();

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
        class DropThreshold; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel


class Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::DropThreshold


class Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation : public Entity
{
    public:
        CiscoIosXeInterfaces_Encapsulation();
        ~CiscoIosXeInterfaces_Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Dot1Q


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Isl


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp : public Entity
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


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Ppp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip : public Entity
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


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::Slip


class Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Encapsulation::FrameRelay


class Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf : public Entity
{
    public:
        CiscoIosXeInterfaces_FairQueueConf();
        ~CiscoIosXeInterfaces_FairQueueConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fair_queue; //type: boolean

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueueConf


class Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue : public Entity
{
    public:
        CiscoIosXeInterfaces_FairQueue();
        ~CiscoIosXeInterfaces_FairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incomplete; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_FairQueue


class Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol : public Entity
{
    public:
        CiscoIosXeInterfaces_Flowcontrol();
        ~CiscoIosXeInterfaces_Flowcontrol();

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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis : public Entity
{
    public:
        CiscoIosXeInterfaces_Isis();
        ~CiscoIosXeInterfaces_Isis();

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
                class MeshGroupEnum;
        class NetworkEnum;
        class ProtocolEnum;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::AdjacencyFilter : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::AdjacencyFilter


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Advertise : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Advertise


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication : public Entity
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

        class Mode; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode
        class KeyChain; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain
        class SendOnly; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly> send_only; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode : public Entity
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

        class Md5; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5
        class Text; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5> md5; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text> text; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5 : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Md5


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::Mode::Text


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain : public Entity
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
        class KeyChainList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList> > key_chain_list;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::KeyChain::KeyChainList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Authentication::SendOnly


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval : public Entity
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
        class CsnpIntervalList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList> > csnp_interval_list;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello : public Entity
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

        class Padding; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding> padding; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Hello::Padding


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval : public Entity
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
        class HelloIntervalList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList> > hello_interval_list;
                class ValueEnum;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier : public Entity
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
        class HelloMultiplierList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList> > hello_multiplier_list;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6 : public Entity
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
        class Metric; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric> metric;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric : public Entity
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
        class MetricList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList> > metric_list;
                class ValueEnum;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric : public Entity
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
        class MetricList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList> > metric_list;
                class ValueEnum;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password : public Entity
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
        class PasswordList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList> > password_list;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority : public Entity
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

        YLeaf value_; //type: uint8
        class PriorityList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList> > priority_list;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList : public Entity
{
    public:
        PriorityList();
        ~PriorityList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: uint8
        class LevelsEnum;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake : public Entity
{
    public:
        ThreeWayHandshake();
        ~ThreeWayHandshake();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf implementor; //type: ImplementorEnum
        class ImplementorEnum;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake


class Native::Interface::Vlan::KeepaliveSettings : public Entity
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

        class Keepalive; //type: Native::Interface::Vlan::KeepaliveSettings::Keepalive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::Vlan::KeepaliveSettings


class Native::Interface::Vlan::KeepaliveSettings::Keepalive : public Entity
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

}; // Native::Interface::Vlan::KeepaliveSettings::Keepalive


class Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd : public Entity
{
    public:
        CiscoIosXeInterfaces_Bfd();
        ~CiscoIosXeInterfaces_Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Bfd


class Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth : public Entity
{
    public:
        CiscoIosXeInterfaces_Bandwidth();
        ~CiscoIosXeInterfaces_Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qos_reference; //type: uint32
        YLeaf kilobits; //type: uint32
        class Receive; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive
        class Inherit; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit> inherit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive> receive;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth


class Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Receive


class Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Bandwidth::Inherit


class Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening : public Entity
{
    public:
        CiscoIosXeInterfaces_Dampening();
        ~CiscoIosXeInterfaces_Dampening();

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
        class Restart; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart> restart;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening


class Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart : public Entity
{
    public:
        Restart();
        ~Restart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf restart; //type: empty
        YLeaf restart_penalty; //type: uint16

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Dampening::Restart


class Native::Interface::Vlan::CiscoIosXeInterfaces_Domain : public Entity
{
    public:
        CiscoIosXeInterfaces_Domain();
        ~CiscoIosXeInterfaces_Domain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf path; //type: string
        YLeaf internet_bound; //type: empty
        YLeaf path_id; //type: uint8
        YLeaf path_last_resort; //type: empty
        YLeaf zero_sla; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Domain


class Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue : public Entity
{
    public:
        CiscoIosXeInterfaces_HoldQueue();
        ~CiscoIosXeInterfaces_HoldQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queue_length; //type: uint16
        YLeaf direction; //type: DirectionEnum
        class DirectionEnum;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue


class Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls : public Entity
{
    public:
        CiscoIosXeInterfaces_Mpls();
        ~CiscoIosXeInterfaces_Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Mpls


class Native::Interface::Vlan::IpVrf : public Entity
{
    public:
        IpVrf();
        ~IpVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Interface::Vlan::IpVrf::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf::Ip> ip;
        
}; // Native::Interface::Vlan::IpVrf


class Native::Interface::Vlan::IpVrf::Ip : public Entity
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

        class Vrf; //type: Native::Interface::Vlan::IpVrf::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::Vlan::IpVrf::Ip


class Native::Interface::Vlan::IpVrf::Ip::Vrf : public Entity
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

        YLeaf forwarding; //type: string

}; // Native::Interface::Vlan::IpVrf::Ip::Vrf


class Native::Interface::Vlan::Vrf : public Entity
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

        YLeaf forwarding; //type: string

}; // Native::Interface::Vlan::Vrf


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip : public Entity
{
    public:
        CiscoIosXeInterfaces_Ip();
        ~CiscoIosXeInterfaces_Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf admission; //type: string
        YLeaf unnumbered; //type: string
        YLeaf directed_broadcast; //type: one of uint16, string
        YLeaf local_proxy_arp; //type: empty
        YLeaf proxy_arp; //type: boolean
        YLeaf redirects; //type: boolean
        YLeaf mtu; //type: uint16
        YLeaf mroute_cache; //type: boolean
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
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache> route_cache; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf> route_cache_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router> router;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress> summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify> verify;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf> vrf;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup : public Entity
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

        class In; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In
        class Out; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In> in;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out> out;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In : public Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommonAcl; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl> common_acl;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl : public Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common; //type: one of uint16, string
        YLeaf in; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::CommonAcl


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl : public Entity
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

        YLeaf acl_name; //type: one of uint16, string
        YLeaf in; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::In::Acl


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out : public Entity
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

        class CommonAcl; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl> common_acl;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl : public Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common; //type: one of uint16, string
        YLeaf out; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::CommonAcl


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl : public Entity
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

        YLeaf acl_name; //type: one of uint16, string
        YLeaf out; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::AccessGroup::Out::Acl


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp : public Entity
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

        class Inspection; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection> inspection;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection : public Entity
{
    public:
        Inspection();
        ~Inspection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trust; //type: empty
        class Limit; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty
        YLeaf rate; //type: uint32

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Arp::Inspection::Limit


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf : public Entity
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

        YLeaf receive; //type: string
        YLeaf sitemap; //type: string
        class Forwarding; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding> forwarding;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding : public Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf liin_vrf; //type: empty
        YLeaf mgmtvrf; //type: empty
        YLeaf word; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Vrf::Forwarding


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress : public Entity
{
    public:
        NoAddress();
        ~NoAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: boolean

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::NoAddress


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address : public Entity
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

        YLeaf negotiated; //type: empty
        class Primary; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary
        class Secondary; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary
        class Dhcp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp> dhcp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary> primary;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary> > secondary;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary : public Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Primary


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary : public Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string
        YLeaf secondary; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Secondary


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp : public Entity
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

        YLeaf hostname; //type: string
        class ClientId; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId> client_id;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId : public Entity
{
    public:
        ClientId();
        ~ClientId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf port_channel; //type: uint32
        YLeaf tengigabitethernet; //type: string
        YLeaf fortygigabitethernet; //type: string
        YLeaf vlan; //type: uint16

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Address::Dhcp::ClientId


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval : public Entity
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

        YLeaf eigrp; //type: uint16
        YLeaf seconds; //type: uint16

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelloInterval


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication : public Entity
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

        class KeyChain; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain
        class Mode; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode> mode;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain : public Entity
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

        YLeaf eigrp; //type: uint16
        YLeaf name; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::KeyChain


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode : public Entity
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

        YLeaf eigrp; //type: uint16
        YLeaf md5; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Authentication::Mode


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime : public Entity
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

        YLeaf eigrp; //type: uint16
        YLeaf seconds; //type: uint16

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HoldTime


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress : public Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf global; //type: empty
        YLeaf vrf; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::HelperAddress


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim : public Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sparse_mode; //type: SparseModeEnum
        YLeaf nbma_mode; //type: empty
        YLeaf dr_priority; //type: uint32
        YLeaf spt_threshold; //type: SptThresholdEnum
        class AcceptRegister; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister
        class QueryInterval; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister> accept_register;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval> query_interval;
                class SparseModeEnum;
        class SptThresholdEnum;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister : public Entity
{
    public:
        AcceptRegister();
        ~AcceptRegister();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::AcceptRegister


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval : public Entity
{
    public:
        QueryInterval();
        ~QueryInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds_interval; //type: uint16
        YLeaf milliseconds_interval; //type: uint16
        YLeaf msec; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::QueryInterval


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy : public Entity
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

        YLeaf route_map; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Policy


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf : public Entity
{
    public:
        RouteCacheConf();
        ~RouteCacheConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_cache; //type: boolean

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCacheConf


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache : public Entity
{
    public:
        RouteCache();
        ~RouteCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cef; //type: boolean
        YLeaf flow; //type: boolean
        YLeaf policy; //type: boolean
        YLeaf same_interface; //type: boolean

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::RouteCache


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router : public Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Isis; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis> isis; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis : public Entity
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

        YLeaf tag; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Router::Isis


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp : public Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adjust_mss; //type: uint16

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Tcp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly : public Entity
{
    public:
        VirtualReassembly();
        ~VirtualReassembly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_reassemblies; //type: uint32
        YLeaf max_fragments; //type: uint32
        YLeaf timeout; //type: uint32
        YLeaf drop_fragments; //type: empty
        YLeaf in; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::VirtualReassembly


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp : public Entity
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

        class Client; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client
        class Relay; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay
        class Snooping; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay> relay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping> snooping;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hostname; //type: string

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Client


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay : public Entity
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

        YLeaf source_interface; //type: string
        class Information; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information> information;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information : public Entity
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

        YLeaf policy_action; //type: PolicyActionEnum
        YLeaf trusted; //type: empty
        class CheckReply; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply
        class Option; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option
        class OptionInsert; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply> check_reply; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option> option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert> option_insert; // presence node
                class PolicyActionEnum;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply : public Entity
{
    public:
        CheckReply();
        ~CheckReply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::CheckReply


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::Option


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert : public Entity
{
    public:
        OptionInsert();
        ~OptionInsert();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::OptionInsert


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping : public Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trust; //type: empty
        class Limit; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Limit
        class Vlan_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Limit> limit;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_> > vlan;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping

class Native::Interface::Cellular::AccessSession::HostModeEnum : public Enum
{
    public:
        static const Enum::YLeaf multi_auth;
        static const Enum::YLeaf multi_domain;
        static const Enum::YLeaf multi_host;
        static const Enum::YLeaf single_host;

};

class Native::Interface::Cellular::Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;
        static const Enum::YLeaf cts;
        static const Enum::YLeaf ip_camera;
        static const Enum::YLeaf media_player;

};

class Native::Interface::Vlan::IfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nhrp;

};

class Native::Interface::Vlan::ServiceInsertionEnum : public Enum
{
    public:
        static const Enum::YLeaf waas;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::FailureEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::SecondaryDisableEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::KickinEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::KickoutEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::ReceiveEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Flowcontrol::SendEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::MeshGroupEnum : public Enum
{
    public:
        static const Enum::YLeaf blocked;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::NetworkEnum : public Enum
{
    public:
        static const Enum::YLeaf point_to_point;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf shutdown;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CircuitType::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_1_2;
        static const Enum::YLeaf level_2_only;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::CsnpInterval::CsnpIntervalList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf minimal;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloInterval::HelloIntervalList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf minimal;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::HelloMultiplier::HelloMultiplierList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Ipv6::Metric::MetricList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Metric::MetricList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Password::PasswordList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::Priority::PriorityList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Isis::ThreeWayHandshake::ImplementorEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco;
        static const Enum::YLeaf ietf;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_HoldQueue::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::SparseModeEnum : public Enum
{
    public:
        static const Enum::YLeaf sparse_dense_mode;
        static const Enum::YLeaf sparse_mode;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Pim::SptThresholdEnum : public Enum
{
    public:
        static const Enum::YLeaf infinity;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Relay::Information::PolicyActionEnum : public Enum
{
    public:
        static const Enum::YLeaf drop;
        static const Enum::YLeaf encapsulate;
        static const Enum::YLeaf keep;
        static const Enum::YLeaf replace;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_54_ */

