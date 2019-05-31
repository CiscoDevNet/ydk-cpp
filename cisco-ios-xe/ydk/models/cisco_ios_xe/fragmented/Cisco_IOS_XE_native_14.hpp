#ifndef _CISCO_IOS_XE_NATIVE_14_
#define _CISCO_IOS_XE_NATIVE_14_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_13.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Vlan::Configuration::Ip : public ydk::Entity
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

        class Flow; //type: Native::Vlan::Configuration::Ip::Flow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Configuration::Ip::Flow> flow;
        
}; // Native::Vlan::Configuration::Ip


class Native::Vlan::Configuration::Ip::Flow : public ydk::Entity
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

        class Monitor; //type: Native::Vlan::Configuration::Ip::Flow::Monitor

        ydk::YList monitor;
        
}; // Native::Vlan::Configuration::Ip::Flow


class Native::Vlan::Configuration::Ip::Flow::Monitor : public ydk::Entity
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

        ydk::YLeaf flow_monitor; //type: string
        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty

}; // Native::Vlan::Configuration::Ip::Flow::Monitor


class Native::Vlan::Configuration::Ipv6 : public ydk::Entity
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

        class Nd; //type: Native::Vlan::Configuration::Ipv6::Nd
        class Dhcp; //type: Native::Vlan::Configuration::Ipv6::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Configuration::Ipv6::Nd> nd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Configuration::Ipv6::Dhcp> dhcp;
        
}; // Native::Vlan::Configuration::Ipv6


class Native::Vlan::Configuration::Ipv6::Nd : public ydk::Entity
{
    public:
        Nd();
        ~Nd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Suppress; //type: Native::Vlan::Configuration::Ipv6::Nd::Suppress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Configuration::Ipv6::Nd::Suppress> suppress; // presence node
        
}; // Native::Vlan::Configuration::Ipv6::Nd


class Native::Vlan::Configuration::Ipv6::Nd::Suppress : public ydk::Entity
{
    public:
        Suppress();
        ~Suppress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attach_policy; //type: string

}; // Native::Vlan::Configuration::Ipv6::Nd::Suppress


class Native::Vlan::Configuration::Ipv6::Dhcp : public ydk::Entity
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

        class Guard; //type: Native::Vlan::Configuration::Ipv6::Dhcp::Guard

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Configuration::Ipv6::Dhcp::Guard> guard; // presence node
        
}; // Native::Vlan::Configuration::Ipv6::Dhcp


class Native::Vlan::Configuration::Ipv6::Dhcp::Guard : public ydk::Entity
{
    public:
        Guard();
        ~Guard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attach_policy; //type: string

}; // Native::Vlan::Configuration::Ipv6::Dhcp::Guard


class Native::Vlan::Configuration::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vni; //type: uint32
        class EvpnInstance; //type: Native::Vlan::Configuration::Member::EvpnInstance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Configuration::Member::EvpnInstance> evpn_instance;
        
}; // Native::Vlan::Configuration::Member


class Native::Vlan::Configuration::Member::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evpn_instance; //type: uint16
        ydk::YLeaf vni; //type: uint32

}; // Native::Vlan::Configuration::Member::EvpnInstance


class Native::Vlan::Filter : public ydk::Entity
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

        ydk::YLeaf word; //type: string
        ydk::YLeaf vlan_list; //type: one of uint16, string

}; // Native::Vlan::Filter


class Native::Vlan::Accounting : public ydk::Entity
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

        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty

}; // Native::Vlan::Accounting


class Native::Vlan::Internal : public ydk::Entity
{
    public:
        Internal();
        ~Internal();

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

        class Allocation; //type: Native::Vlan::Internal::Allocation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Internal::Allocation> allocation;
        
}; // Native::Vlan::Internal


class Native::Vlan::Internal::Allocation : public ydk::Entity
{
    public:
        Allocation();
        ~Allocation();

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

        ydk::YLeaf policy; //type: Policy
        class Policy;

}; // Native::Vlan::Internal::Allocation


class Native::Vlan::Dot1q : public ydk::Entity
{
    public:
        Dot1q();
        ~Dot1q();

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

        class Tag; //type: Native::Vlan::Dot1q::Tag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Dot1q::Tag> tag;
        
}; // Native::Vlan::Dot1q


class Native::Vlan::Dot1q::Tag : public ydk::Entity
{
    public:
        Tag();
        ~Tag();

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

        ydk::YLeaf native; //type: empty

}; // Native::Vlan::Dot1q::Tag


class Native::Vlan::AccessLog : public ydk::Entity
{
    public:
        AccessLog();
        ~AccessLog();

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

        ydk::YLeaf maxflow; //type: uint16
        ydk::YLeaf ratelimit; //type: uint16
        ydk::YLeaf threshold; //type: uint32

}; // Native::Vlan::AccessLog


class Native::Vlan::Group : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class VlanList; //type: Native::Vlan::Group::VlanList

        ydk::YList vlan_list;
        
}; // Native::Vlan::Group


class Native::Vlan::Group::VlanList : public ydk::Entity
{
    public:
        VlanList();
        ~VlanList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: one of uint16, string

}; // Native::Vlan::Group::VlanList


class Native::Vlan::VlanList : public ydk::Entity
{
    public:
        VlanList();
        ~VlanList();

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

        ydk::YLeaf id; //type: one of uint16, string
        ydk::YLeaf remote_span; //type: empty
        ydk::YLeaf name; //type: string
        ydk::YLeaf state; //type: State
        ydk::YLeaf uni_vlan; //type: UniVlan
        class PrivateVlan; //type: Native::Vlan::VlanList::PrivateVlan
        class Lldp; //type: Native::Vlan::VlanList::Lldp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::VlanList::PrivateVlan> private_vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::VlanList::Lldp> lldp;
                class State;
        class UniVlan;

}; // Native::Vlan::VlanList


class Native::Vlan::VlanList::PrivateVlan : public ydk::Entity
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

        ydk::YLeaf primary; //type: empty
        ydk::YLeaf association; //type: string
        ydk::YLeaf community; //type: empty
        ydk::YLeaf isolated; //type: empty

}; // Native::Vlan::VlanList::PrivateVlan


class Native::Vlan::VlanList::Lldp : public ydk::Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf run; //type: empty

}; // Native::Vlan::VlanList::Lldp


class Native::Mvrp : public ydk::Entity
{
    public:
        Mvrp();
        ~Mvrp();

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

        ydk::YLeaf global; //type: empty
        class MacLearning; //type: Native::Mvrp::MacLearning
        class Vlan; //type: Native::Mvrp::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mvrp::MacLearning> mac_learning;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mvrp::Vlan> vlan;
        
}; // Native::Mvrp


class Native::Mvrp::MacLearning : public ydk::Entity
{
    public:
        MacLearning();
        ~MacLearning();

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

        ydk::YLeaf auto_; //type: empty

}; // Native::Mvrp::MacLearning


class Native::Mvrp::Vlan : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf create; //type: empty

}; // Native::Mvrp::Vlan


class Native::Avb : public ydk::Entity
{
    public:
        Avb();
        ~Avb();

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

        ydk::YLeaf strict; //type: empty

}; // Native::Avb


class Native::Ptp : public ydk::Entity
{
    public:
        Ptp();
        ~Ptp();

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

        ydk::YLeaf domain; //type: uint8
        ydk::YLeaf neighbor_propagation_delay_threshold; //type: uint32
        ydk::YLeaf priority1; //type: uint8
        ydk::YLeaf priority2; //type: uint8
        class Profile; //type: Native::Ptp::Profile
        class Mode; //type: Native::Ptp::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ptp::Profile> profile;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ptp::Mode> mode;
        
}; // Native::Ptp


class Native::Ptp::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        ydk::YLeaf dot1as; //type: empty

}; // Native::Ptp::Profile


class Native::Ptp::Mode : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf e2etransparent; //type: empty
        ydk::YLeaf p2ptransparent; //type: empty
        class Boundary; //type: Native::Ptp::Mode::Boundary

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ptp::Mode::Boundary> boundary;
        
}; // Native::Ptp::Mode


class Native::Ptp::Mode::Boundary : public ydk::Entity
{
    public:
        Boundary();
        ~Boundary();

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

        ydk::YLeaf delay_req; //type: empty
        ydk::YLeaf pdelay_req; //type: empty

}; // Native::Ptp::Mode::Boundary


class Native::Cdp : public ydk::Entity
{
    public:
        Cdp();
        ~Cdp();

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

        ydk::YLeaf holdtime; //type: uint8
        ydk::YLeaf timer; //type: uint8
        ydk::YLeaf run; //type: empty

}; // Native::Cdp


class Native::Avc : public ydk::Entity
{
    public:
        Avc();
        ~Avc();

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

        class SdService; //type: Native::Avc::SdService

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avc::SdService> sd_service; // presence node
        
}; // Native::Avc


class Native::Avc::SdService : public ydk::Entity
{
    public:
        SdService();
        ~SdService();

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

        ydk::YLeaf segment; //type: string
        class Controller; //type: Native::Avc::SdService::Controller

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avc::SdService::Controller> controller; // presence node
        
}; // Native::Avc::SdService


class Native::Avc::SdService::Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

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

        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf vrf; //type: string
        class Address; //type: Native::Avc::SdService::Controller::Address
        class DestinationPorts; //type: Native::Avc::SdService::Controller::DestinationPorts
        class SourceInterface; //type: Native::Avc::SdService::Controller::SourceInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avc::SdService::Controller::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avc::SdService::Controller::DestinationPorts> destination_ports;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avc::SdService::Controller::SourceInterface> source_interface;
        
}; // Native::Avc::SdService::Controller


class Native::Avc::SdService::Controller::Address : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Ipv4OrHostname; //type: Native::Avc::SdService::Controller::Address::Ipv4OrHostname

        ydk::YList ipv4_or_hostname;
        
}; // Native::Avc::SdService::Controller::Address


class Native::Avc::SdService::Controller::Address::Ipv4OrHostname : public ydk::Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

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

        ydk::YLeaf ipv4_or_hostname; //type: one of union, string
        ydk::YLeaf ipv4_or_hostname0; //type: one of union, string

}; // Native::Avc::SdService::Controller::Address::Ipv4OrHostname


class Native::Avc::SdService::Controller::DestinationPorts : public ydk::Entity
{
    public:
        DestinationPorts();
        ~DestinationPorts();

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

        ydk::YLeaf application_updates; //type: uint16
        ydk::YLeaf sensor_exporter; //type: uint16

}; // Native::Avc::SdService::Controller::DestinationPorts


class Native::Avc::SdService::Controller::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Avc::SdService::Controller::SourceInterface


class Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::Avc::SdService::Controller::SourceInterface::ATMSubinterface


class Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Avc::SdService::Controller::SourceInterface::ATMACRsubinterface


class Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::Avc::SdService::Controller::SourceInterface::LISPSubinterface


class Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::Avc::SdService::Controller::SourceInterface::PortChannelSubinterface


class Native::Policy : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class ClassMap; //type: Native::Policy::ClassMap
        class PolicyMap; //type: Native::Policy::PolicyMap

        ydk::YList class_map;
        ydk::YList policy_map;
        
}; // Native::Policy


class Native::Policy::ClassMap : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf subscriber; //type: empty
        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf prematch; //type: Prematch
        ydk::YLeaf description; //type: string
        class Match; //type: Native::Policy::ClassMap::Match
        class NoMatch; //type: Native::Policy::ClassMap::NoMatch

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch> no_match;
                class Type;
        class Protocol;
        class Prematch;

}; // Native::Policy::ClassMap


class Native::Policy::ClassMap::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf fr_de; //type: empty
        ydk::YLeaf non_client_nrt; //type: empty
        ydk::YLeaf peer; //type: string
        ydk::YLeaf client_type; //type: ClientType
        ydk::YLeaf device_type; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf oui; //type: string
        ydk::YLeaf port_type; //type: PortType
        ydk::YLeaf service_template; //type: string
        ydk::YLeaf session_type; //type: SessionType
        ydk::YLeaf sgt; //type: uint16
        ydk::YLeaf ssid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf timer; //type: string
        ydk::YLeaf user_role; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeafList class_map; //type: list of  string
        ydk::YLeafList cos; //type: list of  uint8
        ydk::YLeafList discard_class; //type: list of  uint8
        ydk::YLeafList dscp; //type: list of  one of enumeration, uint8
        ydk::YLeafList fr_dlci; //type: list of  uint16
        ydk::YLeafList input_interface; //type: list of  string
        ydk::YLeafList precedence; //type: list of  one of enumeration, uint8
        ydk::YLeafList qos_group; //type: list of  uint16
        class CurrentMethodPriority; //type: Native::Policy::ClassMap::Match::CurrentMethodPriority
        class Application; //type: Native::Policy::ClassMap::Match::Application
        class AccessGroup; //type: Native::Policy::ClassMap::Match::AccessGroup
        class DestinationAddress; //type: Native::Policy::ClassMap::Match::DestinationAddress
        class GroupObject; //type: Native::Policy::ClassMap::Match::GroupObject
        class Ip; //type: Native::Policy::ClassMap::Match::Ip
        class Mpls; //type: Native::Policy::ClassMap::Match::Mpls
        class Packet; //type: Native::Policy::ClassMap::Match::Packet
        class Protocol; //type: Native::Policy::ClassMap::Match::Protocol
        class SecurityGroup; //type: Native::Policy::ClassMap::Match::SecurityGroup
        class Service; //type: Native::Policy::ClassMap::Match::Service
        class SourceAddress; //type: Native::Policy::ClassMap::Match::SourceAddress
        class Vlan; //type: Native::Policy::ClassMap::Match::Vlan
        class ActivatedServiceTemplate; //type: Native::Policy::ClassMap::Match::ActivatedServiceTemplate
        class AuthorizationStatus; //type: Native::Policy::ClassMap::Match::AuthorizationStatus
        class AuthorizingMethodPriority; //type: Native::Policy::ClassMap::Match::AuthorizingMethodPriority
        class Method; //type: Native::Policy::ClassMap::Match::Method
        class ResultType; //type: Native::Policy::ClassMap::Match::ResultType
        class Not; //type: Native::Policy::ClassMap::Match::Not

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::CurrentMethodPriority> current_method_priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::AccessGroup> access_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::DestinationAddress> destination_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::GroupObject> group_object;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Packet> packet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol> protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::SecurityGroup> security_group;
        ydk::YList service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Vlan> vlan;
        ydk::YList activated_service_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::AuthorizationStatus> authorization_status;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::AuthorizingMethodPriority> authorizing_method_priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Method> method;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType> result_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not> not_;
                class ClientType;
        class PortType;
        class SessionType;

}; // Native::Policy::ClassMap::Match


class Native::Policy::ClassMap::Match::CurrentMethodPriority : public ydk::Entity
{
    public:
        CurrentMethodPriority();
        ~CurrentMethodPriority();

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

}; // Native::Policy::ClassMap::Match::CurrentMethodPriority


class Native::Policy::ClassMap::Match::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ApplicationGroup; //type: Native::Policy::ClassMap::Match::Application::ApplicationGroup
        class Attribute; //type: Native::Policy::ClassMap::Match::Application::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Application::ApplicationGroup> application_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Application::Attribute> attribute;
        
}; // Native::Policy::ClassMap::Match::Application


class Native::Policy::ClassMap::Match::Application::ApplicationGroup : public ydk::Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf telepresence_group; //type: empty
        ydk::YLeaf vmware_group; //type: empty
        ydk::YLeaf webex_group; //type: empty

}; // Native::Policy::ClassMap::Match::Application::ApplicationGroup


class Native::Policy::ClassMap::Match::Application::Attribute : public ydk::Entity
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

        ydk::YLeaf media_type; //type: MediaType
        class MediaType;

}; // Native::Policy::ClassMap::Match::Application::Attribute


class Native::Policy::ClassMap::Match::AccessGroup : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeafList name; //type: list of  string

}; // Native::Policy::ClassMap::Match::AccessGroup


class Native::Policy::ClassMap::Match::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList mac; //type: list of  string

}; // Native::Policy::ClassMap::Match::DestinationAddress


class Native::Policy::ClassMap::Match::GroupObject : public ydk::Entity
{
    public:
        GroupObject();
        ~GroupObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Security; //type: Native::Policy::ClassMap::Match::GroupObject::Security

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::GroupObject::Security> security;
        
}; // Native::Policy::ClassMap::Match::GroupObject


class Native::Policy::ClassMap::Match::GroupObject::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList source; //type: list of  string
        ydk::YLeafList destination; //type: list of  string

}; // Native::Policy::ClassMap::Match::GroupObject::Security


class Native::Policy::ClassMap::Match::Ip : public ydk::Entity
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

        ydk::YLeafList dscp; //type: list of  one of enumeration, uint8
        ydk::YLeafList precedence; //type: list of  one of enumeration, uint8
        class Rtp; //type: Native::Policy::ClassMap::Match::Ip::Rtp

        ydk::YList rtp;
        
}; // Native::Policy::ClassMap::Match::Ip


class Native::Policy::ClassMap::Match::Ip::Rtp : public ydk::Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port1; //type: uint16
        ydk::YLeaf port2; //type: uint16

}; // Native::Policy::ClassMap::Match::Ip::Rtp


class Native::Policy::ClassMap::Match::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Experimental; //type: Native::Policy::ClassMap::Match::Mpls::Experimental

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Mpls::Experimental> experimental;
        
}; // Native::Policy::ClassMap::Match::Mpls


class Native::Policy::ClassMap::Match::Mpls::Experimental : public ydk::Entity
{
    public:
        Experimental();
        ~Experimental();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList topmost; //type: list of  uint8

}; // Native::Policy::ClassMap::Match::Mpls::Experimental


class Native::Policy::ClassMap::Match::Packet : public ydk::Entity
{
    public:
        Packet();
        ~Packet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Length; //type: Native::Policy::ClassMap::Match::Packet::Length

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Packet::Length> length;
        
}; // Native::Policy::ClassMap::Match::Packet


class Native::Policy::ClassMap::Match::Packet::Length : public ydk::Entity
{
    public:
        Length();
        ~Length();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: uint16
        ydk::YLeaf min; //type: uint16

}; // Native::Policy::ClassMap::Match::Packet::Length


class Native::Policy::ClassMap::Match::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolsList; //type: Native::Policy::ClassMap::Match::Protocol::ProtocolsList
        class Attribute; //type: Native::Policy::ClassMap::Match::Protocol::Attribute

        ydk::YList protocols_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Attribute> attribute;
        
}; // Native::Policy::ClassMap::Match::Protocol


class Native::Policy::ClassMap::Match::Protocol::ProtocolsList : public ydk::Entity
{
    public:
        ProtocolsList();
        ~ProtocolsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocols; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::ProtocolsList


class Native::Policy::ClassMap::Match::Protocol::Attribute : public ydk::Entity
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

        class ApplicationGroup; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup
        class ApplicationSet; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet
        class BusinessRelevance; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance
        class Category; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::Category
        class Encrypted; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted
        class SubCategory; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory
        class TrafficClass; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass
        class Tunnel; //type: Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel

        ydk::YList application_group;
        ydk::YList application_set;
        ydk::YList business_relevance;
        ydk::YList category;
        ydk::YList encrypted;
        ydk::YList sub_category;
        ydk::YList traffic_class;
        ydk::YList tunnel;
        
}; // Native::Policy::ClassMap::Match::Protocol::Attribute


class Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup : public ydk::Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

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

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup


class Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet : public ydk::Entity
{
    public:
        ApplicationSet();
        ~ApplicationSet();

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

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet


class Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance : public ydk::Entity
{
    public:
        BusinessRelevance();
        ~BusinessRelevance();

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

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance


class Native::Policy::ClassMap::Match::Protocol::Attribute::Category : public ydk::Entity
{
    public:
        Category();
        ~Category();

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

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::Category


class Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted : public ydk::Entity
{
    public:
        Encrypted();
        ~Encrypted();

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

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted


class Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory : public ydk::Entity
{
    public:
        SubCategory();
        ~SubCategory();

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

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory


class Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass : public ydk::Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

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

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass


class Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel


class Native::Policy::ClassMap::Match::SecurityGroup : public ydk::Entity
{
    public:
        SecurityGroup();
        ~SecurityGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Destination; //type: Native::Policy::ClassMap::Match::SecurityGroup::Destination
        class Source; //type: Native::Policy::ClassMap::Match::SecurityGroup::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::SecurityGroup::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::SecurityGroup::Source> source;
        
}; // Native::Policy::ClassMap::Match::SecurityGroup


class Native::Policy::ClassMap::Match::SecurityGroup::Destination : public ydk::Entity
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

        ydk::YLeaf tag; //type: uint16

}; // Native::Policy::ClassMap::Match::SecurityGroup::Destination


class Native::Policy::ClassMap::Match::SecurityGroup::Source : public ydk::Entity
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

        ydk::YLeaf tag; //type: uint16

}; // Native::Policy::ClassMap::Match::SecurityGroup::Source


class Native::Policy::ClassMap::Match::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf efp; //type: uint16
        ydk::YLeaf instance; //type: empty
        ydk::YLeaf ethernet; //type: empty

}; // Native::Policy::ClassMap::Match::Service


class Native::Policy::ClassMap::Match::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList mac; //type: list of  string

}; // Native::Policy::ClassMap::Match::SourceAddress


class Native::Policy::ClassMap::Match::Vlan : public ydk::Entity
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

        ydk::YLeafList inner; //type: list of  one of uint16, string
        ydk::YLeafList value_; //type: list of  one of uint16, string

}; // Native::Policy::ClassMap::Match::Vlan


class Native::Policy::ClassMap::Match::ActivatedServiceTemplate : public ydk::Entity
{
    public:
        ActivatedServiceTemplate();
        ~ActivatedServiceTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_name; //type: string

}; // Native::Policy::ClassMap::Match::ActivatedServiceTemplate


class Native::Policy::ClassMap::Match::AuthorizationStatus : public ydk::Entity
{
    public:
        AuthorizationStatus();
        ~AuthorizationStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authorized; //type: empty
        ydk::YLeaf unauthorized; //type: empty

}; // Native::Policy::ClassMap::Match::AuthorizationStatus


class Native::Policy::ClassMap::Match::AuthorizingMethodPriority : public ydk::Entity
{
    public:
        AuthorizingMethodPriority();
        ~AuthorizingMethodPriority();

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

}; // Native::Policy::ClassMap::Match::AuthorizingMethodPriority


class Native::Policy::ClassMap::Match::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1x; //type: empty
        ydk::YLeaf mab; //type: empty
        ydk::YLeaf webauth; //type: empty

}; // Native::Policy::ClassMap::Match::Method


class Native::Policy::ClassMap::Match::ResultType : public ydk::Entity
{
    public:
        ResultType();
        ~ResultType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_timeout; //type: empty
        ydk::YLeaf agent_not_found; //type: empty
        ydk::YLeaf authoritative; //type: empty
        ydk::YLeaf method_timeout; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf success; //type: empty
        class Method; //type: Native::Policy::ClassMap::Match::ResultType::Method

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType::Method> method;
        
}; // Native::Policy::ClassMap::Match::ResultType


class Native::Policy::ClassMap::Match::ResultType::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1x; //type: Native::Policy::ClassMap::Match::ResultType::Method::Dot1x
        class Mab; //type: Native::Policy::ClassMap::Match::ResultType::Method::Mab
        class Webauth; //type: Native::Policy::ClassMap::Match::ResultType::Method::Webauth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType::Method::Dot1x> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType::Method::Mab> mab;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType::Method::Webauth> webauth;
        
}; // Native::Policy::ClassMap::Match::ResultType::Method


class Native::Policy::ClassMap::Match::ResultType::Method::Dot1x : public ydk::Entity
{
    public:
        Dot1x();
        ~Dot1x();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_timeout; //type: empty
        ydk::YLeaf agent_not_found; //type: empty
        ydk::YLeaf authoritative; //type: empty
        ydk::YLeaf method_timeout; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf success; //type: empty

}; // Native::Policy::ClassMap::Match::ResultType::Method::Dot1x


class Native::Policy::ClassMap::Match::ResultType::Method::Mab : public ydk::Entity
{
    public:
        Mab();
        ~Mab();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_timeout; //type: empty
        ydk::YLeaf agent_not_found; //type: empty
        ydk::YLeaf authoritative; //type: empty
        ydk::YLeaf method_timeout; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf success; //type: empty

}; // Native::Policy::ClassMap::Match::ResultType::Method::Mab


class Native::Policy::ClassMap::Match::ResultType::Method::Webauth : public ydk::Entity
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

        ydk::YLeaf aaa_timeout; //type: empty
        ydk::YLeaf agent_not_found; //type: empty
        ydk::YLeaf authoritative; //type: empty
        ydk::YLeaf method_timeout; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf success; //type: empty

}; // Native::Policy::ClassMap::Match::ResultType::Method::Webauth


class Native::Policy::ClassMap::Match::Not : public ydk::Entity
{
    public:
        Not();
        ~Not();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf any; //type: empty
        ydk::YLeaf fr_de; //type: empty
        ydk::YLeaf non_client_nrt; //type: empty
        ydk::YLeaf peer; //type: string
        ydk::YLeafList class_map; //type: list of  string
        ydk::YLeafList cos; //type: list of  uint8
        ydk::YLeafList discard_class; //type: list of  uint8
        ydk::YLeafList dscp; //type: list of  one of enumeration, uint8
        ydk::YLeafList fr_dlci; //type: list of  uint16
        ydk::YLeafList input_interface; //type: list of  string
        ydk::YLeafList precedence; //type: list of  one of enumeration, uint8
        ydk::YLeafList qos_group; //type: list of  uint16
        class CurrentMethodPriority; //type: Native::Policy::ClassMap::Match::Not::CurrentMethodPriority
        class Application; //type: Native::Policy::ClassMap::Match::Not::Application
        class AccessGroup; //type: Native::Policy::ClassMap::Match::Not::AccessGroup
        class DestinationAddress; //type: Native::Policy::ClassMap::Match::Not::DestinationAddress
        class GroupObject; //type: Native::Policy::ClassMap::Match::Not::GroupObject
        class Ip; //type: Native::Policy::ClassMap::Match::Not::Ip
        class Mpls; //type: Native::Policy::ClassMap::Match::Not::Mpls
        class Packet; //type: Native::Policy::ClassMap::Match::Not::Packet
        class Protocol; //type: Native::Policy::ClassMap::Match::Not::Protocol
        class SecurityGroup; //type: Native::Policy::ClassMap::Match::Not::SecurityGroup
        class Service; //type: Native::Policy::ClassMap::Match::Not::Service
        class SourceAddress; //type: Native::Policy::ClassMap::Match::Not::SourceAddress
        class Vlan; //type: Native::Policy::ClassMap::Match::Not::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::CurrentMethodPriority> current_method_priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::AccessGroup> access_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::DestinationAddress> destination_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::GroupObject> group_object;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Packet> packet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Protocol> protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::SecurityGroup> security_group;
        ydk::YList service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Vlan> vlan;
        
}; // Native::Policy::ClassMap::Match::Not


class Native::Policy::ClassMap::Match::Not::CurrentMethodPriority : public ydk::Entity
{
    public:
        CurrentMethodPriority();
        ~CurrentMethodPriority();

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

}; // Native::Policy::ClassMap::Match::Not::CurrentMethodPriority


class Native::Policy::ClassMap::Match::Not::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ApplicationGroup; //type: Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup
        class Attribute; //type: Native::Policy::ClassMap::Match::Not::Application::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup> application_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Application::Attribute> attribute;
        
}; // Native::Policy::ClassMap::Match::Not::Application


class Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup : public ydk::Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf telepresence_group; //type: empty
        ydk::YLeaf vmware_group; //type: empty
        ydk::YLeaf webex_group; //type: empty

}; // Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup


class Native::Policy::ClassMap::Match::Not::Application::Attribute : public ydk::Entity
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

        ydk::YLeaf media_type; //type: MediaType
        class MediaType;

}; // Native::Policy::ClassMap::Match::Not::Application::Attribute


class Native::Policy::ClassMap::Match::Not::AccessGroup : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeafList name; //type: list of  string

}; // Native::Policy::ClassMap::Match::Not::AccessGroup


class Native::Policy::ClassMap::Match::Not::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList mac; //type: list of  string

}; // Native::Policy::ClassMap::Match::Not::DestinationAddress


class Native::Policy::ClassMap::Match::Not::GroupObject : public ydk::Entity
{
    public:
        GroupObject();
        ~GroupObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Security; //type: Native::Policy::ClassMap::Match::Not::GroupObject::Security

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::GroupObject::Security> security;
        
}; // Native::Policy::ClassMap::Match::Not::GroupObject


class Native::Policy::ClassMap::Match::Not::GroupObject::Security : public ydk::Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList source; //type: list of  string
        ydk::YLeafList destination; //type: list of  string

}; // Native::Policy::ClassMap::Match::Not::GroupObject::Security


class Native::Policy::ClassMap::Match::Not::Ip : public ydk::Entity
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

        ydk::YLeafList dscp; //type: list of  one of enumeration, uint8
        ydk::YLeafList precedence; //type: list of  one of enumeration, uint8
        class Rtp; //type: Native::Policy::ClassMap::Match::Not::Ip::Rtp

        ydk::YList rtp;
        
}; // Native::Policy::ClassMap::Match::Not::Ip


class Native::Policy::ClassMap::Match::Not::Ip::Rtp : public ydk::Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port1; //type: uint16
        ydk::YLeaf port2; //type: uint16

}; // Native::Policy::ClassMap::Match::Not::Ip::Rtp


class Native::Policy::ClassMap::Match::Not::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Experimental; //type: Native::Policy::ClassMap::Match::Not::Mpls::Experimental

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Mpls::Experimental> experimental;
        
}; // Native::Policy::ClassMap::Match::Not::Mpls


class Native::Policy::ClassMap::Match::Not::Mpls::Experimental : public ydk::Entity
{
    public:
        Experimental();
        ~Experimental();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList topmost; //type: list of  uint8

}; // Native::Policy::ClassMap::Match::Not::Mpls::Experimental


class Native::Policy::ClassMap::Match::Not::Packet : public ydk::Entity
{
    public:
        Packet();
        ~Packet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Length; //type: Native::Policy::ClassMap::Match::Not::Packet::Length

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Packet::Length> length;
        
}; // Native::Policy::ClassMap::Match::Not::Packet


class Native::Policy::ClassMap::Match::Not::Packet::Length : public ydk::Entity
{
    public:
        Length();
        ~Length();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: uint16
        ydk::YLeaf min; //type: uint16

}; // Native::Policy::ClassMap::Match::Not::Packet::Length


class Native::Policy::ClassMap::Match::Not::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolsList; //type: Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList
        class Attribute; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute

        ydk::YList protocols_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::Protocol::Attribute> attribute;
        
}; // Native::Policy::ClassMap::Match::Not::Protocol


class Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList : public ydk::Entity
{
    public:
        ProtocolsList();
        ~ProtocolsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocols; //type: string

}; // Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute : public ydk::Entity
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

        class ApplicationGroup; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup
        class ApplicationSet; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet
        class BusinessRelevance; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance
        class Category; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category
        class Encrypted; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted
        class SubCategory; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory
        class TrafficClass; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass
        class Tunnel; //type: Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel

        ydk::YList application_group;
        ydk::YList application_set;
        ydk::YList business_relevance;
        ydk::YList category;
        ydk::YList encrypted;
        ydk::YList sub_category;
        ydk::YList traffic_class;
        ydk::YList tunnel;
        
}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup : public ydk::Entity
{
    public:
        ApplicationGroup();
        ~ApplicationGroup();

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

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet : public ydk::Entity
{
    public:
        ApplicationSet();
        ~ApplicationSet();

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

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance : public ydk::Entity
{
    public:
        BusinessRelevance();
        ~BusinessRelevance();

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

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category : public ydk::Entity
{
    public:
        Category();
        ~Category();

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

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted : public ydk::Entity
{
    public:
        Encrypted();
        ~Encrypted();

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

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory : public ydk::Entity
{
    public:
        SubCategory();
        ~SubCategory();

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

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass : public ydk::Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

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

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass


class Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel


class Native::Policy::ClassMap::Match::Not::SecurityGroup : public ydk::Entity
{
    public:
        SecurityGroup();
        ~SecurityGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Destination; //type: Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination
        class Source; //type: Native::Policy::ClassMap::Match::Not::SecurityGroup::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not::SecurityGroup::Source> source;
        
}; // Native::Policy::ClassMap::Match::Not::SecurityGroup


class Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination : public ydk::Entity
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

        ydk::YLeaf tag; //type: uint16

}; // Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination


class Native::Policy::ClassMap::Match::Not::SecurityGroup::Source : public ydk::Entity
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

        ydk::YLeaf tag; //type: uint16

}; // Native::Policy::ClassMap::Match::Not::SecurityGroup::Source


class Native::Policy::ClassMap::Match::Not::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf efp; //type: uint16
        ydk::YLeaf instance; //type: empty
        ydk::YLeaf ethernet; //type: empty

}; // Native::Policy::ClassMap::Match::Not::Service


class Native::Policy::ClassMap::Match::Not::SourceAddress : public ydk::Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList mac; //type: list of  string

}; // Native::Policy::ClassMap::Match::Not::SourceAddress


class Native::Policy::ClassMap::Match::Not::Vlan : public ydk::Entity
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

        ydk::YLeafList inner; //type: list of  one of uint16, string
        ydk::YLeafList value_; //type: list of  one of uint16, string

}; // Native::Policy::ClassMap::Match::Not::Vlan


class Native::Policy::ClassMap::NoMatch : public ydk::Entity
{
    public:
        NoMatch();
        ~NoMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_type; //type: ClientType
        ydk::YLeaf device_type; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf oui; //type: string
        ydk::YLeaf port_type; //type: PortType
        ydk::YLeaf service_template; //type: string
        ydk::YLeaf session_type; //type: SessionType
        ydk::YLeaf sgt; //type: uint16
        ydk::YLeaf ssid; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf timer; //type: string
        ydk::YLeaf user_role; //type: string
        ydk::YLeaf username; //type: string
        class ActivatedServiceTemplate; //type: Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate
        class AuthorizationStatus; //type: Native::Policy::ClassMap::NoMatch::AuthorizationStatus
        class AuthorizingMethodPriority; //type: Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority
        class Method; //type: Native::Policy::ClassMap::NoMatch::Method
        class ResultType; //type: Native::Policy::ClassMap::NoMatch::ResultType

        ydk::YList activated_service_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::AuthorizationStatus> authorization_status;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority> authorizing_method_priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::Method> method;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType> result_type;
                class ClientType;
        class PortType;
        class SessionType;

}; // Native::Policy::ClassMap::NoMatch


class Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate : public ydk::Entity
{
    public:
        ActivatedServiceTemplate();
        ~ActivatedServiceTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_name; //type: string

}; // Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate


class Native::Policy::ClassMap::NoMatch::AuthorizationStatus : public ydk::Entity
{
    public:
        AuthorizationStatus();
        ~AuthorizationStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authorized; //type: empty
        ydk::YLeaf unauthorized; //type: empty

}; // Native::Policy::ClassMap::NoMatch::AuthorizationStatus


class Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority : public ydk::Entity
{
    public:
        AuthorizingMethodPriority();
        ~AuthorizingMethodPriority();

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

}; // Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority


class Native::Policy::ClassMap::NoMatch::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1x; //type: empty
        ydk::YLeaf mab; //type: empty
        ydk::YLeaf webauth; //type: empty

}; // Native::Policy::ClassMap::NoMatch::Method


class Native::Policy::ClassMap::NoMatch::ResultType : public ydk::Entity
{
    public:
        ResultType();
        ~ResultType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_timeout; //type: empty
        ydk::YLeaf agent_not_found; //type: empty
        ydk::YLeaf authoritative; //type: empty
        ydk::YLeaf method_timeout; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf success; //type: empty
        class Method; //type: Native::Policy::ClassMap::NoMatch::ResultType::Method

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType::Method> method;
        
}; // Native::Policy::ClassMap::NoMatch::ResultType


class Native::Policy::ClassMap::NoMatch::ResultType::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1x; //type: Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x
        class Mab; //type: Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab
        class Webauth; //type: Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab> mab;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth> webauth;
        
}; // Native::Policy::ClassMap::NoMatch::ResultType::Method


class Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x : public ydk::Entity
{
    public:
        Dot1x();
        ~Dot1x();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_timeout; //type: empty
        ydk::YLeaf agent_not_found; //type: empty
        ydk::YLeaf authoritative; //type: empty
        ydk::YLeaf method_timeout; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf success; //type: empty

}; // Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1x


class Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab : public ydk::Entity
{
    public:
        Mab();
        ~Mab();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_timeout; //type: empty
        ydk::YLeaf agent_not_found; //type: empty
        ydk::YLeaf authoritative; //type: empty
        ydk::YLeaf method_timeout; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf success; //type: empty

}; // Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab


class Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth : public ydk::Entity
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

        ydk::YLeaf aaa_timeout; //type: empty
        ydk::YLeaf agent_not_found; //type: empty
        ydk::YLeaf authoritative; //type: empty
        ydk::YLeaf method_timeout; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf success; //type: empty

}; // Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth


class Native::Policy::PolicyMap : public ydk::Entity
{
    public:
        PolicyMap();
        ~PolicyMap();

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
        ydk::YLeaf type; //type: Type
        ydk::YLeaf subscriber; //type: empty
        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf description; //type: string
        ydk::YLeaf sequence_interval; //type: uint16
        class Event; //type: Native::Policy::PolicyMap::Event
        class Class; //type: Native::Policy::PolicyMap::Class

        ydk::YList event;
        ydk::YList class_;
                class Type;
        class Protocol;

}; // Native::Policy::PolicyMap


class Native::Policy::PolicyMap::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_type; //type: EventType
        ydk::YLeaf match_type; //type: MatchType
        class ClassNumber; //type: Native::Policy::PolicyMap::Event::ClassNumber

        ydk::YList class_number;
                class EventType;
        class MatchType;

}; // Native::Policy::PolicyMap::Event


class Native::Policy::PolicyMap::Event::ClassNumber : public ydk::Entity
{
    public:
        ClassNumber();
        ~ClassNumber();

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
        ydk::YLeaf class_; //type: one of enumeration, string
        ydk::YLeaf execution_type; //type: ExecutionType
        class ActionNumber; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber

        ydk::YList action_number;
                class Class_;
        class ExecutionType;

}; // Native::Policy::PolicyMap::Event::ClassNumber


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber : public ydk::Entity
{
    public:
        ActionNumber();
        ~ActionNumber();

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
        ydk::YLeaf replace; //type: empty
        ydk::YLeaf clear_session; //type: empty
        ydk::YLeaf authentication_restart; //type: uint16
        ydk::YLeaf authorize; //type: empty
        class Terminate; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate
        class Resume; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume
        class Pause; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause
        class Activate; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate
        class Authenticate; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate
        class Map; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate> terminate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume> resume;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause> pause;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate> activate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate> authenticate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map> map;
        
}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate : public ydk::Entity
{
    public:
        Terminate();
        ~Terminate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1x; //type: empty
        ydk::YLeaf mab; //type: empty
        ydk::YLeaf webauth; //type: empty

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume : public ydk::Entity
{
    public:
        Resume();
        ~Resume();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reauthentication; //type: empty

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause : public ydk::Entity
{
    public:
        Pause();
        ~Pause();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reauthentication; //type: empty

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate : public ydk::Entity
{
    public:
        Activate();
        ~Activate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_template; //type: string

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate : public ydk::Entity
{
    public:
        Authenticate();
        ~Authenticate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Using; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using> using_;
        
}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using : public ydk::Entity
{
    public:
        Using();
        ~Using();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf method; //type: Method
        ydk::YLeaf both; //type: empty
        ydk::YLeaf retries; //type: uint8
        ydk::YLeaf retry_time; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf parameter_map; //type: string
        class Method;

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map : public ydk::Entity
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

        class AttributeToService; //type: Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService> attribute_to_service;
        
}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map


class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService : public ydk::Entity
{
    public:
        AttributeToService();
        ~AttributeToService();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table; //type: string

}; // Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService


class Native::Policy::PolicyMap::Class : public ydk::Entity
{
    public:
        Class();
        ~Class();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of enumeration, string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf insert_before; //type: string
        ydk::YLeaf random_detect; //type: empty
        class AppnavPolicy; //type: Native::Policy::PolicyMap::Class::AppnavPolicy
        class Avc; //type: Native::Policy::PolicyMap::Class::Avc
        class Policy_; //type: Native::Policy::PolicyMap::Class::Policy_
        class ServicePolicy; //type: Native::Policy::PolicyMap::Class::ServicePolicy
        class PmPolicy; //type: Native::Policy::PolicyMap::Class::PmPolicy
        class InspectPolice; //type: Native::Policy::PolicyMap::Class::InspectPolice
        class ActionList; //type: Native::Policy::PolicyMap::Class::ActionList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::AppnavPolicy> appnav_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::Avc> avc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::Policy_> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::PmPolicy> pm_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::InspectPolice> inspect_police;
        ydk::YList action_list;
                class Type;

}; // Native::Policy::PolicyMap::Class


class Native::Policy::PolicyMap::Class::AppnavPolicy : public ydk::Entity
{
    public:
        AppnavPolicy();
        ~AppnavPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf monitor_load; //type: MonitorLoad
        ydk::YLeaf pass_through; //type: empty
        class Distribute; //type: Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute

        ydk::YList distribute;
                class MonitorLoad;

}; // Native::Policy::PolicyMap::Class::AppnavPolicy


class Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute : public ydk::Entity
{
    public:
        Distribute();
        ~Distribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_node_group; //type: string
        ydk::YLeaf insert_before; //type: string

}; // Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute


class Native::Policy::PolicyMap::Class::Avc : public ydk::Entity
{
    public:
        Avc();
        ~Avc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow; //type: empty
        ydk::YLeaf deny; //type: empty

}; // Native::Policy::PolicyMap::Class::Avc


class Native::Policy::PolicyMap::Class::Policy_ : public ydk::Entity
{
    public:
        Policy_();
        ~Policy_();

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
        ydk::YLeaf log; //type: empty
        ydk::YLeaf parameter_map; //type: string
        class Action;

}; // Native::Policy::PolicyMap::Class::Policy_


class Native::Policy::PolicyMap::Class::ServicePolicy : public ydk::Entity
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

        ydk::YLeaf type; //type: Type
        ydk::YLeaf policy_map; //type: string
        class Type;

}; // Native::Policy::PolicyMap::Class::ServicePolicy


class Native::Policy::PolicyMap::Class::PmPolicy : public ydk::Entity
{
    public:
        PmPolicy();
        ~PmPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flow; //type: Native::Policy::PolicyMap::Class::PmPolicy::Flow
        class Monitor; //type: Native::Policy::PolicyMap::Class::PmPolicy::Monitor
        class React; //type: Native::Policy::PolicyMap::Class::PmPolicy::React

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::PmPolicy::Flow> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::PmPolicy::Monitor> monitor;
        ydk::YList react;
        
}; // Native::Policy::PolicyMap::Class::PmPolicy


class Native::Policy::PolicyMap::Class::PmPolicy::Flow : public ydk::Entity
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

        ydk::YLeaf monitor; //type: string

}; // Native::Policy::PolicyMap::Class::PmPolicy::Flow


class Native::Policy::PolicyMap::Class::PmPolicy::Monitor : public ydk::Entity
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

        class Metric; //type: Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric> metric;
        
}; // Native::Policy::PolicyMap::Class::PmPolicy::Monitor


class Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rtp; //type: Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp> rtp;
        
}; // Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric


class Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp : public ydk::Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClockRate; //type: Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate

        ydk::YList clock_rate;
        
}; // Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp

class Native::Vlan::Internal::Allocation::Policy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ascending;
        static const ydk::Enum::YLeaf descending;

};

class Native::Vlan::VlanList::State : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf suspend;

};

class Native::Vlan::VlanList::UniVlan : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf community;
        static const ydk::Enum::YLeaf isolated;

};

class Native::Policy::ClassMap::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf access_control;
        static const ydk::Enum::YLeaf appnav;
        static const ydk::Enum::YLeaf control;
        static const ydk::Enum::YLeaf inspect;
        static const ydk::Enum::YLeaf multicast_flows;
        static const ydk::Enum::YLeaf stack;
        static const ydk::Enum::YLeaf traffic;

};

class Native::Policy::ClassMap::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aol;
        static const ydk::Enum::YLeaf edonkey;
        static const ydk::Enum::YLeaf fasttrack;
        static const ydk::Enum::YLeaf gnutella;
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf imap;
        static const ydk::Enum::YLeaf kazaa2;
        static const ydk::Enum::YLeaf msnmsgr;
        static const ydk::Enum::YLeaf pop3;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf sunrpc;
        static const ydk::Enum::YLeaf ymsgr;

};

class Native::Policy::ClassMap::Prematch : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_all;
        static const ydk::Enum::YLeaf match_any;
        static const ydk::Enum::YLeaf match_none;

};

class Native::Policy::ClassMap::Match::ClientType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf data;
        static const ydk::Enum::YLeaf switch_;
        static const ydk::Enum::YLeaf video;
        static const ydk::Enum::YLeaf voice;

};

class Native::Policy::ClassMap::Match::PortType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot11_port;
        static const ydk::Enum::YLeaf l2_port;
        static const ydk::Enum::YLeaf l3_port;

};

class Native::Policy::ClassMap::Match::SessionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wired;
        static const ydk::Enum::YLeaf wireless;

};

class Native::Policy::ClassMap::Match::Application::Attribute::MediaType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf audio;
        static const ydk::Enum::YLeaf audio_video;
        static const ydk::Enum::YLeaf control;
        static const ydk::Enum::YLeaf data;
        static const ydk::Enum::YLeaf video;

};

class Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf audio;
        static const ydk::Enum::YLeaf audio_video;
        static const ydk::Enum::YLeaf control;
        static const ydk::Enum::YLeaf data;
        static const ydk::Enum::YLeaf video;

};

class Native::Policy::ClassMap::NoMatch::ClientType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf data;
        static const ydk::Enum::YLeaf switch_;
        static const ydk::Enum::YLeaf video;
        static const ydk::Enum::YLeaf voice;

};

class Native::Policy::ClassMap::NoMatch::PortType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot11_port;
        static const ydk::Enum::YLeaf l2_port;
        static const ydk::Enum::YLeaf l3_port;

};

class Native::Policy::ClassMap::NoMatch::SessionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wired;
        static const ydk::Enum::YLeaf wireless;

};

class Native::Policy::PolicyMap::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf access_control;
        static const ydk::Enum::YLeaf appnav;
        static const ydk::Enum::YLeaf inspect;
        static const ydk::Enum::YLeaf control;
        static const ydk::Enum::YLeaf packet_service;
        static const ydk::Enum::YLeaf performance_monitor;
        static const ydk::Enum::YLeaf service;
        static const ydk::Enum::YLeaf service_chain;

};

class Native::Policy::PolicyMap::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf avc;
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf im;
        static const ydk::Enum::YLeaf imap;
        static const ydk::Enum::YLeaf p2p;
        static const ydk::Enum::YLeaf pop3;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf sunrpc;

};

class Native::Policy::PolicyMap::Event::EventType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aaa_available;
        static const ydk::Enum::YLeaf absolute_timeout;
        static const ydk::Enum::YLeaf agent_found;
        static const ydk::Enum::YLeaf authentication_failure;
        static const ydk::Enum::YLeaf authentication_success;
        static const ydk::Enum::YLeaf authorization_failure;
        static const ydk::Enum::YLeaf authorization_success;
        static const ydk::Enum::YLeaf identity_update;
        static const ydk::Enum::YLeaf inactivity_timeout;
        static const ydk::Enum::YLeaf remote_authentication_failure;
        static const ydk::Enum::YLeaf remote_authentication_success;
        static const ydk::Enum::YLeaf session_disconnected;
        static const ydk::Enum::YLeaf session_started;
        static const ydk::Enum::YLeaf tag_added;
        static const ydk::Enum::YLeaf tag_removed;
        static const ydk::Enum::YLeaf template_activated;
        static const ydk::Enum::YLeaf template_activation_failed;
        static const ydk::Enum::YLeaf template_deactivated;
        static const ydk::Enum::YLeaf template_deactivation_failed;
        static const ydk::Enum::YLeaf timer_expiry;
        static const ydk::Enum::YLeaf violation;

};

class Native::Policy::PolicyMap::Event::MatchType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_all;
        static const ydk::Enum::YLeaf match_first;

};

class Native::Policy::PolicyMap::Event::ClassNumber::Class_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;

};

class Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf do_all;
        static const ydk::Enum::YLeaf do_until_failure;
        static const ydk::Enum::YLeaf do_until_success;

};

class Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::Method : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot1x;
        static const ydk::Enum::YLeaf mab;
        static const ydk::Enum::YLeaf webauth;

};

class Native::Policy::PolicyMap::Class::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inspect;

};

class Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf MS_port_mapper;
        static const ydk::Enum::YLeaf cifs;
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf ica;
        static const ydk::Enum::YLeaf mapi;
        static const ydk::Enum::YLeaf nfs;
        static const ydk::Enum::YLeaf ssl;
        static const ydk::Enum::YLeaf video;

};

class Native::Policy::PolicyMap::Class::Policy_::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cxsc;
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf inspect;
        static const ydk::Enum::YLeaf pass;

};

class Native::Policy::PolicyMap::Class::ServicePolicy::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf avc;
        static const ydk::Enum::YLeaf gtpv0;
        static const ydk::Enum::YLeaf gtpv1;
        static const ydk::Enum::YLeaf imap;
        static const ydk::Enum::YLeaf pop3;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf sunrpc;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_14_ */

