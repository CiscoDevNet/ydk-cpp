#ifndef _CISCO_IOS_XE_NATIVE_32_
#define _CISCO_IOS_XE_NATIVE_32_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_31.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Tengigabitethernet::Isis::Hello::Padding : public Entity
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

}; // Native::Interface::Tengigabitethernet::Isis::Hello::Padding


class Native::Interface::Tengigabitethernet::Isis::HelloInterval : public Entity
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
        class HelloIntervalList; //type: Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList> > hello_interval_list;
                class ValueEnum;

}; // Native::Interface::Tengigabitethernet::Isis::HelloInterval


class Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList : public Entity
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

}; // Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList


class Native::Interface::Tengigabitethernet::Isis::HelloMultiplier : public Entity
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
        class HelloMultiplierList; //type: Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplierList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplierList> > hello_multiplier_list;
        
}; // Native::Interface::Tengigabitethernet::Isis::HelloMultiplier


class Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplierList : public Entity
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

}; // Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplierList


class Native::Interface::Tengigabitethernet::Isis::Ipv6 : public Entity
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
        class Metric; //type: Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric> metric;
        
}; // Native::Interface::Tengigabitethernet::Isis::Ipv6


class Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric : public Entity
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
        class MetricList; //type: Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList> > metric_list;
                class ValueEnum;

}; // Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric


class Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList : public Entity
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

}; // Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList


class Native::Interface::Tengigabitethernet::Isis::Metric : public Entity
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
        class MetricList; //type: Native::Interface::Tengigabitethernet::Isis::Metric::MetricList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Metric::MetricList> > metric_list;
                class ValueEnum;

}; // Native::Interface::Tengigabitethernet::Isis::Metric


class Native::Interface::Tengigabitethernet::Isis::Metric::MetricList : public Entity
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

}; // Native::Interface::Tengigabitethernet::Isis::Metric::MetricList


class Native::Interface::Tengigabitethernet::Isis::Password : public Entity
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
        class PasswordList; //type: Native::Interface::Tengigabitethernet::Isis::Password::PasswordList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Password::PasswordList> > password_list;
        
}; // Native::Interface::Tengigabitethernet::Isis::Password


class Native::Interface::Tengigabitethernet::Isis::Password::PasswordList : public Entity
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

}; // Native::Interface::Tengigabitethernet::Isis::Password::PasswordList


class Native::Interface::Tengigabitethernet::Isis::Priority : public Entity
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
        class PriorityList; //type: Native::Interface::Tengigabitethernet::Isis::Priority::PriorityList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Priority::PriorityList> > priority_list;
        
}; // Native::Interface::Tengigabitethernet::Isis::Priority


class Native::Interface::Tengigabitethernet::Isis::Priority::PriorityList : public Entity
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

}; // Native::Interface::Tengigabitethernet::Isis::Priority::PriorityList


class Native::Interface::Tengigabitethernet::Isis::ThreeWayHandshake : public Entity
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

}; // Native::Interface::Tengigabitethernet::Isis::ThreeWayHandshake


class Native::Interface::Tengigabitethernet::KeepaliveSettings : public Entity
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

        class Keepalive; //type: Native::Interface::Tengigabitethernet::KeepaliveSettings::Keepalive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::Tengigabitethernet::KeepaliveSettings


class Native::Interface::Tengigabitethernet::KeepaliveSettings::Keepalive : public Entity
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

}; // Native::Interface::Tengigabitethernet::KeepaliveSettings::Keepalive


class Native::Interface::Tengigabitethernet::Bfd : public Entity
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

        YLeaf template_; //type: string
        YLeaf echo; //type: boolean
        class Interval; //type: Native::Interface::Tengigabitethernet::Bfd::Interval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Bfd::Interval> interval;
        
}; // Native::Interface::Tengigabitethernet::Bfd


class Native::Interface::Tengigabitethernet::Bfd::Interval : public Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf msecs; //type: uint16
        YLeaf min_rx; //type: uint16
        YLeaf multiplier; //type: uint8

}; // Native::Interface::Tengigabitethernet::Bfd::Interval


class Native::Interface::Tengigabitethernet::Bandwidth : public Entity
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
        class Receive; //type: Native::Interface::Tengigabitethernet::Bandwidth::Receive
        class Inherit; //type: Native::Interface::Tengigabitethernet::Bandwidth::Inherit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Bandwidth::Inherit> inherit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Bandwidth::Receive> receive;
        
}; // Native::Interface::Tengigabitethernet::Bandwidth


class Native::Interface::Tengigabitethernet::Bandwidth::Receive : public Entity
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

}; // Native::Interface::Tengigabitethernet::Bandwidth::Receive


class Native::Interface::Tengigabitethernet::Bandwidth::Inherit : public Entity
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

}; // Native::Interface::Tengigabitethernet::Bandwidth::Inherit


class Native::Interface::Tengigabitethernet::Dampening : public Entity
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
        class Restart; //type: Native::Interface::Tengigabitethernet::Dampening::Restart

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Dampening::Restart> restart;
        
}; // Native::Interface::Tengigabitethernet::Dampening


class Native::Interface::Tengigabitethernet::Dampening::Restart : public Entity
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

}; // Native::Interface::Tengigabitethernet::Dampening::Restart


class Native::Interface::Tengigabitethernet::Domain : public Entity
{
    public:
        Domain();
        ~Domain();

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

}; // Native::Interface::Tengigabitethernet::Domain


class Native::Interface::Tengigabitethernet::HoldQueue : public Entity
{
    public:
        HoldQueue();
        ~HoldQueue();

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

}; // Native::Interface::Tengigabitethernet::HoldQueue


class Native::Interface::Tengigabitethernet::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: empty
        YLeaf mtu; //type: uint16
        class Accounting; //type: Native::Interface::Tengigabitethernet::Mpls::Accounting
        class Bgp; //type: Native::Interface::Tengigabitethernet::Mpls::Bgp
        class Label; //type: Native::Interface::Tengigabitethernet::Mpls::Label
        class Ldp; //type: Native::Interface::Tengigabitethernet::Mpls::Ldp
        class TrafficEng; //type: Native::Interface::Tengigabitethernet::Mpls::TrafficEng

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Mpls::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Mpls::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Mpls::Label> label;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Mpls::Ldp> ldp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Mpls::TrafficEng> traffic_eng;
        
}; // Native::Interface::Tengigabitethernet::Mpls


class Native::Interface::Tengigabitethernet::Mpls::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Experimental; //type: Native::Interface::Tengigabitethernet::Mpls::Accounting::Experimental

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Mpls::Accounting::Experimental> experimental;
        
}; // Native::Interface::Tengigabitethernet::Mpls::Accounting


class Native::Interface::Tengigabitethernet::Mpls::Accounting::Experimental : public Entity
{
    public:
        Experimental();
        ~Experimental();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf input; //type: empty
        YLeaf output; //type: empty

}; // Native::Interface::Tengigabitethernet::Mpls::Accounting::Experimental


class Native::Interface::Tengigabitethernet::Mpls::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forwarding; //type: empty

}; // Native::Interface::Tengigabitethernet::Mpls::Bgp


class Native::Interface::Tengigabitethernet::Mpls::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: ProtocolEnum
        class ProtocolEnum;

}; // Native::Interface::Tengigabitethernet::Mpls::Label


class Native::Interface::Tengigabitethernet::Mpls::Ldp : public Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Discovery; //type: Native::Interface::Tengigabitethernet::Mpls::Ldp::Discovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Mpls::Ldp::Discovery> discovery;
        
}; // Native::Interface::Tengigabitethernet::Mpls::Ldp


class Native::Interface::Tengigabitethernet::Mpls::Ldp::Discovery : public Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transport_address; //type: one of string, enumeration

}; // Native::Interface::Tengigabitethernet::Mpls::Ldp::Discovery


class Native::Interface::Tengigabitethernet::Mpls::TrafficEng : public Entity
{
    public:
        TrafficEng();
        ~TrafficEng();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf administrative_weight; //type: uint32
        YLeaf attribute_flags; //type: string
        YLeaf backup_path; //type: string
        YLeaf tunnels; //type: empty
        class Flooding; //type: Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding> flooding;
        
}; // Native::Interface::Tengigabitethernet::Mpls::TrafficEng


class Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding : public Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Thresholds; //type: Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::Thresholds

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::Thresholds> thresholds;
        
}; // Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding


class Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::Thresholds : public Entity
{
    public:
        Thresholds();
        ~Thresholds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList down; //type: list of  uint8
        YLeafList up; //type: list of  uint8

}; // Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::Thresholds


class Native::Interface::Tengigabitethernet::IpVrf : public Entity
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

        class Ip; //type: Native::Interface::Tengigabitethernet::IpVrf::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::IpVrf::Ip> ip;
        
}; // Native::Interface::Tengigabitethernet::IpVrf


class Native::Interface::Tengigabitethernet::IpVrf::Ip : public Entity
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

        class Vrf; //type: Native::Interface::Tengigabitethernet::IpVrf::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::Tengigabitethernet::IpVrf::Ip


class Native::Interface::Tengigabitethernet::IpVrf::Ip::Vrf : public Entity
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

}; // Native::Interface::Tengigabitethernet::IpVrf::Ip::Vrf


class Native::Interface::Tengigabitethernet::Vrf : public Entity
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

}; // Native::Interface::Tengigabitethernet::Vrf


class Native::Interface::Tengigabitethernet::Ip : public Entity
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

        YLeaf admission; //type: string
        YLeaf unnumbered; //type: string
        YLeaf directed_broadcast; //type: one of uint16, string
        YLeaf local_proxy_arp; //type: empty
        YLeaf proxy_arp; //type: boolean
        YLeaf redirects; //type: boolean
        YLeaf mtu; //type: uint16
        YLeaf mroute_cache; //type: boolean
        YLeaf unreachables; //type: boolean
        class AccessGroup; //type: Native::Interface::Tengigabitethernet::Ip::AccessGroup
        class Arp; //type: Native::Interface::Tengigabitethernet::Ip::Arp
        class Vrf; //type: Native::Interface::Tengigabitethernet::Ip::Vrf
        class NoAddress; //type: Native::Interface::Tengigabitethernet::Ip::NoAddress
        class Address; //type: Native::Interface::Tengigabitethernet::Ip::Address
        class HelloInterval; //type: Native::Interface::Tengigabitethernet::Ip::HelloInterval
        class Authentication; //type: Native::Interface::Tengigabitethernet::Ip::Authentication
        class HoldTime; //type: Native::Interface::Tengigabitethernet::Ip::HoldTime
        class HelperAddress; //type: Native::Interface::Tengigabitethernet::Ip::HelperAddress
        class Pim; //type: Native::Interface::Tengigabitethernet::Ip::Pim
        class Policy; //type: Native::Interface::Tengigabitethernet::Ip::Policy
        class RouteCacheConf; //type: Native::Interface::Tengigabitethernet::Ip::RouteCacheConf
        class RouteCache; //type: Native::Interface::Tengigabitethernet::Ip::RouteCache
        class Router; //type: Native::Interface::Tengigabitethernet::Ip::Router
        class Tcp; //type: Native::Interface::Tengigabitethernet::Ip::Tcp
        class VirtualReassembly; //type: Native::Interface::Tengigabitethernet::Ip::VirtualReassembly
        class Dhcp; //type: Native::Interface::Tengigabitethernet::Ip::Dhcp
        class SummaryAddress; //type: Native::Interface::Tengigabitethernet::Ip::SummaryAddress
        class Verify; //type: Native::Interface::Tengigabitethernet::Ip::Verify
        class Flow; //type: Native::Interface::Tengigabitethernet::Ip::Flow
        class Igmp; //type: Native::Interface::Tengigabitethernet::Ip::Igmp
        class Lisp; //type: Native::Interface::Tengigabitethernet::Ip::Lisp
        class Nat; //type: Native::Interface::Tengigabitethernet::Ip::Nat
        class Nbar; //type: Native::Interface::Tengigabitethernet::Ip::Nbar
        class Ospf; //type: Native::Interface::Tengigabitethernet::Ip::Ospf
        class Wccp; //type: Native::Interface::Tengigabitethernet::Ip::Wccp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::AccessGroup> access_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Flow> flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::HelperAddress> > helper_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::HoldTime> hold_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Nat> nat;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Nbar> nbar;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::NoAddress> no_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf> ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Pim> pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::RouteCache> route_cache; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::RouteCacheConf> route_cache_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Router> router;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::SummaryAddress> summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Verify> verify;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Vrf> vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Wccp> wccp;
        
}; // Native::Interface::Tengigabitethernet::Ip


class Native::Interface::Tengigabitethernet::Ip::AccessGroup : public Entity
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

        class In; //type: Native::Interface::Tengigabitethernet::Ip::AccessGroup::In
        class Out; //type: Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::AccessGroup::In> in;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out> out;
        
}; // Native::Interface::Tengigabitethernet::Ip::AccessGroup


class Native::Interface::Tengigabitethernet::Ip::AccessGroup::In : public Entity
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

        class CommonAcl; //type: Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::CommonAcl> common_acl;
        
}; // Native::Interface::Tengigabitethernet::Ip::AccessGroup::In


class Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::CommonAcl : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::CommonAcl


class Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::Acl : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::Acl


class Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out : public Entity
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

        class CommonAcl; //type: Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::CommonAcl> common_acl;
        
}; // Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out


class Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::CommonAcl : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::CommonAcl


class Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::Acl : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::Acl


class Native::Interface::Tengigabitethernet::Ip::Arp : public Entity
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

        class Inspection; //type: Native::Interface::Tengigabitethernet::Ip::Arp::Inspection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Arp::Inspection> inspection;
        
}; // Native::Interface::Tengigabitethernet::Ip::Arp


class Native::Interface::Tengigabitethernet::Ip::Arp::Inspection : public Entity
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
        class Limit; //type: Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::Tengigabitethernet::Ip::Arp::Inspection


class Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::Limit : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::Limit


class Native::Interface::Tengigabitethernet::Ip::Vrf : public Entity
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
        class Forwarding; //type: Native::Interface::Tengigabitethernet::Ip::Vrf::Forwarding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Vrf::Forwarding> forwarding;
        
}; // Native::Interface::Tengigabitethernet::Ip::Vrf


class Native::Interface::Tengigabitethernet::Ip::Vrf::Forwarding : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::Vrf::Forwarding


class Native::Interface::Tengigabitethernet::Ip::NoAddress : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::NoAddress


class Native::Interface::Tengigabitethernet::Ip::Address : public Entity
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
        class Primary; //type: Native::Interface::Tengigabitethernet::Ip::Address::Primary
        class Secondary; //type: Native::Interface::Tengigabitethernet::Ip::Address::Secondary
        class Dhcp; //type: Native::Interface::Tengigabitethernet::Ip::Address::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Address::Dhcp> dhcp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Address::Primary> primary;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Address::Secondary> > secondary;
        
}; // Native::Interface::Tengigabitethernet::Ip::Address


class Native::Interface::Tengigabitethernet::Ip::Address::Primary : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::Address::Primary


class Native::Interface::Tengigabitethernet::Ip::Address::Secondary : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::Address::Secondary


class Native::Interface::Tengigabitethernet::Ip::Address::Dhcp : public Entity
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
        class ClientId; //type: Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::ClientId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::ClientId> client_id;
        
}; // Native::Interface::Tengigabitethernet::Ip::Address::Dhcp


class Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::ClientId : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::ClientId


class Native::Interface::Tengigabitethernet::Ip::HelloInterval : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::HelloInterval


class Native::Interface::Tengigabitethernet::Ip::Authentication : public Entity
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

        class KeyChain; //type: Native::Interface::Tengigabitethernet::Ip::Authentication::KeyChain
        class Mode; //type: Native::Interface::Tengigabitethernet::Ip::Authentication::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Authentication::Mode> mode;
        
}; // Native::Interface::Tengigabitethernet::Ip::Authentication


class Native::Interface::Tengigabitethernet::Ip::Authentication::KeyChain : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::Authentication::KeyChain


class Native::Interface::Tengigabitethernet::Ip::Authentication::Mode : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::Authentication::Mode


class Native::Interface::Tengigabitethernet::Ip::HoldTime : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::HoldTime


class Native::Interface::Tengigabitethernet::Ip::HelperAddress : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::HelperAddress


class Native::Interface::Tengigabitethernet::Ip::Pim : public Entity
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
        class AcceptRegister; //type: Native::Interface::Tengigabitethernet::Ip::Pim::AcceptRegister
        class QueryInterval; //type: Native::Interface::Tengigabitethernet::Ip::Pim::QueryInterval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Pim::AcceptRegister> accept_register;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Pim::QueryInterval> query_interval;
                class SparseModeEnum;
        class SptThresholdEnum;

}; // Native::Interface::Tengigabitethernet::Ip::Pim


class Native::Interface::Tengigabitethernet::Ip::Pim::AcceptRegister : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::Pim::AcceptRegister


class Native::Interface::Tengigabitethernet::Ip::Pim::QueryInterval : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::Pim::QueryInterval


class Native::Interface::Tengigabitethernet::Ip::Policy : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::Policy


class Native::Interface::Tengigabitethernet::Ip::RouteCacheConf : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::RouteCacheConf


class Native::Interface::Tengigabitethernet::Ip::RouteCache : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::RouteCache


class Native::Interface::Tengigabitethernet::Ip::Router : public Entity
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

        class Isis; //type: Native::Interface::Tengigabitethernet::Ip::Router::Isis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Router::Isis> isis; // presence node
        
}; // Native::Interface::Tengigabitethernet::Ip::Router


class Native::Interface::Tengigabitethernet::Ip::Router::Isis : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::Router::Isis


class Native::Interface::Tengigabitethernet::Ip::Tcp : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::Tcp


class Native::Interface::Tengigabitethernet::Ip::VirtualReassembly : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::VirtualReassembly


class Native::Interface::Tengigabitethernet::Ip::Dhcp : public Entity
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

        class Client; //type: Native::Interface::Tengigabitethernet::Ip::Dhcp::Client
        class Relay; //type: Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay
        class Snooping; //type: Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Dhcp::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay> relay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Interface::Tengigabitethernet::Ip::Dhcp


class Native::Interface::Tengigabitethernet::Ip::Dhcp::Client : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::Dhcp::Client


class Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay : public Entity
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
        class Information; //type: Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information> information;
        
}; // Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay


class Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information : public Entity
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
        class CheckReply; //type: Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::CheckReply
        class Option; //type: Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::Option
        class OptionInsert; //type: Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::CheckReply> check_reply; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::Option> option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert> option_insert; // presence node
                class PolicyActionEnum;

}; // Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information


class Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::CheckReply : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::CheckReply


class Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::Option : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::Option


class Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert


class Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping : public Entity
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
        class Limit; //type: Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Limit
        class Vlan; //type: Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Limit> limit;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan> > vlan;
        
}; // Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping


class Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Limit : public Entity
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

        YLeaf rate; //type: uint16

}; // Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Limit


class Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan : public Entity
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

        YLeaf id; //type: uint16
        class Information; //type: Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information> information;
        
}; // Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan


class Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information : public Entity
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

        class Option; //type: Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option> option;
        
}; // Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information


class Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option : public Entity
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

        class FormatType; //type: Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType> format_type;
        
}; // Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option


class Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType : public Entity
{
    public:
        FormatType();
        ~FormatType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CircuitId; //type: Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId> circuit_id;
        
}; // Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType


class Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId : public Entity
{
    public:
        CircuitId();
        ~CircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf string; //type: string

}; // Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId


class Native::Interface::Tengigabitethernet::Ip::SummaryAddress : public Entity
{
    public:
        SummaryAddress();
        ~SummaryAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Eigrp; //type: Native::Interface::Tengigabitethernet::Ip::SummaryAddress::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::SummaryAddress::Eigrp> > eigrp;
        
}; // Native::Interface::Tengigabitethernet::Ip::SummaryAddress


class Native::Interface::Tengigabitethernet::Ip::SummaryAddress::Eigrp : public Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf ip; //type: string
        YLeaf mask; //type: string
        YLeaf metric; //type: uint32

}; // Native::Interface::Tengigabitethernet::Ip::SummaryAddress::Eigrp


class Native::Interface::Tengigabitethernet::Ip::Verify : public Entity
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

        class Source; //type: Native::Interface::Tengigabitethernet::Ip::Verify::Source
        class Unicast; //type: Native::Interface::Tengigabitethernet::Ip::Verify::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Verify::Source> source; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Verify::Unicast> unicast;
        
}; // Native::Interface::Tengigabitethernet::Ip::Verify


class Native::Interface::Tengigabitethernet::Ip::Verify::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan> vlan;
        
}; // Native::Interface::Tengigabitethernet::Ip::Verify::Source


class Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan : public Entity
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

        class DhcpSnooping; //type: Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping> dhcp_snooping; // presence node
        
}; // Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan


class Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping : public Entity
{
    public:
        DhcpSnooping();
        ~DhcpSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_security; //type: empty

}; // Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping


class Native::Interface::Tengigabitethernet::Ip::Verify::Unicast : public Entity
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

        class ReversePath; //type: Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::ReversePath
        class Source; //type: Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::ReversePath> reverse_path; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source> source;
        
}; // Native::Interface::Tengigabitethernet::Ip::Verify::Unicast


class Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::ReversePath : public Entity
{
    public:
        ReversePath();
        ~ReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::ReversePath


class Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reachable_via; //type: ReachableViaEnum
        YLeaf allow_self_ping; //type: empty
        YLeaf allow_default; //type: empty
        class ReachableViaEnum;

}; // Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source


class Native::Interface::Tengigabitethernet::Ip::Flow : public Entity
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

        YLeaf ingress; //type: empty
        YLeaf egress; //type: empty
        class Monitor; //type: Native::Interface::Tengigabitethernet::Ip::Flow::Monitor

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Flow::Monitor> > monitor;
        
}; // Native::Interface::Tengigabitethernet::Ip::Flow


class Native::Interface::Tengigabitethernet::Ip::Flow::Monitor : public Entity
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

        YLeaf name; //type: string
        YLeaf input; //type: empty
        YLeaf output; //type: empty
        YLeaf multicast; //type: empty
        YLeaf unicast; //type: empty
        class Sampler; //type: Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Sampler

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Sampler> > sampler;
        
}; // Native::Interface::Tengigabitethernet::Ip::Flow::Monitor


class Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Sampler : public Entity
{
    public:
        Sampler();
        ~Sampler();

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

}; // Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Sampler


class Native::Interface::Tengigabitethernet::Ip::Igmp : public Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: uint8
        class StaticGroup; //type: Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup
        class JoinGroup; //type: Native::Interface::Tengigabitethernet::Ip::Igmp::JoinGroup

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Igmp::JoinGroup> > join_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup> static_group;
        
}; // Native::Interface::Tengigabitethernet::Ip::Igmp


class Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup : public Entity
{
    public:
        StaticGroup();
        ~StaticGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Groups; //type: Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::Groups
        class ClassMap; //type: Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::ClassMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::ClassMap> > class_map;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::Groups> > groups;
        
}; // Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup


class Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::Groups : public Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: one of string, enumeration
        class NameEnum;

}; // Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::Groups


class Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::ClassMap : public Entity
{
    public:
        ClassMap();
        ~ClassMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to Cisco_IOS_XE_native::Native::Policy::ClassMap::name)
        YLeaf id;

}; // Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::ClassMap


class Native::Interface::Tengigabitethernet::Ip::Igmp::JoinGroup : public Entity
{
    public:
        JoinGroup();
        ~JoinGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_group_address; //type: string
        YLeaf source; //type: string

}; // Native::Interface::Tengigabitethernet::Ip::Igmp::JoinGroup


class Native::Interface::Tengigabitethernet::Ip::Lisp : public Entity
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

        YLeaf source_locator; //type: string

}; // Native::Interface::Tengigabitethernet::Ip::Lisp


class Native::Interface::Tengigabitethernet::Ip::Nat : public Entity
{
    public:
        Nat();
        ~Nat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf allow_static_host; //type: empty
        YLeaf enable; //type: empty
        YLeaf inside; //type: empty
        YLeaf outside; //type: empty

}; // Native::Interface::Tengigabitethernet::Ip::Nat


class Native::Interface::Tengigabitethernet::Ip::Nbar : public Entity
{
    public:
        Nbar();
        ~Nbar();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ProtocolDiscovery; //type: Native::Interface::Tengigabitethernet::Ip::Nbar::ProtocolDiscovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Nbar::ProtocolDiscovery> protocol_discovery; // presence node
        
}; // Native::Interface::Tengigabitethernet::Ip::Nbar


class Native::Interface::Tengigabitethernet::Ip::Nbar::ProtocolDiscovery : public Entity
{
    public:
        ProtocolDiscovery();
        ~ProtocolDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_ipv6; //type: Ipv4Ipv6Enum
        class Ipv4Ipv6Enum;

}; // Native::Interface::Tengigabitethernet::Ip::Nbar::ProtocolDiscovery


class Native::Interface::Tengigabitethernet::Ip::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf network; //type: NetworkEnum
        YLeaf cost; //type: uint16
        YLeaf flood_reduction; //type: empty
        YLeaf hello_interval; //type: uint32
        YLeaf mtu_ignore; //type: empty
        YLeaf priority; //type: uint8
        YLeaf resync_timeout; //type: uint32
        YLeaf retransmit_interval; //type: uint32
        YLeaf shutdown; //type: empty
        YLeaf transmit_delay; //type: uint32
        class ProcessId; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::ProcessId
        class Authentication; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication
        class AuthenticationKey; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::AuthenticationKey
        class Bfd; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::Bfd
        class DatabaseFilter; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::DatabaseFilter
        class DeadInterval; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval
        class DemandCircuit; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::DemandCircuit
        class FastReroute; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute
        class Lls; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::Lls
        class MessageDigestKey; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey
        class MultiArea; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::MultiArea
        class PrefixSuppression; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::PrefixSuppression
        class TtlSecurity; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::TtlSecurity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication> authentication; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::AuthenticationKey> authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::Bfd> bfd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval> dead_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::Lls> lls; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey> > message_digest_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::MultiArea> multi_area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::PrefixSuppression> prefix_suppression; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::ProcessId> > process_id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::TtlSecurity> ttl_security; // presence node
                class NetworkEnum;

}; // Native::Interface::Tengigabitethernet::Ip::Ospf


class Native::Interface::Tengigabitethernet::Ip::Ospf::ProcessId : public Entity
{
    public:
        ProcessId();
        ~ProcessId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint16
        YLeaf area; //type: one of uint32, string
        YLeaf secondaries; //type: empty
        YLeaf none; //type: empty

}; // Native::Interface::Tengigabitethernet::Ip::Ospf::ProcessId


class Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication : public Entity
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

        YLeaf message_digest; //type: empty
        YLeaf null; //type: empty
        class KeyChain; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::KeyChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::KeyChain> key_chain;
        
}; // Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication


class Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::KeyChain : public Entity
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

}; // Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::KeyChain


class Native::Interface::Tengigabitethernet::Ip::Ospf::AuthenticationKey : public Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Interface::Tengigabitethernet::Ip::Ospf::AuthenticationKey


class Native::Interface::Tengigabitethernet::Ip::Ospf::Bfd : public Entity
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

        YLeaf disable; //type: empty

}; // Native::Interface::Tengigabitethernet::Ip::Ospf::Bfd


class Native::Interface::Tengigabitethernet::Ip::Ospf::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        YLeaf out; //type: empty

}; // Native::Interface::Tengigabitethernet::Ip::Ospf::DatabaseFilter


class Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval : public Entity
{
    public:
        DeadInterval();
        ~DeadInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        class Minimal; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::Minimal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::Minimal> minimal;
        
}; // Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval


class Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::Minimal : public Entity
{
    public:
        Minimal();
        ~Minimal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hello_multiplier; //type: uint8

}; // Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::Minimal


class Native::Interface::Tengigabitethernet::Ip::Ospf::DemandCircuit : public Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: empty

}; // Native::Interface::Tengigabitethernet::Ip::Ospf::DemandCircuit


class Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PerPrefix; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix> per_prefix;
        
}; // Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute


class Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix : public Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Candidate; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate
        class Protection; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate> candidate; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection> protection; // presence node
        
}; // Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix


class Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate : public Entity
{
    public:
        Candidate();
        ~Candidate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate


class Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection : public Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection


class Native::Interface::Tengigabitethernet::Ip::Ospf::Lls : public Entity
{
    public:
        Lls();
        ~Lls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Tengigabitethernet::Ip::Ospf::Lls


class Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        class Md5; //type: Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::Md5> md5;
        
}; // Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey


class Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::Md5 : public Entity
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

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::Md5


class Native::Interface::Tengigabitethernet::Ip::Ospf::MultiArea : public Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint32, string
        YLeaf cost; //type: uint32

}; // Native::Interface::Tengigabitethernet::Ip::Ospf::MultiArea


class Native::Interface::Tengigabitethernet::Ip::Ospf::PrefixSuppression : public Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Tengigabitethernet::Ip::Ospf::PrefixSuppression


class Native::Interface::Tengigabitethernet::Ip::Ospf::TtlSecurity : public Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf diable; //type: empty
        YLeaf hops; //type: uint8

}; // Native::Interface::Tengigabitethernet::Ip::Ospf::TtlSecurity


class Native::Interface::Tengigabitethernet::Ip::Wccp : public Entity
{
    public:
        Wccp();
        ~Wccp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class WccpList; //type: Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList
        class WebCache; //type: Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache
        class Redirect; //type: Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect
        class Vrf; //type: Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect> redirect;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf> > vrf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList> > wccp_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache> web_cache;
        
}; // Native::Interface::Tengigabitethernet::Ip::Wccp


class Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList : public Entity
{
    public:
        WccpList();
        ~WccpList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        YLeaf group_listen; //type: empty
        class Redirect; //type: Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::Redirect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::Redirect> redirect;
        
}; // Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList


class Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::Redirect : public Entity
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

        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::Redirect


class Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache : public Entity
{
    public:
        WebCache();
        ~WebCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_listen; //type: empty
        class Redirect; //type: Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::Redirect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::Redirect> redirect;
        
}; // Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache


class Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::Redirect : public Entity
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

        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::Redirect


class Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect : public Entity
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

        class Exclude; //type: Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::Exclude

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::Exclude> exclude;
        
}; // Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect


class Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::Exclude : public Entity
{
    public:
        Exclude();
        ~Exclude();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in; //type: empty

}; // Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::Exclude


class Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf : public Entity
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

        YLeaf name; //type: string
        class WccpList; //type: Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList
        class WebCache; //type: Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList> > wccp_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache> web_cache;
        
}; // Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf


class Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList : public Entity
{
    public:
        WccpList();
        ~WccpList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        YLeaf group_listen; //type: empty
        class Redirect; //type: Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect> redirect;
        
}; // Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList


class Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect : public Entity
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

        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect


class Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache : public Entity
{
    public:
        WebCache();
        ~WebCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_listen; //type: empty
        class Redirect; //type: Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect> redirect;
        
}; // Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache


class Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect : public Entity
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

        YLeaf in; //type: empty
        YLeaf out; //type: empty

}; // Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect


class Native::Interface::Tengigabitethernet::Ipv6 : public Entity
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

        YLeaf enable; //type: empty
        YLeaf mtu; //type: uint16
        YLeaf redirects; //type: boolean
        YLeaf unreachables; //type: boolean
        class DestinationGuard; //type: Native::Interface::Tengigabitethernet::Ipv6::DestinationGuard
        class Dhcp; //type: Native::Interface::Tengigabitethernet::Ipv6::Dhcp
        class Address; //type: Native::Interface::Tengigabitethernet::Ipv6::Address
        class Nd; //type: Native::Interface::Tengigabitethernet::Ipv6::Nd
        class TrafficFilter; //type: Native::Interface::Tengigabitethernet::Ipv6::TrafficFilter
        class Flow; //type: Native::Interface::Tengigabitethernet::Ipv6::Flow
        class NoPim; //type: Native::Interface::Tengigabitethernet::Ipv6::NoPim
        class Pim; //type: Native::Interface::Tengigabitethernet::Ipv6::Pim
        class Ospf; //type: Native::Interface::Tengigabitethernet::Ipv6::Ospf
        class Rip; //type: Native::Interface::Tengigabitethernet::Ipv6::Rip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ipv6::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ipv6::DestinationGuard> destination_guard; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ipv6::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ipv6::Flow> flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ipv6::Nd> nd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ipv6::NoPim> no_pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ipv6::Ospf> ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ipv6::Pim> pim;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ipv6::Rip> > rip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ipv6::TrafficFilter> > traffic_filter;
        
}; // Native::Interface::Tengigabitethernet::Ipv6


class Native::Interface::Tengigabitethernet::Ipv6::DestinationGuard : public Entity
{
    public:
        DestinationGuard();
        ~DestinationGuard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attach_policy; //type: string

}; // Native::Interface::Tengigabitethernet::Ipv6::DestinationGuard


class Native::Interface::Tengigabitethernet::Ipv6::Dhcp : public Entity
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

        class Server; //type: Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Server
        class Guard; //type: Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Guard

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Guard> guard; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Server> > server;
        
}; // Native::Interface::Tengigabitethernet::Ipv6::Dhcp


class Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf word; //type: string
        YLeaf preference; //type: uint8

}; // Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Server


class Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Guard : public Entity
{
    public:
        Guard();
        ~Guard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attach_policy; //type: string

}; // Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Guard


class Native::Interface::Tengigabitethernet::Ipv6::Address : public Entity
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

        class Dhcp; //type: Native::Interface::Tengigabitethernet::Ipv6::Address::Dhcp
        class Autoconfig; //type: Native::Interface::Tengigabitethernet::Ipv6::Address::Autoconfig
        class PrefixList; //type: Native::Interface::Tengigabitethernet::Ipv6::Address::PrefixList
        class LinkLocalAddress; //type: Native::Interface::Tengigabitethernet::Ipv6::Address::LinkLocalAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ipv6::Address::Autoconfig> autoconfig; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ipv6::Address::Dhcp> dhcp; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ipv6::Address::LinkLocalAddress> > link_local_address;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ipv6::Address::PrefixList> > prefix_list;
        
}; // Native::Interface::Tengigabitethernet::Ipv6::Address


class Native::Interface::Tengigabitethernet::Ipv6::Address::Dhcp : public Entity
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

        YLeaf rapid_commit; //type: empty

}; // Native::Interface::Tengigabitethernet::Ipv6::Address::Dhcp


class Native::Interface::Tengigabitethernet::Ipv6::Address::Autoconfig : public Entity
{
    public:
        Autoconfig();
        ~Autoconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: empty

}; // Native::Interface::Tengigabitethernet::Ipv6::Address::Autoconfig

class Native::Interface::Tengigabitethernet::Isis::HelloInterval::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf minimal;

};

class Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf minimal;

};

class Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Tengigabitethernet::Isis::Metric::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Tengigabitethernet::Isis::Metric::MetricList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Tengigabitethernet::Isis::Metric::MetricList::ValueEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Native::Interface::Tengigabitethernet::Isis::Password::PasswordList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Tengigabitethernet::Isis::Priority::PriorityList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Interface::Tengigabitethernet::Isis::ThreeWayHandshake::ImplementorEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco;
        static const Enum::YLeaf ietf;

};

class Native::Interface::Tengigabitethernet::HoldQueue::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::Tengigabitethernet::Mpls::Label::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf ldp;
        static const Enum::YLeaf tdp;

};

class Native::Interface::Tengigabitethernet::Ip::Pim::SparseModeEnum : public Enum
{
    public:
        static const Enum::YLeaf sparse_dense_mode;
        static const Enum::YLeaf sparse_mode;

};

class Native::Interface::Tengigabitethernet::Ip::Pim::SptThresholdEnum : public Enum
{
    public:
        static const Enum::YLeaf infinity;

};

class Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::PolicyActionEnum : public Enum
{
    public:
        static const Enum::YLeaf drop;
        static const Enum::YLeaf encapsulate;
        static const Enum::YLeaf keep;
        static const Enum::YLeaf replace;

};

class Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source::ReachableViaEnum : public Enum
{
    public:
        static const Enum::YLeaf any;
        static const Enum::YLeaf rx;

};

class Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Sampler::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf input;
        static const Enum::YLeaf output;

};

class Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::Groups::NameEnum : public Enum
{
    public:
        static const Enum::YLeaf Y__STAR__;

};

class Native::Interface::Tengigabitethernet::Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6Enum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class Native::Interface::Tengigabitethernet::Ip::Ospf::NetworkEnum : public Enum
{
    public:
        static const Enum::YLeaf broadcast;
        static const Enum::YLeaf non_broadcast;
        static const Enum::YLeaf point_to_multipoint;
        static const Enum::YLeaf point_to_point;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_32_ */

