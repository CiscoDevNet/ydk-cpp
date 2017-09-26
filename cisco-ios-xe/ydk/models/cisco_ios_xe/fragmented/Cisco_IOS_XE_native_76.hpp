#ifndef _CISCO_IOS_XE_NATIVE_76_
#define _CISCO_IOS_XE_NATIVE_76_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_73.hpp"
#include "Cisco_IOS_XE_native_75.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::Vlan::KeepaliveSettings::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf period; //type: uint16
        ydk::YLeaf retries; //type: uint8

}; // Native::Interface::Vlan::KeepaliveSettings::Keepalive


class Native::Interface::Vlan::KeepaliveSettings_ : public ydk::Entity
{
    public:
        KeepaliveSettings_();
        ~KeepaliveSettings_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Keepalive; //type: Native::Interface::Vlan::KeepaliveSettings_::Keepalive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::KeepaliveSettings_::Keepalive> keepalive; // presence node
        
}; // Native::Interface::Vlan::KeepaliveSettings_


class Native::Interface::Vlan::KeepaliveSettings_::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf period; //type: uint16
        ydk::YLeaf retries; //type: uint8

}; // Native::Interface::Vlan::KeepaliveSettings_::Keepalive


class Native::Interface::Vlan::Lisp : public ydk::Entity
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

        ydk::YLeaf extended_subnet_mode; //type: empty
        class Mobility; //type: Native::Interface::Vlan::Lisp::Mobility

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Lisp::Mobility> mobility;
        
}; // Native::Interface::Vlan::Lisp


class Native::Interface::Vlan::Lisp::Mobility : public ydk::Entity
{
    public:
        Mobility();
        ~Mobility();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DynamicEid; //type: Native::Interface::Vlan::Lisp::Mobility::DynamicEid
        class Discover; //type: Native::Interface::Vlan::Lisp::Mobility::Discover
        class Liveness; //type: Native::Interface::Vlan::Lisp::Mobility::Liveness

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Lisp::Mobility::Discover> discover;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Lisp::Mobility::DynamicEid> dynamic_eid;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Lisp::Mobility::Liveness> liveness;
        
}; // Native::Interface::Vlan::Lisp::Mobility


class Native::Interface::Vlan::Lisp::Mobility::Discover : public ydk::Entity
{
    public:
        Discover();
        ~Discover();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf arp; //type: boolean

}; // Native::Interface::Vlan::Lisp::Mobility::Discover


class Native::Interface::Vlan::Lisp::Mobility::DynamicEid : public ydk::Entity
{
    public:
        DynamicEid();
        ~DynamicEid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic_eid_name; //type: string
        ydk::YLeaf nbr_proxy_reply; //type: empty
        ydk::YLeaf requests; //type: uint8

}; // Native::Interface::Vlan::Lisp::Mobility::DynamicEid


class Native::Interface::Vlan::Lisp::Mobility::Liveness : public ydk::Entity
{
    public:
        Liveness();
        ~Liveness();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf test; //type: boolean
        ydk::YLeaf ttl; //type: uint8

}; // Native::Interface::Vlan::Lisp::Mobility::Liveness


class Native::Interface::Vlan::PrivateVlan : public ydk::Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mapping; //type: string

}; // Native::Interface::Vlan::PrivateVlan


class Native::Interface::Vlan::ServicePolicy : public ydk::Entity
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

        ydk::YLeaf history; //type: empty
        ydk::YLeaf input; //type: string
        ydk::YLeaf output; //type: string
        class Type; //type: Native::Interface::Vlan::ServicePolicy::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::ServicePolicy::Type> type;
        
}; // Native::Interface::Vlan::ServicePolicy


class Native::Interface::Vlan::ServicePolicy::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Control; //type: Native::Interface::Vlan::ServicePolicy::Type::Control
        class PerformanceMonitor; //type: Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor
        class ServiceChain; //type: Native::Interface::Vlan::ServicePolicy::Type::ServiceChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::ServicePolicy::Type::Control> control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor> performance_monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::ServicePolicy::Type::ServiceChain> service_chain;
        
}; // Native::Interface::Vlan::ServicePolicy::Type


class Native::Interface::Vlan::ServicePolicy::Type::Control : public ydk::Entity
{
    public:
        Control();
        ~Control();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber; //type: string

}; // Native::Interface::Vlan::ServicePolicy::Type::Control


class Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor : public ydk::Entity
{
    public:
        PerformanceMonitor();
        ~PerformanceMonitor();

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

}; // Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor


class Native::Interface::Vlan::ServicePolicy::Type::ServiceChain : public ydk::Entity
{
    public:
        ServiceChain();
        ~ServiceChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input
        class Output; //type: Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output> output;
        
}; // Native::Interface::Vlan::ServicePolicy::Type::ServiceChain


class Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

}; // Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input


class Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

}; // Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output


class Native::Interface::Vlan::ServiceRouting : public ydk::Entity
{
    public:
        ServiceRouting();
        ~ServiceRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MdnsSd; //type: Native::Interface::Vlan::ServiceRouting::MdnsSd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::ServiceRouting::MdnsSd> mdns_sd;
        
}; // Native::Interface::Vlan::ServiceRouting


class Native::Interface::Vlan::ServiceRouting::MdnsSd : public ydk::Entity
{
    public:
        MdnsSd();
        ~MdnsSd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Redistribute; //type: Native::Interface::Vlan::ServiceRouting::MdnsSd::Redistribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::ServiceRouting::MdnsSd::Redistribute> redistribute;
        
}; // Native::Interface::Vlan::ServiceRouting::MdnsSd


class Native::Interface::Vlan::ServiceRouting::MdnsSd::Redistribute : public ydk::Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mdns_sd; //type: empty
        ydk::YLeaf withdraw_only; //type: empty

}; // Native::Interface::Vlan::ServiceRouting::MdnsSd::Redistribute


class Native::Interface::Vlan::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarding; //type: string

}; // Native::Interface::Vlan::Vrf


class Native::Interface::Vlan::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarding; //type: string

}; // Native::Interface::Vlan::Vrf_


class Native::Interface::Vlan::Vrrp : public ydk::Entity
{
    public:
        Vrrp();
        ~Vrrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        class Ip; //type: Native::Interface::Vlan::Vrrp::Ip

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Vrrp::Ip> > ip;
        
}; // Native::Interface::Vlan::Vrrp


class Native::Interface::Vlan::Vrrp::Ip : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::Vlan::Vrrp::Ip


class Native::Interface::Vlan::ZoneMember : public ydk::Entity
{
    public:
        ZoneMember();
        ~ZoneMember();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf security; //type: string

}; // Native::Interface::Vlan::ZoneMember


class Native::Iox : public ydk::Entity
{
    public:
        Iox();
        ~Iox();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::Iox


class Native::Ip : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf subnet_zero; //type: boolean
        ydk::YLeaf host_routing; //type: empty
        ydk::YLeaf classless; //type: empty
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf default_gateway; //type: string
        ydk::YLeaf source_route; //type: boolean
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
        class GratuitousArpsConf; //type: Native::Ip::GratuitousArpsConf
        class Ftp; //type: Native::Ip::Ftp
        class Telnet; //type: Native::Ip::Telnet
        class Host; //type: Native::Ip::Host
        class Multicast; //type: Native::Ip::Multicast
        class NameServer; //type: Native::Ip::NameServer
        class Pim; //type: Native::Ip::Pim
        class PrefixList; //type: Native::Ip::PrefixList
        class Route; //type: Native::Ip::Route
        class Routing; //type: Native::Ip::Routing
        class ExplicitPath; //type: Native::Ip::ExplicitPath
        class Scp; //type: Native::Ip::Scp
        class Spd; //type: Native::Ip::Spd
        class Bootp; //type: Native::Ip::Bootp
        class Ssh; //type: Native::Ip::Ssh
        class Tcp; //type: Native::Ip::Tcp
        class Tftp; //type: Native::Ip::Tftp
        class AccessList; //type: Native::Ip::AccessList
        class Device; //type: Native::Ip::Device
        class Rsvp; //type: Native::Ip::Rsvp
        class Icmp; //type: Native::Ip::Icmp
        class Igmp; //type: Native::Ip::Igmp
        class Radius; //type: Native::Ip::Radius
        class Tacacs; //type: Native::Ip::Tacacs
        class Sla; //type: Native::Ip::Sla
        class Msdp; //type: Native::Ip::Msdp
        class McrConf; //type: Native::Ip::McrConf
        class MulticastRouting; //type: Native::Ip::MulticastRouting
        class Mroute; //type: Native::Ip::Mroute
        class Wccp; //type: Native::Ip::Wccp
        class Http; //type: Native::Ip::Http
        class CommunityList; //type: Native::Ip::CommunityList
        class ExtcommunityList; //type: Native::Ip::ExtcommunityList
        class Nbar; //type: Native::Ip::Nbar
        class Nat; //type: Native::Ip::Nat

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList> access_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Admission> admission;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AsPath> as_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::BgpCommunity> bgp_community;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Bootp> bootp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef> cef; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList> community_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Device> device;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Domain> domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::DomainList> domain_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::DomainLookup> domain_lookup; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::DomainLookupConf> domain_lookup_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExplicitPath> explicit_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ExtcommunityList> extcommunity_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Finger> finger; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::ForwardProtocol> forward_protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ftp> ftp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::GratuitousArpsConf> gratuitous_arps_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Host> host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Http> http;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Icmp> icmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Igmp> igmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Local> local;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::McrConf> mcr_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Mroute> mroute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Msdp> msdp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Multicast> multicast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::MulticastRouting> multicast_routing; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::NameServer> name_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nat> nat;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar> nbar;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Pim> pim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::PrefixList> prefix_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Radius> radius;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rcmd> rcmd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Route> route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Routing> routing; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp> rsvp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Scp> scp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla> sla;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Spd> spd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Ssh> ssh;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tacacs> tacacs;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Telnet> telnet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Tftp> tftp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Vrf> > vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp> wccp;
        
}; // Native::Ip


class Native::Ip::AccessList : public ydk::Entity
{
    public:
        AccessList();
        ~AccessList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf match_local_traffic; //type: empty
        ydk::YLeaf persistent; //type: empty
        class Standard; //type: Native::Ip::AccessList::Standard
        class RoleBased; //type: Native::Ip::AccessList::RoleBased
        class Extended; //type: Native::Ip::AccessList::Extended
        class Helper; //type: Native::Ip::AccessList::Helper
        class LogUpdate; //type: Native::Ip::AccessList::LogUpdate
        class Logging; //type: Native::Ip::AccessList::Logging
        class Resequence; //type: Native::Ip::AccessList::Resequence

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended> > extended;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Helper> helper;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::LogUpdate> log_update;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Resequence> resequence;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased> > role_based;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard> > standard;
        
}; // Native::Ip::AccessList


class Native::Ip::AccessList::Extended : public ydk::Entity
{
    public:
        Extended();
        ~Extended();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: one of string, uint16
        class AccessListSeqRule; //type: Native::Ip::AccessList::Extended::AccessListSeqRule
        class Default_; //type: Native::Ip::AccessList::Extended::Default_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule> > access_list_seq_rule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_> default_;
        
}; // Native::Ip::AccessList::Extended


class Native::Ip::AccessList::Extended::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class AceRule; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::Extended::AccessListSeqRule


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule : public ydk::Entity
{
    public:
        AceRule();
        ~AceRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf protocol; //type: one of uint8, enumeration
        ydk::YLeaf object_group_str; //type: string
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf object_group; //type: string
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        ydk::YLeaf dest_ipv4_address; //type: string
        ydk::YLeaf dest_mask; //type: string
        ydk::YLeaf dst_any; //type: empty
        ydk::YLeaf dst_host; //type: string
        ydk::YLeaf dst_object_group; //type: string
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf option; //type: one of uint8, enumeration
        ydk::YLeaf precedence; //type: one of uint8, enumeration
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf tos; //type: one of uint8, enumeration
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf msg_type; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Ttl; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny> match_any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl> ttl;
                class Action;
        class Protocol;
        class Option;
        class Precedence;
        class Tos;
        class NamedMsgType;

}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll : public ydk::Entity
{
    public:
        MatchAll();
        ~MatchAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny : public ydk::Entity
{
    public:
        MatchAny();
        ~MatchAny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eq; //type: uint8
        ydk::YLeaf gt; //type: uint8
        ydk::YLeaf lt; //type: uint8
        ydk::YLeaf neq; //type: uint8
        class Range; //type: Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value1; //type: uint8
        ydk::YLeaf value2; //type: uint8

}; // Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::Extended::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessListSeqRule; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule> > access_list_seq_rule;
        
}; // Native::Ip::AccessList::Extended::Default_


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class AceRule; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule : public ydk::Entity
{
    public:
        AceRule();
        ~AceRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf protocol; //type: one of uint8, enumeration
        ydk::YLeaf object_group_str; //type: string
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf object_group; //type: string
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        ydk::YLeaf dest_ipv4_address; //type: string
        ydk::YLeaf dest_mask; //type: string
        ydk::YLeaf dst_any; //type: empty
        ydk::YLeaf dst_host; //type: string
        ydk::YLeaf dst_object_group; //type: string
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf option; //type: one of uint8, enumeration
        ydk::YLeaf precedence; //type: one of uint8, enumeration
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf tos; //type: one of uint8, enumeration
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf msg_type; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Ttl; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny> match_any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl> ttl;
                class Action;
        class Protocol;
        class Option;
        class Precedence;
        class Tos;
        class NamedMsgType;

}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll : public ydk::Entity
{
    public:
        MatchAll();
        ~MatchAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny : public ydk::Entity
{
    public:
        MatchAny();
        ~MatchAny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eq; //type: uint8
        ydk::YLeaf gt; //type: uint8
        ydk::YLeaf lt; //type: uint8
        ydk::YLeaf neq; //type: uint8
        class Range; //type: Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value1; //type: uint8
        ydk::YLeaf value2; //type: uint8

}; // Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::Helper : public ydk::Entity
{
    public:
        Helper();
        ~Helper();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf egress; //type: empty
        ydk::YLeaf check; //type: empty

}; // Native::Ip::AccessList::Helper


class Native::Ip::AccessList::LogUpdate : public ydk::Entity
{
    public:
        LogUpdate();
        ~LogUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf threshold; //type: uint64

}; // Native::Ip::AccessList::LogUpdate


class Native::Ip::AccessList::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hash_generation; //type: empty
        ydk::YLeaf interval; //type: uint64

}; // Native::Ip::AccessList::Logging


class Native::Ip::AccessList::Resequence : public ydk::Entity
{
    public:
        Resequence();
        ~Resequence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf numbers; //type: union
        ydk::YLeaf start_seq_no; //type: uint64
        ydk::YLeaf step_seq_no; //type: uint64

}; // Native::Ip::AccessList::Resequence


class Native::Ip::AccessList::RoleBased : public ydk::Entity
{
    public:
        RoleBased();
        ~RoleBased();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class AccessListSeqRule; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule
        class Default_; //type: Native::Ip::AccessList::RoleBased::Default_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule> > access_list_seq_rule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_> default_;
        
}; // Native::Ip::AccessList::RoleBased


class Native::Ip::AccessList::RoleBased::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class AceRule; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule : public ydk::Entity
{
    public:
        AceRule();
        ~AceRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf protocol; //type: one of uint8, enumeration
        ydk::YLeaf object_group_str; //type: string
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf option; //type: one of uint8, enumeration
        ydk::YLeaf precedence; //type: one of uint8, enumeration
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf tos; //type: one of uint8, enumeration
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf msg_type; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Ttl; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny> match_any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl> ttl;
                class Action;
        class Protocol;
        class Option;
        class Precedence;
        class Tos;
        class NamedMsgType;

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll : public ydk::Entity
{
    public:
        MatchAll();
        ~MatchAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny : public ydk::Entity
{
    public:
        MatchAny();
        ~MatchAny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eq; //type: uint8
        ydk::YLeaf gt; //type: uint8
        ydk::YLeaf lt; //type: uint8
        ydk::YLeaf neq; //type: uint8
        class Range; //type: Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value1; //type: uint8
        ydk::YLeaf value2; //type: uint8

}; // Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::RoleBased::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessListSeqRule; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule> > access_list_seq_rule;
        
}; // Native::Ip::AccessList::RoleBased::Default_


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class AceRule; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule : public ydk::Entity
{
    public:
        AceRule();
        ~AceRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: Action
        ydk::YLeaf protocol; //type: one of uint8, enumeration
        ydk::YLeaf object_group_str; //type: string
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf option; //type: one of uint8, enumeration
        ydk::YLeaf precedence; //type: one of uint8, enumeration
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf tos; //type: one of uint8, enumeration
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf msg_type; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Ttl; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl
        class MatchAll; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll
        class MatchAny; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll> match_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny> match_any;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl> ttl;
                class Action;
        class Protocol;
        class Option;
        class Precedence;
        class Tos;
        class NamedMsgType;

}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll : public ydk::Entity
{
    public:
        MatchAll();
        ~MatchAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny : public ydk::Entity
{
    public:
        MatchAny();
        ~MatchAny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf plusack; //type: empty
        ydk::YLeaf plusfin; //type: empty
        ydk::YLeaf pluspsh; //type: empty
        ydk::YLeaf plusrst; //type: empty
        ydk::YLeaf plussyn; //type: empty
        ydk::YLeaf plusurg; //type: empty
        ydk::YLeaf minusack; //type: empty
        ydk::YLeaf minusfin; //type: empty
        ydk::YLeaf minuspsh; //type: empty
        ydk::YLeaf minusrst; //type: empty
        ydk::YLeaf minussyn; //type: empty
        ydk::YLeaf minusurg; //type: empty

}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eq; //type: uint8
        ydk::YLeaf gt; //type: uint8
        ydk::YLeaf lt; //type: uint8
        ydk::YLeaf neq; //type: uint8
        class Range; //type: Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range> range;
        
}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl


class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value1; //type: uint8
        ydk::YLeaf value2; //type: uint8

}; // Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range


class Native::Ip::AccessList::Standard : public ydk::Entity
{
    public:
        Standard();
        ~Standard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: one of string, uint16
        class AccessListSeqRule; //type: Native::Ip::AccessList::Standard::AccessListSeqRule
        class Default_; //type: Native::Ip::AccessList::Standard::Default_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule> > access_list_seq_rule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_> default_;
        
}; // Native::Ip::AccessList::Standard


class Native::Ip::AccessList::Standard::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class Deny; //type: Native::Ip::AccessList::Standard::AccessListSeqRule::Deny
        class Permit; //type: Native::Ip::AccessList::Standard::AccessListSeqRule::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule::Permit> permit;
        
}; // Native::Ip::AccessList::Standard::AccessListSeqRule


class Native::Ip::AccessList::Standard::AccessListSeqRule::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StdAce; //type: Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::AccessListSeqRule::Deny


class Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce : public ydk::Entity
{
    public:
        StdAce();
        ~StdAce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce


class Native::Ip::AccessList::Standard::AccessListSeqRule::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StdAce; //type: Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::AccessListSeqRule::Permit


class Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce : public ydk::Entity
{
    public:
        StdAce();
        ~StdAce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce


class Native::Ip::AccessList::Standard::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessListSeqRule; //type: Native::Ip::AccessList::Standard::Default_::AccessListSeqRule

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_::AccessListSeqRule> > access_list_seq_rule;
        
}; // Native::Ip::AccessList::Standard::Default_


class Native::Ip::AccessList::Standard::Default_::AccessListSeqRule : public ydk::Entity
{
    public:
        AccessListSeqRule();
        ~AccessListSeqRule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence; //type: uint64
        ydk::YLeaf remark; //type: string
        class Deny; //type: Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny
        class Permit; //type: Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit> permit;
        
}; // Native::Ip::AccessList::Standard::Default_::AccessListSeqRule


class Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StdAce; //type: Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny


class Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce : public ydk::Entity
{
    public:
        StdAce();
        ~StdAce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce


class Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StdAce; //type: Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce> std_ace;
        
}; // Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit


class Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce : public ydk::Entity
{
    public:
        StdAce();
        ~StdAce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_prefix; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf host; //type: string
        ydk::YLeaf log; //type: empty

}; // Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce


class Native::Ip::Admission : public ydk::Entity
{
    public:
        Admission();
        ~Admission();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class WatchList; //type: Native::Ip::Admission::WatchList
        class Name; //type: Native::Ip::Admission::Name

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Admission::Name> name;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Admission::WatchList> watch_list;
        
}; // Native::Ip::Admission


class Native::Ip::Admission::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Webauth; //type: Native::Ip::Admission::Name::Webauth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Admission::Name::Webauth> webauth;
        
}; // Native::Ip::Admission::Name


class Native::Ip::Admission::Name::Webauth : public ydk::Entity
{
    public:
        Webauth();
        ~Webauth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Proxy; //type: Native::Ip::Admission::Name::Webauth::Proxy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Admission::Name::Webauth::Proxy> proxy;
        
}; // Native::Ip::Admission::Name::Webauth


class Native::Ip::Admission::Name::Webauth::Proxy : public ydk::Entity
{
    public:
        Proxy();
        ~Proxy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf http; //type: empty

}; // Native::Ip::Admission::Name::Webauth::Proxy


class Native::Ip::Admission::WatchList : public ydk::Entity
{
    public:
        WatchList();
        ~WatchList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf expiry_time; //type: uint16

}; // Native::Ip::Admission::WatchList


class Native::Ip::Arp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Incomplete; //type: Native::Ip::Arp::Incomplete
        class Inspection; //type: Native::Ip::Arp::Inspection
        class Proxy; //type: Native::Ip::Arp::Proxy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp::Incomplete> incomplete;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp::Inspection> inspection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp::Proxy> proxy;
        
}; // Native::Ip::Arp


class Native::Ip::Arp::Incomplete : public ydk::Entity
{
    public:
        Incomplete();
        ~Incomplete();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entries; //type: uint32

}; // Native::Ip::Arp::Incomplete


class Native::Ip::Arp::Inspection : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vlan; //type: string
        class Filter; //type: Native::Ip::Arp::Inspection::Filter
        class Validate; //type: Native::Ip::Arp::Inspection::Validate
        class LogBuffer; //type: Native::Ip::Arp::Inspection::LogBuffer

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp::Inspection::Filter> > filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp::Inspection::LogBuffer> log_buffer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp::Inspection::Validate> validate;
        
}; // Native::Ip::Arp::Inspection


class Native::Ip::Arp::Inspection::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf arpacl; //type: string
        class Vlan; //type: Native::Ip::Arp::Inspection::Filter::Vlan

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp::Inspection::Filter::Vlan> > vlan;
        
}; // Native::Ip::Arp::Inspection::Filter


class Native::Ip::Arp::Inspection::Filter::Vlan : public ydk::Entity
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

        ydk::YLeaf vlan_range; //type: string
        ydk::YLeaf static_; //type: empty

}; // Native::Ip::Arp::Inspection::Filter::Vlan


class Native::Ip::Arp::Inspection::LogBuffer : public ydk::Entity
{
    public:
        LogBuffer();
        ~LogBuffer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entries; //type: uint16
        class Logs; //type: Native::Ip::Arp::Inspection::LogBuffer::Logs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp::Inspection::LogBuffer::Logs> logs;
        
}; // Native::Ip::Arp::Inspection::LogBuffer


class Native::Ip::Arp::Inspection::LogBuffer::Logs : public ydk::Entity
{
    public:
        Logs();
        ~Logs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf entries; //type: uint16
        ydk::YLeaf interval; //type: uint32

}; // Native::Ip::Arp::Inspection::LogBuffer::Logs


class Native::Ip::Arp::Inspection::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf src_mac; //type: empty
        ydk::YLeaf dst_mac; //type: empty
        ydk::YLeaf ip; //type: empty
        class Allow; //type: Native::Ip::Arp::Inspection::Validate::Allow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Arp::Inspection::Validate::Allow> allow;
        
}; // Native::Ip::Arp::Inspection::Validate


class Native::Ip::Arp::Inspection::Validate::Allow : public ydk::Entity
{
    public:
        Allow();
        ~Allow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf zeros; //type: empty

}; // Native::Ip::Arp::Inspection::Validate::Allow


class Native::Ip::Arp::Proxy : public ydk::Entity
{
    public:
        Proxy();
        ~Proxy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Ip::Arp::Proxy


class Native::Ip::AsPath : public ydk::Entity
{
    public:
        AsPath();
        ~AsPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AccessList; //type: Native::Ip::AsPath::AccessList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AsPath::AccessList> > access_list;
        
}; // Native::Ip::AsPath


class Native::Ip::AsPath::AccessList : public ydk::Entity
{
    public:
        AccessList();
        ~AccessList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: uint16
        class Deny; //type: Native::Ip::AsPath::AccessList::Deny
        class Permit; //type: Native::Ip::AsPath::AccessList::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AsPath::AccessList::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::AsPath::AccessList::Permit> permit;
        
}; // Native::Ip::AsPath::AccessList


class Native::Ip::AsPath::AccessList::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList deny_list; //type: list of  string

}; // Native::Ip::AsPath::AccessList::Deny


class Native::Ip::AsPath::AccessList::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList permit_list; //type: list of  string

}; // Native::Ip::AsPath::AccessList::Permit


class Native::Ip::BgpCommunity : public ydk::Entity
{
    public:
        BgpCommunity();
        ~BgpCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf new_format; //type: empty

}; // Native::Ip::BgpCommunity


class Native::Ip::Bootp : public ydk::Entity
{
    public:
        Bootp();
        ~Bootp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf server; //type: boolean

}; // Native::Ip::Bootp


class Native::Ip::Cef : public ydk::Entity
{
    public:
        Cef();
        ~Cef();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf distributed; //type: empty
        class Accounting; //type: Native::Ip::Cef::Accounting
        class Optimize; //type: Native::Ip::Cef::Optimize
        class TrafficStatistics; //type: Native::Ip::Cef::TrafficStatistics
        class LoadSharing; //type: Native::Ip::Cef::LoadSharing

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing> load_sharing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::Optimize> optimize;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::TrafficStatistics> traffic_statistics;
        
}; // Native::Ip::Cef


class Native::Ip::Cef::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf per_prefix; //type: empty
        ydk::YLeaf non_recursive; //type: empty
        ydk::YLeaf prefix_length; //type: empty
        ydk::YLeaf load_balance_hash; //type: empty

}; // Native::Ip::Cef::Accounting


class Native::Ip::Cef::LoadSharing : public ydk::Entity
{
    public:
        LoadSharing();
        ~LoadSharing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Algorithm; //type: Native::Ip::Cef::LoadSharing::Algorithm
        class KeyControl; //type: Native::Ip::Cef::LoadSharing::KeyControl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm> algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::KeyControl> key_control;
        
}; // Native::Ip::Cef::LoadSharing


class Native::Ip::Cef::LoadSharing::Algorithm : public ydk::Entity
{
    public:
        Algorithm();
        ~Algorithm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Universal; //type: Native::Ip::Cef::LoadSharing::Algorithm::Universal
        class Tunnel; //type: Native::Ip::Cef::LoadSharing::Algorithm::Tunnel
        class Original; //type: Native::Ip::Cef::LoadSharing::Algorithm::Original
        class IncludePorts; //type: Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts> include_ports; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::Original> original;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::Tunnel> tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::Universal> universal;
        
}; // Native::Ip::Cef::LoadSharing::Algorithm


class Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts : public ydk::Entity
{
    public:
        IncludePorts();
        ~IncludePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Destination; //type: Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination
        class Source; //type: Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination> destination; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source> source; // presence node
        
}; // Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts


class Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf fixed_id; //type: string

}; // Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination


class Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf fixed_id; //type: string
        class Destination; //type: Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination> destination; // presence node
        
}; // Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source


class Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf fixed_id; //type: string
        class Gtp; //type: Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp> gtp; // presence node
        
}; // Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination


class Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp : public ydk::Entity
{
    public:
        Gtp();
        ~Gtp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf fixed_id; //type: string

}; // Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp


class Native::Ip::Cef::LoadSharing::Algorithm::Original : public ydk::Entity
{
    public:
        Original();
        ~Original();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf original; //type: empty

}; // Native::Ip::Cef::LoadSharing::Algorithm::Original


class Native::Ip::Cef::LoadSharing::Algorithm::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tunnel; //type: empty
        ydk::YLeaf fixed_id; //type: string

}; // Native::Ip::Cef::LoadSharing::Algorithm::Tunnel


class Native::Ip::Cef::LoadSharing::Algorithm::Universal : public ydk::Entity
{
    public:
        Universal();
        ~Universal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf universal; //type: empty
        ydk::YLeaf fixed_id; //type: string

}; // Native::Ip::Cef::LoadSharing::Algorithm::Universal


class Native::Ip::Cef::LoadSharing::KeyControl : public ydk::Entity
{
    public:
        KeyControl();
        ~KeyControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // Native::Ip::Cef::LoadSharing::KeyControl


class Native::Ip::Cef::Optimize : public ydk::Entity
{
    public:
        Optimize();
        ~Optimize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Neighbor; //type: Native::Ip::Cef::Optimize::Neighbor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Cef::Optimize::Neighbor> neighbor;
        
}; // Native::Ip::Cef::Optimize


class Native::Ip::Cef::Optimize::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf resolution; //type: empty

}; // Native::Ip::Cef::Optimize::Neighbor


class Native::Ip::Cef::TrafficStatistics : public ydk::Entity
{
    public:
        TrafficStatistics();
        ~TrafficStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf load_interval; //type: uint16
        ydk::YLeaf update_rate; //type: uint16

}; // Native::Ip::Cef::TrafficStatistics


class Native::Ip::CommunityList : public ydk::Entity
{
    public:
        CommunityList();
        ~CommunityList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NumberStandard; //type: Native::Ip::CommunityList::NumberStandard
        class NumberExpanded; //type: Native::Ip::CommunityList::NumberExpanded
        class Expanded; //type: Native::Ip::CommunityList::Expanded
        class Standard; //type: Native::Ip::CommunityList::Standard

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::Expanded> > expanded;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberExpanded> > number_expanded;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberStandard> > number_standard;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::Standard> > standard;
        
}; // Native::Ip::CommunityList


class Native::Ip::CommunityList::Expanded : public ydk::Entity
{
    public:
        Expanded();
        ~Expanded();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class Deny; //type: Native::Ip::CommunityList::Expanded::Deny
        class Permit; //type: Native::Ip::CommunityList::Expanded::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::Expanded::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::Expanded::Permit> permit;
        
}; // Native::Ip::CommunityList::Expanded


class Native::Ip::CommunityList::Expanded::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList deny_list; //type: list of  string

}; // Native::Ip::CommunityList::Expanded::Deny


class Native::Ip::CommunityList::Expanded::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList permit_list; //type: list of  string

}; // Native::Ip::CommunityList::Expanded::Permit


class Native::Ip::CommunityList::NumberExpanded : public ydk::Entity
{
    public:
        NumberExpanded();
        ~NumberExpanded();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf no; //type: uint16
        class Deny; //type: Native::Ip::CommunityList::NumberExpanded::Deny
        class Permit; //type: Native::Ip::CommunityList::NumberExpanded::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberExpanded::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberExpanded::Permit> permit;
        
}; // Native::Ip::CommunityList::NumberExpanded


class Native::Ip::CommunityList::NumberExpanded::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList deny_list; //type: list of  string

}; // Native::Ip::CommunityList::NumberExpanded::Deny


class Native::Ip::CommunityList::NumberExpanded::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList permit_list; //type: list of  string

}; // Native::Ip::CommunityList::NumberExpanded::Permit


class Native::Ip::CommunityList::NumberStandard : public ydk::Entity
{
    public:
        NumberStandard();
        ~NumberStandard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf no; //type: uint16
        class Deny; //type: Native::Ip::CommunityList::NumberStandard::Deny
        class Permit; //type: Native::Ip::CommunityList::NumberStandard::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberStandard::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::NumberStandard::Permit> permit;
        
}; // Native::Ip::CommunityList::NumberStandard


class Native::Ip::CommunityList::NumberStandard::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList deny_list; //type: list of  one of union, enumeration

}; // Native::Ip::CommunityList::NumberStandard::Deny


class Native::Ip::CommunityList::NumberStandard::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList permit_list; //type: list of  one of union, enumeration

}; // Native::Ip::CommunityList::NumberStandard::Permit


class Native::Ip::CommunityList::Standard : public ydk::Entity
{
    public:
        Standard();
        ~Standard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class Deny; //type: Native::Ip::CommunityList::Standard::Deny
        class Permit; //type: Native::Ip::CommunityList::Standard::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::Standard::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::CommunityList::Standard::Permit> permit;
        
}; // Native::Ip::CommunityList::Standard


class Native::Ip::CommunityList::Standard::Deny : public ydk::Entity
{
    public:
        Deny();
        ~Deny();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList deny_list; //type: list of  one of union, enumeration

}; // Native::Ip::CommunityList::Standard::Deny


class Native::Ip::CommunityList::Standard::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList permit_list; //type: list of  one of union, enumeration

}; // Native::Ip::CommunityList::Standard::Permit


class Native::Ip::Device : public ydk::Entity
{
    public:
        Device();
        ~Device();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Tracking; //type: Native::Ip::Device::Tracking

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Device::Tracking> tracking; // presence node
        
}; // Native::Ip::Device


class Native::Ip::Device::Tracking : public ydk::Entity
{
    public:
        Tracking();
        ~Tracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf trace_buffer; //type: empty
        class Probe; //type: Native::Ip::Device::Tracking::Probe

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Device::Tracking::Probe> probe;
        
}; // Native::Ip::Device::Tracking


class Native::Ip::Device::Tracking::Probe : public ydk::Entity
{
    public:
        Probe();
        ~Probe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf count; //type: uint8
        ydk::YLeaf delay; //type: uint8
        ydk::YLeaf interval; //type: uint32
        class AutoSource; //type: Native::Ip::Device::Tracking::Probe::AutoSource

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Device::Tracking::Probe::AutoSource> auto_source; // presence node
        
}; // Native::Ip::Device::Tracking::Probe


class Native::Ip::Device::Tracking::Probe::AutoSource : public ydk::Entity
{
    public:
        AutoSource();
        ~AutoSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf override; //type: empty
        class Fallback; //type: Native::Ip::Device::Tracking::Probe::AutoSource::Fallback

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Device::Tracking::Probe::AutoSource::Fallback> fallback;
        
}; // Native::Ip::Device::Tracking::Probe::AutoSource


class Native::Ip::Device::Tracking::Probe::AutoSource::Fallback : public ydk::Entity
{
    public:
        Fallback();
        ~Fallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf src_ip; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::Ip::Device::Tracking::Probe::AutoSource::Fallback


class Native::Ip::Dhcp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf smart_relay; //type: empty
        class Bootp; //type: Native::Ip::Dhcp::Bootp
        class Class_; //type: Native::Ip::Dhcp::Class_
        class Conflict; //type: Native::Ip::Dhcp::Conflict
        class ExcludedAddress; //type: Native::Ip::Dhcp::ExcludedAddress
        class Relay; //type: Native::Ip::Dhcp::Relay
        class Pool; //type: Native::Ip::Dhcp::Pool
        class SnoopingConf; //type: Native::Ip::Dhcp::SnoopingConf
        class Snooping; //type: Native::Ip::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Bootp> bootp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Class_> > class_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Conflict> conflict;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::ExcludedAddress> > excluded_address;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool> > pool;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Relay> relay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping> snooping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::SnoopingConf> snooping_conf;
        
}; // Native::Ip::Dhcp


class Native::Ip::Dhcp::Bootp : public ydk::Entity
{
    public:
        Bootp();
        ~Bootp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ignore; //type: empty

}; // Native::Ip::Dhcp::Bootp


class Native::Ip::Dhcp::Class_ : public ydk::Entity
{
    public:
        Class_();
        ~Class_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf remark; //type: string
        class Relay; //type: Native::Ip::Dhcp::Class_::Relay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Class_::Relay> relay;
        
}; // Native::Ip::Dhcp::Class_


class Native::Ip::Dhcp::Class_::Relay : public ydk::Entity
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

        class Agent; //type: Native::Ip::Dhcp::Class_::Relay::Agent

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Class_::Relay::Agent> agent;
        
}; // Native::Ip::Dhcp::Class_::Relay


class Native::Ip::Dhcp::Class_::Relay::Agent : public ydk::Entity
{
    public:
        Agent();
        ~Agent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf information; //type: empty

}; // Native::Ip::Dhcp::Class_::Relay::Agent


class Native::Ip::Dhcp::Conflict : public ydk::Entity
{
    public:
        Conflict();
        ~Conflict();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf logging; //type: boolean
        class Resolution; //type: Native::Ip::Dhcp::Conflict::Resolution

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Conflict::Resolution> resolution; // presence node
        
}; // Native::Ip::Dhcp::Conflict


class Native::Ip::Dhcp::Conflict::Resolution : public ydk::Entity
{
    public:
        Resolution();
        ~Resolution();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint32

}; // Native::Ip::Dhcp::Conflict::Resolution


class Native::Ip::Dhcp::ExcludedAddress : public ydk::Entity
{
    public:
        ExcludedAddress();
        ~ExcludedAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf low_address; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf high_address; //type: string

}; // Native::Ip::Dhcp::ExcludedAddress


class Native::Ip::Dhcp::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeafList default_router; //type: list of  string
        ydk::YLeafList dns_server; //type: list of  string
        class Option; //type: Native::Ip::Dhcp::Pool::Option
        class Class_; //type: Native::Ip::Dhcp::Pool::Class_
        class Lease; //type: Native::Ip::Dhcp::Pool::Lease
        class Network; //type: Native::Ip::Dhcp::Pool::Network

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Class_> > class_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Lease> > lease;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Option> option;
        
}; // Native::Ip::Dhcp::Pool


class Native::Ip::Dhcp::Pool::Class_ : public ydk::Entity
{
    public:
        Class_();
        ~Class_();

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
        class Address; //type: Native::Ip::Dhcp::Pool::Class_::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Class_::Address> address;
        
}; // Native::Ip::Dhcp::Pool::Class_


class Native::Ip::Dhcp::Pool::Class_::Address : public ydk::Entity
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

        class Range; //type: Native::Ip::Dhcp::Pool::Class_::Address::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Class_::Address::Range> range;
        
}; // Native::Ip::Dhcp::Pool::Class_::Address


class Native::Ip::Dhcp::Pool::Class_::Address::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_start; //type: string
        ydk::YLeaf ipv4_end; //type: string

}; // Native::Ip::Dhcp::Pool::Class_::Address::Range


class Native::Ip::Dhcp::Pool::Lease : public ydk::Entity
{
    public:
        Lease();
        ~Lease();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf days; //type: uint16
        ydk::YLeaf hours; //type: uint8
        ydk::YLeaf minutes; //type: uint8

}; // Native::Ip::Dhcp::Pool::Lease


class Native::Ip::Dhcp::Pool::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf secondary; //type: empty

}; // Native::Ip::Dhcp::Pool::Network


class Native::Ip::Dhcp::Pool::Option : public ydk::Entity
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

        class OptionRange; //type: Native::Ip::Dhcp::Pool::Option::OptionRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Option::OptionRange> > option_range;
        
}; // Native::Ip::Dhcp::Pool::Option


class Native::Ip::Dhcp::Pool::Option::OptionRange : public ydk::Entity
{
    public:
        OptionRange();
        ~OptionRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option_range; //type: uint8
        ydk::YLeaf ascii; //type: string
        ydk::YLeafList ip; //type: list of  one of string, union
        class Hex; //type: Native::Ip::Dhcp::Pool::Option::OptionRange::Hex

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Pool::Option::OptionRange::Hex> hex;
        
}; // Native::Ip::Dhcp::Pool::Option::OptionRange


class Native::Ip::Dhcp::Pool::Option::OptionRange::Hex : public ydk::Entity
{
    public:
        Hex();
        ~Hex();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hex_line; //type: string
        ydk::YLeaf none; //type: empty

}; // Native::Ip::Dhcp::Pool::Option::OptionRange::Hex


class Native::Ip::Dhcp::Relay : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Information; //type: Native::Ip::Dhcp::Relay::Information

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Relay::Information> information;
        
}; // Native::Ip::Dhcp::Relay


class Native::Ip::Dhcp::Relay::Information : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf trust_all; //type: empty
        class Option; //type: Native::Ip::Dhcp::Relay::Information::Option

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Relay::Information::Option> option;
        
}; // Native::Ip::Dhcp::Relay::Information


class Native::Ip::Dhcp::Relay::Information::Option : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf option_default; //type: empty
        ydk::YLeaf vpn; //type: empty

}; // Native::Ip::Dhcp::Relay::Information::Option


class Native::Ip::Dhcp::Snooping : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vlan; //type: string
        class Database; //type: Native::Ip::Dhcp::Snooping::Database
        class Information; //type: Native::Ip::Dhcp::Snooping::Information
        class Track; //type: Native::Ip::Dhcp::Snooping::Track
        class Verify; //type: Native::Ip::Dhcp::Snooping::Verify

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Database> database;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Information> information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Track> track;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Verify> verify;
        
}; // Native::Ip::Dhcp::Snooping


class Native::Ip::Dhcp::Snooping::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf url; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf write_delay; //type: uint32

}; // Native::Ip::Dhcp::Snooping::Database


class Native::Ip::Dhcp::Snooping::Information : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf option_conf; //type: boolean
        class Option; //type: Native::Ip::Dhcp::Snooping::Information::Option

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Information::Option> option; // presence node
        
}; // Native::Ip::Dhcp::Snooping::Information


class Native::Ip::Dhcp::Snooping::Information::Option : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf allow_untrusted; //type: empty
        class Format; //type: Native::Ip::Dhcp::Snooping::Information::Option::Format

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Dhcp::Snooping::Information::Option::Format> format;
        
}; // Native::Ip::Dhcp::Snooping::Information::Option

class Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf igmp;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipinip;
        static const ydk::Enum::YLeaf nos;
        static const ydk::Enum::YLeaf object_group;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf pim;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add_ext;
        static const ydk::Enum::YLeaf any_options;
        static const ydk::Enum::YLeaf com_security;
        static const ydk::Enum::YLeaf dps;
        static const ydk::Enum::YLeaf encode;
        static const ydk::Enum::YLeaf eool;
        static const ydk::Enum::YLeaf ext_ip;
        static const ydk::Enum::YLeaf ext_security;
        static const ydk::Enum::YLeaf finn;
        static const ydk::Enum::YLeaf imitd;
        static const ydk::Enum::YLeaf lsr;
        static const ydk::Enum::YLeaf mtup;
        static const ydk::Enum::YLeaf mtur;
        static const ydk::Enum::YLeaf no_op;
        static const ydk::Enum::YLeaf nsapa;
        static const ydk::Enum::YLeaf record_route;
        static const ydk::Enum::YLeaf router_alert;
        static const ydk::Enum::YLeaf sdb;
        static const ydk::Enum::YLeaf security;
        static const ydk::Enum::YLeaf ssr;
        static const ydk::Enum::YLeaf stream_id;
        static const ydk::Enum::YLeaf timestamp;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ump;
        static const ydk::Enum::YLeaf visa;
        static const ydk::Enum::YLeaf zsu;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf routine;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max_reliability;
        static const ydk::Enum::YLeaf max_throughput;
        static const ydk::Enum::YLeaf min_delay;
        static const ydk::Enum::YLeaf min_monetary_cost;
        static const ydk::Enum::YLeaf normal;

};

class Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf administratively_prohibited;
        static const ydk::Enum::YLeaf alternate_address;
        static const ydk::Enum::YLeaf conversion_error;
        static const ydk::Enum::YLeaf dod_host_prohibited;
        static const ydk::Enum::YLeaf dod_net_prohibited;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf general_parameter_problem;
        static const ydk::Enum::YLeaf host_isolated;
        static const ydk::Enum::YLeaf host_precedence_unreachable;
        static const ydk::Enum::YLeaf host_redirect;
        static const ydk::Enum::YLeaf host_tos_redirect;
        static const ydk::Enum::YLeaf host_tos_unreachable;
        static const ydk::Enum::YLeaf host_unknown;
        static const ydk::Enum::YLeaf host_unreachable;
        static const ydk::Enum::YLeaf information_reply;
        static const ydk::Enum::YLeaf information_request;
        static const ydk::Enum::YLeaf mask_reply;
        static const ydk::Enum::YLeaf mask_request;
        static const ydk::Enum::YLeaf mobile_redirect;
        static const ydk::Enum::YLeaf net_redirect;
        static const ydk::Enum::YLeaf net_tos_redirect;
        static const ydk::Enum::YLeaf net_tos_unreachable;
        static const ydk::Enum::YLeaf net_unreachable;
        static const ydk::Enum::YLeaf network_unknown;
        static const ydk::Enum::YLeaf no_room_for_option;
        static const ydk::Enum::YLeaf option_missing;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf precedence_unreachable;
        static const ydk::Enum::YLeaf protocol_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_quench;
        static const ydk::Enum::YLeaf source_route_failed;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf timestamp_reply;
        static const ydk::Enum::YLeaf timestamp_request;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ttl_exceeded;
        static const ydk::Enum::YLeaf unreachable;

};

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf igmp;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipinip;
        static const ydk::Enum::YLeaf nos;
        static const ydk::Enum::YLeaf object_group;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf pim;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add_ext;
        static const ydk::Enum::YLeaf any_options;
        static const ydk::Enum::YLeaf com_security;
        static const ydk::Enum::YLeaf dps;
        static const ydk::Enum::YLeaf encode;
        static const ydk::Enum::YLeaf eool;
        static const ydk::Enum::YLeaf ext_ip;
        static const ydk::Enum::YLeaf ext_security;
        static const ydk::Enum::YLeaf finn;
        static const ydk::Enum::YLeaf imitd;
        static const ydk::Enum::YLeaf lsr;
        static const ydk::Enum::YLeaf mtup;
        static const ydk::Enum::YLeaf mtur;
        static const ydk::Enum::YLeaf no_op;
        static const ydk::Enum::YLeaf nsapa;
        static const ydk::Enum::YLeaf record_route;
        static const ydk::Enum::YLeaf router_alert;
        static const ydk::Enum::YLeaf sdb;
        static const ydk::Enum::YLeaf security;
        static const ydk::Enum::YLeaf ssr;
        static const ydk::Enum::YLeaf stream_id;
        static const ydk::Enum::YLeaf timestamp;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ump;
        static const ydk::Enum::YLeaf visa;
        static const ydk::Enum::YLeaf zsu;

};

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf routine;

};

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Tos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max_reliability;
        static const ydk::Enum::YLeaf max_throughput;
        static const ydk::Enum::YLeaf min_delay;
        static const ydk::Enum::YLeaf min_monetary_cost;
        static const ydk::Enum::YLeaf normal;

};

class Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf administratively_prohibited;
        static const ydk::Enum::YLeaf alternate_address;
        static const ydk::Enum::YLeaf conversion_error;
        static const ydk::Enum::YLeaf dod_host_prohibited;
        static const ydk::Enum::YLeaf dod_net_prohibited;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf general_parameter_problem;
        static const ydk::Enum::YLeaf host_isolated;
        static const ydk::Enum::YLeaf host_precedence_unreachable;
        static const ydk::Enum::YLeaf host_redirect;
        static const ydk::Enum::YLeaf host_tos_redirect;
        static const ydk::Enum::YLeaf host_tos_unreachable;
        static const ydk::Enum::YLeaf host_unknown;
        static const ydk::Enum::YLeaf host_unreachable;
        static const ydk::Enum::YLeaf information_reply;
        static const ydk::Enum::YLeaf information_request;
        static const ydk::Enum::YLeaf mask_reply;
        static const ydk::Enum::YLeaf mask_request;
        static const ydk::Enum::YLeaf mobile_redirect;
        static const ydk::Enum::YLeaf net_redirect;
        static const ydk::Enum::YLeaf net_tos_redirect;
        static const ydk::Enum::YLeaf net_tos_unreachable;
        static const ydk::Enum::YLeaf net_unreachable;
        static const ydk::Enum::YLeaf network_unknown;
        static const ydk::Enum::YLeaf no_room_for_option;
        static const ydk::Enum::YLeaf option_missing;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf precedence_unreachable;
        static const ydk::Enum::YLeaf protocol_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_quench;
        static const ydk::Enum::YLeaf source_route_failed;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf timestamp_reply;
        static const ydk::Enum::YLeaf timestamp_request;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ttl_exceeded;
        static const ydk::Enum::YLeaf unreachable;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf igmp;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipinip;
        static const ydk::Enum::YLeaf nos;
        static const ydk::Enum::YLeaf object_group;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf pim;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add_ext;
        static const ydk::Enum::YLeaf any_options;
        static const ydk::Enum::YLeaf com_security;
        static const ydk::Enum::YLeaf dps;
        static const ydk::Enum::YLeaf encode;
        static const ydk::Enum::YLeaf eool;
        static const ydk::Enum::YLeaf ext_ip;
        static const ydk::Enum::YLeaf ext_security;
        static const ydk::Enum::YLeaf finn;
        static const ydk::Enum::YLeaf imitd;
        static const ydk::Enum::YLeaf lsr;
        static const ydk::Enum::YLeaf mtup;
        static const ydk::Enum::YLeaf mtur;
        static const ydk::Enum::YLeaf no_op;
        static const ydk::Enum::YLeaf nsapa;
        static const ydk::Enum::YLeaf record_route;
        static const ydk::Enum::YLeaf router_alert;
        static const ydk::Enum::YLeaf sdb;
        static const ydk::Enum::YLeaf security;
        static const ydk::Enum::YLeaf ssr;
        static const ydk::Enum::YLeaf stream_id;
        static const ydk::Enum::YLeaf timestamp;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ump;
        static const ydk::Enum::YLeaf visa;
        static const ydk::Enum::YLeaf zsu;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf routine;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max_reliability;
        static const ydk::Enum::YLeaf max_throughput;
        static const ydk::Enum::YLeaf min_delay;
        static const ydk::Enum::YLeaf min_monetary_cost;
        static const ydk::Enum::YLeaf normal;

};

class Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf administratively_prohibited;
        static const ydk::Enum::YLeaf alternate_address;
        static const ydk::Enum::YLeaf conversion_error;
        static const ydk::Enum::YLeaf dod_host_prohibited;
        static const ydk::Enum::YLeaf dod_net_prohibited;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf general_parameter_problem;
        static const ydk::Enum::YLeaf host_isolated;
        static const ydk::Enum::YLeaf host_precedence_unreachable;
        static const ydk::Enum::YLeaf host_redirect;
        static const ydk::Enum::YLeaf host_tos_redirect;
        static const ydk::Enum::YLeaf host_tos_unreachable;
        static const ydk::Enum::YLeaf host_unknown;
        static const ydk::Enum::YLeaf host_unreachable;
        static const ydk::Enum::YLeaf information_reply;
        static const ydk::Enum::YLeaf information_request;
        static const ydk::Enum::YLeaf mask_reply;
        static const ydk::Enum::YLeaf mask_request;
        static const ydk::Enum::YLeaf mobile_redirect;
        static const ydk::Enum::YLeaf net_redirect;
        static const ydk::Enum::YLeaf net_tos_redirect;
        static const ydk::Enum::YLeaf net_tos_unreachable;
        static const ydk::Enum::YLeaf net_unreachable;
        static const ydk::Enum::YLeaf network_unknown;
        static const ydk::Enum::YLeaf no_room_for_option;
        static const ydk::Enum::YLeaf option_missing;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf precedence_unreachable;
        static const ydk::Enum::YLeaf protocol_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_quench;
        static const ydk::Enum::YLeaf source_route_failed;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf timestamp_reply;
        static const ydk::Enum::YLeaf timestamp_request;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ttl_exceeded;
        static const ydk::Enum::YLeaf unreachable;

};

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf igmp;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipinip;
        static const ydk::Enum::YLeaf nos;
        static const ydk::Enum::YLeaf object_group;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf pim;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf add_ext;
        static const ydk::Enum::YLeaf any_options;
        static const ydk::Enum::YLeaf com_security;
        static const ydk::Enum::YLeaf dps;
        static const ydk::Enum::YLeaf encode;
        static const ydk::Enum::YLeaf eool;
        static const ydk::Enum::YLeaf ext_ip;
        static const ydk::Enum::YLeaf ext_security;
        static const ydk::Enum::YLeaf finn;
        static const ydk::Enum::YLeaf imitd;
        static const ydk::Enum::YLeaf lsr;
        static const ydk::Enum::YLeaf mtup;
        static const ydk::Enum::YLeaf mtur;
        static const ydk::Enum::YLeaf no_op;
        static const ydk::Enum::YLeaf nsapa;
        static const ydk::Enum::YLeaf record_route;
        static const ydk::Enum::YLeaf router_alert;
        static const ydk::Enum::YLeaf sdb;
        static const ydk::Enum::YLeaf security;
        static const ydk::Enum::YLeaf ssr;
        static const ydk::Enum::YLeaf stream_id;
        static const ydk::Enum::YLeaf timestamp;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ump;
        static const ydk::Enum::YLeaf visa;
        static const ydk::Enum::YLeaf zsu;

};

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf routine;

};

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Tos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max_reliability;
        static const ydk::Enum::YLeaf max_throughput;
        static const ydk::Enum::YLeaf min_delay;
        static const ydk::Enum::YLeaf min_monetary_cost;
        static const ydk::Enum::YLeaf normal;

};

class Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf administratively_prohibited;
        static const ydk::Enum::YLeaf alternate_address;
        static const ydk::Enum::YLeaf conversion_error;
        static const ydk::Enum::YLeaf dod_host_prohibited;
        static const ydk::Enum::YLeaf dod_net_prohibited;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf general_parameter_problem;
        static const ydk::Enum::YLeaf host_isolated;
        static const ydk::Enum::YLeaf host_precedence_unreachable;
        static const ydk::Enum::YLeaf host_redirect;
        static const ydk::Enum::YLeaf host_tos_redirect;
        static const ydk::Enum::YLeaf host_tos_unreachable;
        static const ydk::Enum::YLeaf host_unknown;
        static const ydk::Enum::YLeaf host_unreachable;
        static const ydk::Enum::YLeaf information_reply;
        static const ydk::Enum::YLeaf information_request;
        static const ydk::Enum::YLeaf mask_reply;
        static const ydk::Enum::YLeaf mask_request;
        static const ydk::Enum::YLeaf mobile_redirect;
        static const ydk::Enum::YLeaf net_redirect;
        static const ydk::Enum::YLeaf net_tos_redirect;
        static const ydk::Enum::YLeaf net_tos_unreachable;
        static const ydk::Enum::YLeaf net_unreachable;
        static const ydk::Enum::YLeaf network_unknown;
        static const ydk::Enum::YLeaf no_room_for_option;
        static const ydk::Enum::YLeaf option_missing;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf precedence_unreachable;
        static const ydk::Enum::YLeaf protocol_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_quench;
        static const ydk::Enum::YLeaf source_route_failed;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf timestamp_reply;
        static const ydk::Enum::YLeaf timestamp_request;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf ttl_exceeded;
        static const ydk::Enum::YLeaf unreachable;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_76_ */

