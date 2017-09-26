#ifndef _CISCO_IOS_XE_NATIVE_61_
#define _CISCO_IOS_XE_NATIVE_61_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_56.hpp"
#include "Cisco_IOS_XE_native_60.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit : public ydk::Entity
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

        ydk::YLeaf duplicates; //type: empty

}; // Native::Interface::TenGigabitEthernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit


class Native::Interface::TenGigabitEthernet::SpanningTree : public ydk::Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bpdufilter; //type: Bpdufilter
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf guard; //type: Guard
        ydk::YLeaf link_type; //type: LinkType
        ydk::YLeaf port_priority; //type: uint8
        class Bpduguard; //type: Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard
        class Portfast; //type: Native::Interface::TenGigabitEthernet::SpanningTree::Portfast
        class Vlan; //type: Native::Interface::TenGigabitEthernet::SpanningTree::Vlan
        class Loopguard; //type: Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard
        class Mst; //type: Native::Interface::TenGigabitEthernet::SpanningTree::Mst

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard> loopguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SpanningTree::Mst> mst;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SpanningTree::Portfast> portfast; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SpanningTree::Vlan> vlan;
                class Bpdufilter;
        class Guard;
        class LinkType;

}; // Native::Interface::TenGigabitEthernet::SpanningTree


class Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard : public ydk::Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

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
        ydk::YLeaf enable; //type: empty

}; // Native::Interface::TenGigabitEthernet::SpanningTree::Bpduguard


class Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard : public ydk::Entity
{
    public:
        Loopguard();
        ~Loopguard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: empty

}; // Native::Interface::TenGigabitEthernet::SpanningTree::Loopguard


class Native::Interface::TenGigabitEthernet::SpanningTree::Mst : public ydk::Entity
{
    public:
        Mst();
        ~Mst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf port_priority; //type: uint16
        ydk::YLeaf pre_standard; //type: empty

}; // Native::Interface::TenGigabitEthernet::SpanningTree::Mst


class Native::Interface::TenGigabitEthernet::SpanningTree::Portfast : public ydk::Entity
{
    public:
        Portfast();
        ~Portfast();

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
        ydk::YLeaf trunk; //type: empty
        ydk::YLeaf edge; //type: empty

}; // Native::Interface::TenGigabitEthernet::SpanningTree::Portfast


class Native::Interface::TenGigabitEthernet::SpanningTree::Vlan : public ydk::Entity
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

        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf port_priority; //type: uint16
        ydk::YLeafList vlan_ids; //type: list of  one of string, uint16

}; // Native::Interface::TenGigabitEthernet::SpanningTree::Vlan


class Native::Interface::TenGigabitEthernet::Speed : public ydk::Entity
{
    public:
        Speed();
        ~Speed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_; //type: empty
        ydk::YLeaf value_10; //type: empty
        ydk::YLeaf value_100; //type: empty
        ydk::YLeaf value_1000; //type: empty
        ydk::YLeaf value_10000; //type: empty
        ydk::YLeaf nonegotiate; //type: empty

}; // Native::Interface::TenGigabitEthernet::Speed


class Native::Interface::TenGigabitEthernet::SrrQueue : public ydk::Entity
{
    public:
        SrrQueue();
        ~SrrQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bandwidth; //type: Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth> bandwidth;
        
}; // Native::Interface::TenGigabitEthernet::SrrQueue


class Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Shape; //type: Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape
        class Share; //type: Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape> shape;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share> share;
        
}; // Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth


class Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape : public ydk::Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight1; //type: uint16
        ydk::YLeaf weight2; //type: uint16
        ydk::YLeaf weight3; //type: uint16
        ydk::YLeaf weight4; //type: uint16

}; // Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Shape


class Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share : public ydk::Entity
{
    public:
        Share();
        ~Share();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf weight1; //type: uint8
        ydk::YLeaf weight2; //type: uint8
        ydk::YLeaf weight3; //type: uint8
        ydk::YLeaf weight4; //type: uint8

}; // Native::Interface::TenGigabitEthernet::SrrQueue::Bandwidth::Share


class Native::Interface::TenGigabitEthernet::Standby : public ydk::Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: Version
        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf mac_refresh; //type: uint8
        class Delay; //type: Native::Interface::TenGigabitEthernet::Standby::Delay
        class UseBia; //type: Native::Interface::TenGigabitEthernet::Standby::UseBia
        class StandbyList; //type: Native::Interface::TenGigabitEthernet::Standby::StandbyList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::Delay> delay;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::StandbyList> > standby_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::UseBia> use_bia; // presence node
                class Version;

}; // Native::Interface::TenGigabitEthernet::Standby


class Native::Interface::TenGigabitEthernet::Standby::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: uint16
        ydk::YLeaf reload; //type: uint16

}; // Native::Interface::TenGigabitEthernet::Standby::Delay


class Native::Interface::TenGigabitEthernet::Standby::StandbyList : public ydk::Entity
{
    public:
        StandbyList();
        ~StandbyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_number; //type: uint16
        ydk::YLeaf follow; //type: string
        ydk::YLeaf ipv6; //type: one of string, enumeration
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf priority; //type: uint8
        class Authentication; //type: Native::Interface::TenGigabitEthernet::Standby::StandbyList::Authentication
        class Ip; //type: Native::Interface::TenGigabitEthernet::Standby::StandbyList::Ip
        class Preempt; //type: Native::Interface::TenGigabitEthernet::Standby::StandbyList::Preempt
        class Redirect; //type: Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect
        class Timers; //type: Native::Interface::TenGigabitEthernet::Standby::StandbyList::Timers
        class Track; //type: Native::Interface::TenGigabitEthernet::Standby::StandbyList::Track

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::StandbyList::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::StandbyList::Ip> ip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::StandbyList::Preempt> preempt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect> redirect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::StandbyList::Timers> timers;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::StandbyList::Track> > track;
                class Ipv6;

}; // Native::Interface::TenGigabitEthernet::Standby::StandbyList


class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Authentication : public ydk::Entity
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

        ydk::YLeaf word; //type: string
        ydk::YLeaf text; //type: string
        class Md5; //type: Native::Interface::TenGigabitEthernet::Standby::StandbyList::Authentication::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::StandbyList::Authentication::Md5> md5;
        
}; // Native::Interface::TenGigabitEthernet::Standby::StandbyList::Authentication


class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Authentication::Md5 : public ydk::Entity
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

        ydk::YLeaf key_chain; //type: string
        class KeyString; //type: Native::Interface::TenGigabitEthernet::Standby::StandbyList::Authentication::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::StandbyList::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::TenGigabitEthernet::Standby::StandbyList::Authentication::Md5


class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Authentication::Md5::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        ydk::YLeaf timeout; //type: uint16
        class Encrypt;

}; // Native::Interface::TenGigabitEthernet::Standby::StandbyList::Authentication::Md5::KeyString


class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Ip : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::TenGigabitEthernet::Standby::StandbyList::Ip


class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Preempt : public ydk::Entity
{
    public:
        Preempt();
        ~Preempt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::TenGigabitEthernet::Standby::StandbyList::Preempt::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::StandbyList::Preempt::Delay> delay;
        
}; // Native::Interface::TenGigabitEthernet::Standby::StandbyList::Preempt


class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Preempt::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: uint16
        ydk::YLeaf reload; //type: uint16
        ydk::YLeaf sync; //type: uint16

}; // Native::Interface::TenGigabitEthernet::Standby::StandbyList::Preempt::Delay


class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect : public ydk::Entity
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

        ydk::YLeaf unknown; //type: empty
        class Advertisement; //type: Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Advertisement
        class Timers; //type: Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Timers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Advertisement> advertisement;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Timers> timers;
        
}; // Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect


class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Advertisement : public ydk::Entity
{
    public:
        Advertisement();
        ~Advertisement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authentication; //type: Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication> authentication;
        
}; // Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Advertisement


class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication : public ydk::Entity
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

        class Md5; //type: Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5> md5;
        
}; // Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication


class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5 : public ydk::Entity
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

        ydk::YLeaf key_chain; //type: string
        class KeyString; //type: Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5


class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString : public ydk::Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encrypt; //type: Encrypt
        ydk::YLeaf string; //type: string
        ydk::YLeaf timeout; //type: uint16
        class Encrypt;

}; // Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString


class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf advertisement; //type: uint16
        ydk::YLeaf holddown; //type: uint16

}; // Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Timers


class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelloInterval; //type: Native::Interface::TenGigabitEthernet::Standby::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::TenGigabitEthernet::Standby::StandbyList::Timers::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::TenGigabitEthernet::Standby::StandbyList::Timers


class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Timers::HelloInterval : public ydk::Entity
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

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::TenGigabitEthernet::Standby::StandbyList::Timers::HelloInterval


class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Timers::HoldTime : public ydk::Entity
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

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::TenGigabitEthernet::Standby::StandbyList::Timers::HoldTime


class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Track : public ydk::Entity
{
    public:
        Track();
        ~Track();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf decrement; //type: uint8
        ydk::YLeaf shutdown; //type: empty

}; // Native::Interface::TenGigabitEthernet::Standby::StandbyList::Track


class Native::Interface::TenGigabitEthernet::Standby::UseBia : public ydk::Entity
{
    public:
        UseBia();
        ~UseBia();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Scope; //type: Native::Interface::TenGigabitEthernet::Standby::UseBia::Scope

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby::UseBia::Scope> scope;
        
}; // Native::Interface::TenGigabitEthernet::Standby::UseBia


class Native::Interface::TenGigabitEthernet::Standby::UseBia::Scope : public ydk::Entity
{
    public:
        Scope();
        ~Scope();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: empty

}; // Native::Interface::TenGigabitEthernet::Standby::UseBia::Scope


class Native::Interface::TenGigabitEthernet::StormControl : public ydk::Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::TenGigabitEthernet::StormControl::Action
        class Broadcast; //type: Native::Interface::TenGigabitEthernet::StormControl::Broadcast
        class Multicast; //type: Native::Interface::TenGigabitEthernet::StormControl::Multicast
        class Unicast; //type: Native::Interface::TenGigabitEthernet::StormControl::Unicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::StormControl::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::StormControl::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::StormControl::Multicast> multicast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::StormControl::Unicast> unicast;
        
}; // Native::Interface::TenGigabitEthernet::StormControl


class Native::Interface::TenGigabitEthernet::StormControl::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: decimal64
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trap; //type: empty

}; // Native::Interface::TenGigabitEthernet::StormControl::Action


class Native::Interface::TenGigabitEthernet::StormControl::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Include; //type: Native::Interface::TenGigabitEthernet::StormControl::Broadcast::Include
        class Level; //type: Native::Interface::TenGigabitEthernet::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::StormControl::Broadcast::Include> include;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::StormControl::Broadcast::Level> level;
        
}; // Native::Interface::TenGigabitEthernet::StormControl::Broadcast


class Native::Interface::TenGigabitEthernet::StormControl::Broadcast::Include : public ydk::Entity
{
    public:
        Include();
        ~Include();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast; //type: empty

}; // Native::Interface::TenGigabitEthernet::StormControl::Broadcast::Include


class Native::Interface::TenGigabitEthernet::StormControl::Broadcast::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        class Bps; //type: Native::Interface::TenGigabitEthernet::StormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::TenGigabitEthernet::StormControl::Broadcast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::TenGigabitEthernet::StormControl::Broadcast::Level


class Native::Interface::TenGigabitEthernet::StormControl::Broadcast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::TenGigabitEthernet::StormControl::Broadcast::Level::Bps


class Native::Interface::TenGigabitEthernet::StormControl::Broadcast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::TenGigabitEthernet::StormControl::Broadcast::Level::Pps


class Native::Interface::TenGigabitEthernet::StormControl::Multicast : public ydk::Entity
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

        class Level; //type: Native::Interface::TenGigabitEthernet::StormControl::Multicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::StormControl::Multicast::Level> level;
        
}; // Native::Interface::TenGigabitEthernet::StormControl::Multicast


class Native::Interface::TenGigabitEthernet::StormControl::Multicast::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: decimal64
        class Bps; //type: Native::Interface::TenGigabitEthernet::StormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::TenGigabitEthernet::StormControl::Multicast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::StormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::StormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::TenGigabitEthernet::StormControl::Multicast::Level


class Native::Interface::TenGigabitEthernet::StormControl::Multicast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::TenGigabitEthernet::StormControl::Multicast::Level::Bps


class Native::Interface::TenGigabitEthernet::StormControl::Multicast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::TenGigabitEthernet::StormControl::Multicast::Level::Pps


class Native::Interface::TenGigabitEthernet::StormControl::Unicast : public ydk::Entity
{
    public:
        Unicast();
        ~Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::Interface::TenGigabitEthernet::StormControl::Unicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::StormControl::Unicast::Level> level;
        
}; // Native::Interface::TenGigabitEthernet::StormControl::Unicast


class Native::Interface::TenGigabitEthernet::StormControl::Unicast::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Threshold; //type: Native::Interface::TenGigabitEthernet::StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::TenGigabitEthernet::StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::TenGigabitEthernet::StormControl::Unicast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::StormControl::Unicast::Level::Pps> pps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::StormControl::Unicast::Level::Threshold> threshold;
        
}; // Native::Interface::TenGigabitEthernet::StormControl::Unicast::Level


class Native::Interface::TenGigabitEthernet::StormControl::Unicast::Level::Bps : public ydk::Entity
{
    public:
        Bps();
        ~Bps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::TenGigabitEthernet::StormControl::Unicast::Level::Bps


class Native::Interface::TenGigabitEthernet::StormControl::Unicast::Level::Pps : public ydk::Entity
{
    public:
        Pps();
        ~Pps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: string
        ydk::YLeaf falling_threshold; //type: string

}; // Native::Interface::TenGigabitEthernet::StormControl::Unicast::Level::Pps


class Native::Interface::TenGigabitEthernet::StormControl::Unicast::Level::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rising_threshold; //type: decimal64
        ydk::YLeaf falling_threshold; //type: decimal64

}; // Native::Interface::TenGigabitEthernet::StormControl::Unicast::Level::Threshold


class Native::Interface::TenGigabitEthernet::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Virtual_; //type: Native::Interface::TenGigabitEthernet::Switch_::Virtual_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switch_::Virtual_> virtual_;
        
}; // Native::Interface::TenGigabitEthernet::Switch_


class Native::Interface::TenGigabitEthernet::Switch_::Virtual_ : public ydk::Entity
{
    public:
        Virtual_();
        ~Virtual_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Switch_::Virtual_


class Native::Interface::TenGigabitEthernet::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nonegotiate; //type: empty
        ydk::YLeaf protected_; //type: empty
        ydk::YLeaf host; //type: empty
        class Access; //type: Native::Interface::TenGigabitEthernet::Switchport::Access
        class Block; //type: Native::Interface::TenGigabitEthernet::Switchport::Block
        class Mode; //type: Native::Interface::TenGigabitEthernet::Switchport::Mode
        class PortSecurity; //type: Native::Interface::TenGigabitEthernet::Switchport::PortSecurity
        class Trunk; //type: Native::Interface::TenGigabitEthernet::Switchport::Trunk
        class Voice; //type: Native::Interface::TenGigabitEthernet::Switchport::Voice
        class Priority; //type: Native::Interface::TenGigabitEthernet::Switchport::Priority
        class Autostate; //type: Native::Interface::TenGigabitEthernet::Switchport::Autostate
        class PrivateVlan; //type: Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan
        class DeviceTracking; //type: Native::Interface::TenGigabitEthernet::Switchport::DeviceTracking

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Autostate> autostate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::DeviceTracking> device_tracking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Priority> priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan> private_vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Trunk> trunk;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Voice> voice;
        
}; // Native::Interface::TenGigabitEthernet::Switchport


class Native::Interface::TenGigabitEthernet::Switchport::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::Interface::TenGigabitEthernet::Switchport::Access::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Access::Vlan> vlan;
        
}; // Native::Interface::TenGigabitEthernet::Switchport::Access


class Native::Interface::TenGigabitEthernet::Switchport::Access::Vlan : public ydk::Entity
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

        ydk::YLeaf vlan; //type: one of uint16, enumeration
        ydk::YLeaf name; //type: string
        class Vlan_;

}; // Native::Interface::TenGigabitEthernet::Switchport::Access::Vlan


class Native::Interface::TenGigabitEthernet::Switchport::Autostate : public ydk::Entity
{
    public:
        Autostate();
        ~Autostate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exclude; //type: empty

}; // Native::Interface::TenGigabitEthernet::Switchport::Autostate


class Native::Interface::TenGigabitEthernet::Switchport::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf unicast; //type: empty

}; // Native::Interface::TenGigabitEthernet::Switchport::Block


class Native::Interface::TenGigabitEthernet::Switchport::DeviceTracking : public ydk::Entity
{
    public:
        DeviceTracking();
        ~DeviceTracking();

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

}; // Native::Interface::TenGigabitEthernet::Switchport::DeviceTracking


class Native::Interface::TenGigabitEthernet::Switchport::Mode : public ydk::Entity
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

        ydk::YLeaf dynamic; //type: Dynamic
        class Access; //type: Native::Interface::TenGigabitEthernet::Switchport::Mode::Access
        class Dot1QTunnel; //type: Native::Interface::TenGigabitEthernet::Switchport::Mode::Dot1QTunnel
        class PrivateVlan; //type: Native::Interface::TenGigabitEthernet::Switchport::Mode::PrivateVlan
        class Trunk; //type: Native::Interface::TenGigabitEthernet::Switchport::Mode::Trunk

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Mode::Access> access; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Mode::Dot1QTunnel> dot1q_tunnel; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Mode::PrivateVlan> private_vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Mode::Trunk> trunk; // presence node
                class Dynamic;

}; // Native::Interface::TenGigabitEthernet::Switchport::Mode


class Native::Interface::TenGigabitEthernet::Switchport::Mode::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::TenGigabitEthernet::Switchport::Mode::Access


class Native::Interface::TenGigabitEthernet::Switchport::Mode::Dot1QTunnel : public ydk::Entity
{
    public:
        Dot1QTunnel();
        ~Dot1QTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::TenGigabitEthernet::Switchport::Mode::Dot1QTunnel


class Native::Interface::TenGigabitEthernet::Switchport::Mode::PrivateVlan : public ydk::Entity
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

        ydk::YLeaf host; //type: empty
        ydk::YLeaf promiscuous; //type: empty

}; // Native::Interface::TenGigabitEthernet::Switchport::Mode::PrivateVlan


class Native::Interface::TenGigabitEthernet::Switchport::Mode::Trunk : public ydk::Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::TenGigabitEthernet::Switchport::Mode::Trunk


class Native::Interface::TenGigabitEthernet::Switchport::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf violation; //type: Violation
        class Aging; //type: Native::Interface::TenGigabitEthernet::Switchport::PortSecurity::Aging
        class MacAddress; //type: Native::Interface::TenGigabitEthernet::Switchport::PortSecurity::MacAddress
        class Maximum; //type: Native::Interface::TenGigabitEthernet::Switchport::PortSecurity::Maximum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::PortSecurity::MacAddress> mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::PortSecurity::Maximum> maximum;
                class Violation;

}; // Native::Interface::TenGigabitEthernet::Switchport::PortSecurity


class Native::Interface::TenGigabitEthernet::Switchport::PortSecurity::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf static_; //type: empty
        ydk::YLeaf time; //type: uint16
        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Interface::TenGigabitEthernet::Switchport::PortSecurity::Aging


class Native::Interface::TenGigabitEthernet::Switchport::PortSecurity::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sticky; //type: empty
        ydk::YLeaf hw_address; //type: string
        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::TenGigabitEthernet::Switchport::PortSecurity::MacAddress


class Native::Interface::TenGigabitEthernet::Switchport::PortSecurity::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_addresses; //type: uint16
        ydk::YLeaf vlan; //type: string

}; // Native::Interface::TenGigabitEthernet::Switchport::PortSecurity::Maximum


class Native::Interface::TenGigabitEthernet::Switchport::Priority : public ydk::Entity
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

        class Extend; //type: Native::Interface::TenGigabitEthernet::Switchport::Priority::Extend

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Priority::Extend> extend;
        
}; // Native::Interface::TenGigabitEthernet::Switchport::Priority


class Native::Interface::TenGigabitEthernet::Switchport::Priority::Extend : public ydk::Entity
{
    public:
        Extend();
        ~Extend();

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
        ydk::YLeaf cos; //type: uint8

}; // Native::Interface::TenGigabitEthernet::Switchport::Priority::Extend


class Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan : public ydk::Entity
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

        class Association; //type: Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::Association
        class HostAssociation; //type: Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::HostAssociation
        class Mapping; //type: Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::Mapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::Association> association;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::HostAssociation> host_association;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::Mapping> mapping;
        
}; // Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan


class Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Host; //type: Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::Association::Host
        class Mapping; //type: Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::Association::Mapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::Association::Host> host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::Association::Mapping> mapping;
        
}; // Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::Association


class Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::Association::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary_range; //type: uint16
        ydk::YLeaf secondary_range; //type: uint16

}; // Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::Association::Host


class Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::Association::Mapping : public ydk::Entity
{
    public:
        Mapping();
        ~Mapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary_range; //type: uint16
        ydk::YLeaf secondary_range; //type: string
        ydk::YLeaf add; //type: string
        ydk::YLeaf remove; //type: string

}; // Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::Association::Mapping


class Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::HostAssociation : public ydk::Entity
{
    public:
        HostAssociation();
        ~HostAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary_range; //type: uint16
        ydk::YLeaf secondary_range; //type: uint16

}; // Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::HostAssociation


class Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::Mapping : public ydk::Entity
{
    public:
        Mapping();
        ~Mapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary_range; //type: uint16
        ydk::YLeaf secondary_range; //type: string
        ydk::YLeaf add; //type: string
        ydk::YLeaf remove; //type: string

}; // Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan::Mapping


class Native::Interface::TenGigabitEthernet::Switchport::Trunk : public ydk::Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation; //type: Encapsulation
        class Allowed; //type: Native::Interface::TenGigabitEthernet::Switchport::Trunk::Allowed
        class Native_; //type: Native::Interface::TenGigabitEthernet::Switchport::Trunk::Native_
        class Pruning; //type: Native::Interface::TenGigabitEthernet::Switchport::Trunk::Pruning

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Trunk::Allowed> allowed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Trunk::Native_> native;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Trunk::Pruning> pruning;
                class Encapsulation;

}; // Native::Interface::TenGigabitEthernet::Switchport::Trunk


class Native::Interface::TenGigabitEthernet::Switchport::Trunk::Allowed : public ydk::Entity
{
    public:
        Allowed();
        ~Allowed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::Interface::TenGigabitEthernet::Switchport::Trunk::Allowed::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Trunk::Allowed::Vlan> vlan;
        
}; // Native::Interface::TenGigabitEthernet::Switchport::Trunk::Allowed


class Native::Interface::TenGigabitEthernet::Switchport::Trunk::Allowed::Vlan : public ydk::Entity
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

        ydk::YLeaf vlans; //type: string
        ydk::YLeaf add; //type: one of string, uint16
        ydk::YLeaf all; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf remove; //type: one of string, uint16
        ydk::YLeafList except; //type: list of  one of string, uint16

}; // Native::Interface::TenGigabitEthernet::Switchport::Trunk::Allowed::Vlan


class Native::Interface::TenGigabitEthernet::Switchport::Trunk::Native_ : public ydk::Entity
{
    public:
        Native_();
        ~Native_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: one of uint16, enumeration
        class Vlan;

}; // Native::Interface::TenGigabitEthernet::Switchport::Trunk::Native_


class Native::Interface::TenGigabitEthernet::Switchport::Trunk::Pruning : public ydk::Entity
{
    public:
        Pruning();
        ~Pruning();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::Interface::TenGigabitEthernet::Switchport::Trunk::Pruning::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Trunk::Pruning::Vlan> vlan;
        
}; // Native::Interface::TenGigabitEthernet::Switchport::Trunk::Pruning


class Native::Interface::TenGigabitEthernet::Switchport::Trunk::Pruning::Vlan : public ydk::Entity
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

        ydk::YLeaf add; //type: one of string, uint16
        ydk::YLeaf none; //type: empty
        ydk::YLeaf remove; //type: one of string, uint16
        ydk::YLeafList vlans; //type: list of  one of string, uint16
        ydk::YLeafList except; //type: list of  one of string, uint16

}; // Native::Interface::TenGigabitEthernet::Switchport::Trunk::Pruning::Vlan


class Native::Interface::TenGigabitEthernet::Switchport::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::Interface::TenGigabitEthernet::Switchport::Voice::Vlan
        class Detect; //type: Native::Interface::TenGigabitEthernet::Switchport::Voice::Detect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Voice::Detect> detect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Voice::Vlan> vlan;
        
}; // Native::Interface::TenGigabitEthernet::Switchport::Voice


class Native::Interface::TenGigabitEthernet::Switchport::Voice::Detect : public ydk::Entity
{
    public:
        Detect();
        ~Detect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CiscoPhone; //type: Native::Interface::TenGigabitEthernet::Switchport::Voice::Detect::CiscoPhone

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Voice::Detect::CiscoPhone> cisco_phone; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Switchport::Voice::Detect


class Native::Interface::TenGigabitEthernet::Switchport::Voice::Detect::CiscoPhone : public ydk::Entity
{
    public:
        CiscoPhone();
        ~CiscoPhone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf full_duplex; //type: empty

}; // Native::Interface::TenGigabitEthernet::Switchport::Voice::Detect::CiscoPhone


class Native::Interface::TenGigabitEthernet::Switchport::Voice::Vlan : public ydk::Entity
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

        ydk::YLeaf vlan; //type: one of string, uint16, enumeration
        ydk::YLeaf name; //type: string
        class Vlan_;

}; // Native::Interface::TenGigabitEthernet::Switchport::Voice::Vlan


class Native::Interface::TenGigabitEthernet::SwitchportConf : public ydk::Entity
{
    public:
        SwitchportConf();
        ~SwitchportConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switchport; //type: boolean

}; // Native::Interface::TenGigabitEthernet::SwitchportConf


class Native::Interface::TenGigabitEthernet::Synchronous : public ydk::Entity
{
    public:
        Synchronous();
        ~Synchronous();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: empty

}; // Native::Interface::TenGigabitEthernet::Synchronous


class Native::Interface::TenGigabitEthernet::Trust : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Trust


class Native::Interface::TenGigabitEthernet::Udld : public ydk::Entity
{
    public:
        Udld();
        ~Udld();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Native::Interface::TenGigabitEthernet::Udld::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Udld::Port> port; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Udld


class Native::Interface::TenGigabitEthernet::Udld::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aggressive; //type: empty
        ydk::YLeaf disable; //type: empty

}; // Native::Interface::TenGigabitEthernet::Udld::Port


class Native::Interface::TenGigabitEthernet::Utd : public ydk::Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::Interface::TenGigabitEthernet::Utd


class Native::Interface::TenGigabitEthernet::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of string, uint16
        class ServicePolicy; //type: Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy> service_policy;
        
}; // Native::Interface::TenGigabitEthernet::VlanRange


class Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy : public ydk::Entity
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

        ydk::YLeaf input; //type: string
        ydk::YLeaf output; //type: string

}; // Native::Interface::TenGigabitEthernet::VlanRange::ServicePolicy


class Native::Interface::TenGigabitEthernet::Vrf : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Vrf


class Native::Interface::TenGigabitEthernet::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

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
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf manual; //type: empty
        ydk::YLeaf sequence; //type: Sequence
        ydk::YLeaf pw_class; //type: string
        class Encapsulation;
        class Sequence;

}; // Native::Interface::TenGigabitEthernet::Xconnect


class Native::Interface::TenGigabitEthernet::ZoneMember : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::ZoneMember


class Native::Interface::Tunnel : public ydk::Entity
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

        ydk::YLeaf name; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf keepalive; //type: boolean
        ydk::YLeaf if_state; //type: IfState
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf load_interval; //type: uint16
        ydk::YLeaf max_reserved_bandwidth; //type: uint8
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf service_insertion; //type: ServiceInsertion
        ydk::YLeaf nat66; //type: Nat66
        class SwitchportConf; //type: Native::Interface::Tunnel::SwitchportConf
        class Switchport; //type: Native::Interface::Tunnel::Switchport
        class Arp; //type: Native::Interface::Tunnel::Arp
        class Backup; //type: Native::Interface::Tunnel::Backup
        class Cemoudp; //type: Native::Interface::Tunnel::Cemoudp
        class CwsTunnel; //type: Native::Interface::Tunnel::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::Tunnel::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::Tunnel::Encapsulation
        class FairQueueConf; //type: Native::Interface::Tunnel::FairQueueConf
        class FairQueue; //type: Native::Interface::Tunnel::FairQueue
        class Flowcontrol; //type: Native::Interface::Tunnel::Flowcontrol
        class Isis; //type: Native::Interface::Tunnel::Isis
        class KeepaliveSettings; //type: Native::Interface::Tunnel::KeepaliveSettings
        class Bfd; //type: Native::Interface::Tunnel::Bfd
        class Bandwidth; //type: Native::Interface::Tunnel::Bandwidth
        class Dampening; //type: Native::Interface::Tunnel::Dampening
        class Domain; //type: Native::Interface::Tunnel::Domain
        class HoldQueue; //type: Native::Interface::Tunnel::HoldQueue
        class Mpls; //type: Native::Interface::Tunnel::Mpls
        class IpVrf; //type: Native::Interface::Tunnel::IpVrf
        class Vrf; //type: Native::Interface::Tunnel::Vrf
        class Ip; //type: Native::Interface::Tunnel::Ip
        class Ipv6; //type: Native::Interface::Tunnel::Ipv6
        class Logging; //type: Native::Interface::Tunnel::Logging
        class Mdix; //type: Native::Interface::Tunnel::Mdix
        class Mop; //type: Native::Interface::Tunnel::Mop
        class InterfaceQos; //type: Native::Interface::Tunnel::InterfaceQos
        class Standby; //type: Native::Interface::Tunnel::Standby
        class AccessSession; //type: Native::Interface::Tunnel::AccessSession
        class StormControl; //type: Native::Interface::Tunnel::StormControl
        class Trust; //type: Native::Interface::Tunnel::Trust
        class Utd; //type: Native::Interface::Tunnel::Utd
        class PriorityQueue; //type: Native::Interface::Tunnel::PriorityQueue
        class RcvQueue; //type: Native::Interface::Tunnel::RcvQueue
        class Peer; //type: Native::Interface::Tunnel::Peer
        class PmPath; //type: Native::Interface::Tunnel::PmPath
        class Qos; //type: Native::Interface::Tunnel::Qos
        class Snmp; //type: Native::Interface::Tunnel::Snmp
        class Nhrp; //type: Native::Interface::Tunnel::Nhrp
        class Tunnel_; //type: Native::Interface::Tunnel::Tunnel_
        class Crypto; //type: Native::Interface::Tunnel::Crypto
        class ServicePolicy; //type: Native::Interface::Tunnel::ServicePolicy
        class Lisp; //type: Native::Interface::Tunnel::Lisp
        class Cdp; //type: Native::Interface::Tunnel::Cdp
        class Udld; //type: Native::Interface::Tunnel::Udld
        class Cts; //type: Native::Interface::Tunnel::Cts
        class Performance; //type: Native::Interface::Tunnel::Performance
        class Ospfv3; //type: Native::Interface::Tunnel::Ospfv3
        class ZoneMember; //type: Native::Interface::Tunnel::ZoneMember

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::AccessSession> access_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Backup> backup;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cdp> cdp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cemoudp> cemoudp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Crypto> crypto;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cts> cts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::CwsTunnel> cws_tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Dampening> dampening;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Domain> domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::FairQueue> fair_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::FairQueueConf> fair_queue_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Flowcontrol> flowcontrol;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::HoldQueue> > hold_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::InterfaceQos> interface_qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::IpVrf> ip_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Mdix> mdix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Mop> mop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Nhrp> nhrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Ospfv3> ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Performance> performance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::PmPath> pm_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::PriorityQueue> priority_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Qos> qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::RcvQueue> rcv_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Snmp> snmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Standby> standby;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::SwitchportConf> switchport_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Trust> trust;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Tunnel_> tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Udld> udld;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Utd> utd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::ZoneMember> zone_member;
                class IfState;
        class ServiceInsertion;
        class Nat66;

}; // Native::Interface::Tunnel


class Native::Interface::Tunnel::AccessSession : public ydk::Entity
{
    public:
        AccessSession();
        ~AccessSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf closed; //type: empty
        ydk::YLeaf host_mode; //type: HostMode
        class PortControl; //type: Native::Interface::Tunnel::AccessSession::PortControl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::AccessSession::PortControl> port_control;
                class HostMode;

}; // Native::Interface::Tunnel::AccessSession


class Native::Interface::Tunnel::AccessSession::PortControl : public ydk::Entity
{
    public:
        PortControl();
        ~PortControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_; //type: empty

}; // Native::Interface::Tunnel::AccessSession::PortControl


class Native::Interface::Tunnel::Arp : public ydk::Entity
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

        ydk::YLeaf timeout; //type: uint32

}; // Native::Interface::Tunnel::Arp


class Native::Interface::Tunnel::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::Tunnel::Backup::Delay
        class Interface_; //type: Native::Interface::Tunnel::Backup::Interface_
        class Load; //type: Native::Interface::Tunnel::Backup::Load

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Backup::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Backup::Interface_> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Backup::Load> load;
        
}; // Native::Interface::Tunnel::Backup


class Native::Interface::Tunnel::Backup::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf failure; //type: one of uint32, enumeration
        ydk::YLeaf secondary_disable; //type: one of uint32, enumeration
        class Failure;
        class SecondaryDisable;

}; // Native::Interface::Tunnel::Backup::Delay


class Native::Interface::Tunnel::Backup::Interface_ : public ydk::Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
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
        class ATMSubinterface; //type: Native::Interface::Tunnel::Backup::Interface_::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Interface::Tunnel::Backup::Interface_::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Interface::Tunnel::Backup::Interface_::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Tunnel::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Backup::Interface_::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Backup::Interface_::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Backup::Interface_::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Tunnel::Backup::Interface_


class Native::Interface::Tunnel::Backup::Interface_::ATMACRsubinterface : public ydk::Entity
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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Interface::Tunnel::Backup::Interface_::ATMACRsubinterface


class Native::Interface::Tunnel::Backup::Interface_::ATMSubinterface : public ydk::Entity
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

        ydk::YLeaf atm; //type: string

}; // Native::Interface::Tunnel::Backup::Interface_::ATMSubinterface


class Native::Interface::Tunnel::Backup::Interface_::LISPSubinterface : public ydk::Entity
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

        ydk::YLeaf lisp; //type: string

}; // Native::Interface::Tunnel::Backup::Interface_::LISPSubinterface


class Native::Interface::Tunnel::Backup::Interface_::PortChannelSubinterface : public ydk::Entity
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

        ydk::YLeaf port_channel; //type: string

}; // Native::Interface::Tunnel::Backup::Interface_::PortChannelSubinterface


class Native::Interface::Tunnel::Backup::Load : public ydk::Entity
{
    public:
        Load();
        ~Load();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kickin; //type: one of uint32, enumeration
        ydk::YLeaf kickout; //type: one of uint32, enumeration
        class Kickin;
        class Kickout;

}; // Native::Interface::Tunnel::Backup::Load


class Native::Interface::Tunnel::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qos_reference; //type: uint32
        ydk::YLeaf kilobits; //type: uint32
        class Receive; //type: Native::Interface::Tunnel::Bandwidth::Receive
        class Inherit; //type: Native::Interface::Tunnel::Bandwidth::Inherit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Bandwidth::Inherit> inherit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Bandwidth::Receive> receive;
        
}; // Native::Interface::Tunnel::Bandwidth


class Native::Interface::Tunnel::Bandwidth::Inherit : public ydk::Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kilobits; //type: uint32

}; // Native::Interface::Tunnel::Bandwidth::Inherit


class Native::Interface::Tunnel::Bandwidth::Receive : public ydk::Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inherit; //type: empty
        ydk::YLeaf kilobits; //type: uint32

}; // Native::Interface::Tunnel::Bandwidth::Receive


class Native::Interface::Tunnel::Bfd : public ydk::Entity
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

        ydk::YLeaf template_; //type: string
        ydk::YLeaf echo; //type: boolean
        class Interval; //type: Native::Interface::Tunnel::Bfd::Interval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Bfd::Interval> interval;
        
}; // Native::Interface::Tunnel::Bfd


class Native::Interface::Tunnel::Bfd::Interval : public ydk::Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msecs; //type: uint16
        ydk::YLeaf min_rx; //type: uint16
        ydk::YLeaf multiplier; //type: uint8

}; // Native::Interface::Tunnel::Bfd::Interval


class Native::Interface::Tunnel::Cdp : public ydk::Entity
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

        ydk::YLeaf enable; //type: boolean
        class Tlv; //type: Native::Interface::Tunnel::Cdp::Tlv

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cdp::Tlv> tlv;
        
}; // Native::Interface::Tunnel::Cdp


class Native::Interface::Tunnel::Cdp::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_location; //type: empty
        ydk::YLeaf location; //type: empty
        class App; //type: Native::Interface::Tunnel::Cdp::Tlv::App

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cdp::Tlv::App> app; // presence node
        
}; // Native::Interface::Tunnel::Cdp::Tlv


class Native::Interface::Tunnel::Cdp::Tlv::App : public ydk::Entity
{
    public:
        App();
        ~App();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlvtype; //type: uint16
        ydk::YLeaf value_; //type: string

}; // Native::Interface::Tunnel::Cdp::Tlv::App


class Native::Interface::Tunnel::Cemoudp : public ydk::Entity
{
    public:
        Cemoudp();
        ~Cemoudp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reserve; //type: Native::Interface::Tunnel::Cemoudp::Reserve

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::Tunnel::Cemoudp


class Native::Interface::Tunnel::Cemoudp::Reserve : public ydk::Entity
{
    public:
        Reserve();
        ~Reserve();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acr; //type: uint8

}; // Native::Interface::Tunnel::Cemoudp::Reserve


class Native::Interface::Tunnel::Crypto : public ydk::Entity
{
    public:
        Crypto();
        ~Crypto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Map; //type: Native::Interface::Tunnel::Crypto::Map
        class Ipsec; //type: Native::Interface::Tunnel::Crypto::Ipsec

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Crypto::Ipsec> ipsec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Crypto::Map> map;
        
}; // Native::Interface::Tunnel::Crypto


class Native::Interface::Tunnel::Crypto::Ipsec : public ydk::Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf df_bit; //type: DfBit
        ydk::YLeaf fragmentation; //type: Fragmentation
        class DfBit;
        class Fragmentation;

}; // Native::Interface::Tunnel::Crypto::Ipsec


class Native::Interface::Tunnel::Crypto::Map : public ydk::Entity
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

        ydk::YLeaf tag; //type: string
        ydk::YLeaf redundancy; //type: string
        ydk::YLeaf stateful; //type: empty

}; // Native::Interface::Tunnel::Crypto::Map


class Native::Interface::Tunnel::Cts : public ydk::Entity
{
    public:
        Cts();
        ~Cts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgt; //type: Sgt
        class Manual; //type: Native::Interface::Tunnel::Cts::Manual
        class RoleBased; //type: Native::Interface::Tunnel::Cts::RoleBased

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cts::Manual> manual; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cts::RoleBased> role_based;
                class Sgt;

}; // Native::Interface::Tunnel::Cts


class Native::Interface::Tunnel::Cts::Manual : public ydk::Entity
{
    public:
        Manual();
        ~Manual();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Policy; //type: Native::Interface::Tunnel::Cts::Manual::Policy
        class Sap; //type: Native::Interface::Tunnel::Cts::Manual::Sap
        class Propagate; //type: Native::Interface::Tunnel::Cts::Manual::Propagate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cts::Manual::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cts::Manual::Propagate> propagate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cts::Manual::Sap> sap;
        
}; // Native::Interface::Tunnel::Cts::Manual


class Native::Interface::Tunnel::Cts::Manual::Policy : public ydk::Entity
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

        class Static_; //type: Native::Interface::Tunnel::Cts::Manual::Policy::Static_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cts::Manual::Policy::Static_> static_;
        
}; // Native::Interface::Tunnel::Cts::Manual::Policy


class Native::Interface::Tunnel::Cts::Manual::Policy::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgt; //type: uint16
        ydk::YLeaf trusted; //type: empty

}; // Native::Interface::Tunnel::Cts::Manual::Policy::Static_


class Native::Interface::Tunnel::Cts::Manual::Propagate : public ydk::Entity
{
    public:
        Propagate();
        ~Propagate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgt; //type: boolean

}; // Native::Interface::Tunnel::Cts::Manual::Propagate


class Native::Interface::Tunnel::Cts::Manual::Sap : public ydk::Entity
{
    public:
        Sap();
        ~Sap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pmk; //type: Native::Interface::Tunnel::Cts::Manual::Sap::Pmk

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cts::Manual::Sap::Pmk> > pmk;
        
}; // Native::Interface::Tunnel::Cts::Manual::Sap


class Native::Interface::Tunnel::Cts::Manual::Sap::Pmk : public ydk::Entity
{
    public:
        Pmk();
        ~Pmk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        class ModeList; //type: Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList> mode_list;
        
}; // Native::Interface::Tunnel::Cts::Manual::Sap::Pmk


class Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList : public ydk::Entity
{
    public:
        ModeList();
        ~ModeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GcmEncrypt; //type: Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt
        class NoEncap; //type: Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt> gcm_encrypt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap> no_encap; // presence node
        
}; // Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList


class Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt : public ydk::Entity
{
    public:
        GcmEncrypt();
        ~GcmEncrypt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gmac; //type: Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac> gmac; // presence node
        
}; // Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt


class Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac : public ydk::Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf null; //type: empty

}; // Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac


class Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap : public ydk::Entity
{
    public:
        NoEncap();
        ~NoEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gmac; //type: Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac> gmac; // presence node
        
}; // Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap


class Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac : public ydk::Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gcm_encrypt; //type: empty

}; // Native::Interface::Tunnel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac


class Native::Interface::Tunnel::Cts::RoleBased : public ydk::Entity
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

        ydk::YLeaf enforcement; //type: empty
        ydk::YLeafList sgt_cache; //type: list of  SgtCache
        class SgtMap; //type: Native::Interface::Tunnel::Cts::RoleBased::SgtMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Cts::RoleBased::SgtMap> sgt_map;
                class SgtCache;

}; // Native::Interface::Tunnel::Cts::RoleBased


class Native::Interface::Tunnel::Cts::RoleBased::SgtMap : public ydk::Entity
{
    public:
        SgtMap();
        ~SgtMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf security_group; //type: string
        ydk::YLeaf sgt; //type: uint16

}; // Native::Interface::Tunnel::Cts::RoleBased::SgtMap


class Native::Interface::Tunnel::CwsTunnel : public ydk::Entity
{
    public:
        CwsTunnel();
        ~CwsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in; //type: empty
        class Out; //type: Native::Interface::Tunnel::CwsTunnel::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::CwsTunnel::Out> out;
        
}; // Native::Interface::Tunnel::CwsTunnel


class Native::Interface::Tunnel::CwsTunnel::Out : public ydk::Entity
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

        ydk::YLeaf tunnel_number; //type: uint16

}; // Native::Interface::Tunnel::CwsTunnel::Out


class Native::Interface::Tunnel::Dampening : public ydk::Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dampening_time; //type: uint16
        ydk::YLeaf start_reusing_time; //type: uint16
        ydk::YLeaf start_supressing_time; //type: uint16
        ydk::YLeaf maximum_supressing_time; //type: uint16
        class Restart; //type: Native::Interface::Tunnel::Dampening::Restart

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Dampening::Restart> restart;
        
}; // Native::Interface::Tunnel::Dampening


class Native::Interface::Tunnel::Dampening::Restart : public ydk::Entity
{
    public:
        Restart();
        ~Restart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restart; //type: empty
        ydk::YLeaf restart_penalty; //type: uint16

}; // Native::Interface::Tunnel::Dampening::Restart


class Native::Interface::Tunnel::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

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
        ydk::YLeaf path; //type: string
        ydk::YLeaf internet_bound; //type: empty
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf path_last_resort; //type: empty
        ydk::YLeaf zero_sla; //type: empty

}; // Native::Interface::Tunnel::Domain


class Native::Interface::Tunnel::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Q; //type: Native::Interface::Tunnel::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::Tunnel::Encapsulation::Isl
        class Ppp; //type: Native::Interface::Tunnel::Encapsulation::Ppp
        class Slip; //type: Native::Interface::Tunnel::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::Tunnel::Encapsulation::FrameRelay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Encapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Encapsulation::Isl> isl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::Encapsulation::Slip> slip; // presence node
        
}; // Native::Interface::Tunnel::Encapsulation


class Native::Interface::Tunnel::Encapsulation::Dot1Q : public ydk::Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16
        ydk::YLeaf native; //type: empty

}; // Native::Interface::Tunnel::Encapsulation::Dot1Q


class Native::Interface::Tunnel::Encapsulation::FrameRelay : public ydk::Entity
{
    public:
        FrameRelay();
        ~FrameRelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ietf; //type: empty

}; // Native::Interface::Tunnel::Encapsulation::FrameRelay


class Native::Interface::Tunnel::Encapsulation::Isl : public ydk::Entity
{
    public:
        Isl();
        ~Isl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16

}; // Native::Interface::Tunnel::Encapsulation::Isl


class Native::Interface::Tunnel::Encapsulation::Ppp : public ydk::Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Tunnel::Encapsulation::Ppp


class Native::Interface::Tunnel::Encapsulation::Slip : public ydk::Entity
{
    public:
        Slip();
        ~Slip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Tunnel::Encapsulation::Slip


class Native::Interface::Tunnel::FairQueue : public ydk::Entity
{
    public:
        FairQueue();
        ~FairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incomplete; //type: empty

}; // Native::Interface::Tunnel::FairQueue


class Native::Interface::Tunnel::FairQueueConf : public ydk::Entity
{
    public:
        FairQueueConf();
        ~FairQueueConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fair_queue; //type: boolean

}; // Native::Interface::Tunnel::FairQueueConf


class Native::Interface::Tunnel::Flowcontrol : public ydk::Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: Receive
        ydk::YLeaf send; //type: Send
        class Receive;
        class Send;

}; // Native::Interface::Tunnel::Flowcontrol


class Native::Interface::Tunnel::HoldQueue : public ydk::Entity
{
    public:
        HoldQueue();
        ~HoldQueue();

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
        ydk::YLeaf queue_length; //type: uint16
        class Direction;

}; // Native::Interface::Tunnel::HoldQueue


class Native::Interface::Tunnel::InterfaceQos : public ydk::Entity
{
    public:
        InterfaceQos();
        ~InterfaceQos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Trust; //type: Native::Interface::Tunnel::InterfaceQos::Trust

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Tunnel::InterfaceQos::Trust> trust;
        
}; // Native::Interface::Tunnel::InterfaceQos

class Native::Interface::TenGigabitEthernet::SpanningTree::Bpdufilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class Native::Interface::TenGigabitEthernet::SpanningTree::Guard : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loop;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf root;

};

class Native::Interface::TenGigabitEthernet::SpanningTree::LinkType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf point_to_point;
        static const ydk::Enum::YLeaf root;
        static const ydk::Enum::YLeaf shared;

};

class Native::Interface::TenGigabitEthernet::Standby::Version : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Ipv6 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf autoconfig;

};

class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Authentication::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::TenGigabitEthernet::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::TenGigabitEthernet::Switchport::Access::Vlan::Vlan_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;

};

class Native::Interface::TenGigabitEthernet::Switchport::Mode::Dynamic : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf desirable;

};

class Native::Interface::TenGigabitEthernet::Switchport::PortSecurity::Violation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protect;
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf shutdown;

};

class Native::Interface::TenGigabitEthernet::Switchport::PortSecurity::Aging::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf inactivity;

};

class Native::Interface::TenGigabitEthernet::Switchport::Trunk::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot1q;
        static const ydk::Enum::YLeaf isl;
        static const ydk::Enum::YLeaf negotiate;

};

class Native::Interface::TenGigabitEthernet::Switchport::Trunk::Native_::Vlan : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tag;

};

class Native::Interface::TenGigabitEthernet::Switchport::Voice::Vlan::Vlan_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot1p;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf untagged;

};

class Native::Interface::TenGigabitEthernet::Trust::Device : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_phone;
        static const ydk::Enum::YLeaf cts;
        static const ydk::Enum::YLeaf ip_camera;
        static const ydk::Enum::YLeaf media_player;

};

class Native::Interface::TenGigabitEthernet::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::TenGigabitEthernet::Xconnect::Sequence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::Tunnel::IfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nhrp;

};

class Native::Interface::Tunnel::ServiceInsertion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf waas;

};

class Native::Interface::Tunnel::Nat66 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inside;
        static const ydk::Enum::YLeaf outside;

};

class Native::Interface::Tunnel::AccessSession::HostMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf multi_auth;
        static const ydk::Enum::YLeaf multi_domain;
        static const ydk::Enum::YLeaf multi_host;
        static const ydk::Enum::YLeaf single_host;

};

class Native::Interface::Tunnel::Backup::Delay::Failure : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Tunnel::Backup::Delay::SecondaryDisable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Tunnel::Backup::Load::Kickin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Tunnel::Backup::Load::Kickout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Tunnel::Crypto::Ipsec::DfBit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf set;

};

class Native::Interface::Tunnel::Crypto::Ipsec::Fragmentation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf after_encryption;
        static const ydk::Enum::YLeaf before_encryption;

};

class Native::Interface::Tunnel::Cts::Sgt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inline_;

};

class Native::Interface::Tunnel::Cts::RoleBased::SgtCache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf egress;
        static const ydk::Enum::YLeaf ingress;

};

class Native::Interface::Tunnel::Flowcontrol::Receive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::Interface::Tunnel::Flowcontrol::Send : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::Interface::Tunnel::HoldQueue::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_61_ */

