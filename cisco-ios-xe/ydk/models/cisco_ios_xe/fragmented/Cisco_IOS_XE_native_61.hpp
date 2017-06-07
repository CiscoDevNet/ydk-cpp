#ifndef _CISCO_IOS_XE_NATIVE_61_
#define _CISCO_IOS_XE_NATIVE_61_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_60.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Tunnel::Ip::RouteCache : public Entity
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

}; // Native::Interface::Tunnel::Ip::RouteCache


class Native::Interface::Tunnel::Ip::Router : public Entity
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

        class Isis; //type: Native::Interface::Tunnel::Ip::Router::Isis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Router::Isis> isis; // presence node
        
}; // Native::Interface::Tunnel::Ip::Router


class Native::Interface::Tunnel::Ip::Router::Isis : public Entity
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

}; // Native::Interface::Tunnel::Ip::Router::Isis


class Native::Interface::Tunnel::Ip::Tcp : public Entity
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

}; // Native::Interface::Tunnel::Ip::Tcp


class Native::Interface::Tunnel::Ip::VirtualReassembly : public Entity
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

}; // Native::Interface::Tunnel::Ip::VirtualReassembly


class Native::Interface::Tunnel::Ip::Dhcp : public Entity
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

        class Client; //type: Native::Interface::Tunnel::Ip::Dhcp::Client
        class Relay; //type: Native::Interface::Tunnel::Ip::Dhcp::Relay
        class Snooping; //type: Native::Interface::Tunnel::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Client> client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Relay> relay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Interface::Tunnel::Ip::Dhcp


class Native::Interface::Tunnel::Ip::Dhcp::Client : public Entity
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

}; // Native::Interface::Tunnel::Ip::Dhcp::Client


class Native::Interface::Tunnel::Ip::Dhcp::Relay : public Entity
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
        class Information; //type: Native::Interface::Tunnel::Ip::Dhcp::Relay::Information

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Relay::Information> information;
        
}; // Native::Interface::Tunnel::Ip::Dhcp::Relay


class Native::Interface::Tunnel::Ip::Dhcp::Relay::Information : public Entity
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
        class CheckReply; //type: Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply
        class Option; //type: Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option
        class OptionInsert; //type: Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply> check_reply; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option> option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert> option_insert; // presence node
                class PolicyActionEnum;

}; // Native::Interface::Tunnel::Ip::Dhcp::Relay::Information


class Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply : public Entity
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

}; // Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply


class Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option : public Entity
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

}; // Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option


class Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert : public Entity
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

}; // Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert


class Native::Interface::Tunnel::Ip::Dhcp::Snooping : public Entity
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
        class Limit; //type: Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit
        class Vlan; //type: Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit> limit;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan> > vlan;
        
}; // Native::Interface::Tunnel::Ip::Dhcp::Snooping


class Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit : public Entity
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

}; // Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit


class Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan : public Entity
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
        class Information; //type: Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information> information;
        
}; // Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan


class Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information : public Entity
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

        class Option; //type: Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option> option;
        
}; // Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information


class Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option : public Entity
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

        class FormatType; //type: Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType> format_type;
        
}; // Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option


class Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType : public Entity
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

        class CircuitId; //type: Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId> circuit_id;
        
}; // Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType


class Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId : public Entity
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

}; // Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId


class Native::Interface::Tunnel::Ip::SummaryAddress : public Entity
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

        class Eigrp; //type: Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp> > eigrp;
        
}; // Native::Interface::Tunnel::Ip::SummaryAddress


class Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp : public Entity
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

}; // Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp


class Native::Interface::Tunnel::Ip::Verify : public Entity
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

        class Source; //type: Native::Interface::Tunnel::Ip::Verify::Source
        class Unicast; //type: Native::Interface::Tunnel::Ip::Verify::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Verify::Source> source; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Verify::Unicast> unicast;
        
}; // Native::Interface::Tunnel::Ip::Verify


class Native::Interface::Tunnel::Ip::Verify::Source : public Entity
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

        class Vlan; //type: Native::Interface::Tunnel::Ip::Verify::Source::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Verify::Source::Vlan> vlan;
        
}; // Native::Interface::Tunnel::Ip::Verify::Source


class Native::Interface::Tunnel::Ip::Verify::Source::Vlan : public Entity
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

        class DhcpSnooping; //type: Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping> dhcp_snooping; // presence node
        
}; // Native::Interface::Tunnel::Ip::Verify::Source::Vlan


class Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping : public Entity
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

}; // Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping


class Native::Interface::Tunnel::Ip::Verify::Unicast : public Entity
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

        class ReversePath; //type: Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath
        class Source; //type: Native::Interface::Tunnel::Ip::Verify::Unicast::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath> reverse_path; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Verify::Unicast::Source> source;
        
}; // Native::Interface::Tunnel::Ip::Verify::Unicast


class Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath : public Entity
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


}; // Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath


class Native::Interface::Tunnel::Ip::Verify::Unicast::Source : public Entity
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

}; // Native::Interface::Tunnel::Ip::Verify::Unicast::Source


class Native::Interface::Tunnel::Ip::Flow : public Entity
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
        class Monitor; //type: Native::Interface::Tunnel::Ip::Flow::Monitor

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Flow::Monitor> > monitor;
        
}; // Native::Interface::Tunnel::Ip::Flow


class Native::Interface::Tunnel::Ip::Flow::Monitor : public Entity
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
        class Sampler; //type: Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler> > sampler;
        
}; // Native::Interface::Tunnel::Ip::Flow::Monitor


class Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler : public Entity
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

}; // Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler


class Native::Interface::Tunnel::Ip::Igmp : public Entity
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
        class StaticGroup; //type: Native::Interface::Tunnel::Ip::Igmp::StaticGroup
        class JoinGroup; //type: Native::Interface::Tunnel::Ip::Igmp::JoinGroup

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Igmp::JoinGroup> > join_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Igmp::StaticGroup> static_group;
        
}; // Native::Interface::Tunnel::Ip::Igmp


class Native::Interface::Tunnel::Ip::Igmp::StaticGroup : public Entity
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

        class Groups; //type: Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups
        class ClassMap; //type: Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap> > class_map;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups> > groups;
        
}; // Native::Interface::Tunnel::Ip::Igmp::StaticGroup


class Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups : public Entity
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

}; // Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups


class Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap : public Entity
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

}; // Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap


class Native::Interface::Tunnel::Ip::Igmp::JoinGroup : public Entity
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

}; // Native::Interface::Tunnel::Ip::Igmp::JoinGroup


class Native::Interface::Tunnel::Ip::Lisp : public Entity
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

}; // Native::Interface::Tunnel::Ip::Lisp


class Native::Interface::Tunnel::Ip::Nbar : public Entity
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

        class ProtocolDiscovery; //type: Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery> protocol_discovery; // presence node
        
}; // Native::Interface::Tunnel::Ip::Nbar


class Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery : public Entity
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

}; // Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery


class Native::Interface::Tunnel::Ip::Nhrp : public Entity
{
    public:
        Nhrp();
        ~Nhrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authentication; //type: string
        YLeaf connect; //type: uint16
        YLeaf group; //type: string
        YLeaf holdtime; //type: uint16
        YLeaf network_id; //type: uint32
        YLeaf record; //type: empty
        YLeaf use; //type: uint16
        class Attribute; //type: Native::Interface::Tunnel::Ip::Nhrp::Attribute
        class Cache; //type: Native::Interface::Tunnel::Ip::Nhrp::Cache
        class Interest; //type: Native::Interface::Tunnel::Ip::Nhrp::Interest
        class Map; //type: Native::Interface::Tunnel::Ip::Nhrp::Map
        class MaxSend; //type: Native::Interface::Tunnel::Ip::Nhrp::MaxSend
        class Nhs; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs
        class Redirect; //type: Native::Interface::Tunnel::Ip::Nhrp::Redirect
        class Registration; //type: Native::Interface::Tunnel::Ip::Nhrp::Registration
        class Reject; //type: Native::Interface::Tunnel::Ip::Nhrp::Reject
        class Responder; //type: Native::Interface::Tunnel::Ip::Nhrp::Responder
        class ServerOnly; //type: Native::Interface::Tunnel::Ip::Nhrp::ServerOnly
        class Shortcut; //type: Native::Interface::Tunnel::Ip::Nhrp::Shortcut
        class TriggerSvc; //type: Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Attribute> attribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Cache> cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Interest> interest;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Map> map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::MaxSend> max_send;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs> nhs;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Redirect> redirect; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Registration> registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Reject> reject;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Responder> responder;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::ServerOnly> server_only; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Shortcut> shortcut; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc> trigger_svc;
        
}; // Native::Interface::Tunnel::Ip::Nhrp


class Native::Interface::Tunnel::Ip::Nhrp::Attribute : public Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Set; //type: Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set> set;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Attribute


class Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set : public Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AttrType; //type: Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType> > attr_type;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set


class Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType : public Entity
{
    public:
        AttrType();
        ~AttrType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attr_type; //type: string
        YLeaf attr_val; //type: string

}; // Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType


class Native::Interface::Tunnel::Ip::Nhrp::Cache : public Entity
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

        YLeaf non_authoritative; //type: empty

}; // Native::Interface::Tunnel::Ip::Nhrp::Cache


class Native::Interface::Tunnel::Ip::Nhrp::Interest : public Entity
{
    public:
        Interest();
        ~Interest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_range; //type: uint8
        YLeaf none; //type: empty

}; // Native::Interface::Tunnel::Ip::Nhrp::Interest


class Native::Interface::Tunnel::Ip::Nhrp::Map : public Entity
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

        class DestIpv4; //type: Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4
        class Multicast; //type: Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast
        class Group; //type: Native::Interface::Tunnel::Ip::Nhrp::Map::Group

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4> > dest_ipv4;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Map::Group> > group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast> multicast;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Map


class Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4 : public Entity
{
    public:
        DestIpv4();
        ~DestIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dest_ipv4; //type: string
        YLeaf nbma_ipv6; //type: string
        class NbmaIpv4; //type: Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4
        class DestMask; //type: Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask> > dest_mask;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4> > nbma_ipv4;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4


class Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4 : public Entity
{
    public:
        NbmaIpv4();
        ~NbmaIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nbma_ipv4; //type: string
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4


class Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask : public Entity
{
    public:
        DestMask();
        ~DestMask();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dest_mask; //type: string
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask


class Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast : public Entity
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

        YLeaf dynamic; //type: empty
        YLeafList nbma_ipv4; //type: list of  string
        YLeafList nbma_ipv6; //type: list of  string

}; // Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast


class Native::Interface::Tunnel::Ip::Nhrp::Map::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class ServicePolicy; //type: Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy> service_policy;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Map::Group


class Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy : public Entity
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

        YLeaf output; //type: string

}; // Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy


class Native::Interface::Tunnel::Ip::Nhrp::MaxSend : public Entity
{
    public:
        MaxSend();
        ~MaxSend();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PktCount; //type: Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount> > pkt_count;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::MaxSend


class Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount : public Entity
{
    public:
        PktCount();
        ~PktCount();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pkt_count; //type: uint16
        YLeaf every; //type: uint16

}; // Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount


class Native::Interface::Tunnel::Ip::Nhrp::Nhs : public Entity
{
    public:
        Nhs();
        ~Nhs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fallback; //type: uint8
        class Ipv4; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4
        class Cluster; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster
        class Dynamic; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster> cluster;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic> dynamic;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4> > ipv4;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4 : public Entity
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

        YLeaf ipv4; //type: string
        YLeaf cluster; //type: uint8
        class Nbma; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma> nbma;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma : public Entity
{
    public:
        Nbma();
        ~Nbma();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4_; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_
        class NhsFqdn; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn
        class Ipv6; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_> > ipv4;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6> > ipv6;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn> > nhs_fqdn;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_ : public Entity
{
    public:
        Ipv4_();
        ~Ipv4_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf cluster; //type: uint8
        class Multicast; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast> multicast; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast : public Entity
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

        YLeaf cluster; //type: uint8
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority : public Entity
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

        class Prior; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior> > prior;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior : public Entity
{
    public:
        Prior();
        ~Prior();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prior; //type: uint8
        YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority : public Entity
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

        class Pri; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri> > pri;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri : public Entity
{
    public:
        Pri();
        ~Pri();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pri; //type: uint8
        YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn : public Entity
{
    public:
        NhsFqdn();
        ~NhsFqdn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nhs_fqdn; //type: string
        YLeaf cluster; //type: uint8
        class Multicast; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast> multicast; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast : public Entity
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

        YLeaf cluster; //type: uint8
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority : public Entity
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

        class McPri; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri> > mc_pri;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri : public Entity
{
    public:
        McPri();
        ~McPri();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mc_pri; //type: uint8
        YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority : public Entity
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

        class NhsPri; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri> > nhs_pri;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri : public Entity
{
    public:
        NhsPri();
        ~NhsPri();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nhs_pri; //type: uint8
        YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6 : public Entity
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

        YLeaf ipv6; //type: string
        YLeaf cluster; //type: uint8
        class Multicast; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast> multicast; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast : public Entity
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

        YLeaf cluster; //type: uint8
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority : public Entity
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

        class McPri; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri> > mc_pri;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri : public Entity
{
    public:
        McPri();
        ~McPri();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mc_pri; //type: uint8
        YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority : public Entity
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

        class McPrior; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior> > mc_prior;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior : public Entity
{
    public:
        McPrior();
        ~McPrior();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mc_prior; //type: uint8
        YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority : public Entity
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

        class PriRange; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange> > pri_range;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange : public Entity
{
    public:
        PriRange();
        ~PriRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pri_range; //type: uint8
        YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster : public Entity
{
    public:
        Cluster();
        ~Cluster();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClusNum; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum> > clus_num;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum : public Entity
{
    public:
        ClusNum();
        ~ClusNum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf clus_num; //type: uint8
        YLeaf max_connections; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic : public Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nbma; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma> nbma;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma : public Entity
{
    public:
        Nbma();
        ~Nbma();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4
        class DynFqdn; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn
        class Ipv6; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn> > dyn_fqdn;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4> > ipv4;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6> > ipv6;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4 : public Entity
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

        YLeaf ipv4; //type: string
        YLeaf cluster; //type: uint8
        class Multicast; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast> multicast; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast : public Entity
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

        YLeaf cluster; //type: uint8
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority : public Entity
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

        class DynPri; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri> > dyn_pri;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri : public Entity
{
    public:
        DynPri();
        ~DynPri();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dyn_pri; //type: uint8
        YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority : public Entity
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

        class NPrior; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior> > n_prior;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior : public Entity
{
    public:
        NPrior();
        ~NPrior();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf n_prior; //type: uint8
        YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn : public Entity
{
    public:
        DynFqdn();
        ~DynFqdn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dyn_fqdn; //type: string
        YLeaf cluster; //type: uint8
        class Multicast; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast> multicast; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast : public Entity
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

        YLeaf cluster; //type: uint8
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority : public Entity
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

        class DynMcPri; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri> > dyn_mc_pri;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri : public Entity
{
    public:
        DynMcPri();
        ~DynMcPri();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dyn_mc_pri; //type: uint8
        YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority : public Entity
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

        class Dp; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp> > dp;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp : public Entity
{
    public:
        Dp();
        ~Dp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dp; //type: uint8
        YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6 : public Entity
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

        YLeaf ipv6; //type: string
        YLeaf cluster; //type: uint8
        class Multicast; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast> multicast; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast : public Entity
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

        YLeaf cluster; //type: uint8
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority : public Entity
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

        class V6Pri; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri> > v6_pri;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri : public Entity
{
    public:
        V6Pri();
        ~V6Pri();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf v6_pri; //type: uint8
        YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority : public Entity
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

        class V6Pri2; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2> > v6_pri2;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2 : public Entity
{
    public:
        V6Pri2();
        ~V6Pri2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf v6_pri2; //type: uint8
        YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2


class Native::Interface::Tunnel::Ip::Nhrp::Redirect : public Entity
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

        YLeaf timeout; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Redirect


class Native::Interface::Tunnel::Ip::Nhrp::Registration : public Entity
{
    public:
        Registration();
        ~Registration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf no_unique; //type: empty
        YLeaf timeout; //type: uint16

}; // Native::Interface::Tunnel::Ip::Nhrp::Registration


class Native::Interface::Tunnel::Ip::Nhrp::Reject : public Entity
{
    public:
        Reject();
        ~Reject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Reqid; //type: Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid> > reqid;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Reject


class Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid : public Entity
{
    public:
        Reqid();
        ~Reqid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reqid; //type: uint16
        YLeaf rej_secs; //type: uint16

}; // Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid


class Native::Interface::Tunnel::Ip::Nhrp::Responder : public Entity
{
    public:
        Responder();
        ~Responder();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf res_int; //type: string
        YLeaf analysis_module; //type: uint8
        YLeaf fcpa; //type: uint8
        YLeaf sbc; //type: uint32
        YLeaf sonet_acr; //type: uint8
        YLeaf tb_controller; //type: string
        YLeaf service_engine; //type: uint8
        YLeaf tunnel; //type: uint32
        YLeaf tunnel_tp; //type: uint16
        YLeaf vpn; //type: uint32
        YLeaf virtual_tokenring; //type: uint32
        YLeaf virtualportgroup; //type: uint8
        YLeaf vlan; //type: uint16
        YLeaf ucse; //type: uint8
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16

}; // Native::Interface::Tunnel::Ip::Nhrp::Responder


class Native::Interface::Tunnel::Ip::Nhrp::ServerOnly : public Entity
{
    public:
        ServerOnly();
        ~ServerOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_caching; //type: empty

}; // Native::Interface::Tunnel::Ip::Nhrp::ServerOnly


class Native::Interface::Tunnel::Ip::Nhrp::Shortcut : public Entity
{
    public:
        Shortcut();
        ~Shortcut();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf virtual_template; //type: uint16

}; // Native::Interface::Tunnel::Ip::Nhrp::Shortcut


class Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc : public Entity
{
    public:
        TriggerSvc();
        ~TriggerSvc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Kbps; //type: Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps> > kbps;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc


class Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps : public Entity
{
    public:
        Kbps();
        ~Kbps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf kbps; //type: uint32
        YLeaf tear_kbps; //type: uint32

}; // Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps


class Native::Interface::Tunnel::Ip::Ospf : public Entity
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
        class ProcessId; //type: Native::Interface::Tunnel::Ip::Ospf::ProcessId
        class Authentication; //type: Native::Interface::Tunnel::Ip::Ospf::Authentication
        class AuthenticationKey; //type: Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey
        class Bfd; //type: Native::Interface::Tunnel::Ip::Ospf::Bfd
        class DatabaseFilter; //type: Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter
        class DeadInterval; //type: Native::Interface::Tunnel::Ip::Ospf::DeadInterval
        class DemandCircuit; //type: Native::Interface::Tunnel::Ip::Ospf::DemandCircuit
        class FastReroute; //type: Native::Interface::Tunnel::Ip::Ospf::FastReroute
        class Lls; //type: Native::Interface::Tunnel::Ip::Ospf::Lls
        class MessageDigestKey; //type: Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey
        class MultiArea; //type: Native::Interface::Tunnel::Ip::Ospf::MultiArea
        class PrefixSuppression; //type: Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression
        class TtlSecurity; //type: Native::Interface::Tunnel::Ip::Ospf::TtlSecurity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::Authentication> authentication; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey> authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::Bfd> bfd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::DeadInterval> dead_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::Lls> lls; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey> > message_digest_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::MultiArea> multi_area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression> prefix_suppression; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::ProcessId> > process_id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::TtlSecurity> ttl_security; // presence node
                class NetworkEnum;

}; // Native::Interface::Tunnel::Ip::Ospf


class Native::Interface::Tunnel::Ip::Ospf::ProcessId : public Entity
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

}; // Native::Interface::Tunnel::Ip::Ospf::ProcessId


class Native::Interface::Tunnel::Ip::Ospf::Authentication : public Entity
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
        class KeyChain; //type: Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain> key_chain;
        
}; // Native::Interface::Tunnel::Ip::Ospf::Authentication


class Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain : public Entity
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

}; // Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain


class Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey : public Entity
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

}; // Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey


class Native::Interface::Tunnel::Ip::Ospf::Bfd : public Entity
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

}; // Native::Interface::Tunnel::Ip::Ospf::Bfd


class Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter : public Entity
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

}; // Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter


class Native::Interface::Tunnel::Ip::Ospf::DeadInterval : public Entity
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
        class Minimal; //type: Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal> minimal;
        
}; // Native::Interface::Tunnel::Ip::Ospf::DeadInterval


class Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal : public Entity
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

}; // Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal


class Native::Interface::Tunnel::Ip::Ospf::DemandCircuit : public Entity
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

}; // Native::Interface::Tunnel::Ip::Ospf::DemandCircuit


class Native::Interface::Tunnel::Ip::Ospf::FastReroute : public Entity
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

        class PerPrefix; //type: Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix> per_prefix;
        
}; // Native::Interface::Tunnel::Ip::Ospf::FastReroute


class Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix : public Entity
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

        class Candidate; //type: Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate
        class Protection; //type: Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate> candidate; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection> protection; // presence node
        
}; // Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix


class Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate : public Entity
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

}; // Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate


class Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection : public Entity
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

}; // Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection


class Native::Interface::Tunnel::Ip::Ospf::Lls : public Entity
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

}; // Native::Interface::Tunnel::Ip::Ospf::Lls


class Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey : public Entity
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
        class Md5; //type: Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5> md5;
        
}; // Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey


class Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5 : public Entity
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

}; // Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5


class Native::Interface::Tunnel::Ip::Ospf::MultiArea : public Entity
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

}; // Native::Interface::Tunnel::Ip::Ospf::MultiArea


class Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression : public Entity
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

}; // Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression


class Native::Interface::Tunnel::Ip::Ospf::TtlSecurity : public Entity
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

}; // Native::Interface::Tunnel::Ip::Ospf::TtlSecurity


class Native::Interface::Tunnel::Ip::Wccp : public Entity
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

        class WccpList; //type: Native::Interface::Tunnel::Ip::Wccp::WccpList
        class WebCache; //type: Native::Interface::Tunnel::Ip::Wccp::WebCache
        class Redirect; //type: Native::Interface::Tunnel::Ip::Wccp::Redirect
        class Vrf; //type: Native::Interface::Tunnel::Ip::Wccp::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Wccp::Redirect> redirect;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Wccp::Vrf> > vrf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Wccp::WccpList> > wccp_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Wccp::WebCache> web_cache;
        
}; // Native::Interface::Tunnel::Ip::Wccp


class Native::Interface::Tunnel::Ip::Wccp::WccpList : public Entity
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
        class Redirect; //type: Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect> redirect;
        
}; // Native::Interface::Tunnel::Ip::Wccp::WccpList


class Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect : public Entity
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

}; // Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect


class Native::Interface::Tunnel::Ip::Wccp::WebCache : public Entity
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
        class Redirect; //type: Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect> redirect;
        
}; // Native::Interface::Tunnel::Ip::Wccp::WebCache


class Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect : public Entity
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

}; // Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect


class Native::Interface::Tunnel::Ip::Wccp::Redirect : public Entity
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

        class Exclude; //type: Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude> exclude;
        
}; // Native::Interface::Tunnel::Ip::Wccp::Redirect


class Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude : public Entity
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

}; // Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude


class Native::Interface::Tunnel::Ip::Wccp::Vrf : public Entity
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
        class WccpList; //type: Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList
        class WebCache; //type: Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList> > wccp_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache> web_cache;
        
}; // Native::Interface::Tunnel::Ip::Wccp::Vrf


class Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList : public Entity
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
        class Redirect; //type: Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect> redirect;
        
}; // Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList


class Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect : public Entity
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

}; // Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect


class Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache : public Entity
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
        class Redirect; //type: Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect> redirect;
        
}; // Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache


class Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect : public Entity
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

}; // Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect


class Native::Interface::Tunnel::Ipv6 : public Entity
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
        class DestinationGuard; //type: Native::Interface::Tunnel::Ipv6::DestinationGuard
        class Dhcp; //type: Native::Interface::Tunnel::Ipv6::Dhcp
        class Address; //type: Native::Interface::Tunnel::Ipv6::Address
        class Nd; //type: Native::Interface::Tunnel::Ipv6::Nd
        class TrafficFilter; //type: Native::Interface::Tunnel::Ipv6::TrafficFilter
        class Flow; //type: Native::Interface::Tunnel::Ipv6::Flow
        class NoPim; //type: Native::Interface::Tunnel::Ipv6::NoPim
        class Pim; //type: Native::Interface::Tunnel::Ipv6::Pim
        class Ospf; //type: Native::Interface::Tunnel::Ipv6::Ospf
        class Rip; //type: Native::Interface::Tunnel::Ipv6::Rip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::DestinationGuard> destination_guard; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Flow> flow;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Nd> nd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::NoPim> no_pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Ospf> ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Pim> pim;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Rip> > rip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::TrafficFilter> > traffic_filter;
        
}; // Native::Interface::Tunnel::Ipv6


class Native::Interface::Tunnel::Ipv6::DestinationGuard : public Entity
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

}; // Native::Interface::Tunnel::Ipv6::DestinationGuard


class Native::Interface::Tunnel::Ipv6::Dhcp : public Entity
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

        class Server; //type: Native::Interface::Tunnel::Ipv6::Dhcp::Server
        class Guard; //type: Native::Interface::Tunnel::Ipv6::Dhcp::Guard

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Dhcp::Guard> guard; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Dhcp::Server> > server;
        
}; // Native::Interface::Tunnel::Ipv6::Dhcp


class Native::Interface::Tunnel::Ipv6::Dhcp::Server : public Entity
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

}; // Native::Interface::Tunnel::Ipv6::Dhcp::Server


class Native::Interface::Tunnel::Ipv6::Dhcp::Guard : public Entity
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

}; // Native::Interface::Tunnel::Ipv6::Dhcp::Guard


class Native::Interface::Tunnel::Ipv6::Address : public Entity
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

        class Dhcp; //type: Native::Interface::Tunnel::Ipv6::Address::Dhcp
        class Autoconfig; //type: Native::Interface::Tunnel::Ipv6::Address::Autoconfig
        class PrefixList; //type: Native::Interface::Tunnel::Ipv6::Address::PrefixList
        class LinkLocalAddress; //type: Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Address::Autoconfig> autoconfig; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Address::Dhcp> dhcp; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress> > link_local_address;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6::Address::PrefixList> > prefix_list;
        
}; // Native::Interface::Tunnel::Ipv6::Address


class Native::Interface::Tunnel::Ipv6::Address::Dhcp : public Entity
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

}; // Native::Interface::Tunnel::Ipv6::Address::Dhcp


class Native::Interface::Tunnel::Ipv6::Address::Autoconfig : public Entity
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

}; // Native::Interface::Tunnel::Ipv6::Address::Autoconfig


class Native::Interface::Tunnel::Ipv6::Address::PrefixList : public Entity
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

}; // Native::Interface::Tunnel::Ipv6::Address::PrefixList


class Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress : public Entity
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

}; // Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress

class Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::PolicyActionEnum : public Enum
{
    public:
        static const Enum::YLeaf drop;
        static const Enum::YLeaf encapsulate;
        static const Enum::YLeaf keep;
        static const Enum::YLeaf replace;

};

class Native::Interface::Tunnel::Ip::Verify::Unicast::Source::ReachableViaEnum : public Enum
{
    public:
        static const Enum::YLeaf any;
        static const Enum::YLeaf rx;

};

class Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf input;
        static const Enum::YLeaf output;

};

class Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::NameEnum : public Enum
{
    public:
        static const Enum::YLeaf Y__STAR__;

};

class Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6Enum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class Native::Interface::Tunnel::Ip::Ospf::NetworkEnum : public Enum
{
    public:
        static const Enum::YLeaf broadcast;
        static const Enum::YLeaf non_broadcast;
        static const Enum::YLeaf point_to_multipoint;
        static const Enum::YLeaf point_to_point;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_61_ */

