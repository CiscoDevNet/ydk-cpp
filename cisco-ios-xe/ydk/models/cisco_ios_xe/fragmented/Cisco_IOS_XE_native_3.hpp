#ifndef _CISCO_IOS_XE_NATIVE_3_
#define _CISCO_IOS_XE_NATIVE_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_2.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Flow::Record::Collect::Ipv6::Source : public Entity
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

        YLeaf address; //type: empty
        class Mask; //type: Native::Flow::Record::Collect::Ipv6::Source::Mask
        class Prefix; //type: Native::Flow::Record::Collect::Ipv6::Source::Prefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Source::Mask> mask; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Source::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Collect::Ipv6::Source


class Native::Flow::Record::Collect::Ipv6::Source::Mask : public Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv6::Source::Mask


class Native::Flow::Record::Collect::Ipv6::Source::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv6::Source::Prefix


class Native::Flow::Record::Collect::Metadata : public Entity
{
    public:
        Metadata();
        ~Metadata();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf clock_rate; //type: empty
        YLeaf global_session_id; //type: empty
        YLeaf multi_party_session_id; //type: empty

}; // Native::Flow::Record::Collect::Metadata


class Native::Flow::Record::Collect::Monitor : public Entity
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

        YLeaf event; //type: empty

}; // Native::Flow::Record::Collect::Monitor


class Native::Flow::Record::Collect::Mpls : public Entity
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

        class Label; //type: Native::Flow::Record::Collect::Mpls::Label

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls::Label> label;
        
}; // Native::Flow::Record::Collect::Mpls


class Native::Flow::Record::Collect::Mpls::Label : public Entity
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

        class One; //type: Native::Flow::Record::Collect::Mpls::Label::One
        class Two; //type: Native::Flow::Record::Collect::Mpls::Label::Two
        class Three; //type: Native::Flow::Record::Collect::Mpls::Label::Three
        class Four; //type: Native::Flow::Record::Collect::Mpls::Label::Four
        class Five; //type: Native::Flow::Record::Collect::Mpls::Label::Five
        class Six; //type: Native::Flow::Record::Collect::Mpls::Label::Six

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls::Label::Five> five;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls::Label::Four> four;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls::Label::One> one;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls::Label::Six> six;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls::Label::Three> three;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls::Label::Two> two;
        
}; // Native::Flow::Record::Collect::Mpls::Label


class Native::Flow::Record::Collect::Mpls::Label::One : public Entity
{
    public:
        One();
        ~One();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf details; //type: empty
        YLeaf exp; //type: empty
        YLeaf ttl; //type: empty
        YLeaf type; //type: empty

}; // Native::Flow::Record::Collect::Mpls::Label::One


class Native::Flow::Record::Collect::Mpls::Label::Two : public Entity
{
    public:
        Two();
        ~Two();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf details; //type: empty

}; // Native::Flow::Record::Collect::Mpls::Label::Two


class Native::Flow::Record::Collect::Mpls::Label::Three : public Entity
{
    public:
        Three();
        ~Three();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf details; //type: empty

}; // Native::Flow::Record::Collect::Mpls::Label::Three


class Native::Flow::Record::Collect::Mpls::Label::Four : public Entity
{
    public:
        Four();
        ~Four();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf details; //type: empty

}; // Native::Flow::Record::Collect::Mpls::Label::Four


class Native::Flow::Record::Collect::Mpls::Label::Five : public Entity
{
    public:
        Five();
        ~Five();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf details; //type: empty

}; // Native::Flow::Record::Collect::Mpls::Label::Five


class Native::Flow::Record::Collect::Mpls::Label::Six : public Entity
{
    public:
        Six();
        ~Six();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf details; //type: empty

}; // Native::Flow::Record::Collect::Mpls::Label::Six


class Native::Flow::Record::Collect::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Delay; //type: Native::Flow::Record::Collect::Network::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Network::Delay> delay;
        
}; // Native::Flow::Record::Collect::Network


class Native::Flow::Record::Collect::Network::Delay : public Entity
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

        YLeaf sample; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Network::Delay


class Native::Flow::Record::Collect::Pfr : public Entity
{
    public:
        Pfr();
        ~Pfr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Label; //type: Native::Flow::Record::Collect::Pfr::Label
        class OneWayDelay; //type: Native::Flow::Record::Collect::Pfr::OneWayDelay
        class Service; //type: Native::Flow::Record::Collect::Pfr::Service
        class Site; //type: Native::Flow::Record::Collect::Pfr::Site

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Label> label;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::OneWayDelay> one_way_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Service> service;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site> site;
        
}; // Native::Flow::Record::Collect::Pfr


class Native::Flow::Record::Collect::Pfr::Label : public Entity
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

        YLeaf identifier; //type: empty

}; // Native::Flow::Record::Collect::Pfr::Label


class Native::Flow::Record::Collect::Pfr::OneWayDelay : public Entity
{
    public:
        OneWayDelay();
        ~OneWayDelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf samples; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Pfr::OneWayDelay


class Native::Flow::Record::Collect::Pfr::Service : public Entity
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

        YLeaf provider; //type: empty
        YLeaf tag; //type: empty
        YLeaf identifier; //type: empty

}; // Native::Flow::Record::Collect::Pfr::Service


class Native::Flow::Record::Collect::Pfr::Site : public Entity
{
    public:
        Site();
        ~Site();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Destination; //type: Native::Flow::Record::Collect::Pfr::Site::Destination
        class Source; //type: Native::Flow::Record::Collect::Pfr::Site::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site::Source> source;
        
}; // Native::Flow::Record::Collect::Pfr::Site


class Native::Flow::Record::Collect::Pfr::Site::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Id; //type: Native::Flow::Record::Collect::Pfr::Site::Destination::Id
        class Prefix; //type: Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site::Destination::Id> id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix> prefix;
        
}; // Native::Flow::Record::Collect::Pfr::Site::Destination


class Native::Flow::Record::Collect::Pfr::Site::Destination::Id : public Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: empty

}; // Native::Flow::Record::Collect::Pfr::Site::Destination::Id


class Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: empty
        class Mask; //type: Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask> mask;
        
}; // Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix


class Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask : public Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: empty

}; // Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask


class Native::Flow::Record::Collect::Pfr::Site::Source : public Entity
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

        class Id; //type: Native::Flow::Record::Collect::Pfr::Site::Source::Id
        class Prefix; //type: Native::Flow::Record::Collect::Pfr::Site::Source::Prefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site::Source::Id> id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site::Source::Prefix> prefix;
        
}; // Native::Flow::Record::Collect::Pfr::Site::Source


class Native::Flow::Record::Collect::Pfr::Site::Source::Id : public Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: empty

}; // Native::Flow::Record::Collect::Pfr::Site::Source::Id


class Native::Flow::Record::Collect::Pfr::Site::Source::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: empty
        class Mask; //type: Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask> mask;
        
}; // Native::Flow::Record::Collect::Pfr::Site::Source::Prefix


class Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask : public Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: empty

}; // Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask


class Native::Flow::Record::Collect::Policy : public Entity
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

        class PerformanceMonitor; //type: Native::Flow::Record::Collect::Policy::PerformanceMonitor
        class Qos; //type: Native::Flow::Record::Collect::Policy::Qos

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Policy::PerformanceMonitor> performance_monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Policy::Qos> qos;
        
}; // Native::Flow::Record::Collect::Policy


class Native::Flow::Record::Collect::Policy::PerformanceMonitor : public Entity
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

        class Classification; //type: Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification> classification;
        
}; // Native::Flow::Record::Collect::Policy::PerformanceMonitor


class Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification : public Entity
{
    public:
        Classification();
        ~Classification();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hierarchy; //type: empty

}; // Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification


class Native::Flow::Record::Collect::Policy::Qos : public Entity
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

        class Classification; //type: Native::Flow::Record::Collect::Policy::Qos::Classification
        class Queue; //type: Native::Flow::Record::Collect::Policy::Qos::Queue

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Policy::Qos::Classification> classification;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Policy::Qos::Queue> queue;
        
}; // Native::Flow::Record::Collect::Policy::Qos


class Native::Flow::Record::Collect::Policy::Qos::Classification : public Entity
{
    public:
        Classification();
        ~Classification();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hierarchy; //type: empty

}; // Native::Flow::Record::Collect::Policy::Qos::Classification


class Native::Flow::Record::Collect::Policy::Qos::Queue : public Entity
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

        YLeaf drops; //type: empty
        YLeaf index_; //type: empty

}; // Native::Flow::Record::Collect::Policy::Qos::Queue


class Native::Flow::Record::Collect::Routing : public Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_multicast; //type: empty
        class Destination; //type: Native::Flow::Record::Collect::Routing::Destination
        class ForwardingStatus; //type: Native::Flow::Record::Collect::Routing::ForwardingStatus
        class NextHop; //type: Native::Flow::Record::Collect::Routing::NextHop
        class Pw; //type: Native::Flow::Record::Collect::Routing::Pw
        class Source; //type: Native::Flow::Record::Collect::Routing::Source
        class Vrf; //type: Native::Flow::Record::Collect::Routing::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::ForwardingStatus> forwarding_status; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Pw> pw;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Source> source;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Vrf> vrf;
        
}; // Native::Flow::Record::Collect::Routing


class Native::Flow::Record::Collect::Routing::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf traffic_index; //type: empty
        class As; //type: Native::Flow::Record::Collect::Routing::Destination::As

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Destination::As> as; // presence node
        
}; // Native::Flow::Record::Collect::Routing::Destination


class Native::Flow::Record::Collect::Routing::Destination::As : public Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as4_octet; //type: empty
        class Peer; //type: Native::Flow::Record::Collect::Routing::Destination::As::Peer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Destination::As::Peer> peer; // presence node
        
}; // Native::Flow::Record::Collect::Routing::Destination::As


class Native::Flow::Record::Collect::Routing::Destination::As::Peer : public Entity
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

        YLeaf peer4_octet; //type: empty

}; // Native::Flow::Record::Collect::Routing::Destination::As::Peer


class Native::Flow::Record::Collect::Routing::ForwardingStatus : public Entity
{
    public:
        ForwardingStatus();
        ~ForwardingStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reason; //type: empty

}; // Native::Flow::Record::Collect::Routing::ForwardingStatus


class Native::Flow::Record::Collect::Routing::NextHop : public Entity
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

        class Address; //type: Native::Flow::Record::Collect::Routing::NextHop::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::NextHop::Address> address;
        
}; // Native::Flow::Record::Collect::Routing::NextHop


class Native::Flow::Record::Collect::Routing::NextHop::Address : public Entity
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

        class Ipv4; //type: Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4
        class Ipv6; //type: Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4> ipv4; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6> ipv6; // presence node
        
}; // Native::Flow::Record::Collect::Routing::NextHop::Address


class Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4 : public Entity
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

        YLeaf bgp; //type: empty

}; // Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4


class Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6 : public Entity
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

        YLeaf bgp; //type: empty

}; // Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6


class Native::Flow::Record::Collect::Routing::Pw : public Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Destination; //type: Native::Flow::Record::Collect::Routing::Pw::Destination

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Pw::Destination> destination;
        
}; // Native::Flow::Record::Collect::Routing::Pw


class Native::Flow::Record::Collect::Routing::Pw::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: empty

}; // Native::Flow::Record::Collect::Routing::Pw::Destination


class Native::Flow::Record::Collect::Routing::Source : public Entity
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

        YLeaf traffic_index; //type: empty
        class As; //type: Native::Flow::Record::Collect::Routing::Source::As

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Source::As> as; // presence node
        
}; // Native::Flow::Record::Collect::Routing::Source


class Native::Flow::Record::Collect::Routing::Source::As : public Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as4_octet; //type: empty
        class Peer; //type: Native::Flow::Record::Collect::Routing::Source::As::Peer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Source::As::Peer> peer; // presence node
        
}; // Native::Flow::Record::Collect::Routing::Source::As


class Native::Flow::Record::Collect::Routing::Source::As::Peer : public Entity
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

        YLeaf peer4_octet; //type: empty

}; // Native::Flow::Record::Collect::Routing::Source::As::Peer


class Native::Flow::Record::Collect::Routing::Vrf : public Entity
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

        YLeaf input; //type: empty
        YLeaf output; //type: empty

}; // Native::Flow::Record::Collect::Routing::Vrf


class Native::Flow::Record::Collect::Services : public Entity
{
    public:
        Services();
        ~Services();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Waas; //type: Native::Flow::Record::Collect::Services::Waas

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Services::Waas> waas;
        
}; // Native::Flow::Record::Collect::Services


class Native::Flow::Record::Collect::Services::Waas : public Entity
{
    public:
        Waas();
        ~Waas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf passthrough_reason; //type: empty
        class Segment; //type: Native::Flow::Record::Collect::Services::Waas::Segment

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Services::Waas::Segment> segment; // presence node
        
}; // Native::Flow::Record::Collect::Services::Waas


class Native::Flow::Record::Collect::Services::Waas::Segment : public Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf account_on_resolution; //type: empty

}; // Native::Flow::Record::Collect::Services::Waas::Segment


class Native::Flow::Record::Collect::Timestamp : public Entity
{
    public:
        Timestamp();
        ~Timestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: empty
        class Absolute; //type: Native::Flow::Record::Collect::Timestamp::Absolute
        class SysUptime; //type: Native::Flow::Record::Collect::Timestamp::SysUptime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Timestamp::Absolute> absolute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Timestamp::SysUptime> sys_uptime;
        
}; // Native::Flow::Record::Collect::Timestamp


class Native::Flow::Record::Collect::Timestamp::Absolute : public Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf first; //type: empty
        YLeaf last; //type: empty
        class MonitoringInterval; //type: Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval> monitoring_interval;
        
}; // Native::Flow::Record::Collect::Timestamp::Absolute


class Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval : public Entity
{
    public:
        MonitoringInterval();
        ~MonitoringInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf end; //type: empty
        YLeaf start; //type: empty

}; // Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval


class Native::Flow::Record::Collect::Timestamp::SysUptime : public Entity
{
    public:
        SysUptime();
        ~SysUptime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf first; //type: empty
        YLeaf last; //type: empty

}; // Native::Flow::Record::Collect::Timestamp::SysUptime


class Native::Flow::Record::Collect::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_port; //type: empty
        YLeaf source_port; //type: empty
        class Bytes; //type: Native::Flow::Record::Collect::Transport::Bytes
        class Icmp; //type: Native::Flow::Record::Collect::Transport::Icmp
        class Igmp; //type: Native::Flow::Record::Collect::Transport::Igmp
        class Tcp; //type: Native::Flow::Record::Collect::Transport::Tcp
        class Udp; //type: Native::Flow::Record::Collect::Transport::Udp
        class Event; //type: Native::Flow::Record::Collect::Transport::Event
        class Packets; //type: Native::Flow::Record::Collect::Transport::Packets
        class RoundTripTime; //type: Native::Flow::Record::Collect::Transport::RoundTripTime
        class Rtp; //type: Native::Flow::Record::Collect::Transport::Rtp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Bytes> bytes;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Event> event;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Icmp> icmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Packets> packets;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::RoundTripTime> round_trip_time; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Rtp> rtp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Udp> udp;
        
}; // Native::Flow::Record::Collect::Transport


class Native::Flow::Record::Collect::Transport::Bytes : public Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf expected; //type: empty
        YLeaf out_of_order; //type: empty
        class Lost; //type: Native::Flow::Record::Collect::Transport::Bytes::Lost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Bytes::Lost> lost; // presence node
        
}; // Native::Flow::Record::Collect::Transport::Bytes


class Native::Flow::Record::Collect::Transport::Bytes::Lost : public Entity
{
    public:
        Lost();
        ~Lost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rate; //type: empty

}; // Native::Flow::Record::Collect::Transport::Bytes::Lost


class Native::Flow::Record::Collect::Transport::Icmp : public Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::Flow::Record::Collect::Transport::Icmp::Ipv4
        class Ipv6; //type: Native::Flow::Record::Collect::Transport::Icmp::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Icmp::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Icmp::Ipv6> ipv6;
        
}; // Native::Flow::Record::Collect::Transport::Icmp


class Native::Flow::Record::Collect::Transport::Icmp::Ipv4 : public Entity
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

        YLeaf code; //type: empty
        YLeaf type; //type: empty

}; // Native::Flow::Record::Collect::Transport::Icmp::Ipv4


class Native::Flow::Record::Collect::Transport::Icmp::Ipv6 : public Entity
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

        YLeaf code; //type: empty
        YLeaf type; //type: empty

}; // Native::Flow::Record::Collect::Transport::Icmp::Ipv6


class Native::Flow::Record::Collect::Transport::Igmp : public Entity
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

        YLeaf type; //type: empty

}; // Native::Flow::Record::Collect::Transport::Igmp


class Native::Flow::Record::Collect::Transport::Tcp : public Entity
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

        YLeaf acknowledgement_number; //type: empty
        YLeaf destination_port; //type: empty
        YLeaf header_length; //type: empty
        YLeaf maximum_segment_size; //type: empty
        YLeaf sequence_number; //type: empty
        YLeaf source_port; //type: empty
        YLeaf urgent_pointer; //type: empty
        class Flags; //type: Native::Flow::Record::Collect::Transport::Tcp::Flags
        class Flow_; //type: Native::Flow::Record::Collect::Transport::Tcp::Flow_
        class Option; //type: Native::Flow::Record::Collect::Transport::Tcp::Option
        class WindowSize; //type: Native::Flow::Record::Collect::Transport::Tcp::WindowSize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Tcp::Flags> flags; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Tcp::Flow_> flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Tcp::Option> option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Tcp::WindowSize> window_size; // presence node
        
}; // Native::Flow::Record::Collect::Transport::Tcp


class Native::Flow::Record::Collect::Transport::Tcp::Flags : public Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ack; //type: empty
        YLeaf cwr; //type: empty
        YLeaf ece; //type: empty
        YLeaf fin; //type: empty
        YLeaf psh; //type: empty
        YLeaf rst; //type: empty
        YLeaf syn; //type: empty
        YLeaf urg; //type: empty

}; // Native::Flow::Record::Collect::Transport::Tcp::Flags


class Native::Flow::Record::Collect::Transport::Tcp::Flow_ : public Entity
{
    public:
        Flow_();
        ~Flow_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf count; //type: empty

}; // Native::Flow::Record::Collect::Transport::Tcp::Flow_


class Native::Flow::Record::Collect::Transport::Tcp::Option : public Entity
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

        class Map; //type: Native::Flow::Record::Collect::Transport::Tcp::Option::Map

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Tcp::Option::Map> map; // presence node
        
}; // Native::Flow::Record::Collect::Transport::Tcp::Option


class Native::Flow::Record::Collect::Transport::Tcp::Option::Map : public Entity
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

        YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Transport::Tcp::Option::Map


class Native::Flow::Record::Collect::Transport::Tcp::WindowSize : public Entity
{
    public:
        WindowSize();
        ~WindowSize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: empty
        YLeaf minimum; //type: empty
        YLeaf sum; //type: empty
        class Average; //type: Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average> average; // presence node
        
}; // Native::Flow::Record::Collect::Transport::Tcp::WindowSize


class Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average : public Entity
{
    public:
        Average();
        ~Average();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average


class Native::Flow::Record::Collect::Transport::Udp : public Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_port; //type: empty
        YLeaf message_length; //type: empty
        YLeaf source_port; //type: empty

}; // Native::Flow::Record::Collect::Transport::Udp


class Native::Flow::Record::Collect::Transport::Event : public Entity
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

        class PacketLoss; //type: Native::Flow::Record::Collect::Transport::Event::PacketLoss

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Event::PacketLoss> packet_loss;
        
}; // Native::Flow::Record::Collect::Transport::Event


class Native::Flow::Record::Collect::Transport::Event::PacketLoss : public Entity
{
    public:
        PacketLoss();
        ~PacketLoss();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Counter; //type: Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter> counter; // presence node
        
}; // Native::Flow::Record::Collect::Transport::Event::PacketLoss


class Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter : public Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty

}; // Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter


class Native::Flow::Record::Collect::Transport::Packets : public Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf out_of_order; //type: empty
        class Expected; //type: Native::Flow::Record::Collect::Transport::Packets::Expected
        class Lost; //type: Native::Flow::Record::Collect::Transport::Packets::Lost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Packets::Expected> expected;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Packets::Lost> lost;
        
}; // Native::Flow::Record::Collect::Transport::Packets


class Native::Flow::Record::Collect::Transport::Packets::Expected : public Entity
{
    public:
        Expected();
        ~Expected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf counter; //type: empty

}; // Native::Flow::Record::Collect::Transport::Packets::Expected


class Native::Flow::Record::Collect::Transport::Packets::Lost : public Entity
{
    public:
        Lost();
        ~Lost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Counter; //type: Native::Flow::Record::Collect::Transport::Packets::Lost::Counter
        class Rate; //type: Native::Flow::Record::Collect::Transport::Packets::Lost::Rate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Packets::Lost::Counter> counter; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Packets::Lost::Rate> rate; // presence node
        
}; // Native::Flow::Record::Collect::Transport::Packets::Lost


class Native::Flow::Record::Collect::Transport::Packets::Lost::Counter : public Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty

}; // Native::Flow::Record::Collect::Transport::Packets::Lost::Counter


class Native::Flow::Record::Collect::Transport::Packets::Lost::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty

}; // Native::Flow::Record::Collect::Transport::Packets::Lost::Rate


class Native::Flow::Record::Collect::Transport::RoundTripTime : public Entity
{
    public:
        RoundTripTime();
        ~RoundTripTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty
        YLeaf samples; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Transport::RoundTripTime


class Native::Flow::Record::Collect::Transport::Rtp : public Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf payload_type; //type: empty
        YLeaf ssrc; //type: empty
        class Flow_; //type: Native::Flow::Record::Collect::Transport::Rtp::Flow_
        class Jitter; //type: Native::Flow::Record::Collect::Transport::Rtp::Jitter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Rtp::Flow_> flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Rtp::Jitter> jitter;
        
}; // Native::Flow::Record::Collect::Transport::Rtp


class Native::Flow::Record::Collect::Transport::Rtp::Flow_ : public Entity
{
    public:
        Flow_();
        ~Flow_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf count; //type: empty

}; // Native::Flow::Record::Collect::Transport::Rtp::Flow_


class Native::Flow::Record::Collect::Transport::Rtp::Jitter : public Entity
{
    public:
        Jitter();
        ~Jitter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: empty
        YLeaf minimum; //type: empty
        class Mean; //type: Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean> mean; // presence node
        
}; // Native::Flow::Record::Collect::Transport::Rtp::Jitter


class Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean : public Entity
{
    public:
        Mean();
        ~Mean();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean


class Native::Flow::Record::Default_ : public Entity
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

        YLeaf description; //type: string
        class Collect; //type: Native::Flow::Record::Default_::Collect
        class Match; //type: Native::Flow::Record::Default_::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect> collect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match> match;
        
}; // Native::Flow::Record::Default_


class Native::Flow::Record::Default_::Collect : public Entity
{
    public:
        Collect();
        ~Collect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Application; //type: Native::Flow::Record::Default_::Collect::Application
        class Connection; //type: Native::Flow::Record::Default_::Collect::Connection
        class Counter; //type: Native::Flow::Record::Default_::Collect::Counter
        class Datalink; //type: Native::Flow::Record::Default_::Collect::Datalink
        class Flow_; //type: Native::Flow::Record::Default_::Collect::Flow_
        class Interface; //type: Native::Flow::Record::Default_::Collect::Interface
        class Ipv4; //type: Native::Flow::Record::Default_::Collect::Ipv4
        class Ipv6; //type: Native::Flow::Record::Default_::Collect::Ipv6
        class Metadata; //type: Native::Flow::Record::Default_::Collect::Metadata
        class Monitor; //type: Native::Flow::Record::Default_::Collect::Monitor
        class Mpls; //type: Native::Flow::Record::Default_::Collect::Mpls
        class Network; //type: Native::Flow::Record::Default_::Collect::Network
        class Pfr; //type: Native::Flow::Record::Default_::Collect::Pfr
        class Policy; //type: Native::Flow::Record::Default_::Collect::Policy
        class Routing; //type: Native::Flow::Record::Default_::Collect::Routing
        class Services; //type: Native::Flow::Record::Default_::Collect::Services
        class Timestamp; //type: Native::Flow::Record::Default_::Collect::Timestamp
        class Transport; //type: Native::Flow::Record::Default_::Collect::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application> application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection> connection;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Counter> counter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Datalink> datalink;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Flow_> flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Metadata> metadata;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Monitor> monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Pfr> pfr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Routing> routing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Services> services;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Timestamp> timestamp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport> transport;
        
}; // Native::Flow::Record::Default_::Collect


class Native::Flow::Record::Default_::Collect::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vendor; //type: empty
        YLeaf version; //type: empty
        class Dns; //type: Native::Flow::Record::Default_::Collect::Application::Dns
        class Http; //type: Native::Flow::Record::Default_::Collect::Application::Http
        class Media; //type: Native::Flow::Record::Default_::Collect::Application::Media
        class Name; //type: Native::Flow::Record::Default_::Collect::Application::Name
        class Nntp; //type: Native::Flow::Record::Default_::Collect::Application::Nntp
        class Pop3; //type: Native::Flow::Record::Default_::Collect::Application::Pop3
        class Rtmp; //type: Native::Flow::Record::Default_::Collect::Application::Rtmp
        class Rtsp; //type: Native::Flow::Record::Default_::Collect::Application::Rtsp
        class Sip; //type: Native::Flow::Record::Default_::Collect::Application::Sip
        class Smtp; //type: Native::Flow::Record::Default_::Collect::Application::Smtp
        class Ssl; //type: Native::Flow::Record::Default_::Collect::Application::Ssl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Dns> dns;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Http> http;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Media> media;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Name> name; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Nntp> nntp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Pop3> pop3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Rtmp> rtmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Rtsp> rtsp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Sip> sip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Smtp> smtp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Ssl> ssl;
        
}; // Native::Flow::Record::Default_::Collect::Application


class Native::Flow::Record::Default_::Collect::Application::Dns : public Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain_name; //type: empty

}; // Native::Flow::Record::Default_::Collect::Application::Dns


class Native::Flow::Record::Default_::Collect::Application::Http : public Entity
{
    public:
        Http();
        ~Http();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host; //type: empty
        YLeaf referer; //type: empty
        YLeaf url; //type: empty
        YLeaf user_agent; //type: empty
        class Uri; //type: Native::Flow::Record::Default_::Collect::Application::Http::Uri

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Http::Uri> uri;
        
}; // Native::Flow::Record::Default_::Collect::Application::Http


class Native::Flow::Record::Default_::Collect::Application::Http::Uri : public Entity
{
    public:
        Uri();
        ~Uri();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf statistics; //type: empty

}; // Native::Flow::Record::Default_::Collect::Application::Http::Uri


class Native::Flow::Record::Default_::Collect::Application::Media : public Entity
{
    public:
        Media();
        ~Media();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event; //type: empty
        class Bytes; //type: Native::Flow::Record::Default_::Collect::Application::Media::Bytes
        class Packets; //type: Native::Flow::Record::Default_::Collect::Application::Media::Packets

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Media::Bytes> bytes;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Media::Packets> packets;
        
}; // Native::Flow::Record::Default_::Collect::Application::Media


class Native::Flow::Record::Default_::Collect::Application::Media::Bytes : public Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Counter; //type: Native::Flow::Record::Default_::Collect::Application::Media::Bytes::Counter
        class Rate; //type: Native::Flow::Record::Default_::Collect::Application::Media::Bytes::Rate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Media::Bytes::Counter> counter; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Media::Bytes::Rate> rate; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Application::Media::Bytes


class Native::Flow::Record::Default_::Collect::Application::Media::Bytes::Counter : public Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty

}; // Native::Flow::Record::Default_::Collect::Application::Media::Bytes::Counter


class Native::Flow::Record::Default_::Collect::Application::Media::Bytes::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PerFlow; //type: Native::Flow::Record::Default_::Collect::Application::Media::Bytes::Rate::PerFlow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Media::Bytes::Rate::PerFlow> per_flow; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Application::Media::Bytes::Rate


class Native::Flow::Record::Default_::Collect::Application::Media::Bytes::Rate::PerFlow : public Entity
{
    public:
        PerFlow();
        ~PerFlow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty

}; // Native::Flow::Record::Default_::Collect::Application::Media::Bytes::Rate::PerFlow


class Native::Flow::Record::Default_::Collect::Application::Media::Packets : public Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Counter; //type: Native::Flow::Record::Default_::Collect::Application::Media::Packets::Counter
        class Rate; //type: Native::Flow::Record::Default_::Collect::Application::Media::Packets::Rate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Media::Packets::Counter> counter; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Media::Packets::Rate> rate; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Application::Media::Packets


class Native::Flow::Record::Default_::Collect::Application::Media::Packets::Counter : public Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty

}; // Native::Flow::Record::Default_::Collect::Application::Media::Packets::Counter


class Native::Flow::Record::Default_::Collect::Application::Media::Packets::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Variation; //type: Native::Flow::Record::Default_::Collect::Application::Media::Packets::Rate::Variation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Application::Media::Packets::Rate::Variation> variation; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Application::Media::Packets::Rate


class Native::Flow::Record::Default_::Collect::Application::Media::Packets::Rate::Variation : public Entity
{
    public:
        Variation();
        ~Variation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Default_::Collect::Application::Media::Packets::Rate::Variation


class Native::Flow::Record::Default_::Collect::Application::Name : public Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf account_on_resolution; //type: empty

}; // Native::Flow::Record::Default_::Collect::Application::Name


class Native::Flow::Record::Default_::Collect::Application::Nntp : public Entity
{
    public:
        Nntp();
        ~Nntp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_name; //type: empty

}; // Native::Flow::Record::Default_::Collect::Application::Nntp


class Native::Flow::Record::Default_::Collect::Application::Pop3 : public Entity
{
    public:
        Pop3();
        ~Pop3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf server; //type: empty

}; // Native::Flow::Record::Default_::Collect::Application::Pop3


class Native::Flow::Record::Default_::Collect::Application::Rtmp : public Entity
{
    public:
        Rtmp();
        ~Rtmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pageurl; //type: empty

}; // Native::Flow::Record::Default_::Collect::Application::Rtmp


class Native::Flow::Record::Default_::Collect::Application::Rtsp : public Entity
{
    public:
        Rtsp();
        ~Rtsp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host; //type: empty

}; // Native::Flow::Record::Default_::Collect::Application::Rtsp


class Native::Flow::Record::Default_::Collect::Application::Sip : public Entity
{
    public:
        Sip();
        ~Sip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination; //type: empty
        YLeaf source; //type: empty

}; // Native::Flow::Record::Default_::Collect::Application::Sip


class Native::Flow::Record::Default_::Collect::Application::Smtp : public Entity
{
    public:
        Smtp();
        ~Smtp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sender; //type: empty
        YLeaf server; //type: empty

}; // Native::Flow::Record::Default_::Collect::Application::Smtp


class Native::Flow::Record::Default_::Collect::Application::Ssl : public Entity
{
    public:
        Ssl();
        ~Ssl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common_name; //type: empty

}; // Native::Flow::Record::Default_::Collect::Application::Ssl


class Native::Flow::Record::Default_::Collect::Connection : public Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: empty
        YLeaf initiator; //type: empty
        YLeaf new_connections; //type: empty
        YLeaf sum_duration; //type: empty
        YLeaf transaction_id; //type: empty
        class Client; //type: Native::Flow::Record::Default_::Collect::Connection::Client
        class Delay; //type: Native::Flow::Record::Default_::Collect::Connection::Delay
        class Server; //type: Native::Flow::Record::Default_::Collect::Connection::Server
        class Transaction; //type: Native::Flow::Record::Default_::Collect::Connection::Transaction

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Server> server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Transaction> transaction;
        
}; // Native::Flow::Record::Default_::Collect::Connection


class Native::Flow::Record::Default_::Collect::Connection::Client : public Entity
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

        YLeaf all; //type: empty
        class Counter; //type: Native::Flow::Record::Default_::Collect::Connection::Client::Counter
        class Ipv4; //type: Native::Flow::Record::Default_::Collect::Connection::Client::Ipv4
        class Ipv6; //type: Native::Flow::Record::Default_::Collect::Connection::Client::Ipv6
        class Transport; //type: Native::Flow::Record::Default_::Collect::Connection::Client::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Client::Counter> counter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Client::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Client::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Client::Transport> transport;
        
}; // Native::Flow::Record::Default_::Collect::Connection::Client


class Native::Flow::Record::Default_::Collect::Connection::Client::Counter : public Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bytes; //type: Native::Flow::Record::Default_::Collect::Connection::Client::Counter::Bytes
        class Packets; //type: Native::Flow::Record::Default_::Collect::Connection::Client::Counter::Packets

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Client::Counter::Bytes> bytes;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Client::Counter::Packets> packets;
        
}; // Native::Flow::Record::Default_::Collect::Connection::Client::Counter


class Native::Flow::Record::Default_::Collect::Connection::Client::Counter::Bytes : public Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty
        YLeaf retransmitted; //type: empty
        class Network; //type: Native::Flow::Record::Default_::Collect::Connection::Client::Counter::Bytes::Network
        class Transport; //type: Native::Flow::Record::Default_::Collect::Connection::Client::Counter::Bytes::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Client::Counter::Bytes::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Client::Counter::Bytes::Transport> transport;
        
}; // Native::Flow::Record::Default_::Collect::Connection::Client::Counter::Bytes


class Native::Flow::Record::Default_::Collect::Connection::Client::Counter::Bytes::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Client::Counter::Bytes::Network


class Native::Flow::Record::Default_::Collect::Connection::Client::Counter::Bytes::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Client::Counter::Bytes::Transport


class Native::Flow::Record::Default_::Collect::Connection::Client::Counter::Packets : public Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty
        YLeaf retransmitted; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Client::Counter::Packets


class Native::Flow::Record::Default_::Collect::Connection::Client::Ipv4 : public Entity
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

        YLeaf address; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Client::Ipv4


class Native::Flow::Record::Default_::Collect::Connection::Client::Ipv6 : public Entity
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

        YLeaf address; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Client::Ipv6


class Native::Flow::Record::Default_::Collect::Connection::Client::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Client::Transport


class Native::Flow::Record::Default_::Collect::Connection::Delay : public Entity
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

        YLeaf all; //type: empty
        class Application; //type: Native::Flow::Record::Default_::Collect::Connection::Delay::Application
        class Network; //type: Native::Flow::Record::Default_::Collect::Connection::Delay::Network
        class Response; //type: Native::Flow::Record::Default_::Collect::Connection::Delay::Response

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Delay::Application> application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Delay::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Delay::Response> response;
        
}; // Native::Flow::Record::Default_::Collect::Connection::Delay


class Native::Flow::Record::Default_::Collect::Connection::Delay::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Delay::Application


class Native::Flow::Record::Default_::Collect::Connection::Delay::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClientToServer; //type: Native::Flow::Record::Default_::Collect::Connection::Delay::Network::ClientToServer
        class LongLived; //type: Native::Flow::Record::Default_::Collect::Connection::Delay::Network::LongLived
        class ToClient; //type: Native::Flow::Record::Default_::Collect::Connection::Delay::Network::ToClient
        class ToServer; //type: Native::Flow::Record::Default_::Collect::Connection::Delay::Network::ToServer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Delay::Network::ClientToServer> client_to_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Delay::Network::LongLived> long_lived;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Delay::Network::ToClient> to_client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Delay::Network::ToServer> to_server;
        
}; // Native::Flow::Record::Default_::Collect::Connection::Delay::Network


class Native::Flow::Record::Default_::Collect::Connection::Delay::Network::ClientToServer : public Entity
{
    public:
        ClientToServer();
        ~ClientToServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty
        YLeaf num_samples; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Delay::Network::ClientToServer


class Native::Flow::Record::Default_::Collect::Connection::Delay::Network::LongLived : public Entity
{
    public:
        LongLived();
        ~LongLived();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClientToServe; //type: Native::Flow::Record::Default_::Collect::Connection::Delay::Network::LongLived::ClientToServe
        class ToClient; //type: Native::Flow::Record::Default_::Collect::Connection::Delay::Network::LongLived::ToClient
        class ToServe; //type: Native::Flow::Record::Default_::Collect::Connection::Delay::Network::LongLived::ToServe

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Delay::Network::LongLived::ClientToServe> client_to_serve;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Delay::Network::LongLived::ToClient> to_client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Delay::Network::LongLived::ToServe> to_serve;
        
}; // Native::Flow::Record::Default_::Collect::Connection::Delay::Network::LongLived


class Native::Flow::Record::Default_::Collect::Connection::Delay::Network::LongLived::ClientToServe : public Entity
{
    public:
        ClientToServe();
        ~ClientToServe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sum; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Delay::Network::LongLived::ClientToServe


class Native::Flow::Record::Default_::Collect::Connection::Delay::Network::LongLived::ToClient : public Entity
{
    public:
        ToClient();
        ~ToClient();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sum; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Delay::Network::LongLived::ToClient


class Native::Flow::Record::Default_::Collect::Connection::Delay::Network::LongLived::ToServe : public Entity
{
    public:
        ToServe();
        ~ToServe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sum; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Delay::Network::LongLived::ToServe


class Native::Flow::Record::Default_::Collect::Connection::Delay::Network::ToClient : public Entity
{
    public:
        ToClient();
        ~ToClient();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty
        YLeaf num_samples; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Delay::Network::ToClient


class Native::Flow::Record::Default_::Collect::Connection::Delay::Network::ToServer : public Entity
{
    public:
        ToServer();
        ~ToServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty
        YLeaf num_samples; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Delay::Network::ToServer


class Native::Flow::Record::Default_::Collect::Connection::Delay::Response : public Entity
{
    public:
        Response();
        ~Response();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClientToServer; //type: Native::Flow::Record::Default_::Collect::Connection::Delay::Response::ClientToServer
        class ToServer; //type: Native::Flow::Record::Default_::Collect::Connection::Delay::Response::ToServer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Delay::Response::ClientToServer> client_to_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Delay::Response::ToServer> to_server;
        
}; // Native::Flow::Record::Default_::Collect::Connection::Delay::Response


class Native::Flow::Record::Default_::Collect::Connection::Delay::Response::ClientToServer : public Entity
{
    public:
        ClientToServer();
        ~ClientToServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Delay::Response::ClientToServer


class Native::Flow::Record::Default_::Collect::Connection::Delay::Response::ToServer : public Entity
{
    public:
        ToServer();
        ~ToServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf histogram; //type: empty
        YLeaf max; //type: empty
        YLeaf min; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Delay::Response::ToServer


class Native::Flow::Record::Default_::Collect::Connection::Server : public Entity
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

        YLeaf all; //type: empty
        class Counter; //type: Native::Flow::Record::Default_::Collect::Connection::Server::Counter
        class Ipv4; //type: Native::Flow::Record::Default_::Collect::Connection::Server::Ipv4
        class Ipv6; //type: Native::Flow::Record::Default_::Collect::Connection::Server::Ipv6
        class Transport; //type: Native::Flow::Record::Default_::Collect::Connection::Server::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Server::Counter> counter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Server::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Server::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Server::Transport> transport;
        
}; // Native::Flow::Record::Default_::Collect::Connection::Server


class Native::Flow::Record::Default_::Collect::Connection::Server::Counter : public Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf responses; //type: empty
        class Bytes; //type: Native::Flow::Record::Default_::Collect::Connection::Server::Counter::Bytes
        class Packets; //type: Native::Flow::Record::Default_::Collect::Connection::Server::Counter::Packets

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Server::Counter::Bytes> bytes;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Server::Counter::Packets> packets;
        
}; // Native::Flow::Record::Default_::Collect::Connection::Server::Counter


class Native::Flow::Record::Default_::Collect::Connection::Server::Counter::Bytes : public Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty
        YLeaf retransmitted; //type: empty
        class Network; //type: Native::Flow::Record::Default_::Collect::Connection::Server::Counter::Bytes::Network
        class Transport; //type: Native::Flow::Record::Default_::Collect::Connection::Server::Counter::Bytes::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Server::Counter::Bytes::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Server::Counter::Bytes::Transport> transport;
        
}; // Native::Flow::Record::Default_::Collect::Connection::Server::Counter::Bytes


class Native::Flow::Record::Default_::Collect::Connection::Server::Counter::Bytes::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Server::Counter::Bytes::Network


class Native::Flow::Record::Default_::Collect::Connection::Server::Counter::Bytes::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Server::Counter::Bytes::Transport


class Native::Flow::Record::Default_::Collect::Connection::Server::Counter::Packets : public Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty
        YLeaf retransmitted; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Server::Counter::Packets


class Native::Flow::Record::Default_::Collect::Connection::Server::Ipv4 : public Entity
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

        YLeaf address; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Server::Ipv4


class Native::Flow::Record::Default_::Collect::Connection::Server::Ipv6 : public Entity
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

        YLeaf address; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Server::Ipv6


class Native::Flow::Record::Default_::Collect::Connection::Server::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Server::Transport


class Native::Flow::Record::Default_::Collect::Connection::Transaction : public Entity
{
    public:
        Transaction();
        ~Transaction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty
        class Counter; //type: Native::Flow::Record::Default_::Collect::Connection::Transaction::Counter
        class Duration; //type: Native::Flow::Record::Default_::Collect::Connection::Transaction::Duration

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Transaction::Counter> counter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Connection::Transaction::Duration> duration;
        
}; // Native::Flow::Record::Default_::Collect::Connection::Transaction


class Native::Flow::Record::Default_::Collect::Connection::Transaction::Counter : public Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf complete; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Transaction::Counter


class Native::Flow::Record::Default_::Collect::Connection::Transaction::Duration : public Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty
        YLeaf sum; //type: empty

}; // Native::Flow::Record::Default_::Collect::Connection::Transaction::Duration


class Native::Flow::Record::Default_::Collect::Counter : public Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flows; //type: empty
        class Bytes; //type: Native::Flow::Record::Default_::Collect::Counter::Bytes
        class Packets; //type: Native::Flow::Record::Default_::Collect::Counter::Packets

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Counter::Bytes> bytes; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Counter::Packets> packets; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Counter


class Native::Flow::Record::Default_::Collect::Counter::Bytes : public Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty
        class Rate; //type: Native::Flow::Record::Default_::Collect::Counter::Bytes::Rate
        class Squared; //type: Native::Flow::Record::Default_::Collect::Counter::Bytes::Squared

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Counter::Bytes::Rate> rate; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Counter::Bytes::Squared> squared;
        
}; // Native::Flow::Record::Default_::Collect::Counter::Bytes


class Native::Flow::Record::Default_::Collect::Counter::Bytes::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PerFlow; //type: Native::Flow::Record::Default_::Collect::Counter::Bytes::Rate::PerFlow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Counter::Bytes::Rate::PerFlow> per_flow; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Counter::Bytes::Rate


class Native::Flow::Record::Default_::Collect::Counter::Bytes::Rate::PerFlow : public Entity
{
    public:
        PerFlow();
        ~PerFlow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty

}; // Native::Flow::Record::Default_::Collect::Counter::Bytes::Rate::PerFlow


class Native::Flow::Record::Default_::Collect::Counter::Bytes::Squared : public Entity
{
    public:
        Squared();
        ~Squared();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty

}; // Native::Flow::Record::Default_::Collect::Counter::Bytes::Squared


class Native::Flow::Record::Default_::Collect::Counter::Packets : public Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dropped; //type: empty
        YLeaf long_; //type: empty
        class Rate; //type: Native::Flow::Record::Default_::Collect::Counter::Packets::Rate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Counter::Packets::Rate> rate; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Counter::Packets


class Native::Flow::Record::Default_::Collect::Counter::Packets::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PerFlow; //type: Native::Flow::Record::Default_::Collect::Counter::Packets::Rate::PerFlow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Counter::Packets::Rate::PerFlow> per_flow; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Counter::Packets::Rate


class Native::Flow::Record::Default_::Collect::Counter::Packets::Rate::PerFlow : public Entity
{
    public:
        PerFlow();
        ~PerFlow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: empty
        YLeaf min; //type: empty

}; // Native::Flow::Record::Default_::Collect::Counter::Packets::Rate::PerFlow


}
}

#endif /* _CISCO_IOS_XE_NATIVE_3_ */

