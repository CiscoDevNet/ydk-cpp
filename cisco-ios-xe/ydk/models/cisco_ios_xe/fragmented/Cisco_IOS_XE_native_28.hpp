#ifndef _CISCO_IOS_XE_NATIVE_28_
#define _CISCO_IOS_XE_NATIVE_28_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_26.hpp"
#include "Cisco_IOS_XE_native_27.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping : public Entity
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
        class Limit; //type: Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Limit
        class Vlan; //type: Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Limit> limit;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan> > vlan;
        
}; // Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping


class Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Limit : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Limit


class Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan : public Entity
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
        class Information; //type: Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan::Information

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan::Information> information;
        
}; // Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan


class Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan::Information : public Entity
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

        class Option; //type: Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option> option;
        
}; // Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan::Information


class Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option : public Entity
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

        class FormatType; //type: Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType> format_type;
        
}; // Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option


class Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType : public Entity
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

        class CircuitId; //type: Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId> circuit_id;
        
}; // Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType


class Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId


class Native::Interface::Gigabitethernet::Ip::SummaryAddress : public Entity
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

        class Eigrp; //type: Native::Interface::Gigabitethernet::Ip::SummaryAddress::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::SummaryAddress::Eigrp> > eigrp;
        
}; // Native::Interface::Gigabitethernet::Ip::SummaryAddress


class Native::Interface::Gigabitethernet::Ip::SummaryAddress::Eigrp : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::SummaryAddress::Eigrp


class Native::Interface::Gigabitethernet::Ip::Verify : public Entity
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

        class Source; //type: Native::Interface::Gigabitethernet::Ip::Verify::Source
        class Unicast; //type: Native::Interface::Gigabitethernet::Ip::Verify::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Verify::Source> source; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Verify::Unicast> unicast;
        
}; // Native::Interface::Gigabitethernet::Ip::Verify


class Native::Interface::Gigabitethernet::Ip::Verify::Source : public Entity
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

        class Vlan; //type: Native::Interface::Gigabitethernet::Ip::Verify::Source::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Verify::Source::Vlan> vlan;
        
}; // Native::Interface::Gigabitethernet::Ip::Verify::Source


class Native::Interface::Gigabitethernet::Ip::Verify::Source::Vlan : public Entity
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

        class DhcpSnooping; //type: Native::Interface::Gigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping> dhcp_snooping; // presence node
        
}; // Native::Interface::Gigabitethernet::Ip::Verify::Source::Vlan


class Native::Interface::Gigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping


class Native::Interface::Gigabitethernet::Ip::Verify::Unicast : public Entity
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

        class ReversePath; //type: Native::Interface::Gigabitethernet::Ip::Verify::Unicast::ReversePath
        class Source; //type: Native::Interface::Gigabitethernet::Ip::Verify::Unicast::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Verify::Unicast::ReversePath> reverse_path; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Verify::Unicast::Source> source;
        
}; // Native::Interface::Gigabitethernet::Ip::Verify::Unicast


class Native::Interface::Gigabitethernet::Ip::Verify::Unicast::ReversePath : public Entity
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


}; // Native::Interface::Gigabitethernet::Ip::Verify::Unicast::ReversePath


class Native::Interface::Gigabitethernet::Ip::Verify::Unicast::Source : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Verify::Unicast::Source


class Native::Interface::Gigabitethernet::Ip::Flow : public Entity
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
        class Monitor; //type: Native::Interface::Gigabitethernet::Ip::Flow::Monitor

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Flow::Monitor> > monitor;
        
}; // Native::Interface::Gigabitethernet::Ip::Flow


class Native::Interface::Gigabitethernet::Ip::Flow::Monitor : public Entity
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
        class Sampler; //type: Native::Interface::Gigabitethernet::Ip::Flow::Monitor::Sampler

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Flow::Monitor::Sampler> > sampler;
        
}; // Native::Interface::Gigabitethernet::Ip::Flow::Monitor


class Native::Interface::Gigabitethernet::Ip::Flow::Monitor::Sampler : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Flow::Monitor::Sampler


class Native::Interface::Gigabitethernet::Ip::Igmp : public Entity
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
        class StaticGroup; //type: Native::Interface::Gigabitethernet::Ip::Igmp::StaticGroup
        class JoinGroup; //type: Native::Interface::Gigabitethernet::Ip::Igmp::JoinGroup

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Igmp::JoinGroup> > join_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Igmp::StaticGroup> static_group;
        
}; // Native::Interface::Gigabitethernet::Ip::Igmp


class Native::Interface::Gigabitethernet::Ip::Igmp::StaticGroup : public Entity
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

        class Groups; //type: Native::Interface::Gigabitethernet::Ip::Igmp::StaticGroup::Groups
        class ClassMap; //type: Native::Interface::Gigabitethernet::Ip::Igmp::StaticGroup::ClassMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Igmp::StaticGroup::ClassMap> > class_map;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Igmp::StaticGroup::Groups> > groups;
        
}; // Native::Interface::Gigabitethernet::Ip::Igmp::StaticGroup


class Native::Interface::Gigabitethernet::Ip::Igmp::StaticGroup::Groups : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Igmp::StaticGroup::Groups


class Native::Interface::Gigabitethernet::Ip::Igmp::StaticGroup::ClassMap : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Igmp::StaticGroup::ClassMap


class Native::Interface::Gigabitethernet::Ip::Igmp::JoinGroup : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Igmp::JoinGroup


class Native::Interface::Gigabitethernet::Ip::Lisp : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Lisp


class Native::Interface::Gigabitethernet::Ip::Nat : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Nat


class Native::Interface::Gigabitethernet::Ip::Nbar : public Entity
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

        class ProtocolDiscovery; //type: Native::Interface::Gigabitethernet::Ip::Nbar::ProtocolDiscovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Nbar::ProtocolDiscovery> protocol_discovery; // presence node
        
}; // Native::Interface::Gigabitethernet::Ip::Nbar


class Native::Interface::Gigabitethernet::Ip::Nbar::ProtocolDiscovery : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Nbar::ProtocolDiscovery


class Native::Interface::Gigabitethernet::Ip::Ospf : public Entity
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
        class ProcessId; //type: Native::Interface::Gigabitethernet::Ip::Ospf::ProcessId
        class Authentication; //type: Native::Interface::Gigabitethernet::Ip::Ospf::Authentication
        class AuthenticationKey; //type: Native::Interface::Gigabitethernet::Ip::Ospf::AuthenticationKey
        class Bfd; //type: Native::Interface::Gigabitethernet::Ip::Ospf::Bfd
        class DatabaseFilter; //type: Native::Interface::Gigabitethernet::Ip::Ospf::DatabaseFilter
        class DeadInterval; //type: Native::Interface::Gigabitethernet::Ip::Ospf::DeadInterval
        class DemandCircuit; //type: Native::Interface::Gigabitethernet::Ip::Ospf::DemandCircuit
        class FastReroute; //type: Native::Interface::Gigabitethernet::Ip::Ospf::FastReroute
        class Lls; //type: Native::Interface::Gigabitethernet::Ip::Ospf::Lls
        class MessageDigestKey; //type: Native::Interface::Gigabitethernet::Ip::Ospf::MessageDigestKey
        class MultiArea; //type: Native::Interface::Gigabitethernet::Ip::Ospf::MultiArea
        class PrefixSuppression; //type: Native::Interface::Gigabitethernet::Ip::Ospf::PrefixSuppression
        class TtlSecurity; //type: Native::Interface::Gigabitethernet::Ip::Ospf::TtlSecurity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::Authentication> authentication; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::AuthenticationKey> authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::Bfd> bfd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::DeadInterval> dead_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::Lls> lls; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::MessageDigestKey> > message_digest_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::MultiArea> multi_area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::PrefixSuppression> prefix_suppression; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::ProcessId> > process_id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::TtlSecurity> ttl_security; // presence node
                class NetworkEnum;

}; // Native::Interface::Gigabitethernet::Ip::Ospf


class Native::Interface::Gigabitethernet::Ip::Ospf::ProcessId : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Ospf::ProcessId


class Native::Interface::Gigabitethernet::Ip::Ospf::Authentication : public Entity
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
        class KeyChain; //type: Native::Interface::Gigabitethernet::Ip::Ospf::Authentication::KeyChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::Authentication::KeyChain> key_chain;
        
}; // Native::Interface::Gigabitethernet::Ip::Ospf::Authentication


class Native::Interface::Gigabitethernet::Ip::Ospf::Authentication::KeyChain : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Ospf::Authentication::KeyChain


class Native::Interface::Gigabitethernet::Ip::Ospf::AuthenticationKey : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Ospf::AuthenticationKey


class Native::Interface::Gigabitethernet::Ip::Ospf::Bfd : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Ospf::Bfd


class Native::Interface::Gigabitethernet::Ip::Ospf::DatabaseFilter : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Ospf::DatabaseFilter


class Native::Interface::Gigabitethernet::Ip::Ospf::DeadInterval : public Entity
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
        class Minimal; //type: Native::Interface::Gigabitethernet::Ip::Ospf::DeadInterval::Minimal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::DeadInterval::Minimal> minimal;
        
}; // Native::Interface::Gigabitethernet::Ip::Ospf::DeadInterval


class Native::Interface::Gigabitethernet::Ip::Ospf::DeadInterval::Minimal : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Ospf::DeadInterval::Minimal


class Native::Interface::Gigabitethernet::Ip::Ospf::DemandCircuit : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Ospf::DemandCircuit


class Native::Interface::Gigabitethernet::Ip::Ospf::FastReroute : public Entity
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

        class PerPrefix; //type: Native::Interface::Gigabitethernet::Ip::Ospf::FastReroute::PerPrefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::FastReroute::PerPrefix> per_prefix;
        
}; // Native::Interface::Gigabitethernet::Ip::Ospf::FastReroute


class Native::Interface::Gigabitethernet::Ip::Ospf::FastReroute::PerPrefix : public Entity
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

        class Candidate; //type: Native::Interface::Gigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate
        class Protection; //type: Native::Interface::Gigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate> candidate; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection> protection; // presence node
        
}; // Native::Interface::Gigabitethernet::Ip::Ospf::FastReroute::PerPrefix


class Native::Interface::Gigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate


class Native::Interface::Gigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection


class Native::Interface::Gigabitethernet::Ip::Ospf::Lls : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Ospf::Lls


class Native::Interface::Gigabitethernet::Ip::Ospf::MessageDigestKey : public Entity
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
        class Md5; //type: Native::Interface::Gigabitethernet::Ip::Ospf::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Ospf::MessageDigestKey::Md5> md5;
        
}; // Native::Interface::Gigabitethernet::Ip::Ospf::MessageDigestKey


class Native::Interface::Gigabitethernet::Ip::Ospf::MessageDigestKey::Md5 : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Ospf::MessageDigestKey::Md5


class Native::Interface::Gigabitethernet::Ip::Ospf::MultiArea : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Ospf::MultiArea


class Native::Interface::Gigabitethernet::Ip::Ospf::PrefixSuppression : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Ospf::PrefixSuppression


class Native::Interface::Gigabitethernet::Ip::Ospf::TtlSecurity : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Ospf::TtlSecurity


class Native::Interface::Gigabitethernet::Ip::Wccp : public Entity
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

        class WccpList; //type: Native::Interface::Gigabitethernet::Ip::Wccp::WccpList
        class WebCache; //type: Native::Interface::Gigabitethernet::Ip::Wccp::WebCache
        class Redirect; //type: Native::Interface::Gigabitethernet::Ip::Wccp::Redirect
        class Vrf; //type: Native::Interface::Gigabitethernet::Ip::Wccp::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Wccp::Redirect> redirect;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Wccp::Vrf> > vrf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Wccp::WccpList> > wccp_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Wccp::WebCache> web_cache;
        
}; // Native::Interface::Gigabitethernet::Ip::Wccp


class Native::Interface::Gigabitethernet::Ip::Wccp::WccpList : public Entity
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
        class Redirect; //type: Native::Interface::Gigabitethernet::Ip::Wccp::WccpList::Redirect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Wccp::WccpList::Redirect> redirect;
        
}; // Native::Interface::Gigabitethernet::Ip::Wccp::WccpList


class Native::Interface::Gigabitethernet::Ip::Wccp::WccpList::Redirect : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Wccp::WccpList::Redirect


class Native::Interface::Gigabitethernet::Ip::Wccp::WebCache : public Entity
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
        class Redirect; //type: Native::Interface::Gigabitethernet::Ip::Wccp::WebCache::Redirect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Wccp::WebCache::Redirect> redirect;
        
}; // Native::Interface::Gigabitethernet::Ip::Wccp::WebCache


class Native::Interface::Gigabitethernet::Ip::Wccp::WebCache::Redirect : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Wccp::WebCache::Redirect


class Native::Interface::Gigabitethernet::Ip::Wccp::Redirect : public Entity
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

        class Exclude; //type: Native::Interface::Gigabitethernet::Ip::Wccp::Redirect::Exclude

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Wccp::Redirect::Exclude> exclude;
        
}; // Native::Interface::Gigabitethernet::Ip::Wccp::Redirect


class Native::Interface::Gigabitethernet::Ip::Wccp::Redirect::Exclude : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Wccp::Redirect::Exclude


class Native::Interface::Gigabitethernet::Ip::Wccp::Vrf : public Entity
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
        class WccpList; //type: Native::Interface::Gigabitethernet::Ip::Wccp::Vrf::WccpList
        class WebCache; //type: Native::Interface::Gigabitethernet::Ip::Wccp::Vrf::WebCache

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Wccp::Vrf::WccpList> > wccp_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Wccp::Vrf::WebCache> web_cache;
        
}; // Native::Interface::Gigabitethernet::Ip::Wccp::Vrf


class Native::Interface::Gigabitethernet::Ip::Wccp::Vrf::WccpList : public Entity
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
        class Redirect; //type: Native::Interface::Gigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect> redirect;
        
}; // Native::Interface::Gigabitethernet::Ip::Wccp::Vrf::WccpList


class Native::Interface::Gigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect


class Native::Interface::Gigabitethernet::Ip::Wccp::Vrf::WebCache : public Entity
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
        class Redirect; //type: Native::Interface::Gigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect> redirect;
        
}; // Native::Interface::Gigabitethernet::Ip::Wccp::Vrf::WebCache


class Native::Interface::Gigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect : public Entity
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

}; // Native::Interface::Gigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect


class Native::Interface::Gigabitethernet::Ipv6 : public Entity
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
        class DestinationGuard; //type: Native::Interface::Gigabitethernet::Ipv6::DestinationGuard
        class Dhcp; //type: Native::Interface::Gigabitethernet::Ipv6::Dhcp
        class Address; //type: Native::Interface::Gigabitethernet::Ipv6::Address
        class Nd; //type: Native::Interface::Gigabitethernet::Ipv6::Nd
        class TrafficFilter; //type: Native::Interface::Gigabitethernet::Ipv6::TrafficFilter
        class Flow; //type: Native::Interface::Gigabitethernet::Ipv6::Flow
        class NoPim; //type: Native::Interface::Gigabitethernet::Ipv6::NoPim
        class Pim; //type: Native::Interface::Gigabitethernet::Ipv6::Pim
        class Ospf; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf
        class Rip; //type: Native::Interface::Gigabitethernet::Ipv6::Rip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::DestinationGuard> destination_guard; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Flow> flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Nd> nd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::NoPim> no_pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf> ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Pim> pim;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Rip> > rip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::TrafficFilter> > traffic_filter;
        
}; // Native::Interface::Gigabitethernet::Ipv6


class Native::Interface::Gigabitethernet::Ipv6::DestinationGuard : public Entity
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

}; // Native::Interface::Gigabitethernet::Ipv6::DestinationGuard


class Native::Interface::Gigabitethernet::Ipv6::Dhcp : public Entity
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

        class Server; //type: Native::Interface::Gigabitethernet::Ipv6::Dhcp::Server
        class Guard; //type: Native::Interface::Gigabitethernet::Ipv6::Dhcp::Guard

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Dhcp::Guard> guard; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Dhcp::Server> > server;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Dhcp


class Native::Interface::Gigabitethernet::Ipv6::Dhcp::Server : public Entity
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

}; // Native::Interface::Gigabitethernet::Ipv6::Dhcp::Server


class Native::Interface::Gigabitethernet::Ipv6::Dhcp::Guard : public Entity
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

}; // Native::Interface::Gigabitethernet::Ipv6::Dhcp::Guard


class Native::Interface::Gigabitethernet::Ipv6::Address : public Entity
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

        class Dhcp; //type: Native::Interface::Gigabitethernet::Ipv6::Address::Dhcp
        class Autoconfig; //type: Native::Interface::Gigabitethernet::Ipv6::Address::Autoconfig
        class PrefixList; //type: Native::Interface::Gigabitethernet::Ipv6::Address::PrefixList
        class LinkLocalAddress; //type: Native::Interface::Gigabitethernet::Ipv6::Address::LinkLocalAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Address::Autoconfig> autoconfig; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Address::Dhcp> dhcp; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Address::LinkLocalAddress> > link_local_address;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Address::PrefixList> > prefix_list;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Address


class Native::Interface::Gigabitethernet::Ipv6::Address::Dhcp : public Entity
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

}; // Native::Interface::Gigabitethernet::Ipv6::Address::Dhcp


class Native::Interface::Gigabitethernet::Ipv6::Address::Autoconfig : public Entity
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

}; // Native::Interface::Gigabitethernet::Ipv6::Address::Autoconfig


class Native::Interface::Gigabitethernet::Ipv6::Address::PrefixList : public Entity
{
    public:
        PrefixList();
        ~PrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf anycast; //type: empty
        YLeaf eui_64; //type: empty

}; // Native::Interface::Gigabitethernet::Ipv6::Address::PrefixList


class Native::Interface::Gigabitethernet::Ipv6::Address::LinkLocalAddress : public Entity
{
    public:
        LinkLocalAddress();
        ~LinkLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf link_local; //type: empty

}; // Native::Interface::Gigabitethernet::Ipv6::Address::LinkLocalAddress


class Native::Interface::Gigabitethernet::Ipv6::Nd : public Entity
{
    public:
        Nd();
        ~Nd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf managed_config_flag; //type: empty
        class Raguard; //type: Native::Interface::Gigabitethernet::Ipv6::Nd::Raguard
        class Autoconfig; //type: Native::Interface::Gigabitethernet::Ipv6::Nd::Autoconfig
        class Ra; //type: Native::Interface::Gigabitethernet::Ipv6::Nd::Ra

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Nd::Autoconfig> autoconfig;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Nd::Ra> ra;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Nd::Raguard> raguard;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Nd


class Native::Interface::Gigabitethernet::Ipv6::Nd::Raguard : public Entity
{
    public:
        Raguard();
        ~Raguard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attach_policy; //type: string

}; // Native::Interface::Gigabitethernet::Ipv6::Nd::Raguard


class Native::Interface::Gigabitethernet::Ipv6::Nd::Autoconfig : public Entity
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

        YLeaf default_route; //type: empty
        YLeaf prefix; //type: empty

}; // Native::Interface::Gigabitethernet::Ipv6::Nd::Autoconfig


class Native::Interface::Gigabitethernet::Ipv6::Nd::Ra : public Entity
{
    public:
        Ra();
        ~Ra();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Suppress; //type: Native::Interface::Gigabitethernet::Ipv6::Nd::Ra::Suppress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Nd::Ra::Suppress> suppress; // presence node
        
}; // Native::Interface::Gigabitethernet::Ipv6::Nd::Ra


class Native::Interface::Gigabitethernet::Ipv6::Nd::Ra::Suppress : public Entity
{
    public:
        Suppress();
        ~Suppress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty

}; // Native::Interface::Gigabitethernet::Ipv6::Nd::Ra::Suppress


class Native::Interface::Gigabitethernet::Ipv6::TrafficFilter : public Entity
{
    public:
        TrafficFilter();
        ~TrafficFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: DirectionEnum
        YLeaf access_list; //type: string
        class DirectionEnum;

}; // Native::Interface::Gigabitethernet::Ipv6::TrafficFilter


class Native::Interface::Gigabitethernet::Ipv6::Flow : public Entity
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
        class Monitor; //type: Native::Interface::Gigabitethernet::Ipv6::Flow::Monitor

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Flow::Monitor> > monitor;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Flow


class Native::Interface::Gigabitethernet::Ipv6::Flow::Monitor : public Entity
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
        class Sampler; //type: Native::Interface::Gigabitethernet::Ipv6::Flow::Monitor::Sampler

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Flow::Monitor::Sampler> > sampler;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Flow::Monitor


class Native::Interface::Gigabitethernet::Ipv6::Flow::Monitor::Sampler : public Entity
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

}; // Native::Interface::Gigabitethernet::Ipv6::Flow::Monitor::Sampler


class Native::Interface::Gigabitethernet::Ipv6::NoPim : public Entity
{
    public:
        NoPim();
        ~NoPim();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pim; //type: boolean

}; // Native::Interface::Gigabitethernet::Ipv6::NoPim


class Native::Interface::Gigabitethernet::Ipv6::Pim : public Entity
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

        YLeaf bfd; //type: empty
        YLeaf dr_priority; //type: uint32
        class Bsr; //type: Native::Interface::Gigabitethernet::Ipv6::Pim::Bsr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Pim::Bsr> bsr;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Pim


class Native::Interface::Gigabitethernet::Ipv6::Pim::Bsr : public Entity
{
    public:
        Bsr();
        ~Bsr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf border; //type: empty

}; // Native::Interface::Gigabitethernet::Ipv6::Pim::Bsr


class Native::Interface::Gigabitethernet::Ipv6::Ospf : public Entity
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

        YLeaf cost; //type: uint16
        YLeaf dead_interval; //type: uint16
        YLeaf hello_interval; //type: uint32
        YLeaf priority; //type: uint8
        YLeaf retransmit_interval; //type: uint32
        YLeaf transmit_delay; //type: uint32
        class Process; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Process
        class Authentication; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication
        class Bfd; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Bfd
        class DatabaseFilter; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::DemandCircuit
        class Encryption; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption
        class FloodReduction; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::FloodReduction
        class MtuIgnore; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::MtuIgnore
        class Neighbor; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Neighbor
        class Network; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Network
        class Shutdown; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Shutdown

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Bfd> bfd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption> encryption;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::FloodReduction> flood_reduction; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::MtuIgnore> mtu_ignore; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Neighbor> > neighbor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Network> network;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Process> > process;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Shutdown> shutdown; // presence node
        
}; // Native::Interface::Gigabitethernet::Ipv6::Ospf


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Process : public Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint16
        YLeaf area; //type: one of uint32, string
        YLeaf instance; //type: uint8

}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Process


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication : public Entity
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

        YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec> ipsec;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec : public Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf spi; //type: uint64
        class Md5; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Md5
        class Sha1; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Sha1

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Md5> md5;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Sha1> sha1;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Md5 : public Entity
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

        class KeyString; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString> key_string;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Md5


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Sha1 : public Entity
{
    public:
        Sha1();
        ~Sha1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString> key_string;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Sha1


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Bfd : public Entity
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

}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Bfd


class Native::Interface::Gigabitethernet::Ipv6::Ospf::DatabaseFilter : public Entity
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

        YLeaf all; //type: AllEnum
        YLeaf disable; //type: empty
        class AllEnum;

}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::DatabaseFilter


class Native::Interface::Gigabitethernet::Ipv6::Ospf::DemandCircuit : public Entity
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

        YLeaf disable; //type: empty
        YLeaf ignore; //type: empty

}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::DemandCircuit


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec> ipsec;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec : public Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf spi; //type: uint64
        YLeaf esp; //type: empty
        class Ipsec_3Des; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des
        class AesCbc; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc> aes_cbc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des> ipsec_3des;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des : public Entity
{
    public:
        Ipsec_3Des();
        ~Ipsec_3Des();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des::KeyString> key_string;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des::KeyString


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc : public Entity
{
    public:
        AesCbc();
        ~AesCbc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AesCbc128; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128
        class Aes192; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192
        class Aes256; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192> aes_192;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256> aes_256;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128> aes_cbc_128;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128 : public Entity
{
    public:
        AesCbc128();
        ~AesCbc128();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString> key_string;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192 : public Entity
{
    public:
        Aes192();
        ~Aes192();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString> key_string;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256 : public Entity
{
    public:
        Aes256();
        ~Aes256();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString> key_string;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString


class Native::Interface::Gigabitethernet::Ipv6::Ospf::FloodReduction : public Entity
{
    public:
        FloodReduction();
        ~FloodReduction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::FloodReduction


class Native::Interface::Gigabitethernet::Ipv6::Ospf::MtuIgnore : public Entity
{
    public:
        MtuIgnore();
        ~MtuIgnore();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::MtuIgnore


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf cost; //type: uint16
        YLeaf poll_interval; //type: uint32
        YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Neighbor


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Neighbor::DatabaseFilter : public Entity
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

        YLeaf all; //type: AllEnum
        class AllEnum;

}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Neighbor::DatabaseFilter


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Network : public Entity
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

        YLeaf broadcast; //type: empty
        YLeaf manet; //type: empty
        YLeaf non_broadcast; //type: empty
        YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::Gigabitethernet::Ipv6::Ospf::Network::PointToMultipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Ospf::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Network


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Network::PointToMultipoint : public Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_broadcast; //type: empty

}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Network::PointToMultipoint


class Native::Interface::Gigabitethernet::Ipv6::Ospf::Shutdown : public Entity
{
    public:
        Shutdown();
        ~Shutdown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ipv6::Ospf::Shutdown


class Native::Interface::Gigabitethernet::Ipv6::Rip : public Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf enable; //type: empty
        class DefaultInformation; //type: Native::Interface::Gigabitethernet::Ipv6::Rip::DefaultInformation

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ipv6::Rip::DefaultInformation> default_information;
        
}; // Native::Interface::Gigabitethernet::Ipv6::Rip


class Native::Interface::Gigabitethernet::Ipv6::Rip::DefaultInformation : public Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route; //type: RouteEnum
        YLeaf metric; //type: uint8
        class RouteEnum;

}; // Native::Interface::Gigabitethernet::Ipv6::Rip::DefaultInformation


class Native::Interface::Gigabitethernet::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Event; //type: Native::Interface::Gigabitethernet::Logging::Event

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Logging::Event> event;
        
}; // Native::Interface::Gigabitethernet::Logging


class Native::Interface::Gigabitethernet::Logging::Event : public Entity
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

        YLeaf bundle_status; //type: empty
        YLeaf link_status; //type: empty
        YLeaf trunk_status; //type: empty
        YLeaf nfas_status; //type: empty
        YLeaf power_inline_status; //type: empty
        YLeaf status; //type: empty
        class SpanningTree; //type: Native::Interface::Gigabitethernet::Logging::Event::SpanningTree
        class SubifLinkStatus; //type: Native::Interface::Gigabitethernet::Logging::Event::SubifLinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Logging::Event::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Logging::Event::SubifLinkStatus> subif_link_status; // presence node
        
}; // Native::Interface::Gigabitethernet::Logging::Event


class Native::Interface::Gigabitethernet::Logging::Event::SpanningTree : public Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf status; //type: empty

}; // Native::Interface::Gigabitethernet::Logging::Event::SpanningTree


class Native::Interface::Gigabitethernet::Logging::Event::SubifLinkStatus : public Entity
{
    public:
        SubifLinkStatus();
        ~SubifLinkStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore_bulk; //type: empty

}; // Native::Interface::Gigabitethernet::Logging::Event::SubifLinkStatus


class Native::Interface::Gigabitethernet::Mdix : public Entity
{
    public:
        Mdix();
        ~Mdix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_; //type: boolean

}; // Native::Interface::Gigabitethernet::Mdix


class Native::Interface::Gigabitethernet::Mop : public Entity
{
    public:
        Mop();
        ~Mop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean

}; // Native::Interface::Gigabitethernet::Mop


class Native::Interface::Gigabitethernet::Interface_Qos : public Entity
{
    public:
        Interface_Qos();
        ~Interface_Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Trust; //type: Native::Interface::Gigabitethernet::Interface_Qos::Trust

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Interface_Qos::Trust> trust;
        
}; // Native::Interface::Gigabitethernet::Interface_Qos


class Native::Interface::Gigabitethernet::Interface_Qos::Trust : public Entity
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

}; // Native::Interface::Gigabitethernet::Interface_Qos::Trust


class Native::Interface::Gigabitethernet::Standby : public Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf version; //type: VersionEnum
        YLeaf bfd; //type: empty
        YLeaf mac_refresh; //type: uint8
        class Delay; //type: Native::Interface::Gigabitethernet::Standby::Delay
        class UseBia; //type: Native::Interface::Gigabitethernet::Standby::UseBia
        class StandbyList; //type: Native::Interface::Gigabitethernet::Standby::StandbyList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::Delay> delay;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::StandbyList> > standby_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::UseBia> use_bia; // presence node
                class VersionEnum;

}; // Native::Interface::Gigabitethernet::Standby


class Native::Interface::Gigabitethernet::Standby::Delay : public Entity
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

        YLeaf minimum; //type: uint16
        YLeaf reload; //type: uint16

}; // Native::Interface::Gigabitethernet::Standby::Delay


class Native::Interface::Gigabitethernet::Standby::UseBia : public Entity
{
    public:
        UseBia();
        ~UseBia();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Scope; //type: Native::Interface::Gigabitethernet::Standby::UseBia::Scope

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::UseBia::Scope> scope;
        
}; // Native::Interface::Gigabitethernet::Standby::UseBia


class Native::Interface::Gigabitethernet::Standby::UseBia::Scope : public Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: empty

}; // Native::Interface::Gigabitethernet::Standby::UseBia::Scope


class Native::Interface::Gigabitethernet::Standby::StandbyList : public Entity
{
    public:
        StandbyList();
        ~StandbyList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_number; //type: uint16
        YLeaf follow; //type: string
        YLeaf ipv6; //type: one of string, enumeration
        YLeaf mac_address; //type: string
        YLeaf name; //type: string
        YLeaf priority; //type: uint8
        class Authentication; //type: Native::Interface::Gigabitethernet::Standby::StandbyList::Authentication
        class Ip; //type: Native::Interface::Gigabitethernet::Standby::StandbyList::Ip
        class Preempt; //type: Native::Interface::Gigabitethernet::Standby::StandbyList::Preempt
        class Redirect; //type: Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect
        class Timers; //type: Native::Interface::Gigabitethernet::Standby::StandbyList::Timers
        class Track; //type: Native::Interface::Gigabitethernet::Standby::StandbyList::Track

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::StandbyList::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::StandbyList::Ip> ip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::StandbyList::Preempt> preempt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect> redirect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::StandbyList::Timers> timers;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::StandbyList::Track> > track;
                class Ipv6Enum;

}; // Native::Interface::Gigabitethernet::Standby::StandbyList


class Native::Interface::Gigabitethernet::Standby::StandbyList::Authentication : public Entity
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

        YLeaf word; //type: string
        YLeaf text; //type: string
        class Md5; //type: Native::Interface::Gigabitethernet::Standby::StandbyList::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::StandbyList::Authentication::Md5> md5;
        
}; // Native::Interface::Gigabitethernet::Standby::StandbyList::Authentication


class Native::Interface::Gigabitethernet::Standby::StandbyList::Authentication::Md5 : public Entity
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

        YLeaf key_chain; //type: string
        class KeyString; //type: Native::Interface::Gigabitethernet::Standby::StandbyList::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::StandbyList::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::Gigabitethernet::Standby::StandbyList::Authentication::Md5


class Native::Interface::Gigabitethernet::Standby::StandbyList::Authentication::Md5::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        YLeaf timeout; //type: uint16
        class EncryptEnum;

}; // Native::Interface::Gigabitethernet::Standby::StandbyList::Authentication::Md5::KeyString


class Native::Interface::Gigabitethernet::Standby::StandbyList::Ip : public Entity
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

        YLeaf address; //type: string
        YLeaf secondary; //type: empty

}; // Native::Interface::Gigabitethernet::Standby::StandbyList::Ip


class Native::Interface::Gigabitethernet::Standby::StandbyList::Preempt : public Entity
{
    public:
        Preempt();
        ~Preempt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Delay; //type: Native::Interface::Gigabitethernet::Standby::StandbyList::Preempt::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::StandbyList::Preempt::Delay> delay;
        
}; // Native::Interface::Gigabitethernet::Standby::StandbyList::Preempt


class Native::Interface::Gigabitethernet::Standby::StandbyList::Preempt::Delay : public Entity
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

        YLeaf minimum; //type: uint16
        YLeaf reload; //type: uint16
        YLeaf sync; //type: uint16

}; // Native::Interface::Gigabitethernet::Standby::StandbyList::Preempt::Delay


class Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect : public Entity
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

        YLeaf unknown; //type: empty
        class Advertisement; //type: Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Advertisement
        class Timers; //type: Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Advertisement> advertisement;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Timers> timers;
        
}; // Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect


class Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Advertisement : public Entity
{
    public:
        Advertisement();
        ~Advertisement();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Authentication; //type: Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Advertisement::Authentication

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Advertisement::Authentication> authentication;
        
}; // Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Advertisement


class Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Advertisement::Authentication : public Entity
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

        class Md5; //type: Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5> md5;
        
}; // Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Advertisement::Authentication


class Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5 : public Entity
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

        YLeaf key_chain; //type: string
        class KeyString; //type: Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5


class Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        YLeaf timeout; //type: uint16
        class EncryptEnum;

}; // Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString


class Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Timers : public Entity
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

        YLeaf advertisement; //type: uint16
        YLeaf holddown; //type: uint16

}; // Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Timers


class Native::Interface::Gigabitethernet::Standby::StandbyList::Timers : public Entity
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

        class HelloInterval; //type: Native::Interface::Gigabitethernet::Standby::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::Gigabitethernet::Standby::StandbyList::Timers::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Standby::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::Gigabitethernet::Standby::StandbyList::Timers


class Native::Interface::Gigabitethernet::Standby::StandbyList::Timers::HelloInterval : public Entity
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

}; // Native::Interface::Gigabitethernet::Standby::StandbyList::Timers::HelloInterval


class Native::Interface::Gigabitethernet::Standby::StandbyList::Timers::HoldTime : public Entity
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

}; // Native::Interface::Gigabitethernet::Standby::StandbyList::Timers::HoldTime


class Native::Interface::Gigabitethernet::Standby::StandbyList::Track : public Entity
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

}; // Native::Interface::Gigabitethernet::Standby::StandbyList::Track


class Native::Interface::Gigabitethernet::AccessSession : public Entity
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
        class PortControl; //type: Native::Interface::Gigabitethernet::AccessSession::PortControl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::AccessSession::PortControl> port_control;
                class HostModeEnum;

}; // Native::Interface::Gigabitethernet::AccessSession


class Native::Interface::Gigabitethernet::AccessSession::PortControl : public Entity
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

}; // Native::Interface::Gigabitethernet::AccessSession::PortControl


class Native::Interface::Gigabitethernet::StormControl : public Entity
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

        class Action; //type: Native::Interface::Gigabitethernet::StormControl::Action
        class Broadcast; //type: Native::Interface::Gigabitethernet::StormControl::Broadcast
        class Multicast; //type: Native::Interface::Gigabitethernet::StormControl::Multicast
        class Unicast; //type: Native::Interface::Gigabitethernet::StormControl::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::StormControl::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::StormControl::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::StormControl::Unicast> unicast;
        
}; // Native::Interface::Gigabitethernet::StormControl


class Native::Interface::Gigabitethernet::StormControl::Action : public Entity
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

}; // Native::Interface::Gigabitethernet::StormControl::Action


class Native::Interface::Gigabitethernet::StormControl::Broadcast : public Entity
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

        class Include; //type: Native::Interface::Gigabitethernet::StormControl::Broadcast::Include
        class Level; //type: Native::Interface::Gigabitethernet::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::StormControl::Broadcast::Include> include;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::StormControl::Broadcast::Level> level;
        
}; // Native::Interface::Gigabitethernet::StormControl::Broadcast


class Native::Interface::Gigabitethernet::StormControl::Broadcast::Include : public Entity
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

}; // Native::Interface::Gigabitethernet::StormControl::Broadcast::Include


class Native::Interface::Gigabitethernet::StormControl::Broadcast::Level : public Entity
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
        class Bps; //type: Native::Interface::Gigabitethernet::StormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::Gigabitethernet::StormControl::Broadcast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::Gigabitethernet::StormControl::Broadcast::Level


class Native::Interface::Gigabitethernet::StormControl::Broadcast::Level::Bps : public Entity
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

}; // Native::Interface::Gigabitethernet::StormControl::Broadcast::Level::Bps

class Native::Interface::Gigabitethernet::Ip::Verify::Unicast::Source::ReachableViaEnum : public Enum
{
    public:
        static const Enum::YLeaf any;
        static const Enum::YLeaf rx;

};

class Native::Interface::Gigabitethernet::Ip::Flow::Monitor::Sampler::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf input;
        static const Enum::YLeaf output;

};

class Native::Interface::Gigabitethernet::Ip::Igmp::StaticGroup::Groups::NameEnum : public Enum
{
    public:
        static const Enum::YLeaf Y__STAR__;

};

class Native::Interface::Gigabitethernet::Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6Enum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class Native::Interface::Gigabitethernet::Ip::Ospf::NetworkEnum : public Enum
{
    public:
        static const Enum::YLeaf broadcast;
        static const Enum::YLeaf non_broadcast;
        static const Enum::YLeaf point_to_multipoint;
        static const Enum::YLeaf point_to_point;

};

class Native::Interface::Gigabitethernet::Ipv6::TrafficFilter::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::Gigabitethernet::Ipv6::Flow::Monitor::Sampler::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf input;
        static const Enum::YLeaf output;

};

class Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Gigabitethernet::Ipv6::Ospf::Authentication::Ipsec::Sha1::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Gigabitethernet::Ipv6::Ospf::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::Ipsec_3Des::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Gigabitethernet::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Gigabitethernet::Ipv6::Ospf::Neighbor::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Gigabitethernet::Ipv6::Rip::DefaultInformation::RouteEnum : public Enum
{
    public:
        static const Enum::YLeaf only;
        static const Enum::YLeaf originate;

};

class Native::Interface::Gigabitethernet::Interface_Qos::Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;

};

class Native::Interface::Gigabitethernet::Standby::VersionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Interface::Gigabitethernet::Standby::StandbyList::Ipv6Enum : public Enum
{
    public:
        static const Enum::YLeaf autoconfig;

};

class Native::Interface::Gigabitethernet::Standby::StandbyList::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Gigabitethernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Gigabitethernet::AccessSession::HostModeEnum : public Enum
{
    public:
        static const Enum::YLeaf multi_auth;
        static const Enum::YLeaf multi_domain;
        static const Enum::YLeaf multi_host;
        static const Enum::YLeaf single_host;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_28_ */

