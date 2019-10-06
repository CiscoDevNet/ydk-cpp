#ifndef _CISCO_IOS_XE_NATIVE_55_
#define _CISCO_IOS_XE_NATIVE_55_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_20.hpp"
#include "Cisco_IOS_XE_native_50.hpp"
#include "Cisco_IOS_XE_native_54.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary : public ydk::Entity
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
        ydk::YLeaf primary; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary : public ydk::Entity
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
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig : public ydk::Entity
{
    public:
        PreemptConfig();
        ~PreemptConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preempt; //type: boolean

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt : public ydk::Entity
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

        class Delay; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay> delay;
        
}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay : public ydk::Entity
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

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers : public ydk::Entity
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

        ydk::YLeaf advertise; //type: uint16

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track : public ydk::Entity
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

        class Event; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event

        ydk::YList event;
        
}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event : public ydk::Entity
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

        ydk::YLeaf object_id; //type: uint16
        ydk::YLeaf decrement; //type: uint8
        ydk::YLeaf shutdown; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs : public ydk::Entity
{
    public:
        Vrrs();
        ~Vrrs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf leader; //type: string

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6 : public ydk::Entity
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

        ydk::YLeaf description; //type: string
        ydk::YLeaf match_address; //type: empty
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf shutdown; //type: empty
        class Address; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address
        class PreemptConfig; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig
        class Preempt; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt
        class Timers; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers
        class Track; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track
        class Vrrs; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig> preempt_config;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt> preempt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track> track;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs> vrrs;
        
}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address : public ydk::Entity
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

        class Primary; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary
        class Ipv6Prefix; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary> primary;
        ydk::YList ipv6_prefix;
        
}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary : public ydk::Entity
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

        ydk::YLeaf ipv6_link_local; //type: string
        ydk::YLeaf primary; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix : public ydk::Entity
{
    public:
        Ipv6Prefix();
        ~Ipv6Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig : public ydk::Entity
{
    public:
        PreemptConfig();
        ~PreemptConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preempt; //type: boolean

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt : public ydk::Entity
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

        class Delay; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay> delay;
        
}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay : public ydk::Entity
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

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers : public ydk::Entity
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

        ydk::YLeaf advertise; //type: uint16

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track : public ydk::Entity
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

        class Event; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event

        ydk::YList event;
        
}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event : public ydk::Entity
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

        ydk::YLeaf object_id; //type: uint16
        ydk::YLeaf decrement; //type: uint8
        ydk::YLeaf shutdown; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs : public ydk::Entity
{
    public:
        Vrrs();
        ~Vrrs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf leader; //type: string

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2 : public ydk::Entity
{
    public:
        VrrpGroupV2();
        ~VrrpGroupV2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_id; //type: uint8
        ydk::YLeaf description; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf shutdown; //type: empty
        class Authentication; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Authentication
        class Ip; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Ip
        class PreemptConfig; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig
        class Preempt; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Preempt
        class Timers; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Timers
        class Track; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Track

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig> preempt_config;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Preempt> preempt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Track> track;
        
}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Authentication : public ydk::Entity
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

        ydk::YLeaf text; //type: string

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Authentication


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Ip : public ydk::Entity
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

        class Primary; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary
        class Secondary; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary> primary;
        ydk::YList secondary;
        
}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Ip


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary : public ydk::Entity
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

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary : public ydk::Entity
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
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig : public ydk::Entity
{
    public:
        PreemptConfig();
        ~PreemptConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preempt; //type: boolean

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Preempt : public ydk::Entity
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

        class Delay; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay> delay;
        
}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Preempt


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay : public ydk::Entity
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

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Timers : public ydk::Entity
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

        ydk::YLeaf learn; //type: empty
        class Advertise; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise> advertise;
        
}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Timers


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint8
        ydk::YLeaf msec; //type: uint16

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Track : public ydk::Entity
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

        class Event; //type: Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event

        ydk::YList event;
        
}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Track


class Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event : public ydk::Entity
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

        ydk::YLeaf object_id; //type: uint16
        ydk::YLeaf decrement; //type: uint8

}; // Native::Interface::FiveGigabitEthernet::Vrrp::VrrpGroupV2::Track::Event


class Native::Interface::FiveGigabitEthernet::Vrrp::Delay : public ydk::Entity
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

        ydk::YLeaf reload; //type: uint16
        ydk::YLeaf minimum; //type: uint16

}; // Native::Interface::FiveGigabitEthernet::Vrrp::Delay


class Native::Interface::FiveGigabitEthernet::FabricDomain : public ydk::Entity
{
    public:
        FabricDomain();
        ~FabricDomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IwanFabric; //type: Native::Interface::FiveGigabitEthernet::FabricDomain::IwanFabric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::FabricDomain::IwanFabric> iwan_fabric;
        
}; // Native::Interface::FiveGigabitEthernet::FabricDomain


class Native::Interface::FiveGigabitEthernet::FabricDomain::IwanFabric : public ydk::Entity
{
    public:
        IwanFabric();
        ~IwanFabric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Word; //type: Native::Interface::FiveGigabitEthernet::FabricDomain::IwanFabric::Word

        ydk::YList word;
        
}; // Native::Interface::FiveGigabitEthernet::FabricDomain::IwanFabric


class Native::Interface::FiveGigabitEthernet::FabricDomain::IwanFabric::Word : public ydk::Entity
{
    public:
        Word();
        ~Word();

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
        ydk::YLeaf interface_id; //type: uint8

}; // Native::Interface::FiveGigabitEthernet::FabricDomain::IwanFabric::Word


class Native::Interface::FiveGigabitEthernet::AnalysisModule : public ydk::Entity
{
    public:
        AnalysisModule();
        ~AnalysisModule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Monitoring; //type: Native::Interface::FiveGigabitEthernet::AnalysisModule::Monitoring

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::AnalysisModule::Monitoring> monitoring;
        
}; // Native::Interface::FiveGigabitEthernet::AnalysisModule


class Native::Interface::FiveGigabitEthernet::AnalysisModule::Monitoring : public ydk::Entity
{
    public:
        Monitoring();
        ~Monitoring();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string

}; // Native::Interface::FiveGigabitEthernet::AnalysisModule::Monitoring


class Native::Interface::FiveGigabitEthernet::Cts : public ydk::Entity
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

        class Manual; //type: Native::Interface::FiveGigabitEthernet::Cts::Manual
        class RoleBased; //type: Native::Interface::FiveGigabitEthernet::Cts::RoleBased

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Cts::Manual> manual; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Cts::RoleBased> role_based;
        
}; // Native::Interface::FiveGigabitEthernet::Cts


class Native::Interface::FiveGigabitEthernet::Cts::Manual : public ydk::Entity
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

        class Policy; //type: Native::Interface::FiveGigabitEthernet::Cts::Manual::Policy
        class Sap; //type: Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap
        class Propagate; //type: Native::Interface::FiveGigabitEthernet::Cts::Manual::Propagate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Cts::Manual::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap> sap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Cts::Manual::Propagate> propagate;
        
}; // Native::Interface::FiveGigabitEthernet::Cts::Manual


class Native::Interface::FiveGigabitEthernet::Cts::Manual::Policy : public ydk::Entity
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

        class Static; //type: Native::Interface::FiveGigabitEthernet::Cts::Manual::Policy::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Cts::Manual::Policy::Static> static_;
        
}; // Native::Interface::FiveGigabitEthernet::Cts::Manual::Policy


class Native::Interface::FiveGigabitEthernet::Cts::Manual::Policy::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

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

}; // Native::Interface::FiveGigabitEthernet::Cts::Manual::Policy::Static


class Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap : public ydk::Entity
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

        class Pmk; //type: Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk

        ydk::YList pmk;
        
}; // Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap


class Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk : public ydk::Entity
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
        class ModeList; //type: Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList> mode_list;
        
}; // Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk


class Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList : public ydk::Entity
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

        class GcmEncrypt; //type: Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt
        class NoEncap; //type: Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt> gcm_encrypt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap> no_encap; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList


class Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt : public ydk::Entity
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

        class Gmac; //type: Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac> gmac; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt


class Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac : public ydk::Entity
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

}; // Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac


class Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap : public ydk::Entity
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

        class Gmac; //type: Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac> gmac; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap


class Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac : public ydk::Entity
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

}; // Native::Interface::FiveGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac


class Native::Interface::FiveGigabitEthernet::Cts::Manual::Propagate : public ydk::Entity
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

}; // Native::Interface::FiveGigabitEthernet::Cts::Manual::Propagate


class Native::Interface::FiveGigabitEthernet::Cts::RoleBased : public ydk::Entity
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
        class SgtMap; //type: Native::Interface::FiveGigabitEthernet::Cts::RoleBased::SgtMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Cts::RoleBased::SgtMap> sgt_map;
                class SgtCache;

}; // Native::Interface::FiveGigabitEthernet::Cts::RoleBased


class Native::Interface::FiveGigabitEthernet::Cts::RoleBased::SgtMap : public ydk::Entity
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

}; // Native::Interface::FiveGigabitEthernet::Cts::RoleBased::SgtMap


class Native::Interface::FiveGigabitEthernet::Udld : public ydk::Entity
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

        class Port; //type: Native::Interface::FiveGigabitEthernet::Udld::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Udld::Port> port; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Udld


class Native::Interface::FiveGigabitEthernet::Udld::Port : public ydk::Entity
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

}; // Native::Interface::FiveGigabitEthernet::Udld::Port


class Native::Interface::FiveGigabitEthernet::Cdp : public ydk::Entity
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
        class Tlv; //type: Native::Interface::FiveGigabitEthernet::Cdp::Tlv

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Cdp::Tlv> tlv;
        
}; // Native::Interface::FiveGigabitEthernet::Cdp


class Native::Interface::FiveGigabitEthernet::Cdp::Tlv : public ydk::Entity
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
        class App; //type: Native::Interface::FiveGigabitEthernet::Cdp::Tlv::App

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Cdp::Tlv::App> app; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Cdp::Tlv


class Native::Interface::FiveGigabitEthernet::Cdp::Tlv::App : public ydk::Entity
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

}; // Native::Interface::FiveGigabitEthernet::Cdp::Tlv::App


class Native::Interface::FiveGigabitEthernet::Mvrp : public ydk::Entity
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

        ydk::YLeaf mvrp; //type: empty
        class Registration; //type: Native::Interface::FiveGigabitEthernet::Mvrp::Registration
        class Timer; //type: Native::Interface::FiveGigabitEthernet::Mvrp::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Mvrp::Registration> registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Mvrp::Timer> timer;
        
}; // Native::Interface::FiveGigabitEthernet::Mvrp


class Native::Interface::FiveGigabitEthernet::Mvrp::Registration : public ydk::Entity
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

        ydk::YLeaf fixed; //type: empty
        ydk::YLeaf forbidden; //type: empty
        ydk::YLeaf normal; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Mvrp::Registration


class Native::Interface::FiveGigabitEthernet::Mvrp::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf periodic; //type: empty
        class Join; //type: Native::Interface::FiveGigabitEthernet::Mvrp::Timer::Join
        class Leave; //type: Native::Interface::FiveGigabitEthernet::Mvrp::Timer::Leave
        class LeaveAll; //type: Native::Interface::FiveGigabitEthernet::Mvrp::Timer::LeaveAll

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Mvrp::Timer::Join> join; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Mvrp::Timer::Leave> leave; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Mvrp::Timer::LeaveAll> leave_all; // presence node
        
}; // Native::Interface::FiveGigabitEthernet::Mvrp::Timer


class Native::Interface::FiveGigabitEthernet::Mvrp::Timer::Join : public ydk::Entity
{
    public:
        Join();
        ~Join();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf y_range; //type: uint32

}; // Native::Interface::FiveGigabitEthernet::Mvrp::Timer::Join


class Native::Interface::FiveGigabitEthernet::Mvrp::Timer::Leave : public ydk::Entity
{
    public:
        Leave();
        ~Leave();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf y_range; //type: uint32

}; // Native::Interface::FiveGigabitEthernet::Mvrp::Timer::Leave


class Native::Interface::FiveGigabitEthernet::Mvrp::Timer::LeaveAll : public ydk::Entity
{
    public:
        LeaveAll();
        ~LeaveAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf y_range; //type: uint32

}; // Native::Interface::FiveGigabitEthernet::Mvrp::Timer::LeaveAll


class Native::Interface::FiveGigabitEthernet::Ntp : public ydk::Entity
{
    public:
        Ntp();
        ~Ntp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        class BroadcastOption; //type: Native::Interface::FiveGigabitEthernet::Ntp::BroadcastOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ntp::BroadcastOption> broadcast_option;
        
}; // Native::Interface::FiveGigabitEthernet::Ntp


class Native::Interface::FiveGigabitEthernet::Ntp::BroadcastOption : public ydk::Entity
{
    public:
        BroadcastOption();
        ~BroadcastOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Broadcast; //type: Native::Interface::FiveGigabitEthernet::Ntp::BroadcastOption::Broadcast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FiveGigabitEthernet::Ntp::BroadcastOption::Broadcast> broadcast;
        
}; // Native::Interface::FiveGigabitEthernet::Ntp::BroadcastOption


class Native::Interface::FiveGigabitEthernet::Ntp::BroadcastOption::Broadcast : public ydk::Entity
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

        ydk::YLeaf client; //type: empty

}; // Native::Interface::FiveGigabitEthernet::Ntp::BroadcastOption::Broadcast


class Native::Interface::FiveGigabitEthernet::Utd : public ydk::Entity
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

}; // Native::Interface::FiveGigabitEthernet::Utd


class Native::Interface::TenGigabitEthernet : public ydk::Entity
{
    public:
        TenGigabitEthernet();
        ~TenGigabitEthernet();

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
        ydk::YLeaf media_type; //type: MediaType
        ydk::YLeaf port_type; //type: PortType
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
        ydk::YLeaf channel_protocol; //type: ChannelProtocol
        ydk::YLeaf duplex; //type: Duplex
        ydk::YLeaf cisco_ios_xe_ethernet_macsec; //type: empty
        ydk::YLeaf cisco_ios_xe_switch_macsec; //type: empty
        ydk::YLeaf nat66; //type: Nat66
        class SwitchportConf; //type: Native::Interface::TenGigabitEthernet::SwitchportConf
        class Switchport; //type: Native::Interface::TenGigabitEthernet::Switchport
        class StackwiseVirtual; //type: Native::Interface::TenGigabitEthernet::StackwiseVirtual
        class Arp; //type: Native::Interface::TenGigabitEthernet::Arp
        class Backup; //type: Native::Interface::TenGigabitEthernet::Backup
        class Cemoudp; //type: Native::Interface::TenGigabitEthernet::Cemoudp
        class CwsTunnel; //type: Native::Interface::TenGigabitEthernet::CwsTunnel
        class L2protocolTunnel; //type: Native::Interface::TenGigabitEthernet::L2protocolTunnel
        class Encapsulation; //type: Native::Interface::TenGigabitEthernet::Encapsulation
        class FairQueueConf; //type: Native::Interface::TenGigabitEthernet::FairQueueConf
        class FairQueue; //type: Native::Interface::TenGigabitEthernet::FairQueue
        class Flowcontrol; //type: Native::Interface::TenGigabitEthernet::Flowcontrol
        class Isis; //type: Native::Interface::TenGigabitEthernet::Isis
        class KeepaliveSettings; //type: Native::Interface::TenGigabitEthernet::KeepaliveSettings
        class Bfd; //type: Native::Interface::TenGigabitEthernet::Bfd
        class Bandwidth; //type: Native::Interface::TenGigabitEthernet::Bandwidth
        class Dampening; //type: Native::Interface::TenGigabitEthernet::Dampening
        class Domain; //type: Native::Interface::TenGigabitEthernet::Domain
        class HoldQueue; //type: Native::Interface::TenGigabitEthernet::HoldQueue
        class Mpls; //type: Native::Interface::TenGigabitEthernet::Mpls
        class IpVrf; //type: Native::Interface::TenGigabitEthernet::IpVrf
        class Vrf; //type: Native::Interface::TenGigabitEthernet::Vrf
        class Ip; //type: Native::Interface::TenGigabitEthernet::Ip
        class Ipv6; //type: Native::Interface::TenGigabitEthernet::Ipv6
        class Logging; //type: Native::Interface::TenGigabitEthernet::Logging
        class Mdix; //type: Native::Interface::TenGigabitEthernet::Mdix
        class Mop; //type: Native::Interface::TenGigabitEthernet::Mop
        class InterfaceQos; //type: Native::Interface::TenGigabitEthernet::InterfaceQos
        class Source; //type: Native::Interface::TenGigabitEthernet::Source
        class Standby; //type: Native::Interface::TenGigabitEthernet::Standby
        class AccessSession; //type: Native::Interface::TenGigabitEthernet::AccessSession
        class StormControl; //type: Native::Interface::TenGigabitEthernet::StormControl
        class Trust; //type: Native::Interface::TenGigabitEthernet::Trust
        class PriorityQueue; //type: Native::Interface::TenGigabitEthernet::PriorityQueue
        class RcvQueue; //type: Native::Interface::TenGigabitEthernet::RcvQueue
        class Peer; //type: Native::Interface::TenGigabitEthernet::Peer
        class PmPath; //type: Native::Interface::TenGigabitEthernet::PmPath
        class Power; //type: Native::Interface::TenGigabitEthernet::Power
        class CarrierDelay; //type: Native::Interface::TenGigabitEthernet::CarrierDelay
        class ChannelGroup; //type: Native::Interface::TenGigabitEthernet::ChannelGroup
        class Ethernet; //type: Native::Interface::TenGigabitEthernet::Ethernet
        class Eapol; //type: Native::Interface::TenGigabitEthernet::Eapol
        class Synchronous; //type: Native::Interface::TenGigabitEthernet::Synchronous
        class Speed; //type: Native::Interface::TenGigabitEthernet::Speed
        class Negotiation; //type: Native::Interface::TenGigabitEthernet::Negotiation
        class Plim; //type: Native::Interface::TenGigabitEthernet::Plim
        class Pppoe; //type: Native::Interface::TenGigabitEthernet::Pppoe
        class Service; //type: Native::Interface::TenGigabitEthernet::Service
        class Lacp; //type: Native::Interface::TenGigabitEthernet::Lacp
        class CiscoIOSXEEthernetMacsecOption; //type: Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption
        class Snmp; //type: Native::Interface::TenGigabitEthernet::Snmp
        class Authentication; //type: Native::Interface::TenGigabitEthernet::Authentication
        class Mab; //type: Native::Interface::TenGigabitEthernet::Mab
        class EtAnalytics; //type: Native::Interface::TenGigabitEthernet::EtAnalytics
        class ServicePolicy; //type: Native::Interface::TenGigabitEthernet::ServicePolicy
        class Auto; //type: Native::Interface::TenGigabitEthernet::Auto
        class Datalink; //type: Native::Interface::TenGigabitEthernet::Datalink
        class Energywise; //type: Native::Interface::TenGigabitEthernet::Energywise
        class Location; //type: Native::Interface::TenGigabitEthernet::Location
        class Mac; //type: Native::Interface::TenGigabitEthernet::Mac
        class Macro; //type: Native::Interface::TenGigabitEthernet::Macro
        class DualActive; //type: Native::Interface::TenGigabitEthernet::DualActive
        class LoadBalancing; //type: Native::Interface::TenGigabitEthernet::LoadBalancing
        class VlanRange; //type: Native::Interface::TenGigabitEthernet::VlanRange
        class Switch; //type: Native::Interface::TenGigabitEthernet::Switch
        class SrrQueue; //type: Native::Interface::TenGigabitEthernet::SrrQueue
        class CiscoIOSXESwitchMacsecOption; //type: Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption
        class DeviceTracking; //type: Native::Interface::TenGigabitEthernet::DeviceTracking
        class Ospfv3; //type: Native::Interface::TenGigabitEthernet::Ospfv3
        class Performance; //type: Native::Interface::TenGigabitEthernet::Performance
        class Lisp; //type: Native::Interface::TenGigabitEthernet::Lisp
        class SpanningTree; //type: Native::Interface::TenGigabitEthernet::SpanningTree
        class Mka; //type: Native::Interface::TenGigabitEthernet::Mka
        class Umbrella; //type: Native::Interface::TenGigabitEthernet::Umbrella
        class Xconnect; //type: Native::Interface::TenGigabitEthernet::Xconnect
        class Evpn; //type: Native::Interface::TenGigabitEthernet::Evpn
        class Dot1x; //type: Native::Interface::TenGigabitEthernet::Dot1x
        class Crypto; //type: Native::Interface::TenGigabitEthernet::Crypto
        class Lldp; //type: Native::Interface::TenGigabitEthernet::Lldp
        class ZoneMember; //type: Native::Interface::TenGigabitEthernet::ZoneMember
        class Vrrp; //type: Native::Interface::TenGigabitEthernet::Vrrp
        class FabricDomain; //type: Native::Interface::TenGigabitEthernet::FabricDomain
        class AnalysisModule; //type: Native::Interface::TenGigabitEthernet::AnalysisModule
        class Cts; //type: Native::Interface::TenGigabitEthernet::Cts
        class Udld; //type: Native::Interface::TenGigabitEthernet::Udld
        class Cdp; //type: Native::Interface::TenGigabitEthernet::Cdp
        class Mvrp; //type: Native::Interface::TenGigabitEthernet::Mvrp
        class Ntp; //type: Native::Interface::TenGigabitEthernet::Ntp
        class Utd; //type: Native::Interface::TenGigabitEthernet::Utd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SwitchportConf> switchport_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::StackwiseVirtual> stackwise_virtual;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Backup> backup;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cemoudp> cemoudp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::CwsTunnel> cws_tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::L2protocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::FairQueueConf> fair_queue_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::FairQueue> fair_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Flowcontrol> flowcontrol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Dampening> dampening;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Domain> domain;
        ydk::YList hold_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::IpVrf> ip_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Mdix> mdix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Mop> mop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::InterfaceQos> interface_qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Source> source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Standby> standby;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::AccessSession> access_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Trust> trust;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::PriorityQueue> priority_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::RcvQueue> rcv_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::PmPath> pm_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Power> power;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::CarrierDelay> carrier_delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::ChannelGroup> channel_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Eapol> eapol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Synchronous> synchronous;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Speed> speed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Negotiation> negotiation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Plim> plim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Service> service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Lacp> lacp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::CiscoIOSXEEthernetMacsecOption> cisco_ios_xe_ethernet_macsec_option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Snmp> snmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Mab> mab; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::EtAnalytics> et_analytics;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Auto> auto_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Datalink> datalink;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Energywise> energywise; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Location> location;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Mac> mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Macro> macro;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::DualActive> dual_active;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::LoadBalancing> load_balancing;
        ydk::YList vlan_range;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switch> switch_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SrrQueue> srr_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::CiscoIOSXESwitchMacsecOption> cisco_ios_xe_switch_macsec_option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::DeviceTracking> device_tracking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ospfv3> ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Performance> performance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::SpanningTree> spanning_tree;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Mka> mka;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Umbrella> umbrella;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Evpn> evpn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Dot1x> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Crypto> crypto;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Lldp> lldp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::ZoneMember> zone_member;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Vrrp> vrrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::FabricDomain> fabric_domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::AnalysisModule> analysis_module;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cts> cts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Udld> udld;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cdp> cdp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Mvrp> mvrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Ntp> ntp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Utd> utd;
                class MediaType;
        class PortType;
        class IfState;
        class ServiceInsertion;
        class ChannelProtocol;
        class Duplex;
        class Nat66;

}; // Native::Interface::TenGigabitEthernet


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
        class Vepa; //type: Native::Interface::TenGigabitEthernet::Switchport::Vepa
        class DeviceTracking; //type: Native::Interface::TenGigabitEthernet::Switchport::DeviceTracking

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Trunk> trunk;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Voice> voice;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Priority> priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Autostate> autostate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::PrivateVlan> private_vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Vepa> vepa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::DeviceTracking> device_tracking;
        
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
        class Dot1qTunnel; //type: Native::Interface::TenGigabitEthernet::Switchport::Mode::Dot1qTunnel
        class PrivateVlan; //type: Native::Interface::TenGigabitEthernet::Switchport::Mode::PrivateVlan
        class Trunk; //type: Native::Interface::TenGigabitEthernet::Switchport::Mode::Trunk

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Mode::Access> access; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Mode::Dot1qTunnel> dot1q_tunnel; // presence node
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


class Native::Interface::TenGigabitEthernet::Switchport::Mode::Dot1qTunnel : public ydk::Entity
{
    public:
        Dot1qTunnel();
        ~Dot1qTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::TenGigabitEthernet::Switchport::Mode::Dot1qTunnel


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
        ydk::YLeaf add; //type: one of uint16, string
        ydk::YLeaf all; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf remove; //type: one of uint16, string
        ydk::YLeafList except; //type: list of  one of uint16, string

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

        ydk::YLeaf add; //type: one of uint16, string
        ydk::YLeaf none; //type: empty
        ydk::YLeaf remove; //type: one of uint16, string
        ydk::YLeafList vlans; //type: list of  one of uint16, string
        ydk::YLeafList except; //type: list of  one of uint16, string

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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Voice::Vlan> vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Switchport::Voice::Detect> detect;
        
}; // Native::Interface::TenGigabitEthernet::Switchport::Voice


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

        ydk::YLeaf vlan; //type: one of uint16, string, enumeration
        ydk::YLeaf name; //type: string
        class Vlan_;

}; // Native::Interface::TenGigabitEthernet::Switchport::Voice::Vlan


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


class Native::Interface::TenGigabitEthernet::Switchport::Vepa : public ydk::Entity
{
    public:
        Vepa();
        ~Vepa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: empty

}; // Native::Interface::TenGigabitEthernet::Switchport::Vepa


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


class Native::Interface::TenGigabitEthernet::StackwiseVirtual : public ydk::Entity
{
    public:
        StackwiseVirtual();
        ~StackwiseVirtual();

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
        ydk::YLeaf dual_active_detection; //type: empty

}; // Native::Interface::TenGigabitEthernet::StackwiseVirtual


class Native::Interface::TenGigabitEthernet::Arp : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Arp


class Native::Interface::TenGigabitEthernet::Backup : public ydk::Entity
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

        class Delay; //type: Native::Interface::TenGigabitEthernet::Backup::Delay
        class Interface_; //type: Native::Interface::TenGigabitEthernet::Backup::Interface_
        class Load; //type: Native::Interface::TenGigabitEthernet::Backup::Load

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Backup::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Backup::Interface_> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Backup::Load> load;
        
}; // Native::Interface::TenGigabitEthernet::Backup


class Native::Interface::TenGigabitEthernet::Backup::Delay : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Backup::Delay


class Native::Interface::TenGigabitEthernet::Backup::Interface_ : public ydk::Entity
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
        class ATMSubinterface; //type: Native::Interface::TenGigabitEthernet::Backup::Interface_::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Interface::TenGigabitEthernet::Backup::Interface_::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Interface::TenGigabitEthernet::Backup::Interface_::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Interface::TenGigabitEthernet::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Backup::Interface_::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Backup::Interface_::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Backup::Interface_::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::TenGigabitEthernet::Backup::Interface_


class Native::Interface::TenGigabitEthernet::Backup::Interface_::ATMSubinterface : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Backup::Interface_::ATMSubinterface


class Native::Interface::TenGigabitEthernet::Backup::Interface_::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Backup::Interface_::ATMACRsubinterface


class Native::Interface::TenGigabitEthernet::Backup::Interface_::LISPSubinterface : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Backup::Interface_::LISPSubinterface


class Native::Interface::TenGigabitEthernet::Backup::Interface_::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Backup::Interface_::PortChannelSubinterface


class Native::Interface::TenGigabitEthernet::Backup::Load : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Backup::Load


class Native::Interface::TenGigabitEthernet::Cemoudp : public ydk::Entity
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

        class Reserve; //type: Native::Interface::TenGigabitEthernet::Cemoudp::Reserve

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::TenGigabitEthernet::Cemoudp


class Native::Interface::TenGigabitEthernet::Cemoudp::Reserve : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Cemoudp::Reserve


class Native::Interface::TenGigabitEthernet::CwsTunnel : public ydk::Entity
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
        class Out; //type: Native::Interface::TenGigabitEthernet::CwsTunnel::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::CwsTunnel::Out> out;
        
}; // Native::Interface::TenGigabitEthernet::CwsTunnel


class Native::Interface::TenGigabitEthernet::CwsTunnel::Out : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::CwsTunnel::Out


class Native::Interface::TenGigabitEthernet::L2protocolTunnel : public ydk::Entity
{
    public:
        L2protocolTunnel();
        ~L2protocolTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cdp; //type: empty
        ydk::YLeaf stp; //type: empty
        ydk::YLeaf vtp; //type: empty
        class DropThreshold; //type: Native::Interface::TenGigabitEthernet::L2protocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::TenGigabitEthernet::L2protocolTunnel::ShutdownThreshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::L2protocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::L2protocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::TenGigabitEthernet::L2protocolTunnel


class Native::Interface::TenGigabitEthernet::L2protocolTunnel::DropThreshold : public ydk::Entity
{
    public:
        DropThreshold();
        ~DropThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_rate; //type: uint16
        ydk::YLeaf cdp; //type: uint16
        ydk::YLeaf stp; //type: uint16
        ydk::YLeaf vtp; //type: uint16

}; // Native::Interface::TenGigabitEthernet::L2protocolTunnel::DropThreshold


class Native::Interface::TenGigabitEthernet::L2protocolTunnel::ShutdownThreshold : public ydk::Entity
{
    public:
        ShutdownThreshold();
        ~ShutdownThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_rate; //type: uint16
        ydk::YLeaf cdp; //type: uint16
        ydk::YLeaf stp; //type: uint16
        ydk::YLeaf vtp; //type: uint16

}; // Native::Interface::TenGigabitEthernet::L2protocolTunnel::ShutdownThreshold


class Native::Interface::TenGigabitEthernet::Encapsulation : public ydk::Entity
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

        class Dot1Q; //type: Native::Interface::TenGigabitEthernet::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::TenGigabitEthernet::Encapsulation::Isl
        class Ppp; //type: Native::Interface::TenGigabitEthernet::Encapsulation::Ppp
        class Slip; //type: Native::Interface::TenGigabitEthernet::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::TenGigabitEthernet::Encapsulation::FrameRelay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Encapsulation::Isl> isl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Encapsulation::Slip> slip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Encapsulation::FrameRelay> frame_relay; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Encapsulation


class Native::Interface::TenGigabitEthernet::Encapsulation::Dot1Q : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Encapsulation::Dot1Q


class Native::Interface::TenGigabitEthernet::Encapsulation::Isl : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Encapsulation::Isl


class Native::Interface::TenGigabitEthernet::Encapsulation::Ppp : public ydk::Entity
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


}; // Native::Interface::TenGigabitEthernet::Encapsulation::Ppp


class Native::Interface::TenGigabitEthernet::Encapsulation::Slip : public ydk::Entity
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


}; // Native::Interface::TenGigabitEthernet::Encapsulation::Slip


class Native::Interface::TenGigabitEthernet::Encapsulation::FrameRelay : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Encapsulation::FrameRelay


class Native::Interface::TenGigabitEthernet::FairQueueConf : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::FairQueueConf


class Native::Interface::TenGigabitEthernet::FairQueue : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::FairQueue


class Native::Interface::TenGigabitEthernet::Flowcontrol : public ydk::Entity
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

}; // Native::Interface::TenGigabitEthernet::Flowcontrol


class Native::Interface::TenGigabitEthernet::Isis : public ydk::Entity
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

        ydk::YLeaf lsp_interval; //type: uint32
        ydk::YLeaf mesh_group; //type: one of uint32, enumeration
        ydk::YLeaf network; //type: Network
        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf retransmit_interval; //type: uint16
        ydk::YLeaf retransmit_throttle_interval; //type: uint16
        ydk::YLeaf tag; //type: uint32
        class AdjacencyFilter; //type: Native::Interface::TenGigabitEthernet::Isis::AdjacencyFilter
        class Advertise; //type: Native::Interface::TenGigabitEthernet::Isis::Advertise
        class Authentication; //type: Native::Interface::TenGigabitEthernet::Isis::Authentication
        class CircuitType; //type: Native::Interface::TenGigabitEthernet::Isis::CircuitType
        class CsnpInterval; //type: Native::Interface::TenGigabitEthernet::Isis::CsnpInterval
        class Hello; //type: Native::Interface::TenGigabitEthernet::Isis::Hello
        class HelloInterval; //type: Native::Interface::TenGigabitEthernet::Isis::HelloInterval
        class HelloMultiplier; //type: Native::Interface::TenGigabitEthernet::Isis::HelloMultiplier
        class Ipv6; //type: Native::Interface::TenGigabitEthernet::Isis::Ipv6
        class Metric; //type: Native::Interface::TenGigabitEthernet::Isis::Metric
        class Password; //type: Native::Interface::TenGigabitEthernet::Isis::Password
        class Priority; //type: Native::Interface::TenGigabitEthernet::Isis::Priority
        class Bfd; //type: Native::Interface::TenGigabitEthernet::Isis::Bfd
        class ThreeWayHandshake; //type: Native::Interface::TenGigabitEthernet::Isis::ThreeWayHandshake

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::AdjacencyFilter> adjacency_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::Advertise> advertise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::CircuitType> circuit_type; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::CsnpInterval> csnp_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::Hello> hello;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::HelloInterval> hello_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::HelloMultiplier> hello_multiplier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::Priority> priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::Bfd> bfd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::ThreeWayHandshake> three_way_handshake; // presence node
                class MeshGroup;
        class Network;
        class Protocol;

}; // Native::Interface::TenGigabitEthernet::Isis


class Native::Interface::TenGigabitEthernet::Isis::AdjacencyFilter : public ydk::Entity
{
    public:
        AdjacencyFilter();
        ~AdjacencyFilter();

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
        ydk::YLeaf match_all; //type: empty

}; // Native::Interface::TenGigabitEthernet::Isis::AdjacencyFilter


class Native::Interface::TenGigabitEthernet::Isis::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: empty

}; // Native::Interface::TenGigabitEthernet::Isis::Advertise


class Native::Interface::TenGigabitEthernet::Isis::Authentication : public ydk::Entity
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

        class Mode; //type: Native::Interface::TenGigabitEthernet::Isis::Authentication::Mode
        class KeyChain; //type: Native::Interface::TenGigabitEthernet::Isis::Authentication::KeyChain
        class SendOnly; //type: Native::Interface::TenGigabitEthernet::Isis::Authentication::SendOnly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::Authentication::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::Authentication::KeyChain> key_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::Authentication::SendOnly> send_only; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Isis::Authentication


class Native::Interface::TenGigabitEthernet::Isis::Authentication::Mode : public ydk::Entity
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

        class Md5; //type: Native::Interface::TenGigabitEthernet::Isis::Authentication::Mode::Md5
        class Text; //type: Native::Interface::TenGigabitEthernet::Isis::Authentication::Mode::Text

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::Authentication::Mode::Md5> md5; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::Authentication::Mode::Text> text; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Isis::Authentication::Mode


class Native::Interface::TenGigabitEthernet::Isis::Authentication::Mode::Md5 : public ydk::Entity
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

        ydk::YLeaf levels; //type: AuthenticationLevelType

}; // Native::Interface::TenGigabitEthernet::Isis::Authentication::Mode::Md5


class Native::Interface::TenGigabitEthernet::Isis::Authentication::Mode::Text : public ydk::Entity
{
    public:
        Text();
        ~Text();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: AuthenticationLevelType

}; // Native::Interface::TenGigabitEthernet::Isis::Authentication::Mode::Text


class Native::Interface::TenGigabitEthernet::Isis::Authentication::KeyChain : public ydk::Entity
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
        class KeyChainList; //type: Native::Interface::TenGigabitEthernet::Isis::Authentication::KeyChain::KeyChainList

        ydk::YList key_chain_list;
        
}; // Native::Interface::TenGigabitEthernet::Isis::Authentication::KeyChain


class Native::Interface::TenGigabitEthernet::Isis::Authentication::KeyChain::KeyChainList : public ydk::Entity
{
    public:
        KeyChainList();
        ~KeyChainList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: AuthenticationLevelType
        ydk::YLeaf name; //type: string

}; // Native::Interface::TenGigabitEthernet::Isis::Authentication::KeyChain::KeyChainList


class Native::Interface::TenGigabitEthernet::Isis::Authentication::SendOnly : public ydk::Entity
{
    public:
        SendOnly();
        ~SendOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: AuthenticationLevelType

}; // Native::Interface::TenGigabitEthernet::Isis::Authentication::SendOnly


class Native::Interface::TenGigabitEthernet::Isis::CircuitType : public ydk::Entity
{
    public:
        CircuitType();
        ~CircuitType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        class Levels;

}; // Native::Interface::TenGigabitEthernet::Isis::CircuitType


class Native::Interface::TenGigabitEthernet::Isis::CsnpInterval : public ydk::Entity
{
    public:
        CsnpInterval();
        ~CsnpInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        class CsnpIntervalList; //type: Native::Interface::TenGigabitEthernet::Isis::CsnpInterval::CsnpIntervalList

        ydk::YList csnp_interval_list;
        
}; // Native::Interface::TenGigabitEthernet::Isis::CsnpInterval


class Native::Interface::TenGigabitEthernet::Isis::CsnpInterval::CsnpIntervalList : public ydk::Entity
{
    public:
        CsnpIntervalList();
        ~CsnpIntervalList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: uint16
        class Levels;

}; // Native::Interface::TenGigabitEthernet::Isis::CsnpInterval::CsnpIntervalList


class Native::Interface::TenGigabitEthernet::Isis::Hello : public ydk::Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Padding; //type: Native::Interface::TenGigabitEthernet::Isis::Hello::Padding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Isis::Hello


class Native::Interface::TenGigabitEthernet::Isis::Hello::Padding : public ydk::Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always; //type: empty

}; // Native::Interface::TenGigabitEthernet::Isis::Hello::Padding


class Native::Interface::TenGigabitEthernet::Isis::HelloInterval : public ydk::Entity
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

        ydk::YLeaf value_; //type: one of uint16, enumeration
        class HelloIntervalList; //type: Native::Interface::TenGigabitEthernet::Isis::HelloInterval::HelloIntervalList

        ydk::YList hello_interval_list;
                class Value_;

}; // Native::Interface::TenGigabitEthernet::Isis::HelloInterval


class Native::Interface::TenGigabitEthernet::Isis::HelloInterval::HelloIntervalList : public ydk::Entity
{
    public:
        HelloIntervalList();
        ~HelloIntervalList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: one of uint16, enumeration
        class Levels;
        class Value_;

}; // Native::Interface::TenGigabitEthernet::Isis::HelloInterval::HelloIntervalList


class Native::Interface::TenGigabitEthernet::Isis::HelloMultiplier : public ydk::Entity
{
    public:
        HelloMultiplier();
        ~HelloMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        class HelloMultiplierList; //type: Native::Interface::TenGigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList

        ydk::YList hello_multiplier_list;
        
}; // Native::Interface::TenGigabitEthernet::Isis::HelloMultiplier


class Native::Interface::TenGigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList : public ydk::Entity
{
    public:
        HelloMultiplierList();
        ~HelloMultiplierList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: uint16
        class Levels;

}; // Native::Interface::TenGigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList


class Native::Interface::TenGigabitEthernet::Isis::Ipv6 : public ydk::Entity
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

        ydk::YLeaf tag; //type: uint32
        class Metric; //type: Native::Interface::TenGigabitEthernet::Isis::Ipv6::Metric
        class Bfd; //type: Native::Interface::TenGigabitEthernet::Isis::Ipv6::Bfd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::Ipv6::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::TenGigabitEthernet::Isis::Ipv6::Bfd> bfd; // presence node
        
}; // Native::Interface::TenGigabitEthernet::Isis::Ipv6


class Native::Interface::TenGigabitEthernet::Isis::Ipv6::Metric : public ydk::Entity
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

        ydk::YLeaf value_; //type: one of uint32, enumeration
        class MetricList; //type: Native::Interface::TenGigabitEthernet::Isis::Ipv6::Metric::MetricList

        ydk::YList metric_list;
                class Value_;

}; // Native::Interface::TenGigabitEthernet::Isis::Ipv6::Metric

class Native::Interface::FiveGigabitEthernet::Cts::RoleBased::SgtCache : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf egress;
        static const ydk::Enum::YLeaf ingress;

        static int get_enum_value(const std::string & name) {
            if (name == "egress") return 0;
            if (name == "ingress") return 1;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::MediaType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_select;
        static const ydk::Enum::YLeaf rj45;
        static const ydk::Enum::YLeaf sfp;

        static int get_enum_value(const std::string & name) {
            if (name == "auto-select") return 0;
            if (name == "rj45") return 1;
            if (name == "sfp") return 2;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::PortType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nni;

        static int get_enum_value(const std::string & name) {
            if (name == "nni") return 0;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::IfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nhrp;

        static int get_enum_value(const std::string & name) {
            if (name == "nhrp") return 0;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::ServiceInsertion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf waas;

        static int get_enum_value(const std::string & name) {
            if (name == "waas") return 0;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::ChannelProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lacp;
        static const ydk::Enum::YLeaf pagp;

        static int get_enum_value(const std::string & name) {
            if (name == "lacp") return 0;
            if (name == "pagp") return 1;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Duplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf half;

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 0;
            if (name == "full") return 1;
            if (name == "half") return 2;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Nat66 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inside;
        static const ydk::Enum::YLeaf outside;

        static int get_enum_value(const std::string & name) {
            if (name == "inside") return 0;
            if (name == "outside") return 1;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Switchport::Access::Vlan::Vlan_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;

        static int get_enum_value(const std::string & name) {
            if (name == "dynamic") return 0;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Switchport::Mode::Dynamic : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf desirable;

        static int get_enum_value(const std::string & name) {
            if (name == "auto") return 0;
            if (name == "desirable") return 1;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Switchport::PortSecurity::Violation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protect;
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf shutdown;

        static int get_enum_value(const std::string & name) {
            if (name == "protect") return 0;
            if (name == "restrict") return 1;
            if (name == "shutdown") return 2;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Switchport::PortSecurity::Aging::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf inactivity;

        static int get_enum_value(const std::string & name) {
            if (name == "absolute") return 0;
            if (name == "inactivity") return 1;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Switchport::Trunk::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot1q;
        static const ydk::Enum::YLeaf isl;
        static const ydk::Enum::YLeaf negotiate;

        static int get_enum_value(const std::string & name) {
            if (name == "dot1q") return 0;
            if (name == "isl") return 1;
            if (name == "negotiate") return 2;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Switchport::Trunk::Native_::Vlan : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tag;

        static int get_enum_value(const std::string & name) {
            if (name == "tag") return 0;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Switchport::Voice::Vlan::Vlan_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot1p;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf untagged;

        static int get_enum_value(const std::string & name) {
            if (name == "dot1p") return 0;
            if (name == "none") return 1;
            if (name == "untagged") return 2;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Backup::Delay::Failure : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

        static int get_enum_value(const std::string & name) {
            if (name == "never") return 0;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Backup::Delay::SecondaryDisable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

        static int get_enum_value(const std::string & name) {
            if (name == "never") return 0;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Backup::Load::Kickin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

        static int get_enum_value(const std::string & name) {
            if (name == "never") return 0;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Backup::Load::Kickout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

        static int get_enum_value(const std::string & name) {
            if (name == "never") return 0;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Flowcontrol::Receive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

        static int get_enum_value(const std::string & name) {
            if (name == "desired") return 0;
            if (name == "off") return 1;
            if (name == "on") return 2;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Flowcontrol::Send : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

        static int get_enum_value(const std::string & name) {
            if (name == "desired") return 0;
            if (name == "off") return 1;
            if (name == "on") return 2;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Isis::MeshGroup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf blocked;

        static int get_enum_value(const std::string & name) {
            if (name == "blocked") return 0;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Isis::Network : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf point_to_point;

        static int get_enum_value(const std::string & name) {
            if (name == "point-to-point") return 0;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Isis::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf shutdown;

        static int get_enum_value(const std::string & name) {
            if (name == "shutdown") return 0;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Isis::CircuitType::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_1_2;
        static const ydk::Enum::YLeaf level_2_only;

        static int get_enum_value(const std::string & name) {
            if (name == "level-1") return 0;
            if (name == "level-1-2") return 1;
            if (name == "level-2-only") return 2;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

        static int get_enum_value(const std::string & name) {
            if (name == "level-1") return 0;
            if (name == "level-2") return 1;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Isis::HelloInterval::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf minimal;

        static int get_enum_value(const std::string & name) {
            if (name == "minimal") return 0;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Isis::HelloInterval::HelloIntervalList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

        static int get_enum_value(const std::string & name) {
            if (name == "level-1") return 0;
            if (name == "level-2") return 1;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Isis::HelloInterval::HelloIntervalList::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf minimal;

        static int get_enum_value(const std::string & name) {
            if (name == "minimal") return 0;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

        static int get_enum_value(const std::string & name) {
            if (name == "level-1") return 0;
            if (name == "level-2") return 1;
            return -1;
        }
};

class Native::Interface::TenGigabitEthernet::Isis::Ipv6::Metric::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

        static int get_enum_value(const std::string & name) {
            if (name == "maximum") return 0;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_55_ */

