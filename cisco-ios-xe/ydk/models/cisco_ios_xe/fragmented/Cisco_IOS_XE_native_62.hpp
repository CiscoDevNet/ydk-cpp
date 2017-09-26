#ifndef _CISCO_IOS_XE_NATIVE_62_
#define _CISCO_IOS_XE_NATIVE_62_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_61.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::Tunnel::InterfaceQos::Trust : public ydk::Entity
{
    public:
        Trust();
        ~Trust();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf device; //type: Device
        class Device;

}; // Native::Interface::Tunnel::InterfaceQos::Trust


class Native::Interface::Tunnel::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admission; //type: string
        ydk::YLeaf unnumbered; //type: string
        ydk::YLeaf directed_broadcast; //type: one of string, uint16
        ydk::YLeaf local_proxy_arp; //type: empty
        ydk::YLeaf proxy_arp; //type: boolean
        ydk::YLeaf redirects; //type: boolean
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf mroute_cache; //type: boolean
        ydk::YLeaf unreachables; //type: boolean
        class AccessGroup; //type: Native::Interface::Tunnel::Ip::AccessGroup
        class Arp; //type: Native::Interface::Tunnel::Ip::Arp
        class Vrf; //type: Native::Interface::Tunnel::Ip::Vrf
        class NoAddress; //type: Native::Interface::Tunnel::Ip::NoAddress
        class Address; //type: Native::Interface::Tunnel::Ip::Address
        class HelloInterval; //type: Native::Interface::Tunnel::Ip::HelloInterval
        class Authentication; //type: Native::Interface::Tunnel::Ip::Authentication
        class HoldTime; //type: Native::Interface::Tunnel::Ip::HoldTime
        class HelperAddress; //type: Native::Interface::Tunnel::Ip::HelperAddress
        class Pim; //type: Native::Interface::Tunnel::Ip::Pim
        class Policy; //type: Native::Interface::Tunnel::Ip::Policy
        class Rip; //type: Native::Interface::Tunnel::Ip::Rip
        class RouteCacheConf; //type: Native::Interface::Tunnel::Ip::RouteCacheConf
        class RouteCache; //type: Native::Interface::Tunnel::Ip::RouteCache
        class Router; //type: Native::Interface::Tunnel::Ip::Router
        class Tcp; //type: Native::Interface::Tunnel::Ip::Tcp
        class VirtualReassembly; //type: Native::Interface::Tunnel::Ip::VirtualReassembly
        class Dhcp; //type: Native::Interface::Tunnel::Ip::Dhcp
        class SummaryAddress; //type: Native::Interface::Tunnel::Ip::SummaryAddress
        class Verify; //type: Native::Interface::Tunnel::Ip::Verify
        class Flow; //type: Native::Interface::Tunnel::Ip::Flow
        class Igmp; //type: Native::Interface::Tunnel::Ip::Igmp
        class Lisp; //type: Native::Interface::Tunnel::Ip::Lisp
        class Nbar; //type: Native::Interface::Tunnel::Ip::Nbar
        class Nhrp; //type: Native::Interface::Tunnel::Ip::Nhrp
        class Ospf; //type: Native::Interface::Tunnel::Ip::Ospf
        class Rsvp; //type: Native::Interface::Tunnel::Ip::Rsvp
        class Wccp; //type: Native::Interface::Tunnel::Ip::Wccp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::AccessGroup> access_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Flow> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::HelperAddress> > helper_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::HoldTime> hold_time;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Igmp> igmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nbar> nbar;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp> nhrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::NoAddress> no_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf> ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Pim> pim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Rip> rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::RouteCache> route_cache; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::RouteCacheConf> route_cache_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Router> router;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Rsvp> rsvp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::SummaryAddress> summary_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Verify> verify;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Wccp> wccp;
        
}; // Native::Interface::Tunnel::Ip


class Native::Interface::Tunnel::Ip::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class In; //type: Native::Interface::Tunnel::Ip::AccessGroup::In
        class Out; //type: Native::Interface::Tunnel::Ip::AccessGroup::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::AccessGroup::In> in;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::AccessGroup::Out> out;
        
}; // Native::Interface::Tunnel::Ip::AccessGroup


class Native::Interface::Tunnel::Ip::AccessGroup::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommonAcl; //type: Native::Interface::Tunnel::Ip::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::Tunnel::Ip::AccessGroup::In::Acl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::AccessGroup::In::Acl> acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::AccessGroup::In::CommonAcl> common_acl;
        
}; // Native::Interface::Tunnel::Ip::AccessGroup::In


class Native::Interface::Tunnel::Ip::AccessGroup::In::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: one of string, uint16
        ydk::YLeaf in; //type: empty

}; // Native::Interface::Tunnel::Ip::AccessGroup::In::Acl


class Native::Interface::Tunnel::Ip::AccessGroup::In::CommonAcl : public ydk::Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common; //type: one of string, uint16
        ydk::YLeaf in; //type: empty

}; // Native::Interface::Tunnel::Ip::AccessGroup::In::CommonAcl


class Native::Interface::Tunnel::Ip::AccessGroup::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommonAcl; //type: Native::Interface::Tunnel::Ip::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::Tunnel::Ip::AccessGroup::Out::Acl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::AccessGroup::Out::Acl> acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::AccessGroup::Out::CommonAcl> common_acl;
        
}; // Native::Interface::Tunnel::Ip::AccessGroup::Out


class Native::Interface::Tunnel::Ip::AccessGroup::Out::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: one of string, uint16
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Tunnel::Ip::AccessGroup::Out::Acl


class Native::Interface::Tunnel::Ip::AccessGroup::Out::CommonAcl : public ydk::Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common; //type: one of string, uint16
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Tunnel::Ip::AccessGroup::Out::CommonAcl


class Native::Interface::Tunnel::Ip::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf negotiated; //type: empty
        class Primary; //type: Native::Interface::Tunnel::Ip::Address::Primary
        class Secondary; //type: Native::Interface::Tunnel::Ip::Address::Secondary
        class Dhcp; //type: Native::Interface::Tunnel::Ip::Address::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Address::Dhcp> dhcp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Address::Primary> primary;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Address::Secondary> > secondary;
        
}; // Native::Interface::Tunnel::Ip::Address


class Native::Interface::Tunnel::Ip::Address::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hostname; //type: string
        class ClientId; //type: Native::Interface::Tunnel::Ip::Address::Dhcp::ClientId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Address::Dhcp::ClientId> client_id;
        
}; // Native::Interface::Tunnel::Ip::Address::Dhcp


class Native::Interface::Tunnel::Ip::Address::Dhcp::ClientId : public ydk::Entity
{
    public:
        ClientId();
        ~ClientId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::Tunnel::Ip::Address::Dhcp::ClientId


class Native::Interface::Tunnel::Ip::Address::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::Interface::Tunnel::Ip::Address::Primary


class Native::Interface::Tunnel::Ip::Address::Secondary : public ydk::Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::Tunnel::Ip::Address::Secondary


class Native::Interface::Tunnel::Ip::Arp : public ydk::Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inspection; //type: Native::Interface::Tunnel::Ip::Arp::Inspection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Arp::Inspection> inspection;
        
}; // Native::Interface::Tunnel::Ip::Arp


class Native::Interface::Tunnel::Ip::Arp::Inspection : public ydk::Entity
{
    public:
        Inspection();
        ~Inspection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trust; //type: empty
        class Limit; //type: Native::Interface::Tunnel::Ip::Arp::Inspection::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::Tunnel::Ip::Arp::Inspection


class Native::Interface::Tunnel::Ip::Arp::Inspection::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty
        ydk::YLeaf rate; //type: uint32

}; // Native::Interface::Tunnel::Ip::Arp::Inspection::Limit


class Native::Interface::Tunnel::Ip::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyChain; //type: Native::Interface::Tunnel::Ip::Authentication::KeyChain
        class Mode; //type: Native::Interface::Tunnel::Ip::Authentication::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Authentication::KeyChain> key_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Authentication::Mode> mode;
        
}; // Native::Interface::Tunnel::Ip::Authentication


class Native::Interface::Tunnel::Ip::Authentication::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf name; //type: string

}; // Native::Interface::Tunnel::Ip::Authentication::KeyChain


class Native::Interface::Tunnel::Ip::Authentication::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf md5; //type: empty

}; // Native::Interface::Tunnel::Ip::Authentication::Mode


class Native::Interface::Tunnel::Ip::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Client; //type: Native::Interface::Tunnel::Ip::Dhcp::Client
        class Relay; //type: Native::Interface::Tunnel::Ip::Dhcp::Relay
        class Snooping; //type: Native::Interface::Tunnel::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Relay> relay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Snooping> snooping;
        
}; // Native::Interface::Tunnel::Ip::Dhcp


class Native::Interface::Tunnel::Ip::Dhcp::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hostname; //type: string

}; // Native::Interface::Tunnel::Ip::Dhcp::Client


class Native::Interface::Tunnel::Ip::Dhcp::Relay : public ydk::Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_interface; //type: string
        class Information; //type: Native::Interface::Tunnel::Ip::Dhcp::Relay::Information

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Relay::Information> information;
        
}; // Native::Interface::Tunnel::Ip::Dhcp::Relay


class Native::Interface::Tunnel::Ip::Dhcp::Relay::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_action; //type: PolicyAction
        ydk::YLeaf trusted; //type: empty
        class CheckReply; //type: Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply
        class Option; //type: Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option
        class OptionInsert; //type: Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply> check_reply; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option> option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert> option_insert; // presence node
                class PolicyAction;

}; // Native::Interface::Tunnel::Ip::Dhcp::Relay::Information


class Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply : public ydk::Entity
{
    public:
        CheckReply();
        ~CheckReply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty

}; // Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply


class Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber_id; //type: string

}; // Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option


class Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert : public ydk::Entity
{
    public:
        OptionInsert();
        ~OptionInsert();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty

}; // Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert


class Native::Interface::Tunnel::Ip::Dhcp::Snooping : public ydk::Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trust; //type: empty
        class Limit; //type: Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit
        class Vlan; //type: Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit> limit;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan> > vlan;
        
}; // Native::Interface::Tunnel::Ip::Dhcp::Snooping


class Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rate; //type: uint16

}; // Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit


class Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class Information; //type: Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information> information;
        
}; // Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan


class Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Option; //type: Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option> option;
        
}; // Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information


class Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FormatType; //type: Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType> format_type;
        
}; // Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option


class Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType : public ydk::Entity
{
    public:
        FormatType();
        ~FormatType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CircuitId; //type: Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId> circuit_id;
        
}; // Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType


class Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId : public ydk::Entity
{
    public:
        CircuitId();
        ~CircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf string; //type: string

}; // Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId


class Native::Interface::Tunnel::Ip::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ingress; //type: empty
        ydk::YLeaf egress; //type: empty
        class Monitor; //type: Native::Interface::Tunnel::Ip::Flow::Monitor

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Flow::Monitor> > monitor;
        
}; // Native::Interface::Tunnel::Ip::Flow


class Native::Interface::Tunnel::Ip::Flow::Monitor : public ydk::Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf unicast; //type: empty
        class Sampler; //type: Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler> > sampler;
        
}; // Native::Interface::Tunnel::Ip::Flow::Monitor


class Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler : public ydk::Entity
{
    public:
        Sampler();
        ~Sampler();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf name; //type: string
        class Direction;

}; // Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler


class Native::Interface::Tunnel::Ip::HelloInterval : public ydk::Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf seconds; //type: uint16

}; // Native::Interface::Tunnel::Ip::HelloInterval


class Native::Interface::Tunnel::Ip::HelperAddress : public ydk::Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf global; //type: empty
        ydk::YLeaf vrf; //type: string

}; // Native::Interface::Tunnel::Ip::HelperAddress


class Native::Interface::Tunnel::Ip::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf seconds; //type: uint16

}; // Native::Interface::Tunnel::Ip::HoldTime


class Native::Interface::Tunnel::Ip::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: uint8
        class StaticGroup; //type: Native::Interface::Tunnel::Ip::Igmp::StaticGroup
        class JoinGroup; //type: Native::Interface::Tunnel::Ip::Igmp::JoinGroup

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Igmp::JoinGroup> > join_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Igmp::StaticGroup> static_group;
        
}; // Native::Interface::Tunnel::Ip::Igmp


class Native::Interface::Tunnel::Ip::Igmp::JoinGroup : public ydk::Entity
{
    public:
        JoinGroup();
        ~JoinGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_group_address; //type: string
        ydk::YLeaf source; //type: string

}; // Native::Interface::Tunnel::Ip::Igmp::JoinGroup


class Native::Interface::Tunnel::Ip::Igmp::StaticGroup : public ydk::Entity
{
    public:
        StaticGroup();
        ~StaticGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Groups; //type: Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups
        class ClassMap; //type: Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap> > class_map;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups> > groups;
        
}; // Native::Interface::Tunnel::Ip::Igmp::StaticGroup


class Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap : public ydk::Entity
{
    public:
        ClassMap();
        ~ClassMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::name)
        ydk::YLeaf id;

}; // Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap


class Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of string, enumeration
        class Name;

}; // Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups


class Native::Interface::Tunnel::Ip::Lisp : public ydk::Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_locator; //type: string

}; // Native::Interface::Tunnel::Ip::Lisp


class Native::Interface::Tunnel::Ip::Nbar : public ydk::Entity
{
    public:
        Nbar();
        ~Nbar();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolDiscovery; //type: Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery> protocol_discovery; // presence node
        
}; // Native::Interface::Tunnel::Ip::Nbar


class Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery : public ydk::Entity
{
    public:
        ProtocolDiscovery();
        ~ProtocolDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_ipv6; //type: Ipv4Ipv6
        class Ipv4Ipv6;

}; // Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery


class Native::Interface::Tunnel::Ip::Nhrp : public ydk::Entity
{
    public:
        Nhrp();
        ~Nhrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authentication; //type: string
        ydk::YLeaf connect; //type: uint16
        ydk::YLeaf group; //type: string
        ydk::YLeaf holdtime; //type: uint16
        ydk::YLeaf network_id; //type: uint32
        ydk::YLeaf record; //type: empty
        ydk::YLeaf use; //type: uint16
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Attribute> attribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Cache> cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Interest> interest;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Map> map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::MaxSend> max_send;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs> nhs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Redirect> redirect; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Registration> registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Reject> reject;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Responder> responder;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::ServerOnly> server_only; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Shortcut> shortcut; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc> trigger_svc;
        
}; // Native::Interface::Tunnel::Ip::Nhrp


class Native::Interface::Tunnel::Ip::Nhrp::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Set; //type: Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set> set;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Attribute


class Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AttrType; //type: Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType> > attr_type;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set


class Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType : public ydk::Entity
{
    public:
        AttrType();
        ~AttrType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attr_type; //type: string
        ydk::YLeaf attr_val; //type: string

}; // Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType


class Native::Interface::Tunnel::Ip::Nhrp::Cache : public ydk::Entity
{
    public:
        Cache();
        ~Cache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_authoritative; //type: empty

}; // Native::Interface::Tunnel::Ip::Nhrp::Cache


class Native::Interface::Tunnel::Ip::Nhrp::Interest : public ydk::Entity
{
    public:
        Interest();
        ~Interest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_range; //type: uint8
        ydk::YLeaf none; //type: empty

}; // Native::Interface::Tunnel::Ip::Nhrp::Interest


class Native::Interface::Tunnel::Ip::Nhrp::Map : public ydk::Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestIpv4; //type: Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4
        class Multicast; //type: Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast
        class Group; //type: Native::Interface::Tunnel::Ip::Nhrp::Map::Group

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4> > dest_ipv4;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Map::Group> > group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast> multicast;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Map


class Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4 : public ydk::Entity
{
    public:
        DestIpv4();
        ~DestIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dest_ipv4; //type: string
        ydk::YLeaf nbma_ipv6; //type: string
        class NbmaIpv4; //type: Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4
        class DestMask; //type: Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask> > dest_mask;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4> > nbma_ipv4;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4


class Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask : public ydk::Entity
{
    public:
        DestMask();
        ~DestMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dest_mask; //type: string
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask


class Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4 : public ydk::Entity
{
    public:
        NbmaIpv4();
        ~NbmaIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nbma_ipv4; //type: string
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4


class Native::Interface::Tunnel::Ip::Nhrp::Map::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class ServicePolicy; //type: Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy> service_policy;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Map::Group


class Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf output; //type: string

}; // Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy


class Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: empty
        ydk::YLeafList nbma_ipv4; //type: list of  string
        ydk::YLeafList nbma_ipv6; //type: list of  string

}; // Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast


class Native::Interface::Tunnel::Ip::Nhrp::MaxSend : public ydk::Entity
{
    public:
        MaxSend();
        ~MaxSend();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PktCount; //type: Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount> > pkt_count;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::MaxSend


class Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount : public ydk::Entity
{
    public:
        PktCount();
        ~PktCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pkt_count; //type: uint16
        ydk::YLeaf every; //type: uint16

}; // Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount


class Native::Interface::Tunnel::Ip::Nhrp::Nhs : public ydk::Entity
{
    public:
        Nhs();
        ~Nhs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fallback; //type: uint8
        class Ipv4; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4
        class Cluster; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster
        class Dynamic; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster> cluster;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic> dynamic;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4> > ipv4;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster : public ydk::Entity
{
    public:
        Cluster();
        ~Cluster();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClusNum; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum> > clus_num;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum : public ydk::Entity
{
    public:
        ClusNum();
        ~ClusNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clus_num; //type: uint8
        ydk::YLeaf max_connections; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nbma; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma> nbma;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma : public ydk::Entity
{
    public:
        Nbma();
        ~Nbma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4
        class DynFqdn; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn
        class Ipv6; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn> > dyn_fqdn;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4> > ipv4;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6> > ipv6;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn : public ydk::Entity
{
    public:
        DynFqdn();
        ~DynFqdn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dyn_fqdn; //type: string
        ydk::YLeaf cluster; //type: uint8
        class Multicast; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast> multicast; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cluster; //type: uint8
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DynMcPri; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri> > dyn_mc_pri;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri : public ydk::Entity
{
    public:
        DynMcPri();
        ~DynMcPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dyn_mc_pri; //type: uint8
        ydk::YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dp; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp> > dp;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp : public ydk::Entity
{
    public:
        Dp();
        ~Dp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dp; //type: uint8
        ydk::YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf cluster; //type: uint8
        class Multicast; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast> multicast; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cluster; //type: uint8
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DynPri; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri> > dyn_pri;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri : public ydk::Entity
{
    public:
        DynPri();
        ~DynPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dyn_pri; //type: uint8
        ydk::YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NPrior; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior> > n_prior;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior : public ydk::Entity
{
    public:
        NPrior();
        ~NPrior();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf n_prior; //type: uint8
        ydk::YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf cluster; //type: uint8
        class Multicast; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast> multicast; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cluster; //type: uint8
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class V6Pri; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri> > v6_pri;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri : public ydk::Entity
{
    public:
        V6Pri();
        ~V6Pri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf v6_pri; //type: uint8
        ydk::YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class V6Pri2; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2> > v6_pri2;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2 : public ydk::Entity
{
    public:
        V6Pri2();
        ~V6Pri2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf v6_pri2; //type: uint8
        ydk::YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf cluster; //type: uint8
        class Nbma; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma> nbma;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma : public ydk::Entity
{
    public:
        Nbma();
        ~Nbma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4_; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_
        class NhsFqdn; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn
        class Ipv6; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_> > ipv4;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6> > ipv6;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn> > nhs_fqdn;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_ : public ydk::Entity
{
    public:
        Ipv4_();
        ~Ipv4_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf cluster; //type: uint8
        class Multicast; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast> multicast; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cluster; //type: uint8
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prior; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior> > prior;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior : public ydk::Entity
{
    public:
        Prior();
        ~Prior();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prior; //type: uint8
        ydk::YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pri; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri> > pri;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri : public ydk::Entity
{
    public:
        Pri();
        ~Pri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pri; //type: uint8
        ydk::YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf cluster; //type: uint8
        class Multicast; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast> multicast; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cluster; //type: uint8
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class McPri; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri> > mc_pri;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri : public ydk::Entity
{
    public:
        McPri();
        ~McPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mc_pri; //type: uint8
        ydk::YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class McPrior; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior> > mc_prior;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior : public ydk::Entity
{
    public:
        McPrior();
        ~McPrior();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mc_prior; //type: uint8
        ydk::YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn : public ydk::Entity
{
    public:
        NhsFqdn();
        ~NhsFqdn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nhs_fqdn; //type: string
        ydk::YLeaf cluster; //type: uint8
        class Multicast; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast> multicast; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cluster; //type: uint8
        class Priority; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority> priority;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class McPri; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri> > mc_pri;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri : public ydk::Entity
{
    public:
        McPri();
        ~McPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mc_pri; //type: uint8
        ydk::YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NhsPri; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri> > nhs_pri;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri : public ydk::Entity
{
    public:
        NhsPri();
        ~NhsPri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nhs_pri; //type: uint8
        ydk::YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PriRange; //type: Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange> > pri_range;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority


class Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange : public ydk::Entity
{
    public:
        PriRange();
        ~PriRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pri_range; //type: uint8
        ydk::YLeaf cluster; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange


class Native::Interface::Tunnel::Ip::Nhrp::Redirect : public ydk::Entity
{
    public:
        Redirect();
        ~Redirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint8

}; // Native::Interface::Tunnel::Ip::Nhrp::Redirect


class Native::Interface::Tunnel::Ip::Nhrp::Registration : public ydk::Entity
{
    public:
        Registration();
        ~Registration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_unique; //type: empty
        ydk::YLeaf timeout; //type: uint16

}; // Native::Interface::Tunnel::Ip::Nhrp::Registration


class Native::Interface::Tunnel::Ip::Nhrp::Reject : public ydk::Entity
{
    public:
        Reject();
        ~Reject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reqid; //type: Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid> > reqid;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::Reject


class Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid : public ydk::Entity
{
    public:
        Reqid();
        ~Reqid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reqid; //type: uint16
        ydk::YLeaf rej_secs; //type: uint16

}; // Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid


class Native::Interface::Tunnel::Ip::Nhrp::Responder : public ydk::Entity
{
    public:
        Responder();
        ~Responder();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf res_int; //type: string
        ydk::YLeaf analysis_module; //type: uint8
        ydk::YLeaf fcpa; //type: uint8
        ydk::YLeaf sbc; //type: uint32
        ydk::YLeaf sonet_acr; //type: uint8
        ydk::YLeaf tb_controller; //type: string
        ydk::YLeaf service_engine; //type: uint8
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf tunnel_tp; //type: uint16
        ydk::YLeaf vpn; //type: uint32
        ydk::YLeaf virtual_tokenring; //type: uint32
        ydk::YLeaf virtualportgroup; //type: uint8
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf ucse; //type: uint8
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16

}; // Native::Interface::Tunnel::Ip::Nhrp::Responder


class Native::Interface::Tunnel::Ip::Nhrp::ServerOnly : public ydk::Entity
{
    public:
        ServerOnly();
        ~ServerOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_caching; //type: empty

}; // Native::Interface::Tunnel::Ip::Nhrp::ServerOnly


class Native::Interface::Tunnel::Ip::Nhrp::Shortcut : public ydk::Entity
{
    public:
        Shortcut();
        ~Shortcut();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_template; //type: uint16

}; // Native::Interface::Tunnel::Ip::Nhrp::Shortcut


class Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc : public ydk::Entity
{
    public:
        TriggerSvc();
        ~TriggerSvc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Kbps; //type: Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps> > kbps;
        
}; // Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc


class Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps : public ydk::Entity
{
    public:
        Kbps();
        ~Kbps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kbps; //type: uint32
        ydk::YLeaf tear_kbps; //type: uint32

}; // Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps


class Native::Interface::Tunnel::Ip::NoAddress : public ydk::Entity
{
    public:
        NoAddress();
        ~NoAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: boolean

}; // Native::Interface::Tunnel::Ip::NoAddress


class Native::Interface::Tunnel::Ip::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf network; //type: Network
        ydk::YLeaf cost; //type: uint16
        ydk::YLeaf flood_reduction; //type: empty
        ydk::YLeaf hello_interval; //type: uint32
        ydk::YLeaf mtu_ignore; //type: empty
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf resync_timeout; //type: uint32
        ydk::YLeaf retransmit_interval; //type: uint32
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf transmit_delay; //type: uint32
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey> authentication_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::Bfd> bfd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter> database_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::DeadInterval> dead_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::Lls> lls; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey> > message_digest_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::MultiArea> multi_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression> prefix_suppression; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::ProcessId> > process_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::TtlSecurity> ttl_security; // presence node
                class Network;

}; // Native::Interface::Tunnel::Ip::Ospf


class Native::Interface::Tunnel::Ip::Ospf::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf message_digest; //type: empty
        ydk::YLeaf null; //type: empty
        class KeyChain; //type: Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain> key_chain;
        
}; // Native::Interface::Tunnel::Ip::Ospf::Authentication


class Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain


class Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey : public ydk::Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_type; //type: uint8
        ydk::YLeaf auth_key; //type: string

}; // Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey


class Native::Interface::Tunnel::Ip::Ospf::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::Tunnel::Ip::Ospf::Bfd


class Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter


class Native::Interface::Tunnel::Ip::Ospf::DeadInterval : public ydk::Entity
{
    public:
        DeadInterval();
        ~DeadInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        class Minimal; //type: Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal> minimal;
        
}; // Native::Interface::Tunnel::Ip::Ospf::DeadInterval


class Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal : public ydk::Entity
{
    public:
        Minimal();
        ~Minimal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hello_multiplier; //type: uint8

}; // Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal


class Native::Interface::Tunnel::Ip::Ospf::DemandCircuit : public ydk::Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty

}; // Native::Interface::Tunnel::Ip::Ospf::DemandCircuit


class Native::Interface::Tunnel::Ip::Ospf::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PerPrefix; //type: Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix> per_prefix;
        
}; // Native::Interface::Tunnel::Ip::Ospf::FastReroute


class Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Candidate; //type: Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate
        class Protection; //type: Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate> candidate; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection> protection; // presence node
        
}; // Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix


class Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate : public ydk::Entity
{
    public:
        Candidate();
        ~Candidate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate


class Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection


class Native::Interface::Tunnel::Ip::Ospf::Lls : public ydk::Entity
{
    public:
        Lls();
        ~Lls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::Tunnel::Ip::Ospf::Lls


class Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        class Md5; //type: Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5> md5;
        
}; // Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey


class Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5 : public ydk::Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_type; //type: uint8
        ydk::YLeaf auth_key; //type: string

}; // Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5


class Native::Interface::Tunnel::Ip::Ospf::MultiArea : public ydk::Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of string, uint32
        ydk::YLeaf cost; //type: uint32

}; // Native::Interface::Tunnel::Ip::Ospf::MultiArea


class Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression : public ydk::Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression


class Native::Interface::Tunnel::Ip::Ospf::ProcessId : public ydk::Entity
{
    public:
        ProcessId();
        ~ProcessId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf area; //type: one of string, uint32
        ydk::YLeaf secondaries; //type: empty
        ydk::YLeaf none; //type: empty

}; // Native::Interface::Tunnel::Ip::Ospf::ProcessId


class Native::Interface::Tunnel::Ip::Ospf::TtlSecurity : public ydk::Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diable; //type: empty
        ydk::YLeaf hops; //type: uint8

}; // Native::Interface::Tunnel::Ip::Ospf::TtlSecurity


class Native::Interface::Tunnel::Ip::Pim : public ydk::Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sparse_mode; //type: SparseMode
        ydk::YLeaf nbma_mode; //type: empty
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf spt_threshold; //type: SptThreshold
        class AcceptRegister; //type: Native::Interface::Tunnel::Ip::Pim::AcceptRegister
        class QueryInterval; //type: Native::Interface::Tunnel::Ip::Pim::QueryInterval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Pim::AcceptRegister> accept_register;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Pim::QueryInterval> query_interval;
                class SparseMode;
        class SptThreshold;

}; // Native::Interface::Tunnel::Ip::Pim


class Native::Interface::Tunnel::Ip::Pim::AcceptRegister : public ydk::Entity
{
    public:
        AcceptRegister();
        ~AcceptRegister();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf list; //type: string

}; // Native::Interface::Tunnel::Ip::Pim::AcceptRegister


class Native::Interface::Tunnel::Ip::Pim::QueryInterval : public ydk::Entity
{
    public:
        QueryInterval();
        ~QueryInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds_interval; //type: uint16
        ydk::YLeaf milliseconds_interval; //type: uint16
        ydk::YLeaf msec; //type: empty

}; // Native::Interface::Tunnel::Ip::Pim::QueryInterval


class Native::Interface::Tunnel::Ip::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Interface::Tunnel::Ip::Policy


class Native::Interface::Tunnel::Ip::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authentication; //type: Native::Interface::Tunnel::Ip::Rip::Authentication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Rip::Authentication> authentication;
        
}; // Native::Interface::Tunnel::Ip::Rip


class Native::Interface::Tunnel::Ip::Rip::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_chain; //type: string
        class Mode; //type: Native::Interface::Tunnel::Ip::Rip::Authentication::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Rip::Authentication::Mode> mode;
        
}; // Native::Interface::Tunnel::Ip::Rip::Authentication


class Native::Interface::Tunnel::Ip::Rip::Authentication::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf md5; //type: empty
        ydk::YLeaf text; //type: empty

}; // Native::Interface::Tunnel::Ip::Rip::Authentication::Mode


class Native::Interface::Tunnel::Ip::RouteCache : public ydk::Entity
{
    public:
        RouteCache();
        ~RouteCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cef; //type: boolean
        ydk::YLeaf flow; //type: boolean
        ydk::YLeaf policy; //type: boolean
        ydk::YLeaf same_interface; //type: boolean

}; // Native::Interface::Tunnel::Ip::RouteCache


class Native::Interface::Tunnel::Ip::RouteCacheConf : public ydk::Entity
{
    public:
        RouteCacheConf();
        ~RouteCacheConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_cache; //type: boolean

}; // Native::Interface::Tunnel::Ip::RouteCacheConf


class Native::Interface::Tunnel::Ip::Router : public ydk::Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Isis; //type: Native::Interface::Tunnel::Ip::Router::Isis

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Router::Isis> isis; // presence node
        
}; // Native::Interface::Tunnel::Ip::Router


class Native::Interface::Tunnel::Ip::Router::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: string

}; // Native::Interface::Tunnel::Ip::Router::Isis


class Native::Interface::Tunnel::Ip::Rsvp : public ydk::Entity
{
    public:
        Rsvp();
        ~Rsvp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authentication; //type: Native::Interface::Tunnel::Ip::Rsvp::Authentication
        class Bandwidth; //type: Native::Interface::Tunnel::Ip::Rsvp::Bandwidth
        class Neighbor; //type: Native::Interface::Tunnel::Ip::Rsvp::Neighbor
        class Precedence; //type: Native::Interface::Tunnel::Ip::Rsvp::Precedence
        class Signalling; //type: Native::Interface::Tunnel::Ip::Rsvp::Signalling
        class Tos; //type: Native::Interface::Tunnel::Ip::Rsvp::Tos

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Rsvp::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Rsvp::Bandwidth> bandwidth; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Rsvp::Neighbor> neighbor; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Rsvp::Precedence> precedence;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Rsvp::Signalling> signalling;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip::Rsvp::Tos> tos;
        
}; // Native::Interface::Tunnel::Ip::Rsvp

class Native::Interface::Tunnel::InterfaceQos::Trust::Device : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_phone;

};

class Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::PolicyAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf encapsulate;
        static const ydk::Enum::YLeaf keep;
        static const ydk::Enum::YLeaf replace;

};

class Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;

};

class Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::Name : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y__STAR__;

};

class Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class Native::Interface::Tunnel::Ip::Ospf::Network : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf non_broadcast;
        static const ydk::Enum::YLeaf point_to_multipoint;
        static const ydk::Enum::YLeaf point_to_point;

};

class Native::Interface::Tunnel::Ip::Pim::SparseMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sparse_dense_mode;
        static const ydk::Enum::YLeaf sparse_mode;

};

class Native::Interface::Tunnel::Ip::Pim::SptThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf infinity;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_62_ */

