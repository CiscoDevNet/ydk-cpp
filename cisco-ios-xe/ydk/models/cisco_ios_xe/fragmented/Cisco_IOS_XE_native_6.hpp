#ifndef _CISCO_IOS_XE_NATIVE_6_
#define _CISCO_IOS_XE_NATIVE_6_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_2.hpp"
#include "Cisco_IOS_XE_native_5.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Flow::Record::Match::Ipv6::Destination::Mask : public Entity
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

}; // Native::Flow::Record::Match::Ipv6::Destination::Mask


class Native::Flow::Record::Match::Ipv6::Destination::Prefix : public Entity
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

}; // Native::Flow::Record::Match::Ipv6::Destination::Prefix


class Native::Flow::Record::Match::Ipv6::Extension : public Entity
{
    public:
        Extension();
        ~Extension();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf map; //type: empty

}; // Native::Flow::Record::Match::Ipv6::Extension


class Native::Flow::Record::Match::Ipv6::Fragmentation : public Entity
{
    public:
        Fragmentation();
        ~Fragmentation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flags; //type: empty
        YLeaf id; //type: empty
        YLeaf offset; //type: empty

}; // Native::Flow::Record::Match::Ipv6::Fragmentation


class Native::Flow::Record::Match::Ipv6::HopLimit : public Entity
{
    public:
        HopLimit();
        ~HopLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: empty
        YLeaf minimum; //type: empty

}; // Native::Flow::Record::Match::Ipv6::HopLimit


class Native::Flow::Record::Match::Ipv6::Length : public Entity
{
    public:
        Length();
        ~Length();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header; //type: empty
        YLeaf payload; //type: empty
        class Total; //type: Native::Flow::Record::Match::Ipv6::Length::Total

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Ipv6::Length::Total> total; // presence node
        
}; // Native::Flow::Record::Match::Ipv6::Length


class Native::Flow::Record::Match::Ipv6::Length::Total : public Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: empty
        YLeaf minimum; //type: empty

}; // Native::Flow::Record::Match::Ipv6::Length::Total


class Native::Flow::Record::Match::Ipv6::Section : public Entity
{
    public:
        Section();
        ~Section();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Header; //type: Native::Flow::Record::Match::Ipv6::Section::Header
        class Payload; //type: Native::Flow::Record::Match::Ipv6::Section::Payload

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Ipv6::Section::Header> header;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Ipv6::Section::Payload> payload;
        
}; // Native::Flow::Record::Match::Ipv6::Section


class Native::Flow::Record::Match::Ipv6::Section::Header : public Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint16

}; // Native::Flow::Record::Match::Ipv6::Section::Header


class Native::Flow::Record::Match::Ipv6::Section::Payload : public Entity
{
    public:
        Payload();
        ~Payload();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint16

}; // Native::Flow::Record::Match::Ipv6::Section::Payload


class Native::Flow::Record::Match::Ipv6::Source : public Entity
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
        class Mask; //type: Native::Flow::Record::Match::Ipv6::Source::Mask
        class Prefix; //type: Native::Flow::Record::Match::Ipv6::Source::Prefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Ipv6::Source::Mask> mask; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Ipv6::Source::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Match::Ipv6::Source


class Native::Flow::Record::Match::Ipv6::Source::Mask : public Entity
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

}; // Native::Flow::Record::Match::Ipv6::Source::Mask


class Native::Flow::Record::Match::Ipv6::Source::Prefix : public Entity
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

}; // Native::Flow::Record::Match::Ipv6::Source::Prefix


class Native::Flow::Record::Match::Metadata : public Entity
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

        YLeaf global_session_id; //type: empty
        YLeaf multi_party_session_id; //type: empty

}; // Native::Flow::Record::Match::Metadata


class Native::Flow::Record::Match::Mpls : public Entity
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

        class Label; //type: Native::Flow::Record::Match::Mpls::Label

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Mpls::Label> label;
        
}; // Native::Flow::Record::Match::Mpls


class Native::Flow::Record::Match::Mpls::Label : public Entity
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

        class One; //type: Native::Flow::Record::Match::Mpls::Label::One
        class Two; //type: Native::Flow::Record::Match::Mpls::Label::Two
        class Three; //type: Native::Flow::Record::Match::Mpls::Label::Three
        class Four; //type: Native::Flow::Record::Match::Mpls::Label::Four
        class Five; //type: Native::Flow::Record::Match::Mpls::Label::Five
        class Six; //type: Native::Flow::Record::Match::Mpls::Label::Six

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Mpls::Label::Five> five;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Mpls::Label::Four> four;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Mpls::Label::One> one;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Mpls::Label::Six> six;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Mpls::Label::Three> three;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Mpls::Label::Two> two;
        
}; // Native::Flow::Record::Match::Mpls::Label


class Native::Flow::Record::Match::Mpls::Label::One : public Entity
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

}; // Native::Flow::Record::Match::Mpls::Label::One


class Native::Flow::Record::Match::Mpls::Label::Two : public Entity
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

}; // Native::Flow::Record::Match::Mpls::Label::Two


class Native::Flow::Record::Match::Mpls::Label::Three : public Entity
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

}; // Native::Flow::Record::Match::Mpls::Label::Three


class Native::Flow::Record::Match::Mpls::Label::Four : public Entity
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

}; // Native::Flow::Record::Match::Mpls::Label::Four


class Native::Flow::Record::Match::Mpls::Label::Five : public Entity
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

}; // Native::Flow::Record::Match::Mpls::Label::Five


class Native::Flow::Record::Match::Mpls::Label::Six : public Entity
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

}; // Native::Flow::Record::Match::Mpls::Label::Six


class Native::Flow::Record::Match::Network : public Entity
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

        class Delay; //type: Native::Flow::Record::Match::Network::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Network::Delay> delay;
        
}; // Native::Flow::Record::Match::Network


class Native::Flow::Record::Match::Network::Delay : public Entity
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

}; // Native::Flow::Record::Match::Network::Delay


class Native::Flow::Record::Match::Pfr : public Entity
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

        class Label; //type: Native::Flow::Record::Match::Pfr::Label
        class OneWayDelay; //type: Native::Flow::Record::Match::Pfr::OneWayDelay
        class Service; //type: Native::Flow::Record::Match::Pfr::Service
        class Site; //type: Native::Flow::Record::Match::Pfr::Site

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Pfr::Label> label;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Pfr::OneWayDelay> one_way_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Pfr::Service> service;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Pfr::Site> site;
        
}; // Native::Flow::Record::Match::Pfr


class Native::Flow::Record::Match::Pfr::Label : public Entity
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

}; // Native::Flow::Record::Match::Pfr::Label


class Native::Flow::Record::Match::Pfr::OneWayDelay : public Entity
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

}; // Native::Flow::Record::Match::Pfr::OneWayDelay


class Native::Flow::Record::Match::Pfr::Service : public Entity
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

}; // Native::Flow::Record::Match::Pfr::Service


class Native::Flow::Record::Match::Pfr::Site : public Entity
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

        class Destination; //type: Native::Flow::Record::Match::Pfr::Site::Destination
        class Source; //type: Native::Flow::Record::Match::Pfr::Site::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Pfr::Site::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Pfr::Site::Source> source;
        
}; // Native::Flow::Record::Match::Pfr::Site


class Native::Flow::Record::Match::Pfr::Site::Destination : public Entity
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

        class Id; //type: Native::Flow::Record::Match::Pfr::Site::Destination::Id
        class Prefix; //type: Native::Flow::Record::Match::Pfr::Site::Destination::Prefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Pfr::Site::Destination::Id> id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Pfr::Site::Destination::Prefix> prefix;
        
}; // Native::Flow::Record::Match::Pfr::Site::Destination


class Native::Flow::Record::Match::Pfr::Site::Destination::Id : public Entity
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

}; // Native::Flow::Record::Match::Pfr::Site::Destination::Id


class Native::Flow::Record::Match::Pfr::Site::Destination::Prefix : public Entity
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
        class Mask; //type: Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask> mask;
        
}; // Native::Flow::Record::Match::Pfr::Site::Destination::Prefix


class Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask : public Entity
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

}; // Native::Flow::Record::Match::Pfr::Site::Destination::Prefix::Mask


class Native::Flow::Record::Match::Pfr::Site::Source : public Entity
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

        class Id; //type: Native::Flow::Record::Match::Pfr::Site::Source::Id
        class Prefix; //type: Native::Flow::Record::Match::Pfr::Site::Source::Prefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Pfr::Site::Source::Id> id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Pfr::Site::Source::Prefix> prefix;
        
}; // Native::Flow::Record::Match::Pfr::Site::Source


class Native::Flow::Record::Match::Pfr::Site::Source::Id : public Entity
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

}; // Native::Flow::Record::Match::Pfr::Site::Source::Id


class Native::Flow::Record::Match::Pfr::Site::Source::Prefix : public Entity
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
        class Mask; //type: Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask> mask;
        
}; // Native::Flow::Record::Match::Pfr::Site::Source::Prefix


class Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask : public Entity
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

}; // Native::Flow::Record::Match::Pfr::Site::Source::Prefix::Mask


class Native::Flow::Record::Match::Policy : public Entity
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

        class PerformanceMonitor; //type: Native::Flow::Record::Match::Policy::PerformanceMonitor
        class Qos; //type: Native::Flow::Record::Match::Policy::Qos

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Policy::PerformanceMonitor> performance_monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Policy::Qos> qos;
        
}; // Native::Flow::Record::Match::Policy


class Native::Flow::Record::Match::Policy::PerformanceMonitor : public Entity
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

        class Classification; //type: Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification> classification;
        
}; // Native::Flow::Record::Match::Policy::PerformanceMonitor


class Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification : public Entity
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

}; // Native::Flow::Record::Match::Policy::PerformanceMonitor::Classification


class Native::Flow::Record::Match::Policy::Qos : public Entity
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

        class Classification; //type: Native::Flow::Record::Match::Policy::Qos::Classification
        class Queue; //type: Native::Flow::Record::Match::Policy::Qos::Queue

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Policy::Qos::Classification> classification;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Policy::Qos::Queue> queue;
        
}; // Native::Flow::Record::Match::Policy::Qos


class Native::Flow::Record::Match::Policy::Qos::Classification : public Entity
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

}; // Native::Flow::Record::Match::Policy::Qos::Classification


class Native::Flow::Record::Match::Policy::Qos::Queue : public Entity
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

}; // Native::Flow::Record::Match::Policy::Qos::Queue


class Native::Flow::Record::Match::Routing : public Entity
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
        class Destination; //type: Native::Flow::Record::Match::Routing::Destination
        class ForwardingStatus; //type: Native::Flow::Record::Match::Routing::ForwardingStatus
        class NextHop; //type: Native::Flow::Record::Match::Routing::NextHop
        class Pw; //type: Native::Flow::Record::Match::Routing::Pw
        class Source; //type: Native::Flow::Record::Match::Routing::Source
        class Vrf; //type: Native::Flow::Record::Match::Routing::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Routing::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Routing::ForwardingStatus> forwarding_status; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Routing::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Routing::Pw> pw;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Routing::Source> source;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Routing::Vrf> vrf;
        
}; // Native::Flow::Record::Match::Routing


class Native::Flow::Record::Match::Routing::Destination : public Entity
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
        class As; //type: Native::Flow::Record::Match::Routing::Destination::As

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Routing::Destination::As> as; // presence node
        
}; // Native::Flow::Record::Match::Routing::Destination


class Native::Flow::Record::Match::Routing::Destination::As : public Entity
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
        class Peer; //type: Native::Flow::Record::Match::Routing::Destination::As::Peer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Routing::Destination::As::Peer> peer; // presence node
        
}; // Native::Flow::Record::Match::Routing::Destination::As


class Native::Flow::Record::Match::Routing::Destination::As::Peer : public Entity
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

}; // Native::Flow::Record::Match::Routing::Destination::As::Peer


class Native::Flow::Record::Match::Routing::ForwardingStatus : public Entity
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

}; // Native::Flow::Record::Match::Routing::ForwardingStatus


class Native::Flow::Record::Match::Routing::NextHop : public Entity
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

        class Address; //type: Native::Flow::Record::Match::Routing::NextHop::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Routing::NextHop::Address> address;
        
}; // Native::Flow::Record::Match::Routing::NextHop


class Native::Flow::Record::Match::Routing::NextHop::Address : public Entity
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

        class Ipv4; //type: Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4
        class Ipv6; //type: Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4> ipv4; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6> ipv6; // presence node
        
}; // Native::Flow::Record::Match::Routing::NextHop::Address


class Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4 : public Entity
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

}; // Native::Flow::Record::Match::Routing::NextHop::Address::Ipv4


class Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6 : public Entity
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

}; // Native::Flow::Record::Match::Routing::NextHop::Address::Ipv6


class Native::Flow::Record::Match::Routing::Pw : public Entity
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

        class Destination; //type: Native::Flow::Record::Match::Routing::Pw::Destination

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Routing::Pw::Destination> destination;
        
}; // Native::Flow::Record::Match::Routing::Pw


class Native::Flow::Record::Match::Routing::Pw::Destination : public Entity
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

}; // Native::Flow::Record::Match::Routing::Pw::Destination


class Native::Flow::Record::Match::Routing::Source : public Entity
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
        class As; //type: Native::Flow::Record::Match::Routing::Source::As

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Routing::Source::As> as; // presence node
        
}; // Native::Flow::Record::Match::Routing::Source


class Native::Flow::Record::Match::Routing::Source::As : public Entity
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
        class Peer; //type: Native::Flow::Record::Match::Routing::Source::As::Peer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Routing::Source::As::Peer> peer; // presence node
        
}; // Native::Flow::Record::Match::Routing::Source::As


class Native::Flow::Record::Match::Routing::Source::As::Peer : public Entity
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

}; // Native::Flow::Record::Match::Routing::Source::As::Peer


class Native::Flow::Record::Match::Routing::Vrf : public Entity
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

}; // Native::Flow::Record::Match::Routing::Vrf


class Native::Flow::Record::Match::Services : public Entity
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

        class Waas; //type: Native::Flow::Record::Match::Services::Waas

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Services::Waas> waas;
        
}; // Native::Flow::Record::Match::Services


class Native::Flow::Record::Match::Services::Waas : public Entity
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
        class Segment; //type: Native::Flow::Record::Match::Services::Waas::Segment

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Services::Waas::Segment> segment; // presence node
        
}; // Native::Flow::Record::Match::Services::Waas


class Native::Flow::Record::Match::Services::Waas::Segment : public Entity
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

}; // Native::Flow::Record::Match::Services::Waas::Segment


class Native::Flow::Record::Match::Timestamp : public Entity
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

        class Absolute; //type: Native::Flow::Record::Match::Timestamp::Absolute

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Timestamp::Absolute> absolute;
        
}; // Native::Flow::Record::Match::Timestamp


class Native::Flow::Record::Match::Timestamp::Absolute : public Entity
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

        class MonitoringInterval; //type: Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval> monitoring_interval;
        
}; // Native::Flow::Record::Match::Timestamp::Absolute


class Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval : public Entity
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

        YLeaf start; //type: empty

}; // Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval


class Native::Flow::Record::Match::Transport : public Entity
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
        class Bytes; //type: Native::Flow::Record::Match::Transport::Bytes
        class Rtp; //type: Native::Flow::Record::Match::Transport::Rtp
        class Icmp; //type: Native::Flow::Record::Match::Transport::Icmp
        class Igmp; //type: Native::Flow::Record::Match::Transport::Igmp
        class Tcp; //type: Native::Flow::Record::Match::Transport::Tcp
        class Udp; //type: Native::Flow::Record::Match::Transport::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Bytes> bytes;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Icmp> icmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Rtp> rtp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Udp> udp;
        
}; // Native::Flow::Record::Match::Transport


class Native::Flow::Record::Match::Transport::Bytes : public Entity
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
        class Lost; //type: Native::Flow::Record::Match::Transport::Bytes::Lost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Bytes::Lost> lost; // presence node
        
}; // Native::Flow::Record::Match::Transport::Bytes


class Native::Flow::Record::Match::Transport::Bytes::Lost : public Entity
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

}; // Native::Flow::Record::Match::Transport::Bytes::Lost


class Native::Flow::Record::Match::Transport::Rtp : public Entity
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

        YLeaf ssrc; //type: empty

}; // Native::Flow::Record::Match::Transport::Rtp


class Native::Flow::Record::Match::Transport::Icmp : public Entity
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

        class Ipv4; //type: Native::Flow::Record::Match::Transport::Icmp::Ipv4
        class Ipv6; //type: Native::Flow::Record::Match::Transport::Icmp::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Icmp::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Icmp::Ipv6> ipv6;
        
}; // Native::Flow::Record::Match::Transport::Icmp


class Native::Flow::Record::Match::Transport::Icmp::Ipv4 : public Entity
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

}; // Native::Flow::Record::Match::Transport::Icmp::Ipv4


class Native::Flow::Record::Match::Transport::Icmp::Ipv6 : public Entity
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

}; // Native::Flow::Record::Match::Transport::Icmp::Ipv6


class Native::Flow::Record::Match::Transport::Igmp : public Entity
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

}; // Native::Flow::Record::Match::Transport::Igmp


class Native::Flow::Record::Match::Transport::Tcp : public Entity
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
        class Flags; //type: Native::Flow::Record::Match::Transport::Tcp::Flags
        class Flow_; //type: Native::Flow::Record::Match::Transport::Tcp::Flow_
        class Option; //type: Native::Flow::Record::Match::Transport::Tcp::Option
        class WindowSize; //type: Native::Flow::Record::Match::Transport::Tcp::WindowSize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Tcp::Flags> flags; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Tcp::Flow_> flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Tcp::Option> option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Tcp::WindowSize> window_size; // presence node
        
}; // Native::Flow::Record::Match::Transport::Tcp


class Native::Flow::Record::Match::Transport::Tcp::Flags : public Entity
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

}; // Native::Flow::Record::Match::Transport::Tcp::Flags


class Native::Flow::Record::Match::Transport::Tcp::Flow_ : public Entity
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

}; // Native::Flow::Record::Match::Transport::Tcp::Flow_


class Native::Flow::Record::Match::Transport::Tcp::Option : public Entity
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

        class Map; //type: Native::Flow::Record::Match::Transport::Tcp::Option::Map

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Tcp::Option::Map> map; // presence node
        
}; // Native::Flow::Record::Match::Transport::Tcp::Option


class Native::Flow::Record::Match::Transport::Tcp::Option::Map : public Entity
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

}; // Native::Flow::Record::Match::Transport::Tcp::Option::Map


class Native::Flow::Record::Match::Transport::Tcp::WindowSize : public Entity
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
        class Average; //type: Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average> average; // presence node
        
}; // Native::Flow::Record::Match::Transport::Tcp::WindowSize


class Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average : public Entity
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

}; // Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average


class Native::Flow::Record::Match::Transport::Udp : public Entity
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

}; // Native::Flow::Record::Match::Transport::Udp


class Native::Flow::Exporter : public Entity
{
    public:
        Exporter();
        ~Exporter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf dscp; //type: uint8
        YLeaf export_protocol; //type: ExportProtocolEnum
        YLeaf ttl; //type: uint8
        class Destination; //type: Native::Flow::Exporter::Destination
        class Option; //type: Native::Flow::Exporter::Option
        class OutputFeatures; //type: Native::Flow::Exporter::OutputFeatures
        class Source; //type: Native::Flow::Exporter::Source
        class Template_; //type: Native::Flow::Exporter::Template_
        class Transport; //type: Native::Flow::Exporter::Transport
        class Default_; //type: Native::Flow::Exporter::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Option> option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::OutputFeatures> output_features; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Source> source;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Template_> template_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Transport> transport;
                class ExportProtocolEnum;

}; // Native::Flow::Exporter


class Native::Flow::Exporter::Destination : public Entity
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

        YLeaf ip; //type: string
        YLeaf vrf; //type: string

}; // Native::Flow::Exporter::Destination


class Native::Flow::Exporter::Option : public Entity
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

        class ApplicationAttributes; //type: Native::Flow::Exporter::Option::ApplicationAttributes
        class ApplicationTable; //type: Native::Flow::Exporter::Option::ApplicationTable
        class C3PlClassTable; //type: Native::Flow::Exporter::Option::C3PlClassTable
        class C3PlPolicyTable; //type: Native::Flow::Exporter::Option::C3PlPolicyTable
        class ExporterStats; //type: Native::Flow::Exporter::Option::ExporterStats
        class InterfaceTable; //type: Native::Flow::Exporter::Option::InterfaceTable
        class MetadataVersionTable; //type: Native::Flow::Exporter::Option::MetadataVersionTable
        class SamplerTable; //type: Native::Flow::Exporter::Option::SamplerTable
        class SubApplicationTable; //type: Native::Flow::Exporter::Option::SubApplicationTable
        class VrfTable; //type: Native::Flow::Exporter::Option::VrfTable

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Option::ApplicationAttributes> application_attributes; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Option::ApplicationTable> application_table; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Option::C3PlClassTable> c3pl_class_table; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Option::C3PlPolicyTable> c3pl_policy_table; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Option::ExporterStats> exporter_stats; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Option::InterfaceTable> interface_table; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Option::MetadataVersionTable> metadata_version_table; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Option::SamplerTable> sampler_table; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Option::SubApplicationTable> sub_application_table; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Option::VrfTable> vrf_table; // presence node
        
}; // Native::Flow::Exporter::Option


class Native::Flow::Exporter::Option::ApplicationAttributes : public Entity
{
    public:
        ApplicationAttributes();
        ~ApplicationAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::ApplicationAttributes


class Native::Flow::Exporter::Option::ApplicationTable : public Entity
{
    public:
        ApplicationTable();
        ~ApplicationTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::ApplicationTable


class Native::Flow::Exporter::Option::C3PlClassTable : public Entity
{
    public:
        C3PlClassTable();
        ~C3PlClassTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::C3PlClassTable


class Native::Flow::Exporter::Option::C3PlPolicyTable : public Entity
{
    public:
        C3PlPolicyTable();
        ~C3PlPolicyTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::C3PlPolicyTable


class Native::Flow::Exporter::Option::ExporterStats : public Entity
{
    public:
        ExporterStats();
        ~ExporterStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::ExporterStats


class Native::Flow::Exporter::Option::InterfaceTable : public Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::InterfaceTable


class Native::Flow::Exporter::Option::MetadataVersionTable : public Entity
{
    public:
        MetadataVersionTable();
        ~MetadataVersionTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::MetadataVersionTable


class Native::Flow::Exporter::Option::SamplerTable : public Entity
{
    public:
        SamplerTable();
        ~SamplerTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::SamplerTable


class Native::Flow::Exporter::Option::SubApplicationTable : public Entity
{
    public:
        SubApplicationTable();
        ~SubApplicationTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::SubApplicationTable


class Native::Flow::Exporter::Option::VrfTable : public Entity
{
    public:
        VrfTable();
        ~VrfTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Option::VrfTable


class Native::Flow::Exporter::OutputFeatures : public Entity
{
    public:
        OutputFeatures();
        ~OutputFeatures();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Flow::Exporter::OutputFeatures


class Native::Flow::Exporter::Source : public Entity
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
        class AtmSubinterface; //type: Native::Flow::Exporter::Source::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Flow::Exporter::Source::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Flow::Exporter::Source::LispSubinterface
        class PortChannelSubinterface; //type: Native::Flow::Exporter::Source::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Source::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Source::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Source::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Source::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Flow::Exporter::Source


class Native::Flow::Exporter::Source::AtmSubinterface : public Entity
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

}; // Native::Flow::Exporter::Source::AtmSubinterface


class Native::Flow::Exporter::Source::AtmAcrsubinterface : public Entity
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

}; // Native::Flow::Exporter::Source::AtmAcrsubinterface


class Native::Flow::Exporter::Source::LispSubinterface : public Entity
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

}; // Native::Flow::Exporter::Source::LispSubinterface


class Native::Flow::Exporter::Source::PortChannelSubinterface : public Entity
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

}; // Native::Flow::Exporter::Source::PortChannelSubinterface


class Native::Flow::Exporter::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Data; //type: Native::Flow::Exporter::Template_::Data

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Template_::Data> data;
        
}; // Native::Flow::Exporter::Template_


class Native::Flow::Exporter::Template_::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Flow::Exporter::Template_::Data


class Native::Flow::Exporter::Transport : public Entity
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

        YLeaf udp; //type: uint16

}; // Native::Flow::Exporter::Transport


class Native::Flow::Exporter::Default_ : public Entity
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

        YLeaf description; //type: empty
        YLeaf dscp; //type: empty
        YLeaf export_protocol; //type: empty
        YLeaf transport; //type: empty
        YLeaf ttl; //type: empty
        class Option; //type: Native::Flow::Exporter::Default_::Option
        class Template_; //type: Native::Flow::Exporter::Default_::Template_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Default_::Option> option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Default_::Template_> template_;
        
}; // Native::Flow::Exporter::Default_


class Native::Flow::Exporter::Default_::Option : public Entity
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

        class ApplicationAttributes; //type: Native::Flow::Exporter::Default_::Option::ApplicationAttributes
        class C3PlClassTable; //type: Native::Flow::Exporter::Default_::Option::C3PlClassTable
        class C3PlPolicyTable; //type: Native::Flow::Exporter::Default_::Option::C3PlPolicyTable
        class ExporterStats; //type: Native::Flow::Exporter::Default_::Option::ExporterStats
        class InterfaceTable; //type: Native::Flow::Exporter::Default_::Option::InterfaceTable
        class MetadataVersionTable; //type: Native::Flow::Exporter::Default_::Option::MetadataVersionTable
        class SamplerTable; //type: Native::Flow::Exporter::Default_::Option::SamplerTable
        class SubApplicationTable; //type: Native::Flow::Exporter::Default_::Option::SubApplicationTable
        class VrfTable; //type: Native::Flow::Exporter::Default_::Option::VrfTable

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Default_::Option::ApplicationAttributes> application_attributes; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Default_::Option::C3PlClassTable> c3pl_class_table; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Default_::Option::C3PlPolicyTable> c3pl_policy_table; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Default_::Option::ExporterStats> exporter_stats; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Default_::Option::InterfaceTable> interface_table; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Default_::Option::MetadataVersionTable> metadata_version_table; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Default_::Option::SamplerTable> sampler_table; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Default_::Option::SubApplicationTable> sub_application_table; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Default_::Option::VrfTable> vrf_table; // presence node
        
}; // Native::Flow::Exporter::Default_::Option


class Native::Flow::Exporter::Default_::Option::ApplicationAttributes : public Entity
{
    public:
        ApplicationAttributes();
        ~ApplicationAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Flow::Exporter::Default_::Option::ApplicationAttributes


class Native::Flow::Exporter::Default_::Option::C3PlClassTable : public Entity
{
    public:
        C3PlClassTable();
        ~C3PlClassTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Flow::Exporter::Default_::Option::C3PlClassTable


class Native::Flow::Exporter::Default_::Option::C3PlPolicyTable : public Entity
{
    public:
        C3PlPolicyTable();
        ~C3PlPolicyTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Flow::Exporter::Default_::Option::C3PlPolicyTable


class Native::Flow::Exporter::Default_::Option::ExporterStats : public Entity
{
    public:
        ExporterStats();
        ~ExporterStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Flow::Exporter::Default_::Option::ExporterStats


class Native::Flow::Exporter::Default_::Option::InterfaceTable : public Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Flow::Exporter::Default_::Option::InterfaceTable


class Native::Flow::Exporter::Default_::Option::MetadataVersionTable : public Entity
{
    public:
        MetadataVersionTable();
        ~MetadataVersionTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Flow::Exporter::Default_::Option::MetadataVersionTable


class Native::Flow::Exporter::Default_::Option::SamplerTable : public Entity
{
    public:
        SamplerTable();
        ~SamplerTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Flow::Exporter::Default_::Option::SamplerTable


class Native::Flow::Exporter::Default_::Option::SubApplicationTable : public Entity
{
    public:
        SubApplicationTable();
        ~SubApplicationTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Flow::Exporter::Default_::Option::SubApplicationTable


class Native::Flow::Exporter::Default_::Option::VrfTable : public Entity
{
    public:
        VrfTable();
        ~VrfTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Flow::Exporter::Default_::Option::VrfTable


class Native::Flow::Exporter::Default_::Template_ : public Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Data; //type: Native::Flow::Exporter::Default_::Template_::Data

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Exporter::Default_::Template_::Data> data;
        
}; // Native::Flow::Exporter::Default_::Template_


class Native::Flow::Exporter::Default_::Template_::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: empty

}; // Native::Flow::Exporter::Default_::Template_::Data


class Native::Flow::Monitor : public Entity
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
        YLeaf type; //type: TypeEnum
        YLeaf description; //type: string
        class Cache; //type: Native::Flow::Monitor::Cache
        class Exporter; //type: Native::Flow::Monitor::Exporter
        class History; //type: Native::Flow::Monitor::History
        class Record; //type: Native::Flow::Monitor::Record
        class Statistics; //type: Native::Flow::Monitor::Statistics
        class Default_; //type: Native::Flow::Monitor::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Cache> cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Default_> default_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Exporter> > exporter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::History> history;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record> record;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Statistics> statistics;
                class TypeEnum;

}; // Native::Flow::Monitor


class Native::Flow::Monitor::Cache : public Entity
{
    public:
        Cache();
        ~Cache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entries; //type: uint32
        YLeaf type; //type: TypeEnum
        class Timeout; //type: Native::Flow::Monitor::Cache::Timeout

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Cache::Timeout> timeout;
                class TypeEnum;

}; // Native::Flow::Monitor::Cache


class Native::Flow::Monitor::Cache::Timeout : public Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active; //type: uint32
        YLeaf inactive; //type: uint32
        YLeaf synchronized; //type: uint16
        YLeaf update; //type: uint32
        class Event; //type: Native::Flow::Monitor::Cache::Timeout::Event

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Cache::Timeout::Event> event;
        
}; // Native::Flow::Monitor::Cache::Timeout


class Native::Flow::Monitor::Cache::Timeout::Event : public Entity
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

        YLeaf transaction_end; //type: empty

}; // Native::Flow::Monitor::Cache::Timeout::Event


class Native::Flow::Monitor::Exporter : public Entity
{
    public:
        Exporter();
        ~Exporter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Flow::Monitor::Exporter


class Native::Flow::Monitor::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf size; //type: uint8
        YLeaf timeout; //type: uint8

}; // Native::Flow::Monitor::History


class Native::Flow::Monitor::Record : public Entity
{
    public:
        Record();
        ~Record();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: one of string, enumeration
        class Netflow; //type: Native::Flow::Monitor::Record::Netflow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow> netflow;
                class TypeEnum;

}; // Native::Flow::Monitor::Record


class Native::Flow::Monitor::Record::Netflow : public Entity
{
    public:
        Netflow();
        ~Netflow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::Flow::Monitor::Record::Netflow::Ipv4
        class Ipv6; //type: Native::Flow::Monitor::Record::Netflow::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6> ipv6;
        
}; // Native::Flow::Monitor::Record::Netflow


class Native::Flow::Monitor::Record::Netflow::Ipv4 : public Entity
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

        YLeaf protocol_port; //type: empty
        YLeaf prefix_port; //type: empty
        YLeaf protocol_port_tos; //type: empty
        class As; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::As
        class DestinationPrefix; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix
        class OriginalInput; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput
        class OriginalOutput; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput
        class Prefix; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix
        class SourcePrefix; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix
        class AsTos; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos
        class BgpNexthopTos; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos
        class DestinationPrefixTos; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos
        class PrefixTos; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos
        class SourcePrefixTos; //type: Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::As> as; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos> as_tos; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos> bgp_nexthop_tos; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix> destination_prefix; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos> destination_prefix_tos; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput> original_input; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput> original_output; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix> prefix; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos> prefix_tos; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix> source_prefix; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos> source_prefix_tos; // presence node
        
}; // Native::Flow::Monitor::Record::Netflow::Ipv4


class Native::Flow::Monitor::Record::Netflow::Ipv4::As : public Entity
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

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::As


class Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix : public Entity
{
    public:
        DestinationPrefix();
        ~DestinationPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix


class Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput : public Entity
{
    public:
        OriginalInput();
        ~OriginalInput();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput


class Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput : public Entity
{
    public:
        OriginalOutput();
        ~OriginalOutput();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput


class Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix : public Entity
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

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix


class Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix : public Entity
{
    public:
        SourcePrefix();
        ~SourcePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix


class Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos : public Entity
{
    public:
        AsTos();
        ~AsTos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos


class Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos : public Entity
{
    public:
        BgpNexthopTos();
        ~BgpNexthopTos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos


class Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos : public Entity
{
    public:
        DestinationPrefixTos();
        ~DestinationPrefixTos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos


class Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos : public Entity
{
    public:
        PrefixTos();
        ~PrefixTos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos


class Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos : public Entity
{
    public:
        SourcePrefixTos();
        ~SourcePrefixTos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos


class Native::Flow::Monitor::Record::Netflow::Ipv6 : public Entity
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

        YLeaf protocol_port; //type: empty
        class As; //type: Native::Flow::Monitor::Record::Netflow::Ipv6::As
        class DestinationPrefix; //type: Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix
        class OriginalInput; //type: Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput
        class OriginalOutput; //type: Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput
        class Prefix; //type: Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix
        class SourcePrefix; //type: Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix
        class BgpNexthop; //type: Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::As> as; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop> bgp_nexthop; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix> destination_prefix; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput> original_input; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput> original_output; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix> prefix; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix> source_prefix; // presence node
        
}; // Native::Flow::Monitor::Record::Netflow::Ipv6


class Native::Flow::Monitor::Record::Netflow::Ipv6::As : public Entity
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

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv6::As


class Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix : public Entity
{
    public:
        DestinationPrefix();
        ~DestinationPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix


class Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput : public Entity
{
    public:
        OriginalInput();
        ~OriginalInput();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput


class Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput : public Entity
{
    public:
        OriginalOutput();
        ~OriginalOutput();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput


class Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix : public Entity
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

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix


class Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix : public Entity
{
    public:
        SourcePrefix();
        ~SourcePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix


class Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop : public Entity
{
    public:
        BgpNexthop();
        ~BgpNexthop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer; //type: empty

}; // Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop


class Native::Flow::Monitor::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Packet; //type: Native::Flow::Monitor::Statistics::Packet

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Statistics::Packet> packet;
        
}; // Native::Flow::Monitor::Statistics


class Native::Flow::Monitor::Statistics::Packet : public Entity
{
    public:
        Packet();
        ~Packet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: empty
        YLeaf size; //type: empty

}; // Native::Flow::Monitor::Statistics::Packet


class Native::Flow::Monitor::Default_ : public Entity
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

        YLeaf description; //type: empty
        YLeaf exporter; //type: empty
        YLeaf record; //type: empty
        class Cache; //type: Native::Flow::Monitor::Default_::Cache
        class Statistics; //type: Native::Flow::Monitor::Default_::Statistics

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Default_::Cache> cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Default_::Statistics> statistics;
        
}; // Native::Flow::Monitor::Default_


class Native::Flow::Monitor::Default_::Cache : public Entity
{
    public:
        Cache();
        ~Cache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entries; //type: empty
        YLeaf type; //type: empty
        class Timeout; //type: Native::Flow::Monitor::Default_::Cache::Timeout

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Default_::Cache::Timeout> timeout;
        
}; // Native::Flow::Monitor::Default_::Cache


class Native::Flow::Monitor::Default_::Cache::Timeout : public Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf active; //type: empty
        YLeaf inactive; //type: empty
        YLeaf synchronized; //type: empty
        YLeaf update; //type: empty
        class Event; //type: Native::Flow::Monitor::Default_::Cache::Timeout::Event

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Default_::Cache::Timeout::Event> event;
        
}; // Native::Flow::Monitor::Default_::Cache::Timeout


class Native::Flow::Monitor::Default_::Cache::Timeout::Event : public Entity
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

        YLeaf transaction_end; //type: empty

}; // Native::Flow::Monitor::Default_::Cache::Timeout::Event


class Native::Flow::Monitor::Default_::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Packet; //type: Native::Flow::Monitor::Default_::Statistics::Packet

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Monitor::Default_::Statistics::Packet> packet;
        
}; // Native::Flow::Monitor::Default_::Statistics

class Native::Flow::Exporter::ExportProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ipfix;
        static const Enum::YLeaf netflow_v5;
        static const Enum::YLeaf netflow_v9;

};

class Native::Flow::Monitor::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf performance_monitor;

};

class Native::Flow::Monitor::Cache::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf immediate;
        static const Enum::YLeaf normal;
        static const Enum::YLeaf permanent;
        static const Enum::YLeaf synchronized;

};

class Native::Flow::Monitor::Record::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf default_rtp;
        static const Enum::YLeaf default_tcp;
        static const Enum::YLeaf netflow_original;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_6_ */

