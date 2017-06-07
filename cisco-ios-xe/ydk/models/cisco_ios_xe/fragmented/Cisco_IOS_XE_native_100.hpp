#ifndef _CISCO_IOS_XE_NATIVE_100_
#define _CISCO_IOS_XE_NATIVE_100_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_84.hpp"
#include "Cisco_IOS_XE_native_99.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community : public Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_string; //type: string
        class Access; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access> access;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf standard_acl; //type: uint32
        YLeaf expanded_acl; //type: uint32
        YLeaf acl_name; //type: string
        YLeaf ipv6; //type: string
        YLeaf ro; //type: empty
        YLeaf rw; //type: empty

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User : public Entity
{
    public:
        User();
        ~User();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Permisssion; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion> permisssion;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion : public Entity
{
    public:
        Permisssion();
        ~Permisssion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf credential; //type: empty
        YLeaf encrypted; //type: empty
        class Access; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access
        class Auth; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth> auth;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf standard_acl; //type: uint32
        YLeaf acl_name; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth : public Entity
{
    public:
        Auth();
        ~Auth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf md5; //type: string
        YLeaf sha; //type: string

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf tid; //type: uint32
        YLeaf ignore_attached_bit; //type: empty
        YLeaf priority; //type: uint8
        YLeaf help; //type: empty
        YLeaf maximum_paths; //type: uint32
        class Distance; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip
        class Redistribute; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute
        class SetAttachedBit; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit
        class Snmp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp
        class SummaryAddress; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress
        class TrafficShare; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::TrafficShare
        class Advertise; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Advertise
        class DefaultInformation; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::DefaultInformation
        class Metric; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Metric
        class PrcInterval; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::PrcInterval
        class SetOverloadBit; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit
        class SpfInterval; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SpfInterval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Advertise> advertise;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::DefaultInformation> default_information;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance> > distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Metric> metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::PrcInterval> prc_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit> set_attached_bit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit> set_overload_bit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SpfInterval> spf_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress> > summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::TrafficShare> traffic_share;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance : public Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8
        YLeaf clns; //type: empty
        YLeaf ip; //type: empty
        class IpList; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList> > ip_list;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList : public Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        class WildcardBits; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits> > wildcard_bits;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits : public Entity
{
    public:
        WildcardBits();
        ~WildcardBits();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf w_bits; //type: string
        YLeaf access_list; //type: one of uint16, uint8

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip : public Entity
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

        class Route; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route> route;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route : public Entity
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

        class Priority; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority> priority;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority : public Entity
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

        class High; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High> high;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High : public Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: uint32

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute : public Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Application; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application
        class Bgp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp
        class Connected; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected
        class Eigrp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp
        class Isis_; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_
        class IsoIgrp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp
        class Lisp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp
        class MaximumPrefix; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix
        class Mobile; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile
        class Odr; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr
        class Ospf; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf
        class Ospfv3; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3
        class Rip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip
        class Static_; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_
        class Vrf; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application> > application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp> lisp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3> > ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_> static_; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf> vrf;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application : public Entity
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

        YLeaf name; //type: string
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp : public Entity
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

        YLeaf as_number; //type: one of uint32, string
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class Clns; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip> ip; // presence node
                class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns : public Entity
{
    public:
        Clns();
        ~Clns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected : public Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp : public Entity
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

        YLeaf as_number; //type: uint32
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_ : public Entity
{
    public:
        Isis_();
        ~Isis_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IsisRedistribute; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip> > ip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute> > isis_redistribute;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute : public Entity
{
    public:
        IsisRedistribute();
        ~IsisRedistribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_tag; //type: string
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip> ip; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip : public Entity
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

        YLeaf isis_redist_levels1; //type: IsisRedistLevels1Enum
        YLeaf isis_redist_levels2; //type: IsisRedistLevels2Enum
        YLeaf into; //type: empty
        YLeaf distribute_list; //type: uint32
        YLeaf route_map; //type: string
        class IsisRedistLevels1Enum;
        class IsisRedistLevels2Enum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp : public Entity
{
    public:
        IsoIgrp();
        ~IsoIgrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        class AreaTagRouteMapContainer; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
                class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer : public Entity
{
    public:
        AreaTagRouteMapContainer();
        ~AreaTagRouteMapContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_tag; //type: string
        YLeaf route_map; //type: string

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp : public Entity
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

        YLeaf include_connected; //type: empty
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix : public Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf warning_only; //type: empty
        YLeaf withdraw; //type: empty

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile : public Entity
{
    public:
        Mobile();
        ~Mobile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr : public Entity
{
    public:
        Odr();
        ~Odr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf : public Entity
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

        YLeaf process_id; //type: uint32
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        YLeaf vrf; //type: string
        class Match; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match> match;
                class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match : public Entity
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

        class Internal; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal : public Entity
{
    public:
        Internal();
        ~Internal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External : public Entity
{
    public:
        External();
        ~External();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf external_routes; //type: RedistOspfExternalTypeEnum
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal : public Entity
{
    public:
        NssaExternal();
        ~NssaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nssa_external_routes; //type: RedistOspfExternalTypeEnum
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3 : public Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf process_id; //type: uint32
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        YLeaf vrf; //type: string
        class Match; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match> match;
                class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match : public Entity
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

        class Internal; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal
        class External; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External
        class NssaExternal; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal : public Entity
{
    public:
        Internal();
        ~Internal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External : public Entity
{
    public:
        External();
        ~External();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf external_routes; //type: RedistOspfExternalTypeEnum
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal : public Entity
{
    public:
        NssaExternal();
        ~NssaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nssa_external_routes; //type: RedistOspfExternalTypeEnum
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_ : public Entity
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

        class Clns; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip> ip; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns : public Entity
{
    public:
        Clns();
        ~Clns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf : public Entity
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

        class VrfNm; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm
        class Global; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global> global;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm> > vrf_nm;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm : public Entity
{
    public:
        VrfNm();
        ~VrfNm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_nm; //type: string
        YLeaf ospf; //type: uint16
        class Application; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application
        class Bgp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp
        class Connected; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected
        class Eigrp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp
        class Isis_; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_
        class IsoIgrp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp
        class Lisp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp
        class Mobile; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile
        class Ospfv3; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3
        class Rip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip
        class Static_; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application> application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected> connected; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp> lisp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3> ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_> static_; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application : public Entity
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

        class Appname; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname> > appname;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname : public Entity
{
    public:
        Appname();
        ~Appname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appname; //type: string
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp : public Entity
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

        YLeaf a_lesser_1_period_0_xx_period_yy_greater_; //type: empty
        class BpAsNum; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum> > bp_as_num;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum : public Entity
{
    public:
        BpAsNum();
        ~BpAsNum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bp_as_num; //type: one of uint32, string
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class Clns; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip> ip; // presence node
                class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns : public Entity
{
    public:
        Clns();
        ~Clns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected : public Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp : public Entity
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

        class EigrpAs; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs> > eigrp_as;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs : public Entity
{
    public:
        EigrpAs();
        ~EigrpAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp_as; //type: uint16
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_ : public Entity
{
    public:
        Isis_();
        ~Isis_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IsisAtag; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip> ip; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag> > isis_atag;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag : public Entity
{
    public:
        IsisAtag();
        ~IsisAtag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf isis_atag; //type: string
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip> ip;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp : public Entity
{
    public:
        IsoIgrp();
        ~IsoIgrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IsoAtag; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag
        class RouteMap; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag> > iso_atag;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap> route_map; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag : public Entity
{
    public:
        IsoAtag();
        ~IsoAtag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iso_atag; //type: string
        YLeaf route_map; //type: empty

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap : public Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rm_point; //type: string

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile : public Entity
{
    public:
        Mobile();
        ~Mobile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3 : public Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Os3Id; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id> > os3_id;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id : public Entity
{
    public:
        Os3Id();
        ~Os3Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf os3_id; //type: uint16
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_ : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class Clns; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip> ip; // presence node
                class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns : public Entity
{
    public:
        Clns();
        ~Clns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ospf; //type: uint16
        class Application; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application
        class Bgp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp
        class Connected; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected
        class Eigrp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp
        class Isis_; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_
        class IsoIgrp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp
        class Lisp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp
        class Mobile; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile
        class Ospfv3; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3
        class Rip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip
        class Static_; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application> application;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp> bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected> connected; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp> eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp> lisp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3> ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_> static_; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application : public Entity
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

        class Appname; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname> > appname;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname : public Entity
{
    public:
        Appname();
        ~Appname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appname; //type: string
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp : public Entity
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

        YLeaf a_lesser_1_period_0_xx_period_yy_greater_; //type: empty
        class BpAsNum; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum> > bp_as_num;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum : public Entity
{
    public:
        BpAsNum();
        ~BpAsNum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bp_as_num; //type: one of uint32, string
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class Clns; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip> ip; // presence node
                class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns : public Entity
{
    public:
        Clns();
        ~Clns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected : public Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp : public Entity
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

        class EigrpAs; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs> > eigrp_as;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs : public Entity
{
    public:
        EigrpAs();
        ~EigrpAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp_as; //type: uint16
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_ : public Entity
{
    public:
        Isis_();
        ~Isis_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IsisAtag; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip> ip; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag> > isis_atag;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag : public Entity
{
    public:
        IsisAtag();
        ~IsisAtag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf isis_atag; //type: string
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip> ip;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp : public Entity
{
    public:
        IsoIgrp();
        ~IsoIgrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IsoAtag; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag
        class RouteMap; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag> > iso_atag;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap> route_map; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag : public Entity
{
    public:
        IsoAtag();
        ~IsoAtag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iso_atag; //type: string
        YLeaf route_map; //type: empty

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap : public Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rm_point; //type: string

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile : public Entity
{
    public:
        Mobile();
        ~Mobile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3 : public Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Os3Id; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id> > os3_id;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id : public Entity
{
    public:
        Os3Id();
        ~Os3Id();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf os3_id; //type: uint16
        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_ : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class Clns; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns> clns; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip> ip; // presence node
                class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns : public Entity
{
    public:
        Clns();
        ~Clns();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip : public Entity
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

        YLeaf levels; //type: IsisRoutesLevelTypeEnum
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf route_map; //type: string
        class MetricTypeEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit : public Entity
{
    public:
        SetAttachedBit();
        ~SetAttachedBit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp : public Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Context; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context> > context;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context : public Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Community; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community
        class User; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community> community;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User> user;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community : public Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_string; //type: string
        class Access; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access> access;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf standard_acl; //type: uint32
        YLeaf expanded_acl; //type: uint32
        YLeaf acl_name; //type: string
        YLeaf ipv6; //type: string
        YLeaf ro; //type: empty
        YLeaf rw; //type: empty

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User : public Entity
{
    public:
        User();
        ~User();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Permisssion; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion> permisssion;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion : public Entity
{
    public:
        Permisssion();
        ~Permisssion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf credential; //type: empty
        YLeaf encrypted; //type: empty
        class Access; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access
        class Auth; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth> auth;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf standard_acl; //type: uint32
        YLeaf acl_name; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth : public Entity
{
    public:
        Auth();
        ~Auth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf md5; //type: string
        YLeaf sha; //type: string

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress : public Entity
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

        YLeaf ip; //type: string
        YLeaf mask; //type: string
        class Level1; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1
        class Level12; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12
        class Level2; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2
        class MetricTagContainer; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1> level_1; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12> level_1_2; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2> level_2; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer> metric_tag_container;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1 : public Entity
{
    public:
        Level1();
        ~Level1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12 : public Entity
{
    public:
        Level12();
        ~Level12();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2 : public Entity
{
    public:
        Level2();
        ~Level2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer : public Entity
{
    public:
        MetricTagContainer();
        ~MetricTagContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::TrafficShare : public Entity
{
    public:
        TrafficShare();
        ~TrafficShare();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Min; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min> min;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::TrafficShare


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min : public Entity
{
    public:
        Min();
        ~Min();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf across_interfaces; //type: empty

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Advertise : public Entity
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

        YLeaf passive_only; //type: empty

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Advertise


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::DefaultInformation : public Entity
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

        class Originate; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate> originate; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::DefaultInformation


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate : public Entity
{
    public:
        Originate();
        ~Originate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Metric : public Entity
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

        YLeaf metric; //type: uint32
        class Metrics; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics> > metrics;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Metric


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics : public Entity
{
    public:
        Metrics();
        ~Metrics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: LevelEnum
        YLeaf metric; //type: uint32
        class LevelEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::PrcInterval : public Entity
{
    public:
        PrcInterval();
        ~PrcInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf initial_wait; //type: uint32
        YLeaf minimum_wait; //type: uint32

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::PrcInterval


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit : public Entity
{
    public:
        SetOverloadBit();
        ~SetOverloadBit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OnStartup; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup
        class Suppress; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup> on_startup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress> suppress;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup : public Entity
{
    public:
        OnStartup();
        ~OnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Time; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time
        class WaitForBgp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time> time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp> wait_for_bgp; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time : public Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: uint32
        YLeaf suppress; //type: empty
        YLeaf external; //type: empty
        YLeaf interlevel; //type: empty

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp : public Entity
{
    public:
        WaitForBgp();
        ~WaitForBgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Suppress; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress> suppress;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress : public Entity
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

        YLeaf external; //type: empty
        YLeaf interlevel; //type: empty

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress : public Entity
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

        YLeaf external; //type: empty
        YLeaf interlevel; //type: empty

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SpfInterval : public Entity
{
    public:
        SpfInterval();
        ~SpfInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level12; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12
        class Intervals; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals> intervals;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12> > level_1_2;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SpfInterval


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12 : public Entity
{
    public:
        Level12();
        ~Level12();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: LevelEnum
        YLeaf interval; //type: uint32
        YLeaf initial_wait; //type: uint32
        YLeaf minimum_wait; //type: uint32
        class LevelEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals : public Entity
{
    public:
        Intervals();
        ~Intervals();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf initial_wait; //type: uint32
        YLeaf minimum_wait; //type: uint32

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6 : public Entity
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

        YLeaf unicast; //type: empty
        YLeaf help; //type: empty
        YLeaf maximum_paths; //type: uint32
        YLeaf adjacency_check; //type: empty
        YLeaf router_id; //type: string
        YLeaf distance; //type: uint32
        class Advertise; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Advertise
        class DefaultInformation; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DefaultInformation
        class Metric; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Metric
        class PrcInterval; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::PrcInterval
        class SetOverloadBit; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit
        class SpfInterval; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SpfInterval
        class Bfd; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Bfd
        class DistributeList; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList
        class Ipv6_; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_
        class MultiTopology; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::MultiTopology
        class Redistribute; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute
        class SummaryPrefix; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SummaryPrefix
        class TableMap; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::TableMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Advertise> advertise;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList> distribute_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Metric> metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::MultiTopology> multi_topology; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::PrcInterval> prc_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit> set_overload_bit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SpfInterval> spf_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SummaryPrefix> > summary_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::TableMap> table_map;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Advertise : public Entity
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

        YLeaf passive_only; //type: empty

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Advertise


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DefaultInformation : public Entity
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

        class Originate; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DefaultInformation::Originate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DefaultInformation::Originate> originate; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DefaultInformation


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DefaultInformation::Originate : public Entity
{
    public:
        Originate();
        ~Originate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DefaultInformation::Originate


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Metric : public Entity
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

        YLeaf metric; //type: uint32
        class Metrics; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Metric::Metrics

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Metric::Metrics> > metrics;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Metric


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Metric::Metrics : public Entity
{
    public:
        Metrics();
        ~Metrics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: LevelEnum
        YLeaf metric; //type: uint32
        class LevelEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Metric::Metrics


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::PrcInterval : public Entity
{
    public:
        PrcInterval();
        ~PrcInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf initial_wait; //type: uint32
        YLeaf minimum_wait; //type: uint32

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::PrcInterval


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit : public Entity
{
    public:
        SetOverloadBit();
        ~SetOverloadBit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OnStartup; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup
        class Suppress; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup> on_startup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress> suppress;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup : public Entity
{
    public:
        OnStartup();
        ~OnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Time; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time
        class WaitForBgp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time> time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp> wait_for_bgp; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time : public Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: uint32
        YLeaf suppress; //type: empty
        YLeaf external; //type: empty
        YLeaf interlevel; //type: empty

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp : public Entity
{
    public:
        WaitForBgp();
        ~WaitForBgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Suppress; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress> suppress;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress : public Entity
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

        YLeaf external; //type: empty
        YLeaf interlevel; //type: empty

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress : public Entity
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

        YLeaf external; //type: empty
        YLeaf interlevel; //type: empty

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SpfInterval : public Entity
{
    public:
        SpfInterval();
        ~SpfInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level12; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SpfInterval::Level12
        class Intervals; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SpfInterval::Intervals

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SpfInterval::Intervals> intervals;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SpfInterval::Level12> > level_1_2;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SpfInterval


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SpfInterval::Level12 : public Entity
{
    public:
        Level12();
        ~Level12();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: LevelEnum
        YLeaf interval; //type: uint32
        YLeaf initial_wait; //type: uint32
        YLeaf minimum_wait; //type: uint32
        class LevelEnum;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SpfInterval::Level12


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SpfInterval::Intervals : public Entity
{
    public:
        Intervals();
        ~Intervals();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf initial_wait; //type: uint32
        YLeaf minimum_wait; //type: uint32

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SpfInterval::Intervals


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Bfd : public Entity
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

        YLeaf all_interfaces; //type: empty
        YLeaf check_ctrl_plane_failure; //type: empty

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Bfd


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList : public Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixList; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList> > prefix_list;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList : public Entity
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

        YLeaf name; //type: string
        class In; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In> in; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In : public Entity
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

        class Interface; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface> interface;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface : public Entity
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
        class AtmSubinterface; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmSubinterface : public Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmSubinterface


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmAcrsubinterface : public Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmAcrsubinterface

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels1Enum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels2Enum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf rib_metric_as_external;
        static const Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::LevelEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::LevelEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Metric::Metrics::LevelEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SpfInterval::Level12::LevelEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_100_ */

