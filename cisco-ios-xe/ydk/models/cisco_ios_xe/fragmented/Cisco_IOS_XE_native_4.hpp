#ifndef _CISCO_IOS_XE_NATIVE_4_
#define _CISCO_IOS_XE_NATIVE_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_2.hpp"
#include "Cisco_IOS_XE_native_3.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Flow::Record::Default_::Collect::Datalink : public Entity
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

        YLeaf destination_vlan_id; //type: empty
        YLeaf ethertype; //type: empty
        YLeaf source_vlan_id; //type: empty
        class Dot1Q; //type: Native::Flow::Record::Default_::Collect::Datalink::Dot1Q
        class Mac; //type: Native::Flow::Record::Default_::Collect::Datalink::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Datalink::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Datalink::Mac> mac;
        
}; // Native::Flow::Record::Default_::Collect::Datalink


class Native::Flow::Record::Default_::Collect::Datalink::Dot1Q : public Entity
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

        YLeaf priority; //type: empty
        class Vlan; //type: Native::Flow::Record::Default_::Collect::Datalink::Dot1Q::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Datalink::Dot1Q::Vlan> vlan;
        
}; // Native::Flow::Record::Default_::Collect::Datalink::Dot1Q


class Native::Flow::Record::Default_::Collect::Datalink::Dot1Q::Vlan : public Entity
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

        YLeaf input; //type: empty
        YLeaf output; //type: empty

}; // Native::Flow::Record::Default_::Collect::Datalink::Dot1Q::Vlan


class Native::Flow::Record::Default_::Collect::Datalink::Mac : public Entity
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

        class Destination; //type: Native::Flow::Record::Default_::Collect::Datalink::Mac::Destination
        class Source; //type: Native::Flow::Record::Default_::Collect::Datalink::Mac::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Datalink::Mac::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Datalink::Mac::Source> source;
        
}; // Native::Flow::Record::Default_::Collect::Datalink::Mac


class Native::Flow::Record::Default_::Collect::Datalink::Mac::Destination : public Entity
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

        class Address; //type: Native::Flow::Record::Default_::Collect::Datalink::Mac::Destination::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Datalink::Mac::Destination::Address> address;
        
}; // Native::Flow::Record::Default_::Collect::Datalink::Mac::Destination


class Native::Flow::Record::Default_::Collect::Datalink::Mac::Destination::Address : public Entity
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

        YLeaf input; //type: empty
        YLeaf output; //type: empty

}; // Native::Flow::Record::Default_::Collect::Datalink::Mac::Destination::Address


class Native::Flow::Record::Default_::Collect::Datalink::Mac::Source : public Entity
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

        class Address; //type: Native::Flow::Record::Default_::Collect::Datalink::Mac::Source::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Datalink::Mac::Source::Address> address;
        
}; // Native::Flow::Record::Default_::Collect::Datalink::Mac::Source


class Native::Flow::Record::Default_::Collect::Datalink::Mac::Source::Address : public Entity
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

        YLeaf input; //type: empty
        YLeaf output; //type: empty

}; // Native::Flow::Record::Default_::Collect::Datalink::Mac::Source::Address


class Native::Flow::Record::Default_::Collect::Flow_ : public Entity
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

        YLeaf direction; //type: empty
        YLeaf sampler; //type: empty
        YLeaf end_reason; //type: empty
        class Cts; //type: Native::Flow::Record::Default_::Collect::Flow_::Cts
        class Observation; //type: Native::Flow::Record::Default_::Collect::Flow_::Observation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Flow_::Cts> cts;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Flow_::Observation> observation;
        
}; // Native::Flow::Record::Default_::Collect::Flow_


class Native::Flow::Record::Default_::Collect::Flow_::Cts : public Entity
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

        class Destination; //type: Native::Flow::Record::Default_::Collect::Flow_::Cts::Destination
        class Source; //type: Native::Flow::Record::Default_::Collect::Flow_::Cts::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Flow_::Cts::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Flow_::Cts::Source> source;
        
}; // Native::Flow::Record::Default_::Collect::Flow_::Cts


class Native::Flow::Record::Default_::Collect::Flow_::Cts::Destination : public Entity
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

        YLeaf group_tag; //type: empty

}; // Native::Flow::Record::Default_::Collect::Flow_::Cts::Destination


class Native::Flow::Record::Default_::Collect::Flow_::Cts::Source : public Entity
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

        YLeaf group_tag; //type: empty

}; // Native::Flow::Record::Default_::Collect::Flow_::Cts::Source


class Native::Flow::Record::Default_::Collect::Flow_::Observation : public Entity
{
    public:
        Observation();
        ~Observation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf point; //type: empty

}; // Native::Flow::Record::Default_::Collect::Flow_::Observation


class Native::Flow::Record::Default_::Collect::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Native::Flow::Record::Default_::Collect::Interface::Input
        class Output; //type: Native::Flow::Record::Default_::Collect::Interface::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Interface::Input> input; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Interface::Output> output; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Interface


class Native::Flow::Record::Default_::Collect::Interface::Input : public Entity
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

        YLeaf snmp; //type: empty

}; // Native::Flow::Record::Default_::Collect::Interface::Input


class Native::Flow::Record::Default_::Collect::Interface::Output : public Entity
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

        YLeaf snmp; //type: empty

}; // Native::Flow::Record::Default_::Collect::Interface::Output


class Native::Flow::Record::Default_::Collect::Ipv4 : public Entity
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

        YLeaf dscp; //type: empty
        YLeaf header_length; //type: empty
        YLeaf id; //type: empty
        YLeaf precedence; //type: empty
        YLeaf protocol; //type: empty
        YLeaf tos; //type: empty
        YLeaf version; //type: empty
        class Destination; //type: Native::Flow::Record::Default_::Collect::Ipv4::Destination
        class Fragmentation; //type: Native::Flow::Record::Default_::Collect::Ipv4::Fragmentation
        class Length; //type: Native::Flow::Record::Default_::Collect::Ipv4::Length
        class Option; //type: Native::Flow::Record::Default_::Collect::Ipv4::Option
        class Section; //type: Native::Flow::Record::Default_::Collect::Ipv4::Section
        class Source; //type: Native::Flow::Record::Default_::Collect::Ipv4::Source
        class TotalLength; //type: Native::Flow::Record::Default_::Collect::Ipv4::TotalLength
        class Ttl; //type: Native::Flow::Record::Default_::Collect::Ipv4::Ttl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv4::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv4::Fragmentation> fragmentation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv4::Length> length;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv4::Option> option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv4::Section> section;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv4::Source> source;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv4::TotalLength> total_length; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv4::Ttl> ttl; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Ipv4


class Native::Flow::Record::Default_::Collect::Ipv4::Destination : public Entity
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
        class Mask; //type: Native::Flow::Record::Default_::Collect::Ipv4::Destination::Mask
        class Prefix; //type: Native::Flow::Record::Default_::Collect::Ipv4::Destination::Prefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv4::Destination::Mask> mask; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv4::Destination::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Ipv4::Destination


class Native::Flow::Record::Default_::Collect::Ipv4::Destination::Mask : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Ipv4::Destination::Mask


class Native::Flow::Record::Default_::Collect::Ipv4::Destination::Prefix : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Ipv4::Destination::Prefix


class Native::Flow::Record::Default_::Collect::Ipv4::Fragmentation : public Entity
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
        YLeaf offset; //type: empty

}; // Native::Flow::Record::Default_::Collect::Ipv4::Fragmentation


class Native::Flow::Record::Default_::Collect::Ipv4::Length : public Entity
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
        class Total; //type: Native::Flow::Record::Default_::Collect::Ipv4::Length::Total

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv4::Length::Total> total; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Ipv4::Length


class Native::Flow::Record::Default_::Collect::Ipv4::Length::Total : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Ipv4::Length::Total


class Native::Flow::Record::Default_::Collect::Ipv4::Option : public Entity
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

        YLeaf map; //type: empty

}; // Native::Flow::Record::Default_::Collect::Ipv4::Option


class Native::Flow::Record::Default_::Collect::Ipv4::Section : public Entity
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

        class Header; //type: Native::Flow::Record::Default_::Collect::Ipv4::Section::Header
        class Payload; //type: Native::Flow::Record::Default_::Collect::Ipv4::Section::Payload

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv4::Section::Header> header;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv4::Section::Payload> payload;
        
}; // Native::Flow::Record::Default_::Collect::Ipv4::Section


class Native::Flow::Record::Default_::Collect::Ipv4::Section::Header : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Ipv4::Section::Header


class Native::Flow::Record::Default_::Collect::Ipv4::Section::Payload : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Ipv4::Section::Payload


class Native::Flow::Record::Default_::Collect::Ipv4::Source : public Entity
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
        class Mask; //type: Native::Flow::Record::Default_::Collect::Ipv4::Source::Mask
        class Prefix; //type: Native::Flow::Record::Default_::Collect::Ipv4::Source::Prefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv4::Source::Mask> mask; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv4::Source::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Ipv4::Source


class Native::Flow::Record::Default_::Collect::Ipv4::Source::Mask : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Ipv4::Source::Mask


class Native::Flow::Record::Default_::Collect::Ipv4::Source::Prefix : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Ipv4::Source::Prefix


class Native::Flow::Record::Default_::Collect::Ipv4::TotalLength : public Entity
{
    public:
        TotalLength();
        ~TotalLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: empty
        YLeaf minimum; //type: empty

}; // Native::Flow::Record::Default_::Collect::Ipv4::TotalLength


class Native::Flow::Record::Default_::Collect::Ipv4::Ttl : public Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maximum; //type: empty
        YLeaf minimum; //type: empty

}; // Native::Flow::Record::Default_::Collect::Ipv4::Ttl


class Native::Flow::Record::Default_::Collect::Ipv6 : public Entity
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

        YLeaf dscp; //type: empty
        YLeaf flow_label; //type: empty
        YLeaf next_header; //type: empty
        YLeaf payload_length; //type: empty
        YLeaf precedence; //type: empty
        YLeaf protocol; //type: empty
        YLeaf traffic_class; //type: empty
        YLeaf version; //type: empty
        class Destination; //type: Native::Flow::Record::Default_::Collect::Ipv6::Destination
        class Extension; //type: Native::Flow::Record::Default_::Collect::Ipv6::Extension
        class Fragmentation; //type: Native::Flow::Record::Default_::Collect::Ipv6::Fragmentation
        class HopLimit; //type: Native::Flow::Record::Default_::Collect::Ipv6::HopLimit
        class Length; //type: Native::Flow::Record::Default_::Collect::Ipv6::Length
        class Section; //type: Native::Flow::Record::Default_::Collect::Ipv6::Section
        class Source; //type: Native::Flow::Record::Default_::Collect::Ipv6::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv6::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv6::Extension> extension;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv6::Fragmentation> fragmentation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv6::HopLimit> hop_limit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv6::Length> length;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv6::Section> section;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv6::Source> source;
        
}; // Native::Flow::Record::Default_::Collect::Ipv6


class Native::Flow::Record::Default_::Collect::Ipv6::Destination : public Entity
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
        class Mask; //type: Native::Flow::Record::Default_::Collect::Ipv6::Destination::Mask
        class Prefix; //type: Native::Flow::Record::Default_::Collect::Ipv6::Destination::Prefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv6::Destination::Mask> mask; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv6::Destination::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Ipv6::Destination


class Native::Flow::Record::Default_::Collect::Ipv6::Destination::Mask : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Ipv6::Destination::Mask


class Native::Flow::Record::Default_::Collect::Ipv6::Destination::Prefix : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Ipv6::Destination::Prefix


class Native::Flow::Record::Default_::Collect::Ipv6::Extension : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Ipv6::Extension


class Native::Flow::Record::Default_::Collect::Ipv6::Fragmentation : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Ipv6::Fragmentation


class Native::Flow::Record::Default_::Collect::Ipv6::HopLimit : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Ipv6::HopLimit


class Native::Flow::Record::Default_::Collect::Ipv6::Length : public Entity
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
        class Total; //type: Native::Flow::Record::Default_::Collect::Ipv6::Length::Total

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv6::Length::Total> total; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Ipv6::Length


class Native::Flow::Record::Default_::Collect::Ipv6::Length::Total : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Ipv6::Length::Total


class Native::Flow::Record::Default_::Collect::Ipv6::Section : public Entity
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

        class Header; //type: Native::Flow::Record::Default_::Collect::Ipv6::Section::Header
        class Payload; //type: Native::Flow::Record::Default_::Collect::Ipv6::Section::Payload

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv6::Section::Header> header;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv6::Section::Payload> payload;
        
}; // Native::Flow::Record::Default_::Collect::Ipv6::Section


class Native::Flow::Record::Default_::Collect::Ipv6::Section::Header : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Ipv6::Section::Header


class Native::Flow::Record::Default_::Collect::Ipv6::Section::Payload : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Ipv6::Section::Payload


class Native::Flow::Record::Default_::Collect::Ipv6::Source : public Entity
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
        class Mask; //type: Native::Flow::Record::Default_::Collect::Ipv6::Source::Mask
        class Prefix; //type: Native::Flow::Record::Default_::Collect::Ipv6::Source::Prefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv6::Source::Mask> mask; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Ipv6::Source::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Ipv6::Source


class Native::Flow::Record::Default_::Collect::Ipv6::Source::Mask : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Ipv6::Source::Mask


class Native::Flow::Record::Default_::Collect::Ipv6::Source::Prefix : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Ipv6::Source::Prefix


class Native::Flow::Record::Default_::Collect::Metadata : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Metadata


class Native::Flow::Record::Default_::Collect::Monitor : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Monitor


class Native::Flow::Record::Default_::Collect::Mpls : public Entity
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

        class Label; //type: Native::Flow::Record::Default_::Collect::Mpls::Label

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Mpls::Label> label;
        
}; // Native::Flow::Record::Default_::Collect::Mpls


class Native::Flow::Record::Default_::Collect::Mpls::Label : public Entity
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

        class One; //type: Native::Flow::Record::Default_::Collect::Mpls::Label::One
        class Two; //type: Native::Flow::Record::Default_::Collect::Mpls::Label::Two
        class Three; //type: Native::Flow::Record::Default_::Collect::Mpls::Label::Three
        class Four; //type: Native::Flow::Record::Default_::Collect::Mpls::Label::Four
        class Five; //type: Native::Flow::Record::Default_::Collect::Mpls::Label::Five
        class Six; //type: Native::Flow::Record::Default_::Collect::Mpls::Label::Six

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Mpls::Label::Five> five;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Mpls::Label::Four> four;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Mpls::Label::One> one;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Mpls::Label::Six> six;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Mpls::Label::Three> three;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Mpls::Label::Two> two;
        
}; // Native::Flow::Record::Default_::Collect::Mpls::Label


class Native::Flow::Record::Default_::Collect::Mpls::Label::One : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Mpls::Label::One


class Native::Flow::Record::Default_::Collect::Mpls::Label::Two : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Mpls::Label::Two


class Native::Flow::Record::Default_::Collect::Mpls::Label::Three : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Mpls::Label::Three


class Native::Flow::Record::Default_::Collect::Mpls::Label::Four : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Mpls::Label::Four


class Native::Flow::Record::Default_::Collect::Mpls::Label::Five : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Mpls::Label::Five


class Native::Flow::Record::Default_::Collect::Mpls::Label::Six : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Mpls::Label::Six


class Native::Flow::Record::Default_::Collect::Network : public Entity
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

        class Delay; //type: Native::Flow::Record::Default_::Collect::Network::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Network::Delay> delay;
        
}; // Native::Flow::Record::Default_::Collect::Network


class Native::Flow::Record::Default_::Collect::Network::Delay : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Network::Delay


class Native::Flow::Record::Default_::Collect::Pfr : public Entity
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

        class Label; //type: Native::Flow::Record::Default_::Collect::Pfr::Label
        class OneWayDelay; //type: Native::Flow::Record::Default_::Collect::Pfr::OneWayDelay
        class Service; //type: Native::Flow::Record::Default_::Collect::Pfr::Service
        class Site; //type: Native::Flow::Record::Default_::Collect::Pfr::Site

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Pfr::Label> label;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Pfr::OneWayDelay> one_way_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Pfr::Service> service;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Pfr::Site> site;
        
}; // Native::Flow::Record::Default_::Collect::Pfr


class Native::Flow::Record::Default_::Collect::Pfr::Label : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Pfr::Label


class Native::Flow::Record::Default_::Collect::Pfr::OneWayDelay : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Pfr::OneWayDelay


class Native::Flow::Record::Default_::Collect::Pfr::Service : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Pfr::Service


class Native::Flow::Record::Default_::Collect::Pfr::Site : public Entity
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

        class Destination; //type: Native::Flow::Record::Default_::Collect::Pfr::Site::Destination
        class Source; //type: Native::Flow::Record::Default_::Collect::Pfr::Site::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Pfr::Site::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Pfr::Site::Source> source;
        
}; // Native::Flow::Record::Default_::Collect::Pfr::Site


class Native::Flow::Record::Default_::Collect::Pfr::Site::Destination : public Entity
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

        class Id; //type: Native::Flow::Record::Default_::Collect::Pfr::Site::Destination::Id
        class Prefix; //type: Native::Flow::Record::Default_::Collect::Pfr::Site::Destination::Prefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Pfr::Site::Destination::Id> id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Pfr::Site::Destination::Prefix> prefix;
        
}; // Native::Flow::Record::Default_::Collect::Pfr::Site::Destination


class Native::Flow::Record::Default_::Collect::Pfr::Site::Destination::Id : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Pfr::Site::Destination::Id


class Native::Flow::Record::Default_::Collect::Pfr::Site::Destination::Prefix : public Entity
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
        class Mask; //type: Native::Flow::Record::Default_::Collect::Pfr::Site::Destination::Prefix::Mask

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Pfr::Site::Destination::Prefix::Mask> mask;
        
}; // Native::Flow::Record::Default_::Collect::Pfr::Site::Destination::Prefix


class Native::Flow::Record::Default_::Collect::Pfr::Site::Destination::Prefix::Mask : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Pfr::Site::Destination::Prefix::Mask


class Native::Flow::Record::Default_::Collect::Pfr::Site::Source : public Entity
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

        class Id; //type: Native::Flow::Record::Default_::Collect::Pfr::Site::Source::Id
        class Prefix; //type: Native::Flow::Record::Default_::Collect::Pfr::Site::Source::Prefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Pfr::Site::Source::Id> id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Pfr::Site::Source::Prefix> prefix;
        
}; // Native::Flow::Record::Default_::Collect::Pfr::Site::Source


class Native::Flow::Record::Default_::Collect::Pfr::Site::Source::Id : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Pfr::Site::Source::Id


class Native::Flow::Record::Default_::Collect::Pfr::Site::Source::Prefix : public Entity
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
        class Mask; //type: Native::Flow::Record::Default_::Collect::Pfr::Site::Source::Prefix::Mask

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Pfr::Site::Source::Prefix::Mask> mask;
        
}; // Native::Flow::Record::Default_::Collect::Pfr::Site::Source::Prefix


class Native::Flow::Record::Default_::Collect::Pfr::Site::Source::Prefix::Mask : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Pfr::Site::Source::Prefix::Mask


class Native::Flow::Record::Default_::Collect::Policy : public Entity
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

        class PerformanceMonitor; //type: Native::Flow::Record::Default_::Collect::Policy::PerformanceMonitor
        class Qos; //type: Native::Flow::Record::Default_::Collect::Policy::Qos

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Policy::PerformanceMonitor> performance_monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Policy::Qos> qos;
        
}; // Native::Flow::Record::Default_::Collect::Policy


class Native::Flow::Record::Default_::Collect::Policy::PerformanceMonitor : public Entity
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

        class Classification; //type: Native::Flow::Record::Default_::Collect::Policy::PerformanceMonitor::Classification

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Policy::PerformanceMonitor::Classification> classification;
        
}; // Native::Flow::Record::Default_::Collect::Policy::PerformanceMonitor


class Native::Flow::Record::Default_::Collect::Policy::PerformanceMonitor::Classification : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Policy::PerformanceMonitor::Classification


class Native::Flow::Record::Default_::Collect::Policy::Qos : public Entity
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

        class Classification; //type: Native::Flow::Record::Default_::Collect::Policy::Qos::Classification
        class Queue; //type: Native::Flow::Record::Default_::Collect::Policy::Qos::Queue

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Policy::Qos::Classification> classification;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Policy::Qos::Queue> queue;
        
}; // Native::Flow::Record::Default_::Collect::Policy::Qos


class Native::Flow::Record::Default_::Collect::Policy::Qos::Classification : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Policy::Qos::Classification


class Native::Flow::Record::Default_::Collect::Policy::Qos::Queue : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Policy::Qos::Queue


class Native::Flow::Record::Default_::Collect::Routing : public Entity
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
        class Destination; //type: Native::Flow::Record::Default_::Collect::Routing::Destination
        class ForwardingStatus; //type: Native::Flow::Record::Default_::Collect::Routing::ForwardingStatus
        class NextHop; //type: Native::Flow::Record::Default_::Collect::Routing::NextHop
        class Pw; //type: Native::Flow::Record::Default_::Collect::Routing::Pw
        class Source; //type: Native::Flow::Record::Default_::Collect::Routing::Source
        class Vrf; //type: Native::Flow::Record::Default_::Collect::Routing::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Routing::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Routing::ForwardingStatus> forwarding_status; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Routing::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Routing::Pw> pw;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Routing::Source> source;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Routing::Vrf> vrf;
        
}; // Native::Flow::Record::Default_::Collect::Routing


class Native::Flow::Record::Default_::Collect::Routing::Destination : public Entity
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
        class As; //type: Native::Flow::Record::Default_::Collect::Routing::Destination::As

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Routing::Destination::As> as; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Routing::Destination


class Native::Flow::Record::Default_::Collect::Routing::Destination::As : public Entity
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
        class Peer; //type: Native::Flow::Record::Default_::Collect::Routing::Destination::As::Peer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Routing::Destination::As::Peer> peer; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Routing::Destination::As


class Native::Flow::Record::Default_::Collect::Routing::Destination::As::Peer : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Routing::Destination::As::Peer


class Native::Flow::Record::Default_::Collect::Routing::ForwardingStatus : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Routing::ForwardingStatus


class Native::Flow::Record::Default_::Collect::Routing::NextHop : public Entity
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

        class Address; //type: Native::Flow::Record::Default_::Collect::Routing::NextHop::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Routing::NextHop::Address> address;
        
}; // Native::Flow::Record::Default_::Collect::Routing::NextHop


class Native::Flow::Record::Default_::Collect::Routing::NextHop::Address : public Entity
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

        class Ipv4; //type: Native::Flow::Record::Default_::Collect::Routing::NextHop::Address::Ipv4
        class Ipv6; //type: Native::Flow::Record::Default_::Collect::Routing::NextHop::Address::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Routing::NextHop::Address::Ipv4> ipv4; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Routing::NextHop::Address::Ipv6> ipv6; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Routing::NextHop::Address


class Native::Flow::Record::Default_::Collect::Routing::NextHop::Address::Ipv4 : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Routing::NextHop::Address::Ipv4


class Native::Flow::Record::Default_::Collect::Routing::NextHop::Address::Ipv6 : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Routing::NextHop::Address::Ipv6


class Native::Flow::Record::Default_::Collect::Routing::Pw : public Entity
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

        class Destination; //type: Native::Flow::Record::Default_::Collect::Routing::Pw::Destination

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Routing::Pw::Destination> destination;
        
}; // Native::Flow::Record::Default_::Collect::Routing::Pw


class Native::Flow::Record::Default_::Collect::Routing::Pw::Destination : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Routing::Pw::Destination


class Native::Flow::Record::Default_::Collect::Routing::Source : public Entity
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
        class As; //type: Native::Flow::Record::Default_::Collect::Routing::Source::As

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Routing::Source::As> as; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Routing::Source


class Native::Flow::Record::Default_::Collect::Routing::Source::As : public Entity
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
        class Peer; //type: Native::Flow::Record::Default_::Collect::Routing::Source::As::Peer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Routing::Source::As::Peer> peer; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Routing::Source::As


class Native::Flow::Record::Default_::Collect::Routing::Source::As::Peer : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Routing::Source::As::Peer


class Native::Flow::Record::Default_::Collect::Routing::Vrf : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Routing::Vrf


class Native::Flow::Record::Default_::Collect::Services : public Entity
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

        class Waas; //type: Native::Flow::Record::Default_::Collect::Services::Waas

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Services::Waas> waas;
        
}; // Native::Flow::Record::Default_::Collect::Services


class Native::Flow::Record::Default_::Collect::Services::Waas : public Entity
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
        class Segment; //type: Native::Flow::Record::Default_::Collect::Services::Waas::Segment

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Services::Waas::Segment> segment; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Services::Waas


class Native::Flow::Record::Default_::Collect::Services::Waas::Segment : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Services::Waas::Segment


class Native::Flow::Record::Default_::Collect::Timestamp : public Entity
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
        class Absolute; //type: Native::Flow::Record::Default_::Collect::Timestamp::Absolute
        class SysUptime; //type: Native::Flow::Record::Default_::Collect::Timestamp::SysUptime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Timestamp::Absolute> absolute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Timestamp::SysUptime> sys_uptime;
        
}; // Native::Flow::Record::Default_::Collect::Timestamp


class Native::Flow::Record::Default_::Collect::Timestamp::Absolute : public Entity
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
        class MonitoringInterval; //type: Native::Flow::Record::Default_::Collect::Timestamp::Absolute::MonitoringInterval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Timestamp::Absolute::MonitoringInterval> monitoring_interval;
        
}; // Native::Flow::Record::Default_::Collect::Timestamp::Absolute


class Native::Flow::Record::Default_::Collect::Timestamp::Absolute::MonitoringInterval : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Timestamp::Absolute::MonitoringInterval


class Native::Flow::Record::Default_::Collect::Timestamp::SysUptime : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Timestamp::SysUptime


class Native::Flow::Record::Default_::Collect::Transport : public Entity
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
        class Bytes; //type: Native::Flow::Record::Default_::Collect::Transport::Bytes
        class Icmp; //type: Native::Flow::Record::Default_::Collect::Transport::Icmp
        class Igmp; //type: Native::Flow::Record::Default_::Collect::Transport::Igmp
        class Tcp; //type: Native::Flow::Record::Default_::Collect::Transport::Tcp
        class Udp; //type: Native::Flow::Record::Default_::Collect::Transport::Udp
        class Event; //type: Native::Flow::Record::Default_::Collect::Transport::Event
        class Packets; //type: Native::Flow::Record::Default_::Collect::Transport::Packets
        class RoundTripTime; //type: Native::Flow::Record::Default_::Collect::Transport::RoundTripTime
        class Rtp; //type: Native::Flow::Record::Default_::Collect::Transport::Rtp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Bytes> bytes;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Event> event;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Icmp> icmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Packets> packets;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::RoundTripTime> round_trip_time; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Rtp> rtp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Udp> udp;
        
}; // Native::Flow::Record::Default_::Collect::Transport


class Native::Flow::Record::Default_::Collect::Transport::Bytes : public Entity
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
        class Lost; //type: Native::Flow::Record::Default_::Collect::Transport::Bytes::Lost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Bytes::Lost> lost; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Transport::Bytes


class Native::Flow::Record::Default_::Collect::Transport::Bytes::Lost : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Transport::Bytes::Lost


class Native::Flow::Record::Default_::Collect::Transport::Icmp : public Entity
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

        class Ipv4; //type: Native::Flow::Record::Default_::Collect::Transport::Icmp::Ipv4
        class Ipv6; //type: Native::Flow::Record::Default_::Collect::Transport::Icmp::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Icmp::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Icmp::Ipv6> ipv6;
        
}; // Native::Flow::Record::Default_::Collect::Transport::Icmp


class Native::Flow::Record::Default_::Collect::Transport::Icmp::Ipv4 : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Transport::Icmp::Ipv4


class Native::Flow::Record::Default_::Collect::Transport::Icmp::Ipv6 : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Transport::Icmp::Ipv6


class Native::Flow::Record::Default_::Collect::Transport::Igmp : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Transport::Igmp


class Native::Flow::Record::Default_::Collect::Transport::Tcp : public Entity
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
        class Flags; //type: Native::Flow::Record::Default_::Collect::Transport::Tcp::Flags
        class Flow_; //type: Native::Flow::Record::Default_::Collect::Transport::Tcp::Flow_
        class Option; //type: Native::Flow::Record::Default_::Collect::Transport::Tcp::Option
        class WindowSize; //type: Native::Flow::Record::Default_::Collect::Transport::Tcp::WindowSize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Tcp::Flags> flags; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Tcp::Flow_> flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Tcp::Option> option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Tcp::WindowSize> window_size; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Transport::Tcp


class Native::Flow::Record::Default_::Collect::Transport::Tcp::Flags : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Transport::Tcp::Flags


class Native::Flow::Record::Default_::Collect::Transport::Tcp::Flow_ : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Transport::Tcp::Flow_


class Native::Flow::Record::Default_::Collect::Transport::Tcp::Option : public Entity
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

        class Map; //type: Native::Flow::Record::Default_::Collect::Transport::Tcp::Option::Map

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Tcp::Option::Map> map; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Transport::Tcp::Option


class Native::Flow::Record::Default_::Collect::Transport::Tcp::Option::Map : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Transport::Tcp::Option::Map


class Native::Flow::Record::Default_::Collect::Transport::Tcp::WindowSize : public Entity
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
        class Average; //type: Native::Flow::Record::Default_::Collect::Transport::Tcp::WindowSize::Average

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Tcp::WindowSize::Average> average; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Transport::Tcp::WindowSize


class Native::Flow::Record::Default_::Collect::Transport::Tcp::WindowSize::Average : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Transport::Tcp::WindowSize::Average


class Native::Flow::Record::Default_::Collect::Transport::Udp : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Transport::Udp


class Native::Flow::Record::Default_::Collect::Transport::Event : public Entity
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

        class PacketLoss; //type: Native::Flow::Record::Default_::Collect::Transport::Event::PacketLoss

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Event::PacketLoss> packet_loss;
        
}; // Native::Flow::Record::Default_::Collect::Transport::Event


class Native::Flow::Record::Default_::Collect::Transport::Event::PacketLoss : public Entity
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

        class Counter; //type: Native::Flow::Record::Default_::Collect::Transport::Event::PacketLoss::Counter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Event::PacketLoss::Counter> counter; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Transport::Event::PacketLoss


class Native::Flow::Record::Default_::Collect::Transport::Event::PacketLoss::Counter : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Transport::Event::PacketLoss::Counter


class Native::Flow::Record::Default_::Collect::Transport::Packets : public Entity
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
        class Expected; //type: Native::Flow::Record::Default_::Collect::Transport::Packets::Expected
        class Lost; //type: Native::Flow::Record::Default_::Collect::Transport::Packets::Lost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Packets::Expected> expected;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Packets::Lost> lost;
        
}; // Native::Flow::Record::Default_::Collect::Transport::Packets


class Native::Flow::Record::Default_::Collect::Transport::Packets::Expected : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Transport::Packets::Expected


class Native::Flow::Record::Default_::Collect::Transport::Packets::Lost : public Entity
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

        class Counter; //type: Native::Flow::Record::Default_::Collect::Transport::Packets::Lost::Counter
        class Rate; //type: Native::Flow::Record::Default_::Collect::Transport::Packets::Lost::Rate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Packets::Lost::Counter> counter; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Packets::Lost::Rate> rate; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Transport::Packets::Lost


class Native::Flow::Record::Default_::Collect::Transport::Packets::Lost::Counter : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Transport::Packets::Lost::Counter


class Native::Flow::Record::Default_::Collect::Transport::Packets::Lost::Rate : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Transport::Packets::Lost::Rate


class Native::Flow::Record::Default_::Collect::Transport::RoundTripTime : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Transport::RoundTripTime


class Native::Flow::Record::Default_::Collect::Transport::Rtp : public Entity
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
        class Flow_; //type: Native::Flow::Record::Default_::Collect::Transport::Rtp::Flow_
        class Jitter; //type: Native::Flow::Record::Default_::Collect::Transport::Rtp::Jitter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Rtp::Flow_> flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Rtp::Jitter> jitter;
        
}; // Native::Flow::Record::Default_::Collect::Transport::Rtp


class Native::Flow::Record::Default_::Collect::Transport::Rtp::Flow_ : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Transport::Rtp::Flow_


class Native::Flow::Record::Default_::Collect::Transport::Rtp::Jitter : public Entity
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
        class Mean; //type: Native::Flow::Record::Default_::Collect::Transport::Rtp::Jitter::Mean

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Collect::Transport::Rtp::Jitter::Mean> mean; // presence node
        
}; // Native::Flow::Record::Default_::Collect::Transport::Rtp::Jitter


class Native::Flow::Record::Default_::Collect::Transport::Rtp::Jitter::Mean : public Entity
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

}; // Native::Flow::Record::Default_::Collect::Transport::Rtp::Jitter::Mean


class Native::Flow::Record::Default_::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Application; //type: Native::Flow::Record::Default_::Match::Application
        class Connection; //type: Native::Flow::Record::Default_::Match::Connection
        class Datalink; //type: Native::Flow::Record::Default_::Match::Datalink
        class Flow_; //type: Native::Flow::Record::Default_::Match::Flow_
        class Interface; //type: Native::Flow::Record::Default_::Match::Interface
        class Ipv4; //type: Native::Flow::Record::Default_::Match::Ipv4
        class Ipv6; //type: Native::Flow::Record::Default_::Match::Ipv6
        class Metadata; //type: Native::Flow::Record::Default_::Match::Metadata
        class Mpls; //type: Native::Flow::Record::Default_::Match::Mpls
        class Network; //type: Native::Flow::Record::Default_::Match::Network
        class Pfr; //type: Native::Flow::Record::Default_::Match::Pfr
        class Policy; //type: Native::Flow::Record::Default_::Match::Policy
        class Routing; //type: Native::Flow::Record::Default_::Match::Routing
        class Services; //type: Native::Flow::Record::Default_::Match::Services
        class Timestamp; //type: Native::Flow::Record::Default_::Match::Timestamp
        class Transport; //type: Native::Flow::Record::Default_::Match::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Application> application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Connection> connection;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Datalink> datalink;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Flow_> flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Metadata> metadata;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Pfr> pfr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Routing> routing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Services> services;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Timestamp> timestamp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Transport> transport;
        
}; // Native::Flow::Record::Default_::Match


class Native::Flow::Record::Default_::Match::Application : public Entity
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
        class Name; //type: Native::Flow::Record::Default_::Match::Application::Name

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Application::Name> name; // presence node
        
}; // Native::Flow::Record::Default_::Match::Application


class Native::Flow::Record::Default_::Match::Application::Name : public Entity
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

}; // Native::Flow::Record::Default_::Match::Application::Name


class Native::Flow::Record::Default_::Match::Connection : public Entity
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
        YLeaf transaction_id; //type: empty
        class Client; //type: Native::Flow::Record::Default_::Match::Connection::Client
        class Server; //type: Native::Flow::Record::Default_::Match::Connection::Server

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Connection::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Connection::Server> server;
        
}; // Native::Flow::Record::Default_::Match::Connection


class Native::Flow::Record::Default_::Match::Connection::Client : public Entity
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

        class Ipv4; //type: Native::Flow::Record::Default_::Match::Connection::Client::Ipv4
        class Ipv6; //type: Native::Flow::Record::Default_::Match::Connection::Client::Ipv6
        class Transport; //type: Native::Flow::Record::Default_::Match::Connection::Client::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Connection::Client::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Connection::Client::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Connection::Client::Transport> transport;
        
}; // Native::Flow::Record::Default_::Match::Connection::Client


class Native::Flow::Record::Default_::Match::Connection::Client::Ipv4 : public Entity
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

}; // Native::Flow::Record::Default_::Match::Connection::Client::Ipv4


class Native::Flow::Record::Default_::Match::Connection::Client::Ipv6 : public Entity
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

}; // Native::Flow::Record::Default_::Match::Connection::Client::Ipv6


class Native::Flow::Record::Default_::Match::Connection::Client::Transport : public Entity
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

}; // Native::Flow::Record::Default_::Match::Connection::Client::Transport


class Native::Flow::Record::Default_::Match::Connection::Server : public Entity
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

        class Ipv4; //type: Native::Flow::Record::Default_::Match::Connection::Server::Ipv4
        class Ipv6; //type: Native::Flow::Record::Default_::Match::Connection::Server::Ipv6
        class Transport; //type: Native::Flow::Record::Default_::Match::Connection::Server::Transport

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Connection::Server::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Connection::Server::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Connection::Server::Transport> transport;
        
}; // Native::Flow::Record::Default_::Match::Connection::Server


class Native::Flow::Record::Default_::Match::Connection::Server::Ipv4 : public Entity
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

}; // Native::Flow::Record::Default_::Match::Connection::Server::Ipv4


class Native::Flow::Record::Default_::Match::Connection::Server::Ipv6 : public Entity
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

}; // Native::Flow::Record::Default_::Match::Connection::Server::Ipv6


class Native::Flow::Record::Default_::Match::Connection::Server::Transport : public Entity
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

}; // Native::Flow::Record::Default_::Match::Connection::Server::Transport


class Native::Flow::Record::Default_::Match::Datalink : public Entity
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

        YLeaf destination_vlan_id; //type: empty
        YLeaf ethertype; //type: empty
        YLeaf source_vlan_id; //type: empty
        class Dot1Q; //type: Native::Flow::Record::Default_::Match::Datalink::Dot1Q
        class Mac; //type: Native::Flow::Record::Default_::Match::Datalink::Mac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Datalink::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Datalink::Mac> mac;
        
}; // Native::Flow::Record::Default_::Match::Datalink


class Native::Flow::Record::Default_::Match::Datalink::Dot1Q : public Entity
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

        YLeaf priority; //type: empty
        class Vlan; //type: Native::Flow::Record::Default_::Match::Datalink::Dot1Q::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Datalink::Dot1Q::Vlan> vlan;
        
}; // Native::Flow::Record::Default_::Match::Datalink::Dot1Q


class Native::Flow::Record::Default_::Match::Datalink::Dot1Q::Vlan : public Entity
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

        YLeaf input; //type: empty
        YLeaf output; //type: empty

}; // Native::Flow::Record::Default_::Match::Datalink::Dot1Q::Vlan


class Native::Flow::Record::Default_::Match::Datalink::Mac : public Entity
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

        class Destination; //type: Native::Flow::Record::Default_::Match::Datalink::Mac::Destination
        class Source; //type: Native::Flow::Record::Default_::Match::Datalink::Mac::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Datalink::Mac::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Datalink::Mac::Source> source;
        
}; // Native::Flow::Record::Default_::Match::Datalink::Mac


class Native::Flow::Record::Default_::Match::Datalink::Mac::Destination : public Entity
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

        class Address; //type: Native::Flow::Record::Default_::Match::Datalink::Mac::Destination::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Datalink::Mac::Destination::Address> address;
        
}; // Native::Flow::Record::Default_::Match::Datalink::Mac::Destination


class Native::Flow::Record::Default_::Match::Datalink::Mac::Destination::Address : public Entity
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

        YLeaf input; //type: empty
        YLeaf output; //type: empty

}; // Native::Flow::Record::Default_::Match::Datalink::Mac::Destination::Address


class Native::Flow::Record::Default_::Match::Datalink::Mac::Source : public Entity
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

        class Address; //type: Native::Flow::Record::Default_::Match::Datalink::Mac::Source::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Datalink::Mac::Source::Address> address;
        
}; // Native::Flow::Record::Default_::Match::Datalink::Mac::Source


class Native::Flow::Record::Default_::Match::Datalink::Mac::Source::Address : public Entity
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

        YLeaf input; //type: empty
        YLeaf output; //type: empty

}; // Native::Flow::Record::Default_::Match::Datalink::Mac::Source::Address


class Native::Flow::Record::Default_::Match::Flow_ : public Entity
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

        YLeaf direction; //type: empty
        YLeaf sampler; //type: empty
        class Cts; //type: Native::Flow::Record::Default_::Match::Flow_::Cts
        class Observation; //type: Native::Flow::Record::Default_::Match::Flow_::Observation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Flow_::Cts> cts;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Flow_::Observation> observation;
        
}; // Native::Flow::Record::Default_::Match::Flow_


class Native::Flow::Record::Default_::Match::Flow_::Cts : public Entity
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

        class Destination; //type: Native::Flow::Record::Default_::Match::Flow_::Cts::Destination
        class Source; //type: Native::Flow::Record::Default_::Match::Flow_::Cts::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Flow_::Cts::Destination> destination;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Flow::Record::Default_::Match::Flow_::Cts::Source> source;
        
}; // Native::Flow::Record::Default_::Match::Flow_::Cts


}
}

#endif /* _CISCO_IOS_XE_NATIVE_4_ */

