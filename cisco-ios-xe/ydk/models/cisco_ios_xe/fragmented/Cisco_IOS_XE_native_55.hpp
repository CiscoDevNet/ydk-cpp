#ifndef _CISCO_IOS_XE_NATIVE_55_
#define _CISCO_IOS_XE_NATIVE_55_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_54.hpp"
#include "Cisco_IOS_XE_native_56.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Limit : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Limit


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_ : public Entity
{
    public:
        Vlan_();
        ~Vlan_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint16
        class Information; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information> information;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information : public Entity
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

        class Option; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option> option;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option : public Entity
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

        class FormatType; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType> format_type;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType : public Entity
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

        class CircuitId; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId> circuit_id;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress : public Entity
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

        class Eigrp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp> > eigrp;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify : public Entity
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

        class Source; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source
        class Unicast; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source> source; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast> unicast;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source : public Entity
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

        class Vlan_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_> vlan;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_ : public Entity
{
    public:
        Vlan_();
        ~Vlan_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DhcpSnooping; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping> dhcp_snooping; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast : public Entity
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

        class ReversePath; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath
        class Source; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath> reverse_path; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source> source;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath : public Entity
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


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar : public Entity
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

        class ProtocolDiscovery; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::ProtocolDiscovery

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::ProtocolDiscovery> protocol_discovery; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::ProtocolDiscovery : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::ProtocolDiscovery


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6 : public Entity
{
    public:
        CiscoIosXeInterfaces_Ipv6();
        ~CiscoIosXeInterfaces_Ipv6();

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
        class DestinationGuard; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard
        class Dhcp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp
        class Address; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address
        class Nd; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd
        class TrafficFilter; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter
        class NoPim; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::NoPim
        class Pim; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard> destination_guard; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd> nd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::NoPim> no_pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim> pim;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter> > traffic_filter;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp : public Entity
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

        class Server; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Server
        class Guard; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Guard

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Guard> guard; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Server> > server;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Server : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Server


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Guard : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Guard


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address : public Entity
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

        class Dhcp; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp
        class Autoconfig; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig
        class PrefixList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList
        class LinkLocalAddress; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig> autoconfig; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp> dhcp; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress> > link_local_address;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList> > prefix_list;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd : public Entity
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


}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::NoPim : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::NoPim


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim : public Entity
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
        class Bsr; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::Bsr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::Bsr> bsr;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim


class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::Bsr : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::Bsr


class Native::Interface::Vlan::CiscoIosXeInterfaces_Logging : public Entity
{
    public:
        CiscoIosXeInterfaces_Logging();
        ~CiscoIosXeInterfaces_Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Event; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event> event;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Logging


class Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event : public Entity
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
        class SpanningTree; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree
        class SubifLinkStatus; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus> subif_link_status; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event


class Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree


class Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus


class Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix : public Entity
{
    public:
        CiscoIosXeInterfaces_Mdix();
        ~CiscoIosXeInterfaces_Mdix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_; //type: boolean

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix


class Native::Interface::Vlan::CiscoIosXeInterfaces_Mop : public Entity
{
    public:
        CiscoIosXeInterfaces_Mop();
        ~CiscoIosXeInterfaces_Mop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: boolean

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Mop


class Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos : public Entity
{
    public:
        CiscoIosXeInterfaces_Interface_Qos();
        ~CiscoIosXeInterfaces_Interface_Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Trust; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust> trust;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos


class Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby : public Entity
{
    public:
        CiscoIosXeInterfaces_Standby();
        ~CiscoIosXeInterfaces_Standby();

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
        class Delay; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay
        class UseBia; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia
        class StandbyList; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay> delay;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList> > standby_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia> use_bia; // presence node
                class VersionEnum;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia : public Entity
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

        class Scope; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope> scope;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList : public Entity
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
        class Authentication; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication
        class Ip; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip
        class Preempt; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt
        class Redirect; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect
        class Timers; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers
        class Track; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip> ip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt> preempt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect> redirect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers> timers;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track> > track;
                class Ipv6Enum;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication : public Entity
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
        class Md5; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5> md5;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5 : public Entity
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
        class KeyString; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt : public Entity
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

        class Delay; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay> delay;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect : public Entity
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
        class Advertisement; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement
        class Timers; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement> advertisement;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers> timers;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement : public Entity
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

        class Authentication; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication> authentication;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication : public Entity
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

        class Md5; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5> md5;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5 : public Entity
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
        class KeyString; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers : public Entity
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

        class HelloInterval; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime


class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track


class Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession : public Entity
{
    public:
        CiscoIosXeInterfaces_AccessSession();
        ~CiscoIosXeInterfaces_AccessSession();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf closed; //type: empty
        YLeaf host_mode; //type: HostModeEnum
        class PortControl; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl> port_control;
                class HostModeEnum;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession


class Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl : public Entity
{
    public:
        CiscoIosXeInterfaces_StormControl();
        ~CiscoIosXeInterfaces_StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action
        class Broadcast; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast
        class Multicast; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast
        class Unicast; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action> action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast> unicast;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast : public Entity
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

        class Include; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include
        class Level; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include> include;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level> level;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level : public Entity
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
        class Bps; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast : public Entity
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

        class Level; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level> level;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level : public Entity
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
        class Bps; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast : public Entity
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

        class Level; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level> level;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level : public Entity
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

        class Threshold; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps> pps;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold> threshold;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps


class Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps


class Native::Interface::Vlan::CiscoIosXeInterfaces_Trust : public Entity
{
    public:
        CiscoIosXeInterfaces_Trust();
        ~CiscoIosXeInterfaces_Trust();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf device; //type: DeviceEnum
        class DeviceEnum;

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Trust


class Native::Interface::Vlan::CiscoIosXeInterfaces_Utd : public Entity
{
    public:
        CiscoIosXeInterfaces_Utd();
        ~CiscoIosXeInterfaces_Utd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Utd


class Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue : public Entity
{
    public:
        CiscoIosXeInterfaces_PriorityQueue();
        ~CiscoIosXeInterfaces_PriorityQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf out; //type: empty
        class CosMap; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue


class Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap


class Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue : public Entity
{
    public:
        CiscoIosXeInterfaces_RcvQueue();
        ~CiscoIosXeInterfaces_RcvQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CosMap; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap> > cos_map;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue


class Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap


class Native::Interface::Vlan::CiscoIosXeInterfaces_Peer : public Entity
{
    public:
        CiscoIosXeInterfaces_Peer();
        ~CiscoIosXeInterfaces_Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Default_; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_> default_;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Peer


class Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_ : public Entity
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

        class Ip; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip> ip;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_


class Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip : public Entity
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

        class Address; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address> address;
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip


class Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address : public Entity
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
        class DhcpPool; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address


class Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool


class Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool : public Entity
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

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool


class Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath : public Entity
{
    public:
        CiscoIosXeInterfaces_PmPath();
        ~CiscoIosXeInterfaces_PmPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf interface_id; //type: uint8

}; // Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath


class Native::Interface::Vlan::Crypto : public Entity
{
    public:
        Crypto();
        ~Crypto();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Map; //type: Native::Interface::Vlan::Crypto::Map
        class Ipsec; //type: Native::Interface::Vlan::Crypto::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Crypto::Ipsec> ipsec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Crypto::Map> map;
        
}; // Native::Interface::Vlan::Crypto


class Native::Interface::Vlan::Crypto::Map : public Entity
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

        YLeaf tag; //type: string
        YLeaf redundancy; //type: string
        YLeaf stateful; //type: empty

}; // Native::Interface::Vlan::Crypto::Map


class Native::Interface::Vlan::Crypto::Ipsec : public Entity
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

        YLeaf df_bit; //type: DfBitEnum
        YLeaf fragmentation; //type: FragmentationEnum
        class DfBitEnum;
        class FragmentationEnum;

}; // Native::Interface::Vlan::Crypto::Ipsec


class Native::Interface::Vlan::Cts : public Entity
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

        class Manual; //type: Native::Interface::Vlan::Cts::Manual

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual> manual; // presence node
        
}; // Native::Interface::Vlan::Cts


class Native::Interface::Vlan::Cts::Manual : public Entity
{
    public:
        Manual();
        ~Manual();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Policy; //type: Native::Interface::Vlan::Cts::Manual::Policy
        class Sap; //type: Native::Interface::Vlan::Cts::Manual::Sap
        class Propagate; //type: Native::Interface::Vlan::Cts::Manual::Propagate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Propagate> propagate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Sap> sap;
        
}; // Native::Interface::Vlan::Cts::Manual


class Native::Interface::Vlan::Cts::Manual::Policy : public Entity
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

        class Static_; //type: Native::Interface::Vlan::Cts::Manual::Policy::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Policy::Static_> static_;
        
}; // Native::Interface::Vlan::Cts::Manual::Policy


class Native::Interface::Vlan::Cts::Manual::Policy::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sgt; //type: uint16
        YLeaf trusted; //type: empty

}; // Native::Interface::Vlan::Cts::Manual::Policy::Static_


class Native::Interface::Vlan::Cts::Manual::Sap : public Entity
{
    public:
        Sap();
        ~Sap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pmk; //type: Native::Interface::Vlan::Cts::Manual::Sap::Pmk

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Sap::Pmk> > pmk;
        
}; // Native::Interface::Vlan::Cts::Manual::Sap


class Native::Interface::Vlan::Cts::Manual::Sap::Pmk : public Entity
{
    public:
        Pmk();
        ~Pmk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf word; //type: string
        class ModeList; //type: Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList> mode_list;
        
}; // Native::Interface::Vlan::Cts::Manual::Sap::Pmk


class Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList : public Entity
{
    public:
        ModeList();
        ~ModeList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GcmEncrypt; //type: Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt
        class NoEncap; //type: Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt> gcm_encrypt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap> no_encap; // presence node
        
}; // Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList


class Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt : public Entity
{
    public:
        GcmEncrypt();
        ~GcmEncrypt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Gmac; //type: Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac> gmac; // presence node
        
}; // Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt


class Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac : public Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf null; //type: empty

}; // Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac


class Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap : public Entity
{
    public:
        NoEncap();
        ~NoEncap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Gmac; //type: Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac> gmac; // presence node
        
}; // Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap


class Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac : public Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gcm_encrypt; //type: empty

}; // Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac


class Native::Interface::Vlan::Cts::Manual::Propagate : public Entity
{
    public:
        Propagate();
        ~Propagate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sgt; //type: boolean

}; // Native::Interface::Vlan::Cts::Manual::Propagate


class Native::Interface::Vlan::ServicePolicy : public Entity
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

        YLeaf history; //type: empty
        YLeaf input; //type: string
        YLeaf output; //type: string
        class Type; //type: Native::Interface::Vlan::ServicePolicy::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::ServicePolicy::Type> type;
        
}; // Native::Interface::Vlan::ServicePolicy


class Native::Interface::Vlan::ServicePolicy::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Control; //type: Native::Interface::Vlan::ServicePolicy::Type::Control
        class PerformanceMonitor; //type: Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor
        class ServiceChain; //type: Native::Interface::Vlan::ServicePolicy::Type::ServiceChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::ServicePolicy::Type::Control> control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor> performance_monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::ServicePolicy::Type::ServiceChain> service_chain;
        
}; // Native::Interface::Vlan::ServicePolicy::Type


class Native::Interface::Vlan::ServicePolicy::Type::Control : public Entity
{
    public:
        Control();
        ~Control();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf subscriber; //type: string

}; // Native::Interface::Vlan::ServicePolicy::Type::Control


class Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor : public Entity
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

        YLeaf direction; //type: DirectionEnum
        YLeaf name; //type: string
        class DirectionEnum;

}; // Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor


class Native::Interface::Vlan::ServicePolicy::Type::ServiceChain : public Entity
{
    public:
        ServiceChain();
        ~ServiceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input
        class Output; //type: Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output> output;
        
}; // Native::Interface::Vlan::ServicePolicy::Type::ServiceChain


class Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input : public Entity
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

        YLeaf name; //type: string

}; // Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input


class Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output : public Entity
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

        YLeaf name; //type: string

}; // Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output


class Native::Interface::Vlan::Lisp : public Entity
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

        YLeaf extended_subnet_mode; //type: empty
        class Mobility; //type: Native::Interface::Vlan::Lisp::Mobility

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Lisp::Mobility> mobility;
        
}; // Native::Interface::Vlan::Lisp


class Native::Interface::Vlan::Lisp::Mobility : public Entity
{
    public:
        Mobility();
        ~Mobility();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DynamicEid; //type: Native::Interface::Vlan::Lisp::Mobility::DynamicEid
        class Discover; //type: Native::Interface::Vlan::Lisp::Mobility::Discover
        class Liveness; //type: Native::Interface::Vlan::Lisp::Mobility::Liveness

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Lisp::Mobility::Discover> discover;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Lisp::Mobility::DynamicEid> dynamic_eid;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Lisp::Mobility::Liveness> liveness;
        
}; // Native::Interface::Vlan::Lisp::Mobility


class Native::Interface::Vlan::Lisp::Mobility::DynamicEid : public Entity
{
    public:
        DynamicEid();
        ~DynamicEid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dynamic_eid_name; //type: string
        YLeaf nbr_proxy_reply; //type: empty
        YLeaf requests; //type: uint8

}; // Native::Interface::Vlan::Lisp::Mobility::DynamicEid


class Native::Interface::Vlan::Lisp::Mobility::Discover : public Entity
{
    public:
        Discover();
        ~Discover();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf arp; //type: boolean

}; // Native::Interface::Vlan::Lisp::Mobility::Discover


class Native::Interface::Vlan::Lisp::Mobility::Liveness : public Entity
{
    public:
        Liveness();
        ~Liveness();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf test; //type: boolean
        YLeaf ttl; //type: uint8

}; // Native::Interface::Vlan::Lisp::Mobility::Liveness


class Native::Interface::Vlan::PrivateVlan : public Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mapping; //type: string

}; // Native::Interface::Vlan::PrivateVlan


class Native::Interface::Vlan::Vrrp : public Entity
{
    public:
        Vrrp();
        ~Vrrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8
        class Ip; //type: Native::Interface::Vlan::Vrrp::Ip

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Vrrp::Ip> > ip;
        
}; // Native::Interface::Vlan::Vrrp


class Native::Interface::Vlan::Vrrp::Ip : public Entity
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

        YLeaf ipv4; //type: string
        YLeaf secondary; //type: empty

}; // Native::Interface::Vlan::Vrrp::Ip


class Native::Interface::Vlan::Glbp : public Entity
{
    public:
        Glbp();
        ~Glbp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Interface::Vlan::Glbp::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range> > range;
        
}; // Native::Interface::Vlan::Glbp


class Native::Interface::Vlan::Glbp::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint16
        YLeaf priority; //type: uint8
        YLeaf name; //type: string
        class Forwarder; //type: Native::Interface::Vlan::Glbp::Range::Forwarder
        class Ip; //type: Native::Interface::Vlan::Glbp::Range::Ip
        class Preempt; //type: Native::Interface::Vlan::Glbp::Range::Preempt
        class Weighting; //type: Native::Interface::Vlan::Glbp::Range::Weighting
        class Timers; //type: Native::Interface::Vlan::Glbp::Range::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Forwarder> forwarder;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Ip> ip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Preempt> preempt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Timers> timers;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Weighting> weighting;
        
}; // Native::Interface::Vlan::Glbp::Range


class Native::Interface::Vlan::Glbp::Range::Forwarder : public Entity
{
    public:
        Forwarder();
        ~Forwarder();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Preempt; //type: Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt> preempt; // presence node
        
}; // Native::Interface::Vlan::Glbp::Range::Forwarder


class Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt : public Entity
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

        class Delay; //type: Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay> delay;
        
}; // Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt


class Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay : public Entity
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

}; // Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay


class Native::Interface::Vlan::Glbp::Range::Ip : public Entity
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

        class Ipv4; //type: Native::Interface::Vlan::Glbp::Range::Ip::Ipv4

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Ip::Ipv4> > ipv4;
        
}; // Native::Interface::Vlan::Glbp::Range::Ip


class Native::Interface::Vlan::Glbp::Range::Ip::Ipv4 : public Entity
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

}; // Native::Interface::Vlan::Glbp::Range::Ip::Ipv4


class Native::Interface::Vlan::Glbp::Range::Preempt : public Entity
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

        class Delay; //type: Native::Interface::Vlan::Glbp::Range::Preempt::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Preempt::Delay> delay;
        
}; // Native::Interface::Vlan::Glbp::Range::Preempt


class Native::Interface::Vlan::Glbp::Range::Preempt::Delay : public Entity
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

}; // Native::Interface::Vlan::Glbp::Range::Preempt::Delay


class Native::Interface::Vlan::Glbp::Range::Weighting : public Entity
{
    public:
        Weighting();
        ~Weighting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Value_; //type: Native::Interface::Vlan::Glbp::Range::Weighting::Value_
        class Track; //type: Native::Interface::Vlan::Glbp::Range::Weighting::Track

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Weighting::Track> track;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Weighting::Value_> > value_;
        
}; // Native::Interface::Vlan::Glbp::Range::Weighting


class Native::Interface::Vlan::Glbp::Range::Weighting::Value_ : public Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: int8
        YLeaf upper; //type: int8
        YLeaf lower; //type: int8

}; // Native::Interface::Vlan::Glbp::Range::Weighting::Value_


class Native::Interface::Vlan::Glbp::Range::Weighting::Track : public Entity
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

        class Range_; //type: Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_> > range;
        
}; // Native::Interface::Vlan::Glbp::Range::Weighting::Track


class Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_ : public Entity
{
    public:
        Range_();
        ~Range_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint16
        YLeaf decrement; //type: uint8

}; // Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_


class Native::Interface::Vlan::Glbp::Range::Timers : public Entity
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

        class Msec; //type: Native::Interface::Vlan::Glbp::Range::Timers::Msec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Timers::Msec> msec;
        
}; // Native::Interface::Vlan::Glbp::Range::Timers


class Native::Interface::Vlan::Glbp::Range::Timers::Msec : public Entity
{
    public:
        Msec();
        ~Msec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range_; //type: Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_> > range;
        
}; // Native::Interface::Vlan::Glbp::Range::Timers::Msec


class Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_ : public Entity
{
    public:
        Range_();
        ~Range_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: uint16
        YLeaf range0; //type: uint8

}; // Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_


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

class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source::ReachableViaEnum : public Enum
{
    public:
        static const Enum::YLeaf any;
        static const Enum::YLeaf rx;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6Enum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::VersionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ipv6Enum : public Enum
{
    public:
        static const Enum::YLeaf autoconfig;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::HostModeEnum : public Enum
{
    public:
        static const Enum::YLeaf multi_auth;
        static const Enum::YLeaf multi_domain;
        static const Enum::YLeaf multi_host;
        static const Enum::YLeaf single_host;

};

class Native::Interface::Vlan::CiscoIosXeInterfaces_Trust::DeviceEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_phone;
        static const Enum::YLeaf cts;
        static const Enum::YLeaf ip_camera;
        static const Enum::YLeaf media_player;

};

class Native::Interface::Vlan::Crypto::Ipsec::DfBitEnum : public Enum
{
    public:
        static const Enum::YLeaf clear;
        static const Enum::YLeaf copy;
        static const Enum::YLeaf set;

};

class Native::Interface::Vlan::Crypto::Ipsec::FragmentationEnum : public Enum
{
    public:
        static const Enum::YLeaf after_encryption;
        static const Enum::YLeaf before_encryption;

};

class Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf input;
        static const Enum::YLeaf output;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_55_ */

