#ifndef _CISCO_IOS_XE_NATIVE_43_
#define _CISCO_IOS_XE_NATIVE_43_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_42.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::LispSubinterface::Lisp::Ip::Tcp : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Ip::Tcp


class Native::Interface::LispSubinterface::Lisp::Ip::VirtualReassembly : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Ip::VirtualReassembly


class Native::Interface::LispSubinterface::Lisp::Ip::Dhcp : public Entity
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


}; // Native::Interface::LispSubinterface::Lisp::Ip::Dhcp


class Native::Interface::LispSubinterface::Lisp::Ip::SummaryAddress : public Entity
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

        class Eigrp; //type: Native::Interface::LispSubinterface::Lisp::Ip::SummaryAddress::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Ip::SummaryAddress::Eigrp> > eigrp;
        
}; // Native::Interface::LispSubinterface::Lisp::Ip::SummaryAddress


class Native::Interface::LispSubinterface::Lisp::Ip::SummaryAddress::Eigrp : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Ip::SummaryAddress::Eigrp


class Native::Interface::LispSubinterface::Lisp::Ip::Verify : public Entity
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

        class Source; //type: Native::Interface::LispSubinterface::Lisp::Ip::Verify::Source
        class Unicast; //type: Native::Interface::LispSubinterface::Lisp::Ip::Verify::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Ip::Verify::Source> source; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Ip::Verify::Unicast> unicast;
        
}; // Native::Interface::LispSubinterface::Lisp::Ip::Verify


class Native::Interface::LispSubinterface::Lisp::Ip::Verify::Source : public Entity
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

        class Vlan; //type: Native::Interface::LispSubinterface::Lisp::Ip::Verify::Source::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Ip::Verify::Source::Vlan> vlan;
        
}; // Native::Interface::LispSubinterface::Lisp::Ip::Verify::Source


class Native::Interface::LispSubinterface::Lisp::Ip::Verify::Source::Vlan : public Entity
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

        class DhcpSnooping; //type: Native::Interface::LispSubinterface::Lisp::Ip::Verify::Source::Vlan::DhcpSnooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Ip::Verify::Source::Vlan::DhcpSnooping> dhcp_snooping; // presence node
        
}; // Native::Interface::LispSubinterface::Lisp::Ip::Verify::Source::Vlan


class Native::Interface::LispSubinterface::Lisp::Ip::Verify::Source::Vlan::DhcpSnooping : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Ip::Verify::Source::Vlan::DhcpSnooping


class Native::Interface::LispSubinterface::Lisp::Ip::Verify::Unicast : public Entity
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

        class ReversePath; //type: Native::Interface::LispSubinterface::Lisp::Ip::Verify::Unicast::ReversePath
        class Source; //type: Native::Interface::LispSubinterface::Lisp::Ip::Verify::Unicast::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Ip::Verify::Unicast::ReversePath> reverse_path; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Ip::Verify::Unicast::Source> source;
        
}; // Native::Interface::LispSubinterface::Lisp::Ip::Verify::Unicast


class Native::Interface::LispSubinterface::Lisp::Ip::Verify::Unicast::ReversePath : public Entity
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


}; // Native::Interface::LispSubinterface::Lisp::Ip::Verify::Unicast::ReversePath


class Native::Interface::LispSubinterface::Lisp::Ip::Verify::Unicast::Source : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Ip::Verify::Unicast::Source


class Native::Interface::LispSubinterface::Lisp::Ipv6 : public Entity
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
        class DestinationGuard; //type: Native::Interface::LispSubinterface::Lisp::Ipv6::DestinationGuard
        class Dhcp; //type: Native::Interface::LispSubinterface::Lisp::Ipv6::Dhcp
        class Address; //type: Native::Interface::LispSubinterface::Lisp::Ipv6::Address
        class Nd; //type: Native::Interface::LispSubinterface::Lisp::Ipv6::Nd
        class TrafficFilter; //type: Native::Interface::LispSubinterface::Lisp::Ipv6::TrafficFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Ipv6::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Ipv6::DestinationGuard> destination_guard; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Ipv6::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Ipv6::Nd> nd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Ipv6::TrafficFilter> > traffic_filter;
        
}; // Native::Interface::LispSubinterface::Lisp::Ipv6


class Native::Interface::LispSubinterface::Lisp::Ipv6::DestinationGuard : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Ipv6::DestinationGuard


class Native::Interface::LispSubinterface::Lisp::Ipv6::Dhcp : public Entity
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


}; // Native::Interface::LispSubinterface::Lisp::Ipv6::Dhcp


class Native::Interface::LispSubinterface::Lisp::Ipv6::Address : public Entity
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

        class Dhcp; //type: Native::Interface::LispSubinterface::Lisp::Ipv6::Address::Dhcp
        class Autoconfig; //type: Native::Interface::LispSubinterface::Lisp::Ipv6::Address::Autoconfig
        class PrefixList; //type: Native::Interface::LispSubinterface::Lisp::Ipv6::Address::PrefixList
        class LinkLocalAddress; //type: Native::Interface::LispSubinterface::Lisp::Ipv6::Address::LinkLocalAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Ipv6::Address::Autoconfig> autoconfig; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Ipv6::Address::Dhcp> dhcp; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Ipv6::Address::LinkLocalAddress> > link_local_address;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Ipv6::Address::PrefixList> > prefix_list;
        
}; // Native::Interface::LispSubinterface::Lisp::Ipv6::Address


class Native::Interface::LispSubinterface::Lisp::Ipv6::Address::Dhcp : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Ipv6::Address::Dhcp


class Native::Interface::LispSubinterface::Lisp::Ipv6::Address::Autoconfig : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Ipv6::Address::Autoconfig


class Native::Interface::LispSubinterface::Lisp::Ipv6::Address::PrefixList : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Ipv6::Address::PrefixList


class Native::Interface::LispSubinterface::Lisp::Ipv6::Address::LinkLocalAddress : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Ipv6::Address::LinkLocalAddress


class Native::Interface::LispSubinterface::Lisp::Ipv6::Nd : public Entity
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


}; // Native::Interface::LispSubinterface::Lisp::Ipv6::Nd


class Native::Interface::LispSubinterface::Lisp::Ipv6::TrafficFilter : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Ipv6::TrafficFilter


class Native::Interface::LispSubinterface::Lisp::Logging : public Entity
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

        class Event; //type: Native::Interface::LispSubinterface::Lisp::Logging::Event

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Logging::Event> event;
        
}; // Native::Interface::LispSubinterface::Lisp::Logging


class Native::Interface::LispSubinterface::Lisp::Logging::Event : public Entity
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
        class SpanningTree; //type: Native::Interface::LispSubinterface::Lisp::Logging::Event::SpanningTree
        class SubifLinkStatus; //type: Native::Interface::LispSubinterface::Lisp::Logging::Event::SubifLinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Logging::Event::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Logging::Event::SubifLinkStatus> subif_link_status; // presence node
        
}; // Native::Interface::LispSubinterface::Lisp::Logging::Event


class Native::Interface::LispSubinterface::Lisp::Logging::Event::SpanningTree : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Logging::Event::SpanningTree


class Native::Interface::LispSubinterface::Lisp::Logging::Event::SubifLinkStatus : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Logging::Event::SubifLinkStatus


class Native::Interface::LispSubinterface::Lisp::Mdix : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Mdix


class Native::Interface::LispSubinterface::Lisp::Mop : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Mop


class Native::Interface::LispSubinterface::Lisp::Interface_Qos : public Entity
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

        class Trust; //type: Native::Interface::LispSubinterface::Lisp::Interface_Qos::Trust

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Interface_Qos::Trust> trust;
        
}; // Native::Interface::LispSubinterface::Lisp::Interface_Qos


class Native::Interface::LispSubinterface::Lisp::Interface_Qos::Trust : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Interface_Qos::Trust


class Native::Interface::LispSubinterface::Lisp::Standby : public Entity
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
        class Delay; //type: Native::Interface::LispSubinterface::Lisp::Standby::Delay
        class UseBia; //type: Native::Interface::LispSubinterface::Lisp::Standby::UseBia
        class StandbyList; //type: Native::Interface::LispSubinterface::Lisp::Standby::StandbyList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::Delay> delay;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::StandbyList> > standby_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::UseBia> use_bia; // presence node
                class VersionEnum;

}; // Native::Interface::LispSubinterface::Lisp::Standby


class Native::Interface::LispSubinterface::Lisp::Standby::Delay : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Standby::Delay


class Native::Interface::LispSubinterface::Lisp::Standby::UseBia : public Entity
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

        class Scope; //type: Native::Interface::LispSubinterface::Lisp::Standby::UseBia::Scope

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::UseBia::Scope> scope;
        
}; // Native::Interface::LispSubinterface::Lisp::Standby::UseBia


class Native::Interface::LispSubinterface::Lisp::Standby::UseBia::Scope : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Standby::UseBia::Scope


class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList : public Entity
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
        class Authentication; //type: Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Authentication
        class Ip; //type: Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Ip
        class Preempt; //type: Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Preempt
        class Redirect; //type: Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect
        class Timers; //type: Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Timers
        class Track; //type: Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Track

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Ip> ip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Preempt> preempt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect> redirect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Timers> timers;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Track> > track;
                class Ipv6Enum;

}; // Native::Interface::LispSubinterface::Lisp::Standby::StandbyList


class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Authentication : public Entity
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
        class Md5; //type: Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Authentication::Md5> md5;
        
}; // Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Authentication


class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Authentication::Md5 : public Entity
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
        class KeyString; //type: Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Authentication::Md5


class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Authentication::Md5::KeyString : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Authentication::Md5::KeyString


class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Ip : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Ip


class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Preempt : public Entity
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

        class Delay; //type: Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Preempt::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Preempt::Delay> delay;
        
}; // Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Preempt


class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Preempt::Delay : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Preempt::Delay


class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect : public Entity
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
        class Advertisement; //type: Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Advertisement
        class Timers; //type: Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Advertisement> advertisement;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Timers> timers;
        
}; // Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect


class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Advertisement : public Entity
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

        class Authentication; //type: Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Advertisement::Authentication

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Advertisement::Authentication> authentication;
        
}; // Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Advertisement


class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Advertisement::Authentication : public Entity
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

        class Md5; //type: Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5> md5;
        
}; // Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Advertisement::Authentication


class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5 : public Entity
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
        class KeyString; //type: Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5


class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString


class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Timers : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Timers


class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Timers : public Entity
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

        class HelloInterval; //type: Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Timers::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Timers


class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Timers::HelloInterval : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Timers::HelloInterval


class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Timers::HoldTime : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Timers::HoldTime


class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Track : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Track


class Native::Interface::LispSubinterface::Lisp::AccessSession : public Entity
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
        class PortControl; //type: Native::Interface::LispSubinterface::Lisp::AccessSession::PortControl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::AccessSession::PortControl> port_control;
                class HostModeEnum;

}; // Native::Interface::LispSubinterface::Lisp::AccessSession


class Native::Interface::LispSubinterface::Lisp::AccessSession::PortControl : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::AccessSession::PortControl


class Native::Interface::LispSubinterface::Lisp::StormControl : public Entity
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

        class Action; //type: Native::Interface::LispSubinterface::Lisp::StormControl::Action
        class Broadcast; //type: Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast
        class Multicast; //type: Native::Interface::LispSubinterface::Lisp::StormControl::Multicast
        class Unicast; //type: Native::Interface::LispSubinterface::Lisp::StormControl::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::StormControl::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::StormControl::Unicast> unicast;
        
}; // Native::Interface::LispSubinterface::Lisp::StormControl


class Native::Interface::LispSubinterface::Lisp::StormControl::Action : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::StormControl::Action


class Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast : public Entity
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

        class Include; //type: Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast::Include
        class Level; //type: Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast::Include> include;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast::Level> level;
        
}; // Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast


class Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast::Include : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast::Include


class Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast::Level : public Entity
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
        class Bps; //type: Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast::Level


class Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast::Level::Bps : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast::Level::Bps


class Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast::Level::Pps : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::StormControl::Broadcast::Level::Pps


class Native::Interface::LispSubinterface::Lisp::StormControl::Multicast : public Entity
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

        class Level; //type: Native::Interface::LispSubinterface::Lisp::StormControl::Multicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::StormControl::Multicast::Level> level;
        
}; // Native::Interface::LispSubinterface::Lisp::StormControl::Multicast


class Native::Interface::LispSubinterface::Lisp::StormControl::Multicast::Level : public Entity
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
        class Bps; //type: Native::Interface::LispSubinterface::Lisp::StormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::LispSubinterface::Lisp::StormControl::Multicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::StormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::StormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::LispSubinterface::Lisp::StormControl::Multicast::Level


class Native::Interface::LispSubinterface::Lisp::StormControl::Multicast::Level::Bps : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::StormControl::Multicast::Level::Bps


class Native::Interface::LispSubinterface::Lisp::StormControl::Multicast::Level::Pps : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::StormControl::Multicast::Level::Pps


class Native::Interface::LispSubinterface::Lisp::StormControl::Unicast : public Entity
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

        class Level; //type: Native::Interface::LispSubinterface::Lisp::StormControl::Unicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::StormControl::Unicast::Level> level;
        
}; // Native::Interface::LispSubinterface::Lisp::StormControl::Unicast


class Native::Interface::LispSubinterface::Lisp::StormControl::Unicast::Level : public Entity
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

        class Threshold; //type: Native::Interface::LispSubinterface::Lisp::StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::LispSubinterface::Lisp::StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::LispSubinterface::Lisp::StormControl::Unicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::StormControl::Unicast::Level::Pps> pps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::StormControl::Unicast::Level::Threshold> threshold;
        
}; // Native::Interface::LispSubinterface::Lisp::StormControl::Unicast::Level


class Native::Interface::LispSubinterface::Lisp::StormControl::Unicast::Level::Threshold : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::StormControl::Unicast::Level::Threshold


class Native::Interface::LispSubinterface::Lisp::StormControl::Unicast::Level::Bps : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::StormControl::Unicast::Level::Bps


class Native::Interface::LispSubinterface::Lisp::StormControl::Unicast::Level::Pps : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::StormControl::Unicast::Level::Pps


class Native::Interface::LispSubinterface::Lisp::Trust : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Trust


class Native::Interface::LispSubinterface::Lisp::Utd : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Utd


class Native::Interface::LispSubinterface::Lisp::PriorityQueue : public Entity
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
        class CosMap; //type: Native::Interface::LispSubinterface::Lisp::PriorityQueue::CosMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::PriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::LispSubinterface::Lisp::PriorityQueue


class Native::Interface::LispSubinterface::Lisp::PriorityQueue::CosMap : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::PriorityQueue::CosMap


class Native::Interface::LispSubinterface::Lisp::RcvQueue : public Entity
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

        class CosMap; //type: Native::Interface::LispSubinterface::Lisp::RcvQueue::CosMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::RcvQueue::CosMap> > cos_map;
        
}; // Native::Interface::LispSubinterface::Lisp::RcvQueue


class Native::Interface::LispSubinterface::Lisp::RcvQueue::CosMap : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::RcvQueue::CosMap


class Native::Interface::LispSubinterface::Lisp::Peer : public Entity
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

        class Default_; //type: Native::Interface::LispSubinterface::Lisp::Peer::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Peer::Default_> default_;
        
}; // Native::Interface::LispSubinterface::Lisp::Peer


class Native::Interface::LispSubinterface::Lisp::Peer::Default_ : public Entity
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

        class Ip; //type: Native::Interface::LispSubinterface::Lisp::Peer::Default_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Peer::Default_::Ip> ip;
        
}; // Native::Interface::LispSubinterface::Lisp::Peer::Default_


class Native::Interface::LispSubinterface::Lisp::Peer::Default_::Ip : public Entity
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

        class Address; //type: Native::Interface::LispSubinterface::Lisp::Peer::Default_::Ip::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Peer::Default_::Ip::Address> address;
        
}; // Native::Interface::LispSubinterface::Lisp::Peer::Default_::Ip


class Native::Interface::LispSubinterface::Lisp::Peer::Default_::Ip::Address : public Entity
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
        class DhcpPool; //type: Native::Interface::LispSubinterface::Lisp::Peer::Default_::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::LispSubinterface::Lisp::Peer::Default_::Ip::Address::Pool

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Peer::Default_::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::LispSubinterface::Lisp::Peer::Default_::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::LispSubinterface::Lisp::Peer::Default_::Ip::Address


class Native::Interface::LispSubinterface::Lisp::Peer::Default_::Ip::Address::DhcpPool : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Peer::Default_::Ip::Address::DhcpPool


class Native::Interface::LispSubinterface::Lisp::Peer::Default_::Ip::Address::Pool : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::Peer::Default_::Ip::Address::Pool


class Native::Interface::LispSubinterface::Lisp::PmPath : public Entity
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

}; // Native::Interface::LispSubinterface::Lisp::PmPath


class Native::Interface::Nve : public Entity
{
    public:
        Nve();
        ~Nve();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: uint16
        class SourceInterface; //type: Native::Interface::Nve::SourceInterface
        class Member; //type: Native::Interface::Nve::Member

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Nve::Member> member;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Nve::SourceInterface> source_interface;
        
}; // Native::Interface::Nve


class Native::Interface::Nve::SourceInterface : public Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

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
        class AtmSubinterface; //type: Native::Interface::Nve::SourceInterface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::Nve::SourceInterface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::Nve::SourceInterface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Nve::SourceInterface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Nve::SourceInterface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Nve::SourceInterface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Nve::SourceInterface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Nve::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Nve::SourceInterface


class Native::Interface::Nve::SourceInterface::AtmSubinterface : public Entity
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

}; // Native::Interface::Nve::SourceInterface::AtmSubinterface


class Native::Interface::Nve::SourceInterface::AtmAcrsubinterface : public Entity
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

}; // Native::Interface::Nve::SourceInterface::AtmAcrsubinterface


class Native::Interface::Nve::SourceInterface::LispSubinterface : public Entity
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

}; // Native::Interface::Nve::SourceInterface::LispSubinterface


class Native::Interface::Nve::SourceInterface::PortChannelSubinterface : public Entity
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

}; // Native::Interface::Nve::SourceInterface::PortChannelSubinterface


class Native::Interface::Nve::Member : public Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vni; //type: Native::Interface::Nve::Member::Vni

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Nve::Member::Vni> > vni;
        
}; // Native::Interface::Nve::Member


class Native::Interface::Nve::Member::Vni : public Entity
{
    public:
        Vni();
        ~Vni();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vni_range; //type: string
        class McastGroup; //type: Native::Interface::Nve::Member::Vni::McastGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Nve::Member::Vni::McastGroup> mcast_group;
        
}; // Native::Interface::Nve::Member::Vni


class Native::Interface::Nve::Member::Vni::McastGroup : public Entity
{
    public:
        McastGroup();
        ~McastGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf multicast_group_min; //type: string
        YLeaf multicast_group_max; //type: string

}; // Native::Interface::Nve::Member::Vni::McastGroup


class Native::Interface::Overlay : public Entity
{
    public:
        Overlay();
        ~Overlay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: uint16
        YLeaf description; //type: string
        YLeaf shutdown; //type: empty
        YLeaf keepalive; //type: boolean
        YLeaf if_state; //type: IfStateEnum
        YLeaf delay; //type: uint32
        YLeaf load_interval; //type: uint16
        YLeaf max_reserved_bandwidth; //type: uint8
        YLeaf mtu; //type: uint16
        YLeaf service_insertion; //type: ServiceInsertionEnum
        YLeaf channel_protocol; //type: ChannelProtocolEnum
        YLeaf duplex; //type: DuplexEnum
        class SwitchportConf; //type: Native::Interface::Overlay::SwitchportConf
        class Switchport; //type: Native::Interface::Overlay::Switchport
        class Arp; //type: Native::Interface::Overlay::Arp
        class Backup; //type: Native::Interface::Overlay::Backup
        class Cemoudp; //type: Native::Interface::Overlay::Cemoudp
        class CwsTunnel; //type: Native::Interface::Overlay::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::Overlay::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::Overlay::Encapsulation
        class FairQueueConf; //type: Native::Interface::Overlay::FairQueueConf
        class FairQueue; //type: Native::Interface::Overlay::FairQueue
        class Flowcontrol; //type: Native::Interface::Overlay::Flowcontrol
        class Isis; //type: Native::Interface::Overlay::Isis
        class KeepaliveSettings; //type: Native::Interface::Overlay::KeepaliveSettings
        class Bfd; //type: Native::Interface::Overlay::Bfd
        class Bandwidth; //type: Native::Interface::Overlay::Bandwidth
        class Dampening; //type: Native::Interface::Overlay::Dampening
        class Domain; //type: Native::Interface::Overlay::Domain
        class HoldQueue; //type: Native::Interface::Overlay::HoldQueue
        class Mpls; //type: Native::Interface::Overlay::Mpls
        class IpVrf; //type: Native::Interface::Overlay::IpVrf
        class Vrf; //type: Native::Interface::Overlay::Vrf
        class Ip; //type: Native::Interface::Overlay::Ip
        class Ipv6; //type: Native::Interface::Overlay::Ipv6
        class Logging; //type: Native::Interface::Overlay::Logging
        class Mdix; //type: Native::Interface::Overlay::Mdix
        class Mop; //type: Native::Interface::Overlay::Mop
        class Interface_Qos; //type: Native::Interface::Overlay::Interface_Qos
        class Standby; //type: Native::Interface::Overlay::Standby
        class AccessSession; //type: Native::Interface::Overlay::AccessSession
        class StormControl; //type: Native::Interface::Overlay::StormControl
        class Trust; //type: Native::Interface::Overlay::Trust
        class Utd; //type: Native::Interface::Overlay::Utd
        class PriorityQueue; //type: Native::Interface::Overlay::PriorityQueue
        class RcvQueue; //type: Native::Interface::Overlay::RcvQueue
        class Peer; //type: Native::Interface::Overlay::Peer
        class PmPath; //type: Native::Interface::Overlay::PmPath
        class CarrierDelay; //type: Native::Interface::Overlay::CarrierDelay
        class ChannelGroup; //type: Native::Interface::Overlay::ChannelGroup
        class Ethernet; //type: Native::Interface::Overlay::Ethernet
        class Negotiation; //type: Native::Interface::Overlay::Negotiation
        class Synchronous; //type: Native::Interface::Overlay::Synchronous
        class Speed; //type: Native::Interface::Overlay::Speed
        class Plim; //type: Native::Interface::Overlay::Plim
        class Pppoe; //type: Native::Interface::Overlay::Pppoe
        class Service; //type: Native::Interface::Overlay::Service
        class Otv; //type: Native::Interface::Overlay::Otv

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::AccessSession> access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Backup> backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::CarrierDelay> carrier_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Cemoudp> cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::ChannelGroup> channel_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::CwsTunnel> cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::FairQueue> fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::FairQueueConf> fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::HoldQueue> hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Interface_Qos> interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Mdix> mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Mop> mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Negotiation> negotiation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Otv> otv;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Plim> plim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::PmPath> pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Pppoe> pppoe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::PriorityQueue> priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::RcvQueue> rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Service> service;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Speed> speed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Standby> standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Switchport> switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::SwitchportConf> switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Synchronous> synchronous;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Trust> trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Utd> utd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Vrf> vrf;
                class IfStateEnum;
        class ServiceInsertionEnum;
        class ChannelProtocolEnum;
        class DuplexEnum;

}; // Native::Interface::Overlay


class Native::Interface::Overlay::SwitchportConf : public Entity
{
    public:
        SwitchportConf();
        ~SwitchportConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switchport; //type: boolean

}; // Native::Interface::Overlay::SwitchportConf


class Native::Interface::Overlay::Switchport : public Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Overlay::Switchport


class Native::Interface::Overlay::Arp : public Entity
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

        YLeaf timeout; //type: uint32

}; // Native::Interface::Overlay::Arp


class Native::Interface::Overlay::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Delay; //type: Native::Interface::Overlay::Backup::Delay
        class Interface_; //type: Native::Interface::Overlay::Backup::Interface_
        class Load; //type: Native::Interface::Overlay::Backup::Load

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Backup::Interface_> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Backup::Load> load;
        
}; // Native::Interface::Overlay::Backup


class Native::Interface::Overlay::Backup::Delay : public Entity
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

}; // Native::Interface::Overlay::Backup::Delay


class Native::Interface::Overlay::Backup::Interface_ : public Entity
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
        class AtmSubinterface; //type: Native::Interface::Overlay::Backup::Interface_::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::Overlay::Backup::Interface_::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::Overlay::Backup::Interface_::LispSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Overlay::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Backup::Interface_::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Backup::Interface_::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Backup::Interface_::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Overlay::Backup::Interface_


class Native::Interface::Overlay::Backup::Interface_::AtmSubinterface : public Entity
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

}; // Native::Interface::Overlay::Backup::Interface_::AtmSubinterface


class Native::Interface::Overlay::Backup::Interface_::AtmAcrsubinterface : public Entity
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

}; // Native::Interface::Overlay::Backup::Interface_::AtmAcrsubinterface


class Native::Interface::Overlay::Backup::Interface_::LispSubinterface : public Entity
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

}; // Native::Interface::Overlay::Backup::Interface_::LispSubinterface


class Native::Interface::Overlay::Backup::Interface_::PortChannelSubinterface : public Entity
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

}; // Native::Interface::Overlay::Backup::Interface_::PortChannelSubinterface


class Native::Interface::Overlay::Backup::Load : public Entity
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

}; // Native::Interface::Overlay::Backup::Load


class Native::Interface::Overlay::Cemoudp : public Entity
{
    public:
        Cemoudp();
        ~Cemoudp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Reserve; //type: Native::Interface::Overlay::Cemoudp::Reserve

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::Overlay::Cemoudp


class Native::Interface::Overlay::Cemoudp::Reserve : public Entity
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

}; // Native::Interface::Overlay::Cemoudp::Reserve


class Native::Interface::Overlay::CwsTunnel : public Entity
{
    public:
        CwsTunnel();
        ~CwsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in; //type: empty
        class Out; //type: Native::Interface::Overlay::CwsTunnel::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::CwsTunnel::Out> out;
        
}; // Native::Interface::Overlay::CwsTunnel


class Native::Interface::Overlay::CwsTunnel::Out : public Entity
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

}; // Native::Interface::Overlay::CwsTunnel::Out


class Native::Interface::Overlay::L2ProtocolTunnel : public Entity
{
    public:
        L2ProtocolTunnel();
        ~L2ProtocolTunnel();

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
        class DropThreshold; //type: Native::Interface::Overlay::L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::Overlay::L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::Overlay::L2ProtocolTunnel


class Native::Interface::Overlay::L2ProtocolTunnel::DropThreshold : public Entity
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

}; // Native::Interface::Overlay::L2ProtocolTunnel::DropThreshold


class Native::Interface::Overlay::L2ProtocolTunnel::ShutdownThreshold : public Entity
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

}; // Native::Interface::Overlay::L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::Overlay::Encapsulation : public Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1Q; //type: Native::Interface::Overlay::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::Overlay::Encapsulation::Isl
        class Ppp; //type: Native::Interface::Overlay::Encapsulation::Ppp
        class Slip; //type: Native::Interface::Overlay::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::Overlay::Encapsulation::FrameRelay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Encapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Encapsulation::Isl> isl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Encapsulation::Slip> slip; // presence node
        
}; // Native::Interface::Overlay::Encapsulation


class Native::Interface::Overlay::Encapsulation::Dot1Q : public Entity
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

}; // Native::Interface::Overlay::Encapsulation::Dot1Q


class Native::Interface::Overlay::Encapsulation::Isl : public Entity
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

}; // Native::Interface::Overlay::Encapsulation::Isl


class Native::Interface::Overlay::Encapsulation::Ppp : public Entity
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


}; // Native::Interface::Overlay::Encapsulation::Ppp


class Native::Interface::Overlay::Encapsulation::Slip : public Entity
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


}; // Native::Interface::Overlay::Encapsulation::Slip


class Native::Interface::Overlay::Encapsulation::FrameRelay : public Entity
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

}; // Native::Interface::Overlay::Encapsulation::FrameRelay


class Native::Interface::Overlay::FairQueueConf : public Entity
{
    public:
        FairQueueConf();
        ~FairQueueConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fair_queue; //type: boolean

}; // Native::Interface::Overlay::FairQueueConf


class Native::Interface::Overlay::FairQueue : public Entity
{
    public:
        FairQueue();
        ~FairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incomplete; //type: empty

}; // Native::Interface::Overlay::FairQueue


class Native::Interface::Overlay::Flowcontrol : public Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

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

}; // Native::Interface::Overlay::Flowcontrol


class Native::Interface::Overlay::Isis : public Entity
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


}; // Native::Interface::Overlay::Isis


class Native::Interface::Overlay::KeepaliveSettings : public Entity
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

        class Keepalive; //type: Native::Interface::Overlay::KeepaliveSettings::Keepalive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::Overlay::KeepaliveSettings


class Native::Interface::Overlay::KeepaliveSettings::Keepalive : public Entity
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

}; // Native::Interface::Overlay::KeepaliveSettings::Keepalive


class Native::Interface::Overlay::Bfd : public Entity
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


}; // Native::Interface::Overlay::Bfd


class Native::Interface::Overlay::Bandwidth : public Entity
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
        class Receive; //type: Native::Interface::Overlay::Bandwidth::Receive
        class Inherit; //type: Native::Interface::Overlay::Bandwidth::Inherit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Bandwidth::Inherit> inherit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Bandwidth::Receive> receive;
        
}; // Native::Interface::Overlay::Bandwidth


class Native::Interface::Overlay::Bandwidth::Receive : public Entity
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

}; // Native::Interface::Overlay::Bandwidth::Receive


class Native::Interface::Overlay::Bandwidth::Inherit : public Entity
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

}; // Native::Interface::Overlay::Bandwidth::Inherit


class Native::Interface::Overlay::Dampening : public Entity
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
        class Restart; //type: Native::Interface::Overlay::Dampening::Restart

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Dampening::Restart> restart;
        
}; // Native::Interface::Overlay::Dampening


class Native::Interface::Overlay::Dampening::Restart : public Entity
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

}; // Native::Interface::Overlay::Dampening::Restart


class Native::Interface::Overlay::Domain : public Entity
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

}; // Native::Interface::Overlay::Domain


class Native::Interface::Overlay::HoldQueue : public Entity
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

}; // Native::Interface::Overlay::HoldQueue


class Native::Interface::Overlay::Mpls : public Entity
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


}; // Native::Interface::Overlay::Mpls


class Native::Interface::Overlay::IpVrf : public Entity
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

        class Ip; //type: Native::Interface::Overlay::IpVrf::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::IpVrf::Ip> ip;
        
}; // Native::Interface::Overlay::IpVrf


class Native::Interface::Overlay::IpVrf::Ip : public Entity
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

        class Vrf; //type: Native::Interface::Overlay::IpVrf::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::Overlay::IpVrf::Ip


class Native::Interface::Overlay::IpVrf::Ip::Vrf : public Entity
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

}; // Native::Interface::Overlay::IpVrf::Ip::Vrf


class Native::Interface::Overlay::Vrf : public Entity
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

}; // Native::Interface::Overlay::Vrf


class Native::Interface::Overlay::Ip : public Entity
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
        class AccessGroup; //type: Native::Interface::Overlay::Ip::AccessGroup
        class Arp; //type: Native::Interface::Overlay::Ip::Arp
        class Vrf; //type: Native::Interface::Overlay::Ip::Vrf
        class NoAddress; //type: Native::Interface::Overlay::Ip::NoAddress
        class Address; //type: Native::Interface::Overlay::Ip::Address
        class HelloInterval; //type: Native::Interface::Overlay::Ip::HelloInterval
        class Authentication; //type: Native::Interface::Overlay::Ip::Authentication
        class HoldTime; //type: Native::Interface::Overlay::Ip::HoldTime
        class HelperAddress; //type: Native::Interface::Overlay::Ip::HelperAddress
        class Pim; //type: Native::Interface::Overlay::Ip::Pim
        class Policy; //type: Native::Interface::Overlay::Ip::Policy
        class RouteCacheConf; //type: Native::Interface::Overlay::Ip::RouteCacheConf
        class RouteCache; //type: Native::Interface::Overlay::Ip::RouteCache
        class Router; //type: Native::Interface::Overlay::Ip::Router
        class Tcp; //type: Native::Interface::Overlay::Ip::Tcp
        class VirtualReassembly; //type: Native::Interface::Overlay::Ip::VirtualReassembly
        class Dhcp; //type: Native::Interface::Overlay::Ip::Dhcp
        class SummaryAddress; //type: Native::Interface::Overlay::Ip::SummaryAddress
        class Verify; //type: Native::Interface::Overlay::Ip::Verify

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::AccessGroup> access_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::HelperAddress> > helper_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::HoldTime> hold_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::NoAddress> no_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::Pim> pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::RouteCache> route_cache; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::RouteCacheConf> route_cache_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::Router> router;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::SummaryAddress> summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::Verify> verify;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::Vrf> vrf;
        
}; // Native::Interface::Overlay::Ip


class Native::Interface::Overlay::Ip::AccessGroup : public Entity
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

        class In; //type: Native::Interface::Overlay::Ip::AccessGroup::In
        class Out; //type: Native::Interface::Overlay::Ip::AccessGroup::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::AccessGroup::In> in;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::AccessGroup::Out> out;
        
}; // Native::Interface::Overlay::Ip::AccessGroup


class Native::Interface::Overlay::Ip::AccessGroup::In : public Entity
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

        class CommonAcl; //type: Native::Interface::Overlay::Ip::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::Overlay::Ip::AccessGroup::In::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::AccessGroup::In::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::AccessGroup::In::CommonAcl> common_acl;
        
}; // Native::Interface::Overlay::Ip::AccessGroup::In


class Native::Interface::Overlay::Ip::AccessGroup::In::CommonAcl : public Entity
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

}; // Native::Interface::Overlay::Ip::AccessGroup::In::CommonAcl


class Native::Interface::Overlay::Ip::AccessGroup::In::Acl : public Entity
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

}; // Native::Interface::Overlay::Ip::AccessGroup::In::Acl


class Native::Interface::Overlay::Ip::AccessGroup::Out : public Entity
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

        class CommonAcl; //type: Native::Interface::Overlay::Ip::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::Overlay::Ip::AccessGroup::Out::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::AccessGroup::Out::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::AccessGroup::Out::CommonAcl> common_acl;
        
}; // Native::Interface::Overlay::Ip::AccessGroup::Out


class Native::Interface::Overlay::Ip::AccessGroup::Out::CommonAcl : public Entity
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

}; // Native::Interface::Overlay::Ip::AccessGroup::Out::CommonAcl


class Native::Interface::Overlay::Ip::AccessGroup::Out::Acl : public Entity
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

}; // Native::Interface::Overlay::Ip::AccessGroup::Out::Acl


class Native::Interface::Overlay::Ip::Arp : public Entity
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

        class Inspection; //type: Native::Interface::Overlay::Ip::Arp::Inspection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::Arp::Inspection> inspection;
        
}; // Native::Interface::Overlay::Ip::Arp


class Native::Interface::Overlay::Ip::Arp::Inspection : public Entity
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
        class Limit; //type: Native::Interface::Overlay::Ip::Arp::Inspection::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::Overlay::Ip::Arp::Inspection


class Native::Interface::Overlay::Ip::Arp::Inspection::Limit : public Entity
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

}; // Native::Interface::Overlay::Ip::Arp::Inspection::Limit


class Native::Interface::Overlay::Ip::Vrf : public Entity
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
        class Forwarding; //type: Native::Interface::Overlay::Ip::Vrf::Forwarding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::Vrf::Forwarding> forwarding;
        
}; // Native::Interface::Overlay::Ip::Vrf


class Native::Interface::Overlay::Ip::Vrf::Forwarding : public Entity
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

}; // Native::Interface::Overlay::Ip::Vrf::Forwarding


class Native::Interface::Overlay::Ip::NoAddress : public Entity
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

}; // Native::Interface::Overlay::Ip::NoAddress


class Native::Interface::Overlay::Ip::Address : public Entity
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
        class Primary; //type: Native::Interface::Overlay::Ip::Address::Primary
        class Secondary; //type: Native::Interface::Overlay::Ip::Address::Secondary
        class Dhcp; //type: Native::Interface::Overlay::Ip::Address::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::Address::Dhcp> dhcp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::Address::Primary> primary;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Overlay::Ip::Address::Secondary> > secondary;
        
}; // Native::Interface::Overlay::Ip::Address

class Native::Interface::LispSubinterface::Lisp::Ip::Verify::Unicast::Source::ReachableViaEnum : public Enum
{
    public:
        static const Enum::YLeaf any;
        static const Enum::YLeaf rx;

};

class Native::Interface::LispSubinterface::Lisp::Ipv6::TrafficFilter::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::LispSubinterface::Lisp::Interface_Qos::Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;

};

class Native::Interface::LispSubinterface::Lisp::Standby::VersionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Ipv6Enum : public Enum
{
    public:
        static const Enum::YLeaf autoconfig;

};

class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::LispSubinterface::Lisp::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::LispSubinterface::Lisp::AccessSession::HostModeEnum : public Enum
{
    public:
        static const Enum::YLeaf multi_auth;
        static const Enum::YLeaf multi_domain;
        static const Enum::YLeaf multi_host;
        static const Enum::YLeaf single_host;

};

class Native::Interface::LispSubinterface::Lisp::Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;
        static const Enum::YLeaf cts;
        static const Enum::YLeaf ip_camera;
        static const Enum::YLeaf media_player;

};

class Native::Interface::Overlay::IfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nhrp;

};

class Native::Interface::Overlay::ServiceInsertionEnum : public Enum
{
    public:
        static const Enum::YLeaf waas;

};

class Native::Interface::Overlay::ChannelProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf lacp;
        static const Enum::YLeaf pagp;

};

class Native::Interface::Overlay::DuplexEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf full;
        static const Enum::YLeaf half;

};

class Native::Interface::Overlay::Backup::Delay::FailureEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Overlay::Backup::Delay::SecondaryDisableEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Overlay::Backup::Load::KickinEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Overlay::Backup::Load::KickoutEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Overlay::Flowcontrol::ReceiveEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::Overlay::Flowcontrol::SendEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::Overlay::HoldQueue::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_43_ */

