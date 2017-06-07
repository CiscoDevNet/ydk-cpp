#ifndef _CISCO_IOS_XE_NATIVE_7_
#define _CISCO_IOS_XE_NATIVE_7_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_2.hpp"
#include "Cisco_IOS_XE_native_6.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Flow::Monitor::Default_::Statistics::Packet : public Entity
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

}; // Native::Flow::Monitor::Default_::Statistics::Packet


class Native::Ip : public Entity
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

        YLeaf subnet_zero; //type: boolean
        YLeaf host_routing; //type: empty
        YLeaf classless; //type: empty
        YLeaf domain_name; //type: string
        YLeaf default_gateway; //type: string
        YLeaf routing; //type: empty
        YLeaf source_route; //type: boolean
        class Admission; //type: Native::Ip::Admission
        class Arp; //type: Native::Ip::Arp
        class DomainList; //type: Native::Ip::DomainList
        class Finger; //type: Native::Ip::Finger
        class Rcmd; //type: Native::Ip::Rcmd
        class BgpCommunity; //type: Native::Ip::BgpCommunity
        class Vrf; //type: Native::Ip::Vrf
        class AsPath; //type: Native::Ip::AsPath
        class Local; //type: Native::Ip::Local
        class Cef; //type: Native::Ip::Cef
        class Domain; //type: Native::Ip::Domain
        class DomainLookupConf; //type: Native::Ip::DomainLookupConf
        class DomainLookup; //type: Native::Ip::DomainLookup
        class Dns; //type: Native::Ip::Dns
        class Dhcp; //type: Native::Ip::Dhcp
        class ForwardProtocol; //type: Native::Ip::ForwardProtocol
        class Ftp; //type: Native::Ip::Ftp
        class Telnet; //type: Native::Ip::Telnet
        class Host; //type: Native::Ip::Host
        class Multicast; //type: Native::Ip::Multicast
        class NameServer; //type: Native::Ip::NameServer
        class Pim; //type: Native::Ip::Pim
        class PrefixList; //type: Native::Ip::PrefixList
        class Route; //type: Native::Ip::Route
        class ExplicitPath; //type: Native::Ip::ExplicitPath
        class Scp; //type: Native::Ip::Scp
        class Spd; //type: Native::Ip::Spd
        class Bootp; //type: Native::Ip::Bootp
        class Ssh; //type: Native::Ip::Ssh
        class Tcp; //type: Native::Ip::Tcp
        class Tftp; //type: Native::Ip::Tftp
        class AccessList; //type: Native::Ip::AccessList
        class Device; //type: Native::Ip::Device
        class Radius; //type: Native::Ip::Radius
        class Tacacs; //type: Native::Ip::Tacacs
        class CommunityList; //type: Native::Ip::CommunityList
        class ExtcommunityList; //type: Native::Ip::ExtcommunityList
        class Http; //type: Native::Ip::Http
        class Icmp; //type: Native::Ip::Icmp
        class Igmp; //type: Native::Ip::Igmp
        class Msdp; //type: Native::Ip::Msdp
        class McrConf; //type: Native::Ip::McrConf
        class MulticastRouting; //type: Native::Ip::MulticastRouting
        class Mroute; //type: Native::Ip::Mroute
        class Nat; //type: Native::Ip::Nat
        class Nbar; //type: Native::Ip::Nbar
        class Sla; //type: Native::Ip::Sla
        class Wccp; //type: Native::Ip::Wccp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AccessList> access_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Admission> admission;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AsPath> as_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::BgpCommunity> bgp_community;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Bootp> bootp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Cef> cef; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::CommunityList> community_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Device> device;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dns> dns;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::DomainList> domain_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::DomainLookup> domain_lookup; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::DomainLookupConf> domain_lookup_conf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExplicitPath> > explicit_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ExtcommunityList> extcommunity_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Finger> finger; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ForwardProtocol> forward_protocol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Ftp> ftp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Host> > host;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Http> http;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Icmp> icmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Igmp> igmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Local> local;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::McrConf> mcr_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Mroute> mroute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Msdp> msdp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::MulticastRouting> multicast_routing; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::NameServer> name_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nat> nat;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Nbar> nbar;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim> pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::PrefixList> prefix_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Radius> radius;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Rcmd> rcmd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Route> route;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Scp> scp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Sla> sla;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Spd> spd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Ssh> ssh;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tacacs> tacacs;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Telnet> telnet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Tftp> tftp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Vrf> > vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Wccp> wccp;
        
}; // Native::Ip


class Native::Ip::Admission : public Entity
{
    public:
        Admission();
        ~Admission();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class WatchList; //type: Native::Ip::Admission::WatchList
        class Name; //type: Native::Ip::Admission::Name

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Admission::Name> name;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Admission::WatchList> watch_list;
        
}; // Native::Ip::Admission


class Native::Ip::Admission::WatchList : public Entity
{
    public:
        WatchList();
        ~WatchList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf expiry_time; //type: uint16

}; // Native::Ip::Admission::WatchList


class Native::Ip::Admission::Name : public Entity
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

        class Webauth; //type: Native::Ip::Admission::Name::Webauth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Admission::Name::Webauth> webauth;
        
}; // Native::Ip::Admission::Name


class Native::Ip::Admission::Name::Webauth : public Entity
{
    public:
        Webauth();
        ~Webauth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Proxy; //type: Native::Ip::Admission::Name::Webauth::Proxy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Admission::Name::Webauth::Proxy> proxy;
        
}; // Native::Ip::Admission::Name::Webauth


class Native::Ip::Admission::Name::Webauth::Proxy : public Entity
{
    public:
        Proxy();
        ~Proxy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf http; //type: empty

}; // Native::Ip::Admission::Name::Webauth::Proxy


class Native::Ip::Arp : public Entity
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

        class Incomplete; //type: Native::Ip::Arp::Incomplete
        class Inspection; //type: Native::Ip::Arp::Inspection
        class Proxy; //type: Native::Ip::Arp::Proxy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Arp::Incomplete> incomplete;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Arp::Inspection> inspection;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Arp::Proxy> proxy;
        
}; // Native::Ip::Arp


class Native::Ip::Arp::Incomplete : public Entity
{
    public:
        Incomplete();
        ~Incomplete();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entries; //type: uint32

}; // Native::Ip::Arp::Incomplete


class Native::Ip::Arp::Inspection : public Entity
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

        YLeaf vlan; //type: string
        class Filter; //type: Native::Ip::Arp::Inspection::Filter
        class Validate; //type: Native::Ip::Arp::Inspection::Validate
        class LogBuffer; //type: Native::Ip::Arp::Inspection::LogBuffer

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Arp::Inspection::Filter> > filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Arp::Inspection::LogBuffer> log_buffer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Arp::Inspection::Validate> validate;
        
}; // Native::Ip::Arp::Inspection


class Native::Ip::Arp::Inspection::Filter : public Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf arpacl; //type: string
        class Vlan; //type: Native::Ip::Arp::Inspection::Filter::Vlan

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Arp::Inspection::Filter::Vlan> > vlan;
        
}; // Native::Ip::Arp::Inspection::Filter


class Native::Ip::Arp::Inspection::Filter::Vlan : public Entity
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

        YLeaf vlan_range; //type: string
        YLeaf static_; //type: empty

}; // Native::Ip::Arp::Inspection::Filter::Vlan


class Native::Ip::Arp::Inspection::Validate : public Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf src_mac; //type: empty
        YLeaf dst_mac; //type: empty
        YLeaf ip; //type: empty
        class Allow; //type: Native::Ip::Arp::Inspection::Validate::Allow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Arp::Inspection::Validate::Allow> allow;
        
}; // Native::Ip::Arp::Inspection::Validate


class Native::Ip::Arp::Inspection::Validate::Allow : public Entity
{
    public:
        Allow();
        ~Allow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf zeros; //type: empty

}; // Native::Ip::Arp::Inspection::Validate::Allow


class Native::Ip::Arp::Inspection::LogBuffer : public Entity
{
    public:
        LogBuffer();
        ~LogBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entries; //type: uint16
        class Logs; //type: Native::Ip::Arp::Inspection::LogBuffer::Logs

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Arp::Inspection::LogBuffer::Logs> logs;
        
}; // Native::Ip::Arp::Inspection::LogBuffer


class Native::Ip::Arp::Inspection::LogBuffer::Logs : public Entity
{
    public:
        Logs();
        ~Logs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entries; //type: uint16
        YLeaf interval; //type: uint32

}; // Native::Ip::Arp::Inspection::LogBuffer::Logs


class Native::Ip::Arp::Proxy : public Entity
{
    public:
        Proxy();
        ~Proxy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Ip::Arp::Proxy


class Native::Ip::DomainList : public Entity
{
    public:
        DomainList();
        ~DomainList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain_name; //type: string
        class Vrf; //type: Native::Ip::DomainList::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::DomainList::Vrf> vrf;
        
}; // Native::Ip::DomainList


class Native::Ip::DomainList::Vrf : public Entity
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

        YLeaf vrf_name; //type: string
        YLeaf domain_name; //type: string

}; // Native::Ip::DomainList::Vrf


class Native::Ip::Finger : public Entity
{
    public:
        Finger();
        ~Finger();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Ip::Finger


class Native::Ip::Rcmd : public Entity
{
    public:
        Rcmd();
        ~Rcmd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rcp_enable; //type: empty
        YLeaf rsh_enable; //type: empty

}; // Native::Ip::Rcmd


class Native::Ip::BgpCommunity : public Entity
{
    public:
        BgpCommunity();
        ~BgpCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf new_format; //type: empty

}; // Native::Ip::BgpCommunity


class Native::Ip::Vrf : public Entity
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
        YLeaf context; //type: string
        YLeaf description; //type: string
        YLeaf rd; //type: string
        class Bgp; //type: Native::Ip::Vrf::Bgp
        class Export_; //type: Native::Ip::Vrf::Export_
        class Import; //type: Native::Ip::Vrf::Import
        class Maximum; //type: Native::Ip::Vrf::Maximum
        class Mdt; //type: Native::Ip::Vrf::Mdt
        class RouteTarget; //type: Native::Ip::Vrf::RouteTarget
        class Vpn; //type: Native::Ip::Vrf::Vpn

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Vrf::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Vrf::Export_> export_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Vrf::Import> import;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Vrf::Maximum> maximum; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Vrf::Mdt> mdt; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Vrf::RouteTarget> > route_target;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Vrf::Vpn> vpn;
        
}; // Native::Ip::Vrf


class Native::Ip::Vrf::Bgp : public Entity
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

        class NextHop; //type: Native::Ip::Vrf::Bgp::NextHop

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Vrf::Bgp::NextHop> next_hop;
        
}; // Native::Ip::Vrf::Bgp


class Native::Ip::Vrf::Bgp::NextHop : public Entity
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

        YLeaf loopback; //type: uint32

}; // Native::Ip::Vrf::Bgp::NextHop


class Native::Ip::Vrf::Export_ : public Entity
{
    public:
        Export_();
        ~Export_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf map; //type: string

}; // Native::Ip::Vrf::Export_


class Native::Ip::Vrf::Import : public Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf map; //type: string
        class Ipv4; //type: Native::Ip::Vrf::Import::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Vrf::Import::Ipv4> ipv4;
        
}; // Native::Ip::Vrf::Import


class Native::Ip::Vrf::Import::Ipv4 : public Entity
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

        YLeaf ipv4_type; //type: Ipv4TypeEnum
        YLeaf upper_limit; //type: uint32
        YLeaf map; //type: string
        class Ipv4TypeEnum;

}; // Native::Ip::Vrf::Import::Ipv4


class Native::Ip::Vrf::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf routes; //type: uint32
        YLeaf threshold; //type: uint16
        YLeaf reinstall; //type: uint16
        YLeaf warning_only; //type: empty

}; // Native::Ip::Vrf::Maximum


class Native::Ip::Vrf::Mdt : public Entity
{
    public:
        Mdt();
        ~Mdt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: string
        YLeaf log_reuse; //type: empty
        class Data; //type: Native::Ip::Vrf::Mdt::Data

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Vrf::Mdt::Data> data;
        
}; // Native::Ip::Vrf::Mdt


class Native::Ip::Vrf::Mdt::Data : public Entity
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

        YLeaf mulicast_address; //type: string
        YLeaf wildcard_bits; //type: string
        YLeaf threshold; //type: uint32
        YLeaf threshold_list; //type: one of uint16, string
        YLeaf list; //type: one of uint16, string

}; // Native::Ip::Vrf::Mdt::Data


class Native::Ip::Vrf::RouteTarget : public Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: DirectionEnum
        YLeaf target; //type: string
        class DirectionEnum;

}; // Native::Ip::Vrf::RouteTarget


class Native::Ip::Vrf::Vpn : public Entity
{
    public:
        Vpn();
        ~Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string

}; // Native::Ip::Vrf::Vpn


class Native::Ip::AsPath : public Entity
{
    public:
        AsPath();
        ~AsPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessList; //type: Native::Ip::AsPath::AccessList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AsPath::AccessList> > access_list;
        
}; // Native::Ip::AsPath


class Native::Ip::AsPath::AccessList : public Entity
{
    public:
        AccessList();
        ~AccessList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: uint16
        class Deny; //type: Native::Ip::AsPath::AccessList::Deny
        class Permit; //type: Native::Ip::AsPath::AccessList::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AsPath::AccessList::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::AsPath::AccessList::Permit> permit;
        
}; // Native::Ip::AsPath::AccessList


class Native::Ip::AsPath::AccessList::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList deny_list; //type: list of  string

}; // Native::Ip::AsPath::AccessList::Deny


class Native::Ip::AsPath::AccessList::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList permit_list; //type: list of  string

}; // Native::Ip::AsPath::AccessList::Permit


class Native::Ip::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pool; //type: Native::Ip::Local::Pool

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Local::Pool> > pool;
        
}; // Native::Ip::Local


class Native::Ip::Local::Pool : public Entity
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

        YLeaf id; //type: one of string, enumeration
        YLeaf start; //type: string
        YLeaf last; //type: string
        YLeaf group; //type: string
        class IdEnum;

}; // Native::Ip::Local::Pool


class Native::Ip::Cef : public Entity
{
    public:
        Cef();
        ~Cef();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf distributed; //type: empty
        class LoadSharing; //type: Native::Ip::Cef::LoadSharing

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing> load_sharing;
        
}; // Native::Ip::Cef


class Native::Ip::Cef::LoadSharing : public Entity
{
    public:
        LoadSharing();
        ~LoadSharing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Algorithm; //type: Native::Ip::Cef::LoadSharing::Algorithm

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm> algorithm;
        
}; // Native::Ip::Cef::LoadSharing


class Native::Ip::Cef::LoadSharing::Algorithm : public Entity
{
    public:
        Algorithm();
        ~Algorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IncludePorts; //type: Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts> include_ports;
        
}; // Native::Ip::Cef::LoadSharing::Algorithm


class Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts : public Entity
{
    public:
        IncludePorts();
        ~IncludePorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Destination; //type: Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination
        class Source; //type: Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination> destination; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source> source; // presence node
        
}; // Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts


class Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination : public Entity
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

        YLeaf dest_range; //type: string

}; // Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination


class Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source : public Entity
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

        YLeaf source_range; //type: string
        class Destination; //type: Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination> destination; // presence node
        
}; // Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source


class Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination : public Entity
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

        YLeaf dest_range; //type: string
        class Gtp; //type: Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp> gtp; // presence node
        
}; // Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination


class Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp : public Entity
{
    public:
        Gtp();
        ~Gtp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gtp_range; //type: string

}; // Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp


class Native::Ip::Domain : public Entity
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

        YLeaf lookup; //type: boolean
        YLeaf name; //type: string
        class List; //type: Native::Ip::Domain::List
        class LookupSettings; //type: Native::Ip::Domain::LookupSettings

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Domain::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Domain::LookupSettings> lookup_settings;
        
}; // Native::Ip::Domain


class Native::Ip::Domain::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain_name; //type: string
        class Vrf; //type: Native::Ip::Domain::List::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Domain::List::Vrf> vrf;
        
}; // Native::Ip::Domain::List


class Native::Ip::Domain::List::Vrf : public Entity
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

        YLeaf vrf_name; //type: string
        YLeaf domain_name; //type: string

}; // Native::Ip::Domain::List::Vrf


class Native::Ip::Domain::LookupSettings : public Entity
{
    public:
        LookupSettings();
        ~LookupSettings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Lookup; //type: Native::Ip::Domain::LookupSettings::Lookup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Domain::LookupSettings::Lookup> lookup;
        
}; // Native::Ip::Domain::LookupSettings


class Native::Ip::Domain::LookupSettings::Lookup : public Entity
{
    public:
        Lookup();
        ~Lookup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsap; //type: empty
        class SourceInterface; //type: Native::Ip::Domain::LookupSettings::Lookup::SourceInterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Domain::LookupSettings::Lookup::SourceInterface> source_interface;
        
}; // Native::Ip::Domain::LookupSettings::Lookup


class Native::Ip::Domain::LookupSettings::Lookup::SourceInterface : public Entity
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
        class AtmSubinterface; //type: Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Domain::LookupSettings::Lookup::SourceInterface


class Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmSubinterface : public Entity
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

}; // Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmSubinterface


class Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmAcrsubinterface : public Entity
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

}; // Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmAcrsubinterface


class Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LispSubinterface : public Entity
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

}; // Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LispSubinterface


class Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface : public Entity
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

}; // Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface


class Native::Ip::DomainLookupConf : public Entity
{
    public:
        DomainLookupConf();
        ~DomainLookupConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain_lookup; //type: boolean

}; // Native::Ip::DomainLookupConf


class Native::Ip::DomainLookup : public Entity
{
    public:
        DomainLookup();
        ~DomainLookup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsap; //type: empty
        class SourceInterface; //type: Native::Ip::DomainLookup::SourceInterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::DomainLookup::SourceInterface> source_interface;
        
}; // Native::Ip::DomainLookup


class Native::Ip::DomainLookup::SourceInterface : public Entity
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
        class AtmSubinterface; //type: Native::Ip::DomainLookup::SourceInterface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Ip::DomainLookup::SourceInterface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Ip::DomainLookup::SourceInterface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::DomainLookup::SourceInterface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::DomainLookup::SourceInterface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::DomainLookup::SourceInterface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::DomainLookup::SourceInterface


class Native::Ip::DomainLookup::SourceInterface::AtmSubinterface : public Entity
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

}; // Native::Ip::DomainLookup::SourceInterface::AtmSubinterface


class Native::Ip::DomainLookup::SourceInterface::AtmAcrsubinterface : public Entity
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

}; // Native::Ip::DomainLookup::SourceInterface::AtmAcrsubinterface


class Native::Ip::DomainLookup::SourceInterface::LispSubinterface : public Entity
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

}; // Native::Ip::DomainLookup::SourceInterface::LispSubinterface


class Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface : public Entity
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

}; // Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface


class Native::Ip::Dns : public Entity
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

        class Server; //type: Native::Ip::Dns::Server

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dns::Server> server; // presence node
        
}; // Native::Ip::Dns


class Native::Ip::Dns::Server : public Entity
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


}; // Native::Ip::Dns::Server


class Native::Ip::Dhcp : public Entity
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

        YLeaf smart_relay; //type: empty
        class Bootp; //type: Native::Ip::Dhcp::Bootp
        class Class_; //type: Native::Ip::Dhcp::Class_
        class Conflict; //type: Native::Ip::Dhcp::Conflict
        class ExcludedAddress; //type: Native::Ip::Dhcp::ExcludedAddress
        class Relay; //type: Native::Ip::Dhcp::Relay
        class Pool; //type: Native::Ip::Dhcp::Pool
        class SnoopingConf; //type: Native::Ip::Dhcp::SnoopingConf
        class Snooping; //type: Native::Ip::Dhcp::Snooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Bootp> bootp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Class_> > class_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Conflict> conflict;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::ExcludedAddress> > excluded_address;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool> > pool;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Relay> relay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping> snooping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::SnoopingConf> snooping_conf;
        
}; // Native::Ip::Dhcp


class Native::Ip::Dhcp::Bootp : public Entity
{
    public:
        Bootp();
        ~Bootp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: empty

}; // Native::Ip::Dhcp::Bootp


class Native::Ip::Dhcp::Class_ : public Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf remark; //type: string
        class Relay; //type: Native::Ip::Dhcp::Class_::Relay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Class_::Relay> relay;
        
}; // Native::Ip::Dhcp::Class_


class Native::Ip::Dhcp::Class_::Relay : public Entity
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

        class Agent; //type: Native::Ip::Dhcp::Class_::Relay::Agent

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Class_::Relay::Agent> agent;
        
}; // Native::Ip::Dhcp::Class_::Relay


class Native::Ip::Dhcp::Class_::Relay::Agent : public Entity
{
    public:
        Agent();
        ~Agent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf information; //type: empty

}; // Native::Ip::Dhcp::Class_::Relay::Agent


class Native::Ip::Dhcp::Conflict : public Entity
{
    public:
        Conflict();
        ~Conflict();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf logging; //type: boolean
        class Resolution; //type: Native::Ip::Dhcp::Conflict::Resolution

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Conflict::Resolution> resolution; // presence node
        
}; // Native::Ip::Dhcp::Conflict


class Native::Ip::Dhcp::Conflict::Resolution : public Entity
{
    public:
        Resolution();
        ~Resolution();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32

}; // Native::Ip::Dhcp::Conflict::Resolution


class Native::Ip::Dhcp::ExcludedAddress : public Entity
{
    public:
        ExcludedAddress();
        ~ExcludedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf low_address; //type: string
        YLeaf vrf; //type: string
        YLeaf high_address; //type: string

}; // Native::Ip::Dhcp::ExcludedAddress


class Native::Ip::Dhcp::Relay : public Entity
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

        class Information; //type: Native::Ip::Dhcp::Relay::Information

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Relay::Information> information;
        
}; // Native::Ip::Dhcp::Relay


class Native::Ip::Dhcp::Relay::Information : public Entity
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

        YLeaf trust_all; //type: empty
        class Option; //type: Native::Ip::Dhcp::Relay::Information::Option

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Relay::Information::Option> option;
        
}; // Native::Ip::Dhcp::Relay::Information


class Native::Ip::Dhcp::Relay::Information::Option : public Entity
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

        YLeaf option_default; //type: empty
        YLeaf vpn; //type: empty

}; // Native::Ip::Dhcp::Relay::Information::Option


class Native::Ip::Dhcp::Pool : public Entity
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

        YLeaf id; //type: string
        YLeaf vrf; //type: string
        YLeaf domain_name; //type: string
        YLeafList default_router; //type: list of  string
        YLeafList dns_server; //type: list of  string
        class Class_; //type: Native::Ip::Dhcp::Pool::Class_
        class Lease; //type: Native::Ip::Dhcp::Pool::Lease
        class Network; //type: Native::Ip::Dhcp::Pool::Network

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Class_> > class_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Lease> > lease;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Network> network;
        
}; // Native::Ip::Dhcp::Pool


class Native::Ip::Dhcp::Pool::Class_ : public Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Address; //type: Native::Ip::Dhcp::Pool::Class_::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Class_::Address> address;
        
}; // Native::Ip::Dhcp::Pool::Class_


class Native::Ip::Dhcp::Pool::Class_::Address : public Entity
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

        class Range; //type: Native::Ip::Dhcp::Pool::Class_::Address::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Class_::Address::Range> range;
        
}; // Native::Ip::Dhcp::Pool::Class_::Address


class Native::Ip::Dhcp::Pool::Class_::Address::Range : public Entity
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

        YLeaf ipv4_start; //type: string
        YLeaf ipv4_end; //type: string

}; // Native::Ip::Dhcp::Pool::Class_::Address::Range


class Native::Ip::Dhcp::Pool::Lease : public Entity
{
    public:
        Lease();
        ~Lease();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf days; //type: uint16
        YLeaf hours; //type: uint8
        YLeaf minutes; //type: uint8

}; // Native::Ip::Dhcp::Pool::Lease


class Native::Ip::Dhcp::Pool::Network : public Entity
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

        YLeaf number; //type: string
        YLeaf mask; //type: string
        YLeaf secondary; //type: empty

}; // Native::Ip::Dhcp::Pool::Network


class Native::Ip::Dhcp::SnoopingConf : public Entity
{
    public:
        SnoopingConf();
        ~SnoopingConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf snooping; //type: empty

}; // Native::Ip::Dhcp::SnoopingConf


class Native::Ip::Dhcp::Snooping : public Entity
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

        YLeaf vlan; //type: string
        class Database; //type: Native::Ip::Dhcp::Snooping::Database
        class Information; //type: Native::Ip::Dhcp::Snooping::Information
        class Track; //type: Native::Ip::Dhcp::Snooping::Track
        class Verify; //type: Native::Ip::Dhcp::Snooping::Verify

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Database> database;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Information> information;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Track> track;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Verify> verify;
        
}; // Native::Ip::Dhcp::Snooping


class Native::Ip::Dhcp::Snooping::Database : public Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf url; //type: string
        YLeaf timeout; //type: uint32
        YLeaf write_delay; //type: uint32

}; // Native::Ip::Dhcp::Snooping::Database


class Native::Ip::Dhcp::Snooping::Information : public Entity
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

        YLeaf option_conf; //type: boolean
        class Option; //type: Native::Ip::Dhcp::Snooping::Information::Option

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Information::Option> option; // presence node
        
}; // Native::Ip::Dhcp::Snooping::Information


class Native::Ip::Dhcp::Snooping::Information::Option : public Entity
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

        YLeaf allow_untrusted; //type: empty
        class Format; //type: Native::Ip::Dhcp::Snooping::Information::Option::Format

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Information::Option::Format> format;
        
}; // Native::Ip::Dhcp::Snooping::Information::Option


class Native::Ip::Dhcp::Snooping::Information::Option::Format : public Entity
{
    public:
        Format();
        ~Format();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RemoteId; //type: Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId> remote_id;
        
}; // Native::Ip::Dhcp::Snooping::Information::Option::Format


class Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId : public Entity
{
    public:
        RemoteId();
        ~RemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hostname; //type: empty
        YLeaf string; //type: string

}; // Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId


class Native::Ip::Dhcp::Snooping::Track : public Entity
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

        YLeaf host; //type: empty

}; // Native::Ip::Dhcp::Snooping::Track


class Native::Ip::Dhcp::Snooping::Verify : public Entity
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

        YLeaf mac_address; //type: empty
        YLeaf no_relay_agent_address; //type: empty

}; // Native::Ip::Dhcp::Snooping::Verify


class Native::Ip::ForwardProtocol : public Entity
{
    public:
        ForwardProtocol();
        ~ForwardProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: ProtocolEnum
        class SpanningTree; //type: Native::Ip::ForwardProtocol::SpanningTree
        class Udp; //type: Native::Ip::ForwardProtocol::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ForwardProtocol::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::ForwardProtocol::Udp> udp;
                class ProtocolEnum;

}; // Native::Ip::ForwardProtocol


class Native::Ip::ForwardProtocol::SpanningTree : public Entity
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

        YLeaf any_local_broadcast; //type: empty

}; // Native::Ip::ForwardProtocol::SpanningTree


class Native::Ip::ForwardProtocol::Udp : public Entity
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

        YLeaf biff; //type: boolean
        YLeaf bootpc; //type: boolean
        YLeaf bootps; //type: boolean
        YLeaf discard; //type: boolean
        YLeaf dnsix; //type: boolean
        YLeaf domain; //type: boolean
        YLeaf echo; //type: boolean
        YLeaf isakmp; //type: boolean
        YLeaf mobile_ip; //type: boolean
        YLeaf nameserver; //type: boolean
        YLeaf netbios_dgm; //type: boolean
        YLeaf netbios_ns; //type: boolean
        YLeaf netbios_ss; //type: boolean
        YLeaf non500_isakmp; //type: boolean
        YLeaf ntp; //type: boolean
        YLeaf pim_auto_rp; //type: boolean
        YLeaf rip; //type: boolean
        YLeaf snmp; //type: boolean
        YLeaf snmptrap; //type: boolean
        YLeaf sunrpc; //type: boolean
        YLeaf syslog; //type: boolean
        YLeaf tacacs; //type: boolean
        YLeaf talk; //type: boolean
        YLeaf tftp; //type: boolean
        YLeaf time; //type: boolean
        YLeaf who; //type: boolean
        YLeaf xdmcp; //type: boolean

}; // Native::Ip::ForwardProtocol::Udp


class Native::Ip::Ftp : public Entity
{
    public:
        Ftp();
        ~Ftp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf passive; //type: empty
        YLeaf username; //type: string
        class SourceInterface; //type: Native::Ip::Ftp::SourceInterface
        class Password; //type: Native::Ip::Ftp::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Ftp::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Ftp::SourceInterface> source_interface;
        
}; // Native::Ip::Ftp


class Native::Ip::Ftp::SourceInterface : public Entity
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
        class AtmSubinterface; //type: Native::Ip::Ftp::SourceInterface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Ip::Ftp::SourceInterface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Ip::Ftp::SourceInterface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Ip::Ftp::SourceInterface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Ftp::SourceInterface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Ftp::SourceInterface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Ftp::SourceInterface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Ftp::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ip::Ftp::SourceInterface


class Native::Ip::Ftp::SourceInterface::AtmSubinterface : public Entity
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

}; // Native::Ip::Ftp::SourceInterface::AtmSubinterface


class Native::Ip::Ftp::SourceInterface::AtmAcrsubinterface : public Entity
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

}; // Native::Ip::Ftp::SourceInterface::AtmAcrsubinterface


class Native::Ip::Ftp::SourceInterface::LispSubinterface : public Entity
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

}; // Native::Ip::Ftp::SourceInterface::LispSubinterface


class Native::Ip::Ftp::SourceInterface::PortChannelSubinterface : public Entity
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

}; // Native::Ip::Ftp::SourceInterface::PortChannelSubinterface


class Native::Ip::Ftp::Password : public Entity
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

        class PasswordContainer; //type: Native::Ip::Ftp::Password::PasswordContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Ftp::Password::PasswordContainer> password_container;
        
}; // Native::Ip::Ftp::Password


class Native::Ip::Ftp::Password::PasswordContainer : public Entity
{
    public:
        PasswordContainer();
        ~PasswordContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: uint8
        YLeaf password; //type: string

}; // Native::Ip::Ftp::Password::PasswordContainer


class Native::Ip::Telnet : public Entity
{
    public:
        Telnet();
        ~Telnet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_interface; //type: string

}; // Native::Ip::Telnet


class Native::Ip::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf ip; //type: string

}; // Native::Ip::Host


class Native::Ip::Multicast : public Entity
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

        YLeaf route_limit; //type: uint32
        class Vrf; //type: Native::Ip::Multicast::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Multicast::Vrf> > vrf;
        
}; // Native::Ip::Multicast


class Native::Ip::Multicast::Vrf : public Entity
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
        YLeaf multipath; //type: empty
        YLeafList route_limit; //type: list of  uint32

}; // Native::Ip::Multicast::Vrf


class Native::Ip::NameServer : public Entity
{
    public:
        NameServer();
        ~NameServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList no_vrf; //type: list of  string
        class Vrf; //type: Native::Ip::NameServer::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::NameServer::Vrf> > vrf;
        
}; // Native::Ip::NameServer


class Native::Ip::NameServer::Vrf : public Entity
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

        YLeaf word; //type: string
        YLeaf server_ip; //type: string

}; // Native::Ip::NameServer::Vrf


class Native::Ip::Pim : public Entity
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

        YLeaf register_source; //type: string
        class AcceptRegister; //type: Native::Ip::Pim::AcceptRegister
        class Autorp; //type: Native::Ip::Pim::Autorp
        class RpAddress; //type: Native::Ip::Pim::RpAddress
        class SptThreshold; //type: Native::Ip::Pim::SptThreshold
        class SptThresholdContainer; //type: Native::Ip::Pim::SptThresholdContainer
        class SendRpAnnounce; //type: Native::Ip::Pim::SendRpAnnounce
        class SendRpDiscovery; //type: Native::Ip::Pim::SendRpDiscovery
        class Ssm; //type: Native::Ip::Pim::Ssm
        class Vrf; //type: Native::Ip::Pim::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::AcceptRegister> accept_register;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::Autorp> autorp; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::RpAddress> > rp_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::SendRpAnnounce> send_rp_announce;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::SendRpDiscovery> send_rp_discovery;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::SptThreshold> > spt_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::SptThresholdContainer> spt_threshold_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::Ssm> ssm;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::Vrf> > vrf;
        
}; // Native::Ip::Pim


class Native::Ip::Pim::AcceptRegister : public Entity
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

        YLeaf list; //type: one of uint16, string

}; // Native::Ip::Pim::AcceptRegister


class Native::Ip::Pim::Autorp : public Entity
{
    public:
        Autorp();
        ~Autorp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf listener; //type: empty

}; // Native::Ip::Pim::Autorp


class Native::Ip::Pim::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf access_list; //type: one of uint16, string
        YLeaf override; //type: empty

}; // Native::Ip::Pim::RpAddress


class Native::Ip::Pim::SptThreshold : public Entity
{
    public:
        SptThreshold();
        ~SptThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf how; //type: HowEnum
        YLeaf group_list; //type: one of uint16, string
        class HowEnum;

}; // Native::Ip::Pim::SptThreshold


class Native::Ip::Pim::SptThresholdContainer : public Entity
{
    public:
        SptThresholdContainer();
        ~SptThresholdContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SptThreshold; //type: Native::Ip::Pim::SptThresholdContainer::SptThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::SptThresholdContainer::SptThreshold> spt_threshold;
        
}; // Native::Ip::Pim::SptThresholdContainer


class Native::Ip::Pim::SptThresholdContainer::SptThreshold : public Entity
{
    public:
        SptThreshold();
        ~SptThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf how; //type: HowEnum
        class HowEnum;

}; // Native::Ip::Pim::SptThresholdContainer::SptThreshold


class Native::Ip::Pim::SendRpAnnounce : public Entity
{
    public:
        SendRpAnnounce();
        ~SendRpAnnounce();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface_List; //type: Native::Ip::Pim::SendRpAnnounce::Interface_List
        class PortChannel; //type: Native::Ip::Pim::SendRpAnnounce::PortChannel

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::SendRpAnnounce::Interface_List> > interface_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::SendRpAnnounce::PortChannel> > port_channel;
        
}; // Native::Ip::Pim::SendRpAnnounce


class Native::Ip::Pim::SendRpAnnounce::Interface_List : public Entity
{
    public:
        Interface_List();
        ~Interface_List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf if_name; //type: string
        class Scope; //type: Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope> scope;
        
}; // Native::Ip::Pim::SendRpAnnounce::Interface_List


class Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope : public Entity
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

        YLeaf pkt_ttl; //type: uint8
        class GroupList; //type: Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::GroupList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::GroupList> group_list;
        
}; // Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope


class Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::GroupList : public Entity
{
    public:
        GroupList();
        ~GroupList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_ref; //type: uint8
        YLeaf std_acl; //type: string

}; // Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::GroupList


class Native::Ip::Pim::SendRpAnnounce::PortChannel : public Entity
{
    public:
        PortChannel();
        ~PortChannel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: uint32
        YLeaf scope; //type: uint8

}; // Native::Ip::Pim::SendRpAnnounce::PortChannel


class Native::Ip::Pim::SendRpDiscovery : public Entity
{
    public:
        SendRpDiscovery();
        ~SendRpDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf scope; //type: uint8

}; // Native::Ip::Pim::SendRpDiscovery


class Native::Ip::Pim::Ssm : public Entity
{
    public:
        Ssm();
        ~Ssm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: one of uint16, string

}; // Native::Ip::Pim::Ssm


class Native::Ip::Pim::Vrf : public Entity
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

        YLeaf id; //type: string
        YLeaf register_source; //type: string
        class AcceptRegister; //type: Native::Ip::Pim::Vrf::AcceptRegister
        class Autorp; //type: Native::Ip::Pim::Vrf::Autorp
        class RpAddress; //type: Native::Ip::Pim::Vrf::RpAddress
        class SptThreshold; //type: Native::Ip::Pim::Vrf::SptThreshold
        class SptThresholdContainer; //type: Native::Ip::Pim::Vrf::SptThresholdContainer
        class SendRpAnnounce; //type: Native::Ip::Pim::Vrf::SendRpAnnounce
        class SendRpDiscovery; //type: Native::Ip::Pim::Vrf::SendRpDiscovery
        class Ssm; //type: Native::Ip::Pim::Vrf::Ssm

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::AcceptRegister> accept_register;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::Autorp> autorp; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::RpAddress> > rp_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SendRpAnnounce> send_rp_announce;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SendRpDiscovery> send_rp_discovery;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SptThreshold> > spt_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SptThresholdContainer> spt_threshold_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::Ssm> ssm;
        
}; // Native::Ip::Pim::Vrf


class Native::Ip::Pim::Vrf::AcceptRegister : public Entity
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

        YLeaf list; //type: one of uint16, string

}; // Native::Ip::Pim::Vrf::AcceptRegister


class Native::Ip::Pim::Vrf::Autorp : public Entity
{
    public:
        Autorp();
        ~Autorp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf listener; //type: empty

}; // Native::Ip::Pim::Vrf::Autorp


class Native::Ip::Pim::Vrf::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf access_list; //type: one of uint16, string
        YLeaf override; //type: empty

}; // Native::Ip::Pim::Vrf::RpAddress


class Native::Ip::Pim::Vrf::SptThreshold : public Entity
{
    public:
        SptThreshold();
        ~SptThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf how; //type: HowEnum
        YLeaf group_list; //type: one of uint16, string
        class HowEnum;

}; // Native::Ip::Pim::Vrf::SptThreshold


class Native::Ip::Pim::Vrf::SptThresholdContainer : public Entity
{
    public:
        SptThresholdContainer();
        ~SptThresholdContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SptThreshold; //type: Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold> spt_threshold;
        
}; // Native::Ip::Pim::Vrf::SptThresholdContainer


class Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold : public Entity
{
    public:
        SptThreshold();
        ~SptThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf how; //type: HowEnum
        class HowEnum;

}; // Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold


class Native::Ip::Pim::Vrf::SendRpAnnounce : public Entity
{
    public:
        SendRpAnnounce();
        ~SendRpAnnounce();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface_List; //type: Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List
        class PortChannel; //type: Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List> > interface_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel> > port_channel;
        
}; // Native::Ip::Pim::Vrf::SendRpAnnounce


class Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List : public Entity
{
    public:
        Interface_List();
        ~Interface_List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf if_name; //type: string
        class Scope; //type: Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope> scope;
        
}; // Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List


class Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope : public Entity
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

        YLeaf pkt_ttl; //type: uint8
        class GroupList; //type: Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::GroupList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::GroupList> group_list;
        
}; // Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope


class Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::GroupList : public Entity
{
    public:
        GroupList();
        ~GroupList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_ref; //type: uint8
        YLeaf std_acl; //type: string

}; // Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::GroupList


class Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel : public Entity
{
    public:
        PortChannel();
        ~PortChannel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: uint32
        YLeaf scope; //type: uint8

}; // Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel


class Native::Ip::Pim::Vrf::SendRpDiscovery : public Entity
{
    public:
        SendRpDiscovery();
        ~SendRpDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf scope; //type: uint8

}; // Native::Ip::Pim::Vrf::SendRpDiscovery


class Native::Ip::Pim::Vrf::Ssm : public Entity
{
    public:
        Ssm();
        ~Ssm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range; //type: one of uint16, string

}; // Native::Ip::Pim::Vrf::Ssm


class Native::Ip::PrefixList : public Entity
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

        YLeaf sequence_number; //type: empty
        class Prefixes; //type: Native::Ip::PrefixList::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::PrefixList::Prefixes> > prefixes;
        
}; // Native::Ip::PrefixList


class Native::Ip::PrefixList::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        class Permit; //type: Native::Ip::PrefixList::Prefixes::Permit
        class Deny; //type: Native::Ip::PrefixList::Prefixes::Deny
        class Seq; //type: Native::Ip::PrefixList::Prefixes::Seq

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::PrefixList::Prefixes::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::PrefixList::Prefixes::Permit> permit;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::PrefixList::Prefixes::Seq> > seq;
        
}; // Native::Ip::PrefixList::Prefixes


class Native::Ip::PrefixList::Prefixes::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PermitList; //type: Native::Ip::PrefixList::Prefixes::Permit::PermitList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::PrefixList::Prefixes::Permit::PermitList> > permit_list;
        
}; // Native::Ip::PrefixList::Prefixes::Permit


class Native::Ip::PrefixList::Prefixes::Permit::PermitList : public Entity
{
    public:
        PermitList();
        ~PermitList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf ge; //type: uint8
        YLeaf le; //type: uint8

}; // Native::Ip::PrefixList::Prefixes::Permit::PermitList


class Native::Ip::PrefixList::Prefixes::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DenyList; //type: Native::Ip::PrefixList::Prefixes::Deny::DenyList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::PrefixList::Prefixes::Deny::DenyList> > deny_list;
        
}; // Native::Ip::PrefixList::Prefixes::Deny


class Native::Ip::PrefixList::Prefixes::Deny::DenyList : public Entity
{
    public:
        DenyList();
        ~DenyList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf ge; //type: uint8
        YLeaf le; //type: uint8

}; // Native::Ip::PrefixList::Prefixes::Deny::DenyList


class Native::Ip::PrefixList::Prefixes::Seq : public Entity
{
    public:
        Seq();
        ~Seq();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf no; //type: uint32
        class Deny; //type: Native::Ip::PrefixList::Prefixes::Seq::Deny
        class Permit; //type: Native::Ip::PrefixList::Prefixes::Seq::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::PrefixList::Prefixes::Seq::Deny> deny;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::PrefixList::Prefixes::Seq::Permit> permit;
        
}; // Native::Ip::PrefixList::Prefixes::Seq


class Native::Ip::PrefixList::Prefixes::Seq::Deny : public Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf ge; //type: uint8
        YLeaf le; //type: uint8

}; // Native::Ip::PrefixList::Prefixes::Seq::Deny


class Native::Ip::PrefixList::Prefixes::Seq::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf ge; //type: uint8
        YLeaf le; //type: uint8

}; // Native::Ip::PrefixList::Prefixes::Seq::Permit


class Native::Ip::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile; //type: empty
        class IpRouteInterfaceForwardingList; //type: Native::Ip::Route::IpRouteInterfaceForwardingList
        class Static_; //type: Native::Ip::Route::Static_
        class Vrf; //type: Native::Ip::Route::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Route::IpRouteInterfaceForwardingList> > ip_route_interface_forwarding_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Route::Static_> static_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Route::Vrf> > vrf;
        
}; // Native::Ip::Route


class Native::Ip::Route::IpRouteInterfaceForwardingList : public Entity
{
    public:
        IpRouteInterfaceForwardingList();
        ~IpRouteInterfaceForwardingList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf mask; //type: string
        class FwdList; //type: Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList> > fwd_list;
        
}; // Native::Ip::Route::IpRouteInterfaceForwardingList


class Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList : public Entity
{
    public:
        FwdList();
        ~FwdList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fwd; //type: one of string, enumeration
        YLeaf metric; //type: uint8
        YLeaf forwarding_router_adr; //type: string
        YLeaf global; //type: empty
        YLeaf name; //type: string
        YLeaf permanent; //type: empty
        YLeaf multicast; //type: empty
        YLeaf dhcp; //type: empty
        YLeaf tag; //type: uint32
        YLeaf track; //type: uint16
        class FwdEnum;

}; // Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList


class Native::Ip::Route::Static_ : public Entity
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

        YLeaf adjust_time; //type: uint8
        YLeaf inter_vrf; //type: empty
        class Bfd; //type: Native::Ip::Route::Static_::Bfd
        class InstallRoutesRecurseViaNexthop; //type: Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Route::Static_::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop> install_routes_recurse_via_nexthop;
        
}; // Native::Ip::Route::Static_

class Native::Ip::Vrf::Import::Ipv4::Ipv4TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;

};

class Native::Ip::Vrf::RouteTarget::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf export_;
        static const Enum::YLeaf import;

};

class Native::Ip::Local::Pool::IdEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;

};

class Native::Ip::ForwardProtocol::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf nd;
        static const Enum::YLeaf sdns;
        static const Enum::YLeaf turbo_flood;

};

class Native::Ip::Pim::SptThreshold::HowEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf infinity;

};

class Native::Ip::Pim::SptThresholdContainer::SptThreshold::HowEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf infinity;

};

class Native::Ip::Pim::Vrf::SptThreshold::HowEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf infinity;

};

class Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::HowEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf infinity;

};

class Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::FwdEnum : public Enum
{
    public:
        static const Enum::YLeaf Null0;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_7_ */

