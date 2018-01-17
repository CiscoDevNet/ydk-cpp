#ifndef _CISCO_IOS_XE_NATIVE_10_
#define _CISCO_IOS_XE_NATIVE_10_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_6.hpp"
#include "Cisco_IOS_XE_native_9.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers : public ydk::Entity
{
    public:
        PortNumbers();
        ~PortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number0; //type: uint16
        ydk::YLeaf port_number1; //type: uint16
        ydk::YLeaf port_number2; //type: uint16
        ydk::YLeaf port_number3; //type: uint16
        ydk::YLeaf port_number4; //type: uint16
        ydk::YLeaf port_number5; //type: uint16
        ydk::YLeaf port_number6; //type: uint16
        ydk::YLeaf port_number7; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers


class Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range : public ydk::Entity
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

        ydk::YLeaf start_range; //type: uint16
        ydk::YLeaf end_range; //type: uint16

}; // Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range


class Native::Ip::Nbar::ProtocolPack : public ydk::Entity
{
    public:
        ProtocolPack();
        ~ProtocolPack();

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

        class Filepath; //type: Native::Ip::Nbar::ProtocolPack::Filepath

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Nbar::ProtocolPack::Filepath> > filepath;
        
}; // Native::Ip::Nbar::ProtocolPack


class Native::Ip::Nbar::ProtocolPack::Filepath : public ydk::Entity
{
    public:
        Filepath();
        ~Filepath();

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

        ydk::YLeaf filepath; //type: string
        ydk::YLeaf force; //type: empty

}; // Native::Ip::Nbar::ProtocolPack::Filepath


class Native::Ip::Rsvp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Authentication; //type: Native::Ip::Rsvp::Authentication
        class Signalling; //type: Native::Ip::Rsvp::Signalling

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling> signalling;
        
}; // Native::Ip::Rsvp


class Native::Ip::Rsvp::Authentication : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Neighbor; //type: Native::Ip::Rsvp::Authentication::Neighbor
        class Lifetime; //type: Native::Ip::Rsvp::Authentication::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor> neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Lifetime> lifetime;
                class Type;

}; // Native::Ip::Rsvp::Authentication


class Native::Ip::Rsvp::Authentication::Neighbor : public ydk::Entity
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

        class AccessList; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList
        class Address; //type: Native::Ip::Rsvp::Authentication::Neighbor::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::AccessList> access_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::Address> address;
        
}; // Native::Ip::Rsvp::Authentication::Neighbor


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList : public ydk::Entity
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

        class Number; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number
        class Name; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number> > number;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name> > name;
        
}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number : public ydk::Entity
{
    public:
        Number();
        ~Number();

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

        ydk::YLeaf acl_number; //type: uint8
        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Lifetime; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime> lifetime;
                class Type;

}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm_ss; //type: string

}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name : public ydk::Entity
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

        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Lifetime; //type: Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime> lifetime;
                class Type;

}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name


class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm_ss; //type: string

}; // Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime


class Native::Ip::Rsvp::Authentication::Neighbor::Address : public ydk::Entity
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

        class Ipv4; //type: Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4> > ipv4;
        
}; // Native::Ip::Rsvp::Authentication::Neighbor::Address


class Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf challenge; //type: empty
        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf window_size; //type: uint8
        class Lifetime; //type: Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime> lifetime;
                class Type;

}; // Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4


class Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hh_mm_ss; //type: string

}; // Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime


class Native::Ip::Rsvp::Authentication::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

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

        ydk::YLeaf hh_mm_ss; //type: string

}; // Native::Ip::Rsvp::Authentication::Lifetime


class Native::Ip::Rsvp::Signalling : public ydk::Entity
{
    public:
        Signalling();
        ~Signalling();

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

        ydk::YLeaf initial_retransmit_delay; //type: uint16
        class FastLocalRepair; //type: Native::Ip::Rsvp::Signalling::FastLocalRepair
        class Hello; //type: Native::Ip::Rsvp::Signalling::Hello
        class Patherr; //type: Native::Ip::Rsvp::Signalling::Patherr
        class RateLimit; //type: Native::Ip::Rsvp::Signalling::RateLimit
        class Refresh; //type: Native::Ip::Rsvp::Signalling::Refresh

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::FastLocalRepair> fast_local_repair;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Hello> hello; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Patherr> patherr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::RateLimit> rate_limit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Refresh> refresh;
        
}; // Native::Ip::Rsvp::Signalling


class Native::Ip::Rsvp::Signalling::FastLocalRepair : public ydk::Entity
{
    public:
        FastLocalRepair();
        ~FastLocalRepair();

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

        ydk::YLeaf notifications; //type: uint16
        ydk::YLeaf rate; //type: uint16

}; // Native::Ip::Rsvp::Signalling::FastLocalRepair


class Native::Ip::Rsvp::Signalling::Hello : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf statistics; //type: empty
        class GracefulRestart; //type: Native::Ip::Rsvp::Signalling::Hello::GracefulRestart

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Hello::GracefulRestart> graceful_restart;
        
}; // Native::Ip::Rsvp::Signalling::Hello


class Native::Ip::Rsvp::Signalling::Hello::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

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
        class Mode; //type: Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode
        class Refresh; //type: Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh
        class Send; //type: Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh> refresh;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send> send;
        
}; // Native::Ip::Rsvp::Signalling::Hello::GracefulRestart


class Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode : public ydk::Entity
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

        ydk::YLeaf full; //type: empty
        ydk::YLeaf help_neighbor; //type: empty

}; // Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode


class Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh : public ydk::Entity
{
    public:
        Refresh();
        ~Refresh();

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

        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf misses; //type: uint8

}; // Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh


class Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

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

        ydk::YLeaf recovery_time; //type: uint32

}; // Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send


class Native::Ip::Rsvp::Signalling::Patherr : public ydk::Entity
{
    public:
        Patherr();
        ~Patherr();

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

        class StateRemoval; //type: Native::Ip::Rsvp::Signalling::Patherr::StateRemoval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Patherr::StateRemoval> state_removal; // presence node
        
}; // Native::Ip::Rsvp::Signalling::Patherr


class Native::Ip::Rsvp::Signalling::Patherr::StateRemoval : public ydk::Entity
{
    public:
        StateRemoval();
        ~StateRemoval();

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

        ydk::YLeaf neighbor; //type: uint8

}; // Native::Ip::Rsvp::Signalling::Patherr::StateRemoval


class Native::Ip::Rsvp::Signalling::RateLimit : public ydk::Entity
{
    public:
        RateLimit();
        ~RateLimit();

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

        ydk::YLeaf burst; //type: uint16
        ydk::YLeaf limit; //type: uint16
        ydk::YLeaf maxsize; //type: uint16
        ydk::YLeaf period; //type: uint16

}; // Native::Ip::Rsvp::Signalling::RateLimit


class Native::Ip::Rsvp::Signalling::Refresh : public ydk::Entity
{
    public:
        Refresh();
        ~Refresh();

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
        ydk::YLeaf misses; //type: uint8
        class Reduction; //type: Native::Ip::Rsvp::Signalling::Refresh::Reduction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Rsvp::Signalling::Refresh::Reduction> reduction; // presence node
        
}; // Native::Ip::Rsvp::Signalling::Refresh


class Native::Ip::Rsvp::Signalling::Refresh::Reduction : public ydk::Entity
{
    public:
        Reduction();
        ~Reduction();

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

        ydk::YLeaf ack_delay; //type: uint16

}; // Native::Ip::Rsvp::Signalling::Refresh::Reduction


class Native::Ip::Sla : public ydk::Entity
{
    public:
        Sla();
        ~Sla();

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

        class Entry; //type: Native::Ip::Sla::Entry
        class Enable; //type: Native::Ip::Sla::Enable
        class Responder; //type: Native::Ip::Sla::Responder
        class Logging; //type: Native::Ip::Sla::Logging
        class Group; //type: Native::Ip::Sla::Group
        class Schedule; //type: Native::Ip::Sla::Schedule
        class ReactionConfiguration; //type: Native::Ip::Sla::ReactionConfiguration
        class Server; //type: Native::Ip::Sla::Server

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry> > entry;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Enable> enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Responder> responder; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Group> group;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Schedule> > schedule;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration> > reaction_configuration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Server> server;
        
}; // Native::Ip::Sla


class Native::Ip::Sla::Entry : public ydk::Entity
{
    public:
        Entry();
        ~Entry();

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

        ydk::YLeaf number; //type: uint32
        class IcmpEcho; //type: Native::Ip::Sla::Entry::IcmpEcho
        class PathEcho; //type: Native::Ip::Sla::Entry::PathEcho
        class PathJitter; //type: Native::Ip::Sla::Entry::PathJitter
        class UdpEcho; //type: Native::Ip::Sla::Entry::UdpEcho
        class UdpJitter; //type: Native::Ip::Sla::Entry::UdpJitter
        class Http; //type: Native::Ip::Sla::Entry::Http
        class Dhcp; //type: Native::Ip::Sla::Entry::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::IcmpEcho> icmp_echo;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::PathEcho> path_echo;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::PathJitter> path_jitter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::UdpEcho> udp_echo;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::UdpJitter> udp_jitter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Http> http;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Dhcp> dhcp;
        
}; // Native::Ip::Sla::Entry


class Native::Ip::Sla::Entry::IcmpEcho : public ydk::Entity
{
    public:
        IcmpEcho();
        ~IcmpEcho();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination; //type: string
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf source_ip; //type: string
        ydk::YLeaf data_pattern; //type: string
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf owner; //type: string
        ydk::YLeaf request_data_size; //type: uint32
        ydk::YLeaf tag; //type: string
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf timeout; //type: uint64
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf verify_data; //type: empty
        ydk::YLeaf vrf; //type: string
        class History; //type: Native::Ip::Sla::Entry::IcmpEcho::History

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::IcmpEcho::History> history;
        
}; // Native::Ip::Sla::Entry::IcmpEcho


class Native::Ip::Sla::Entry::IcmpEcho::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf buckets_kept; //type: uint8
        ydk::YLeaf distributions_of_statistics_kept; //type: uint8
        ydk::YLeaf filter; //type: Filter
        ydk::YLeaf hours_of_statistics_kept; //type: uint8
        ydk::YLeaf lives_kept; //type: uint8
        ydk::YLeaf statistics_distribution_interval; //type: uint8
        class Enhanced; //type: Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced> enhanced;
                class Filter;

}; // Native::Ip::Sla::Entry::IcmpEcho::History


class Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced : public ydk::Entity
{
    public:
        Enhanced();
        ~Enhanced();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf buckets; //type: uint8

}; // Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced


class Native::Ip::Sla::Entry::PathEcho : public ydk::Entity
{
    public:
        PathEcho();
        ~PathEcho();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dst_ip; //type: string
        ydk::YLeaf source_ip; //type: string
        ydk::YLeaf paths_of_statistics_kept; //type: uint8
        ydk::YLeaf samples_of_history_kept; //type: uint8
        ydk::YLeaf hops_of_statistics_kept; //type: uint8

}; // Native::Ip::Sla::Entry::PathEcho


class Native::Ip::Sla::Entry::PathJitter : public ydk::Entity
{
    public:
        PathJitter();
        ~PathJitter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dst_ip; //type: string
        ydk::YLeaf source_ip; //type: string
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf owner; //type: string
        ydk::YLeaf request_data_size; //type: uint32
        ydk::YLeaf tag; //type: string
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf verify_data; //type: empty
        ydk::YLeaf vrf; //type: string
        ydk::YLeafList lsr_path; //type: list of  string
        class Default_; //type: Native::Ip::Sla::Entry::PathJitter::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::PathJitter::Default_> default_;
        
}; // Native::Ip::Sla::Entry::PathJitter


class Native::Ip::Sla::Entry::PathJitter::Default_ : public ydk::Entity
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

        ydk::YLeaf frequency; //type: empty
        ydk::YLeaf lsr_path; //type: empty
        ydk::YLeaf owner; //type: empty
        ydk::YLeaf request_data_size; //type: empty
        ydk::YLeaf tag; //type: empty
        ydk::YLeaf threshold; //type: empty
        ydk::YLeaf timeout; //type: empty
        ydk::YLeaf tos; //type: empty
        ydk::YLeaf verify_data; //type: empty
        ydk::YLeaf vrf; //type: empty

}; // Native::Ip::Sla::Entry::PathJitter::Default_


class Native::Ip::Sla::Entry::UdpEcho : public ydk::Entity
{
    public:
        UdpEcho();
        ~UdpEcho();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dest_addr; //type: one of string, union
        ydk::YLeaf dest_port; //type: uint16
        ydk::YLeaf source_ip; //type: one of string, union
        ydk::YLeaf source_port; //type: uint16

}; // Native::Ip::Sla::Entry::UdpEcho


class Native::Ip::Sla::Entry::UdpJitter : public ydk::Entity
{
    public:
        UdpJitter();
        ~UdpJitter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dest_addr; //type: one of string, union
        ydk::YLeaf portno; //type: uint16
        ydk::YLeaf source_ip; //type: one of string, union
        ydk::YLeaf num_packets; //type: uint16
        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf owner; //type: string
        ydk::YLeaf request_data_size; //type: uint16
        ydk::YLeaf tag; //type: string
        ydk::YLeaf threshold; //type: uint16
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf traffic_class; //type: uint8
        ydk::YLeaf vrf; //type: string
        class History; //type: Native::Ip::Sla::Entry::UdpJitter::History

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::UdpJitter::History> history;
        
}; // Native::Ip::Sla::Entry::UdpJitter


class Native::Ip::Sla::Entry::UdpJitter::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distributions_of_statistics_kept; //type: uint8
        ydk::YLeaf hours_of_statistics_kept; //type: uint8
        ydk::YLeaf statistics_distribution_interval; //type: uint8
        class Enhanced; //type: Native::Ip::Sla::Entry::UdpJitter::History::Enhanced

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::UdpJitter::History::Enhanced> enhanced;
        
}; // Native::Ip::Sla::Entry::UdpJitter::History


class Native::Ip::Sla::Entry::UdpJitter::History::Enhanced : public ydk::Entity
{
    public:
        Enhanced();
        ~Enhanced();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf buckets; //type: uint8

}; // Native::Ip::Sla::Entry::UdpJitter::History::Enhanced


class Native::Ip::Sla::Entry::Http : public ydk::Entity
{
    public:
        Http();
        ~Http();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf vrf; //type: string
        class Get; //type: Native::Ip::Sla::Entry::Http::Get
        class Raw; //type: Native::Ip::Sla::Entry::Http::Raw

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Http::Get> get;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Entry::Http::Raw> raw;
        
}; // Native::Ip::Sla::Entry::Http


class Native::Ip::Sla::Entry::Http::Get : public ydk::Entity
{
    public:
        Get();
        ~Get();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf url; //type: string
        ydk::YLeaf source_ip; //type: one of string, union
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf name_server; //type: one of string, union

}; // Native::Ip::Sla::Entry::Http::Get


class Native::Ip::Sla::Entry::Http::Raw : public ydk::Entity
{
    public:
        Raw();
        ~Raw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf url; //type: string
        ydk::YLeaf source_ip; //type: one of string, union
        ydk::YLeaf source_port; //type: uint16
        ydk::YLeaf name_server; //type: one of string, union

}; // Native::Ip::Sla::Entry::Http::Raw


class Native::Ip::Sla::Entry::Dhcp : public ydk::Entity
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

        ydk::YLeaf dst_ip; //type: string
        ydk::YLeaf source_ip; //type: string

}; // Native::Ip::Sla::Entry::Dhcp


class Native::Ip::Sla::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

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

        ydk::YLeaf reaction_alerts; //type: empty

}; // Native::Ip::Sla::Enable


class Native::Ip::Sla::Responder : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class UdpEcho; //type: Native::Ip::Sla::Responder::UdpEcho
        class TcpConnect; //type: Native::Ip::Sla::Responder::TcpConnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Responder::UdpEcho> udp_echo;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Responder::TcpConnect> tcp_connect;
        
}; // Native::Ip::Sla::Responder


class Native::Ip::Sla::Responder::UdpEcho : public ydk::Entity
{
    public:
        UdpEcho();
        ~UdpEcho();

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

        ydk::YLeaf port; //type: uint16
        class Ipaddress; //type: Native::Ip::Sla::Responder::UdpEcho::Ipaddress

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Responder::UdpEcho::Ipaddress> > ipaddress;
        
}; // Native::Ip::Sla::Responder::UdpEcho


class Native::Ip::Sla::Responder::UdpEcho::Ipaddress : public ydk::Entity
{
    public:
        Ipaddress();
        ~Ipaddress();

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

        ydk::YLeaf host; //type: string
        ydk::YLeaf port; //type: uint16

}; // Native::Ip::Sla::Responder::UdpEcho::Ipaddress


class Native::Ip::Sla::Responder::TcpConnect : public ydk::Entity
{
    public:
        TcpConnect();
        ~TcpConnect();

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

        ydk::YLeaf port; //type: uint16
        class Ipaddress; //type: Native::Ip::Sla::Responder::TcpConnect::Ipaddress

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Responder::TcpConnect::Ipaddress> > ipaddress;
        
}; // Native::Ip::Sla::Responder::TcpConnect


class Native::Ip::Sla::Responder::TcpConnect::Ipaddress : public ydk::Entity
{
    public:
        Ipaddress();
        ~Ipaddress();

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

        ydk::YLeaf host; //type: string
        ydk::YLeaf port; //type: uint16

}; // Native::Ip::Sla::Responder::TcpConnect::Ipaddress


class Native::Ip::Sla::Logging : public ydk::Entity
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

        ydk::YLeaf traps; //type: empty

}; // Native::Ip::Sla::Logging


class Native::Ip::Sla::Group : public ydk::Entity
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

        class Schedule; //type: Native::Ip::Sla::Group::Schedule

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Group::Schedule> > schedule;
        
}; // Native::Ip::Sla::Group


class Native::Ip::Sla::Group::Schedule : public ydk::Entity
{
    public:
        Schedule();
        ~Schedule();

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

        ydk::YLeaf entry_number; //type: uint32
        class ProbeIds; //type: Native::Ip::Sla::Group::Schedule::ProbeIds

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Group::Schedule::ProbeIds> > probe_ids;
        
}; // Native::Ip::Sla::Group::Schedule


class Native::Ip::Sla::Group::Schedule::ProbeIds : public ydk::Entity
{
    public:
        ProbeIds();
        ~ProbeIds();

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
        class SchedulePeriod; //type: Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod> schedule_period;
        
}; // Native::Ip::Sla::Group::Schedule::ProbeIds


class Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod : public ydk::Entity
{
    public:
        SchedulePeriod();
        ~SchedulePeriod();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf life; //type: one of uint32, enumeration
        class Frequency; //type: Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency
        class StartTime; //type: Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency> frequency;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime> start_time;
                class Life;

}; // Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod


class Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency : public ydk::Entity
{
    public:
        Frequency();
        ~Frequency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frequency_val; //type: uint32
        ydk::YLeaf range; //type: string

}; // Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency


class Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime : public ydk::Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf now; //type: empty

}; // Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime


class Native::Ip::Sla::Schedule : public ydk::Entity
{
    public:
        Schedule();
        ~Schedule();

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

        ydk::YLeaf entry_number; //type: uint32
        ydk::YLeaf ageout; //type: uint32
        ydk::YLeaf life; //type: one of uint32, enumeration
        ydk::YLeaf recurring; //type: empty
        class StartTime; //type: Native::Ip::Sla::Schedule::StartTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Schedule::StartTime> start_time;
                class Life;

}; // Native::Ip::Sla::Schedule


class Native::Ip::Sla::Schedule::StartTime : public ydk::Entity
{
    public:
        StartTime();
        ~StartTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf after; //type: string
        ydk::YLeaf hour_min; //type: string
        ydk::YLeaf hour_min_sec; //type: string
        ydk::YLeaf now; //type: empty
        ydk::YLeaf pending; //type: empty
        ydk::YLeaf random; //type: uint32

}; // Native::Ip::Sla::Schedule::StartTime


class Native::Ip::Sla::ReactionConfiguration : public ydk::Entity
{
    public:
        ReactionConfiguration();
        ~ReactionConfiguration();

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

        ydk::YLeaf entry_number; //type: uint64
        class React; //type: Native::Ip::Sla::ReactionConfiguration::React

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React> react;
        
}; // Native::Ip::Sla::ReactionConfiguration


class Native::Ip::Sla::ReactionConfiguration::React : public ydk::Entity
{
    public:
        React();
        ~React();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Connectionloss; //type: Native::Ip::Sla::ReactionConfiguration::React::Connectionloss
        class Rtt; //type: Native::Ip::Sla::ReactionConfiguration::React::Rtt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React::Connectionloss> connectionloss; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React::Rtt> rtt; // presence node
        
}; // Native::Ip::Sla::ReactionConfiguration::React


class Native::Ip::Sla::ReactionConfiguration::React::Connectionloss : public ydk::Entity
{
    public:
        Connectionloss();
        ~Connectionloss();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdType; //type: Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType> threshold_type;
        
}; // Native::Ip::Sla::ReactionConfiguration::React::Connectionloss


class Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType : public ydk::Entity
{
    public:
        ThresholdType();
        ~ThresholdType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xofy; //type: Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy> xofy;
        
}; // Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType


class Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy : public ydk::Entity
{
    public:
        Xofy();
        ~Xofy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf x_val; //type: uint8
        ydk::YLeaf y_val; //type: uint8
        ydk::YLeaf action_type; //type: ActionType
        class ActionType;

}; // Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy


class Native::Ip::Sla::ReactionConfiguration::React::Rtt : public ydk::Entity
{
    public:
        Rtt();
        ~Rtt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdValue; //type: Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue> threshold_value;
        
}; // Native::Ip::Sla::ReactionConfiguration::React::Rtt


class Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue : public ydk::Entity
{
    public:
        ThresholdValue();
        ~ThresholdValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf upper_limit_val; //type: uint32
        ydk::YLeaf lower_limit_val; //type: uint32
        ydk::YLeaf threshold_type; //type: ThresholdType
        ydk::YLeaf action_type; //type: ActionType
        class ThresholdType;
        class ActionType;

}; // Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue


class Native::Ip::Sla::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        class Twamp; //type: Native::Ip::Sla::Server::Twamp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Sla::Server::Twamp> twamp; // presence node
        
}; // Native::Ip::Sla::Server


class Native::Ip::Sla::Server::Twamp : public ydk::Entity
{
    public:
        Twamp();
        ~Twamp();

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


}; // Native::Ip::Sla::Server::Twamp


class Native::Ip::Wccp : public ydk::Entity
{
    public:
        Wccp();
        ~Wccp();

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

        ydk::YLeaf source_interface; //type: string
        class WccpList; //type: Native::Ip::Wccp::WccpList
        class WebCache; //type: Native::Ip::Wccp::WebCache
        class Check; //type: Native::Ip::Wccp::Check
        class Vrf; //type: Native::Ip::Wccp::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::WccpList> > wccp_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::WebCache> web_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::Check> check;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::Vrf> > vrf;
        
}; // Native::Ip::Wccp


class Native::Ip::Wccp::WccpList : public ydk::Entity
{
    public:
        WccpList();
        ~WccpList();

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

        ydk::YLeaf id; //type: uint8
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_list; //type: one of string, uint16
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf redirect_list; //type: one of string, uint16
        ydk::YLeaf snmp_disabled; //type: empty
        class Password; //type: Native::Ip::Wccp::WccpList::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::WccpList::Password> password;
                class Mode;

}; // Native::Ip::Wccp::WccpList


class Native::Ip::Wccp::WccpList::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf clear_key; //type: string
        class Encryption;

}; // Native::Ip::Wccp::WccpList::Password


class Native::Ip::Wccp::WebCache : public ydk::Entity
{
    public:
        WebCache();
        ~WebCache();

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

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_list; //type: one of string, uint16
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf redirect_list; //type: one of string, uint16
        ydk::YLeaf snmp_disabled; //type: empty
        class Password; //type: Native::Ip::Wccp::WebCache::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::WebCache::Password> password;
                class Mode;

}; // Native::Ip::Wccp::WebCache


class Native::Ip::Wccp::WebCache::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

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

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf clear_key; //type: string
        class Encryption;

}; // Native::Ip::Wccp::WebCache::Password


class Native::Ip::Wccp::Check : public ydk::Entity
{
    public:
        Check();
        ~Check();

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

        class Acl; //type: Native::Ip::Wccp::Check::Acl
        class Services; //type: Native::Ip::Wccp::Check::Services

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::Check::Acl> acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::Check::Services> services;
        
}; // Native::Ip::Wccp::Check


class Native::Ip::Wccp::Check::Acl : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf outbound; //type: empty

}; // Native::Ip::Wccp::Check::Acl


class Native::Ip::Wccp::Check::Services : public ydk::Entity
{
    public:
        Services();
        ~Services();

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

        ydk::YLeaf all; //type: empty

}; // Native::Ip::Wccp::Check::Services


class Native::Ip::Wccp::Vrf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf source_interface; //type: string
        class WccpList; //type: Native::Ip::Wccp::Vrf::WccpList
        class WebCache; //type: Native::Ip::Wccp::Vrf::WebCache

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::Vrf::WccpList> > wccp_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::Vrf::WebCache> web_cache;
        
}; // Native::Ip::Wccp::Vrf


class Native::Ip::Wccp::Vrf::WccpList : public ydk::Entity
{
    public:
        WccpList();
        ~WccpList();

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
        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_list; //type: one of string, uint16
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf redirect_list; //type: one of string, uint16
        ydk::YLeaf snmp_disabled; //type: empty
        class Password; //type: Native::Ip::Wccp::Vrf::WccpList::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::Vrf::WccpList::Password> password;
                class Mode;

}; // Native::Ip::Wccp::Vrf::WccpList


class Native::Ip::Wccp::Vrf::WccpList::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf clear_key; //type: string
        class Encryption;

}; // Native::Ip::Wccp::Vrf::WccpList::Password


class Native::Ip::Wccp::Vrf::WebCache : public ydk::Entity
{
    public:
        WebCache();
        ~WebCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_address; //type: string
        ydk::YLeaf group_list; //type: one of string, uint16
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf redirect_list; //type: one of string, uint16
        ydk::YLeaf snmp_disabled; //type: empty
        class Password; //type: Native::Ip::Wccp::Vrf::WebCache::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ip::Wccp::Vrf::WebCache::Password> password;
                class Mode;

}; // Native::Ip::Wccp::Vrf::WebCache


class Native::Ip::Wccp::Vrf::WebCache::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf clear_key; //type: string
        class Encryption;

}; // Native::Ip::Wccp::Vrf::WebCache::Password


class Native::Mka : public ydk::Entity
{
    public:
        Mka();
        ~Mka();

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

        class Policy; //type: Native::Mka::Policy

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mka::Policy> > policy;
        
}; // Native::Mka


class Native::Mka::Policy : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf confidentiality_offset; //type: ConfidentialityOffset
        class MacsecCipherSuite; //type: Native::Mka::Policy::MacsecCipherSuite

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Mka::Policy::MacsecCipherSuite> macsec_cipher_suite;
                class ConfidentialityOffset;

}; // Native::Mka::Policy


class Native::Mka::Policy::MacsecCipherSuite : public ydk::Entity
{
    public:
        MacsecCipherSuite();
        ~MacsecCipherSuite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gcm_aes_128; //type: empty
        ydk::YLeaf gcm_aes_256; //type: empty

}; // Native::Mka::Policy::MacsecCipherSuite


class Native::Macro : public ydk::Entity
{
    public:
        Macro();
        ~Macro();

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

        class Global; //type: Native::Macro::Global
        class Auto_; //type: Native::Macro::Auto_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Macro::Global> global;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Macro::Auto_> auto_;
        
}; // Native::Macro


class Native::Macro::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf description; //type: string

}; // Native::Macro::Global


class Native::Macro::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

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


}; // Native::Macro::Auto_


class Native::Ipv6 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf flowset; //type: empty
        ydk::YLeaf unicast_routing; //type: empty
        ydk::YLeaf source_route; //type: boolean
        class SourceGuard; //type: Native::Ipv6::SourceGuard
        class DestinationGuard; //type: Native::Ipv6::DestinationGuard
        class Dhcp; //type: Native::Ipv6::Dhcp
        class AccessList; //type: Native::Ipv6::AccessList
        class Multicast; //type: Native::Ipv6::Multicast
        class Cef; //type: Native::Ipv6::Cef
        class Nd; //type: Native::Ipv6::Nd
        class Pim; //type: Native::Ipv6::Pim
        class Route; //type: Native::Ipv6::Route
        class Router; //type: Native::Ipv6::Router
        class Spd; //type: Native::Ipv6::Spd
        class PrefixList; //type: Native::Ipv6::PrefixList
        class Neighbor; //type: Native::Ipv6::Neighbor
        class Mld; //type: Native::Ipv6::Mld
        class MulticastRouting; //type: Native::Ipv6::MulticastRouting
        class Rip; //type: Native::Ipv6::Rip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::SourceGuard> source_guard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::DestinationGuard> destination_guard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList> access_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Multicast> multicast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef> cef; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd> nd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Pim> pim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Route> route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router> router;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Spd> spd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::PrefixList> prefix_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Neighbor> > neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Mld> mld;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::MulticastRouting> multicast_routing; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Rip> rip;
        
}; // Native::Ipv6


class Native::Ipv6::SourceGuard : public ydk::Entity
{
    public:
        SourceGuard();
        ~SourceGuard();

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

        class Policy; //type: Native::Ipv6::SourceGuard::Policy

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::SourceGuard::Policy> > policy;
        
}; // Native::Ipv6::SourceGuard


class Native::Ipv6::SourceGuard::Policy : public ydk::Entity
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

        ydk::YLeaf source_guard_policy_name; //type: string
        class Validate; //type: Native::Ipv6::SourceGuard::Policy::Validate
        class Deny; //type: Native::Ipv6::SourceGuard::Policy::Deny
        class Permit; //type: Native::Ipv6::SourceGuard::Policy::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::SourceGuard::Policy::Validate> validate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::SourceGuard::Policy::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::SourceGuard::Policy::Permit> permit;
        
}; // Native::Ipv6::SourceGuard::Policy


class Native::Ipv6::SourceGuard::Policy::Validate : public ydk::Entity
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

        ydk::YLeaf address; //type: empty
        ydk::YLeaf prefix; //type: empty

}; // Native::Ipv6::SourceGuard::Policy::Validate


class Native::Ipv6::SourceGuard::Policy::Deny : public ydk::Entity
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

        ydk::YLeaf global_autoconf; //type: empty

}; // Native::Ipv6::SourceGuard::Policy::Deny


class Native::Ipv6::SourceGuard::Policy::Permit : public ydk::Entity
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

        ydk::YLeaf link_local; //type: empty

}; // Native::Ipv6::SourceGuard::Policy::Permit


class Native::Ipv6::DestinationGuard : public ydk::Entity
{
    public:
        DestinationGuard();
        ~DestinationGuard();

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

        class Policy; //type: Native::Ipv6::DestinationGuard::Policy

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::DestinationGuard::Policy> > policy;
        
}; // Native::Ipv6::DestinationGuard


class Native::Ipv6::DestinationGuard::Policy : public ydk::Entity
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

        ydk::YLeaf destination_guard_policy_name; //type: string
        class Enforcement; //type: Native::Ipv6::DestinationGuard::Policy::Enforcement

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::DestinationGuard::Policy::Enforcement> enforcement;
        
}; // Native::Ipv6::DestinationGuard::Policy


class Native::Ipv6::DestinationGuard::Policy::Enforcement : public ydk::Entity
{
    public:
        Enforcement();
        ~Enforcement();

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
        ydk::YLeaf stressed; //type: empty

}; // Native::Ipv6::DestinationGuard::Policy::Enforcement


class Native::Ipv6::Dhcp : public ydk::Entity
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

        class Server; //type: Native::Ipv6::Dhcp::Server
        class Guard; //type: Native::Ipv6::Dhcp::Guard
        class Pool; //type: Native::Ipv6::Dhcp::Pool

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Server> server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Guard> guard;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Pool> > pool;
        
}; // Native::Ipv6::Dhcp


class Native::Ipv6::Dhcp::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        class Vrf; //type: Native::Ipv6::Dhcp::Server::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Server::Vrf> vrf;
        
}; // Native::Ipv6::Dhcp::Server


class Native::Ipv6::Dhcp::Server::Vrf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf enable; //type: empty

}; // Native::Ipv6::Dhcp::Server::Vrf


class Native::Ipv6::Dhcp::Guard : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Policy; //type: Native::Ipv6::Dhcp::Guard::Policy

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Guard::Policy> > policy;
        
}; // Native::Ipv6::Dhcp::Guard


class Native::Ipv6::Dhcp::Guard::Policy : public ydk::Entity
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

        ydk::YLeaf dhcp_guard_policy_name; //type: string
        class DeviceRole; //type: Native::Ipv6::Dhcp::Guard::Policy::DeviceRole
        class Match; //type: Native::Ipv6::Dhcp::Guard::Policy::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Guard::Policy::DeviceRole> device_role;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Guard::Policy::Match> match;
        
}; // Native::Ipv6::Dhcp::Guard::Policy


class Native::Ipv6::Dhcp::Guard::Policy::DeviceRole : public ydk::Entity
{
    public:
        DeviceRole();
        ~DeviceRole();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server; //type: empty
        ydk::YLeaf client; //type: empty

}; // Native::Ipv6::Dhcp::Guard::Policy::DeviceRole


class Native::Ipv6::Dhcp::Guard::Policy::Match : public ydk::Entity
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

        class Server; //type: Native::Ipv6::Dhcp::Guard::Policy::Match::Server

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Guard::Policy::Match::Server> server;
        
}; // Native::Ipv6::Dhcp::Guard::Policy::Match


class Native::Ipv6::Dhcp::Guard::Policy::Match::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list; //type: string

}; // Native::Ipv6::Dhcp::Guard::Policy::Match::Server


class Native::Ipv6::Dhcp::Pool : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeafList dns_server; //type: list of  string
        class Address; //type: Native::Ipv6::Dhcp::Pool::Address
        class LinkAddress; //type: Native::Ipv6::Dhcp::Pool::LinkAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Pool::Address> address;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Pool::LinkAddress> > link_address;
        
}; // Native::Ipv6::Dhcp::Pool


class Native::Ipv6::Dhcp::Pool::Address : public ydk::Entity
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

        class Prefix; //type: Native::Ipv6::Dhcp::Pool::Address::Prefix

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Pool::Address::Prefix> > prefix;
        
}; // Native::Ipv6::Dhcp::Pool::Address


class Native::Ipv6::Dhcp::Pool::Address::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string
        class Lifetime; //type: Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime> lifetime;
        
}; // Native::Ipv6::Dhcp::Pool::Address::Prefix


class Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid_lifetime; //type: one of uint32, enumeration
        ydk::YLeaf preferred_lifetime; //type: one of uint32, enumeration
        class ValidLifetime;
        class PreferredLifetime;

}; // Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime


class Native::Ipv6::Dhcp::Pool::LinkAddress : public ydk::Entity
{
    public:
        LinkAddress();
        ~LinkAddress();

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

}; // Native::Ipv6::Dhcp::Pool::LinkAddress


class Native::Ipv6::AccessList : public ydk::Entity
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
        class NamedAcl; //type: Native::Ipv6::AccessList::NamedAcl
        class NamedRbAcl; //type: Native::Ipv6::AccessList::NamedRbAcl
        class LogUpdate; //type: Native::Ipv6::AccessList::LogUpdate

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedAcl> > named_acl;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedRbAcl> > named_rb_acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::LogUpdate> log_update;
        
}; // Native::Ipv6::AccessList


class Native::Ipv6::AccessList::NamedAcl : public ydk::Entity
{
    public:
        NamedAcl();
        ~NamedAcl();

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
        class AccessListSeqRule; //type: Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule
        class Default_; //type: Native::Ipv6::AccessList::NamedAcl::Default_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule> > access_list_seq_rule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedAcl::Default_> default_;
        
}; // Native::Ipv6::AccessList::NamedAcl


class Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule : public ydk::Entity
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
        class AceRule; //type: Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule


class Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule : public ydk::Entity
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
        ydk::YLeaf source_host; //type: one of string, union
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_wildcard_bits; //type: string
        ydk::YLeaf source_prefix; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        ydk::YLeaf destination_host; //type: one of string, union
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wildcard_bits; //type: string
        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_any; //type: empty
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration
        ydk::YLeaf auth; //type: empty
        ydk::YLeaf dest_option; //type: empty
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf flow_label; //type: uint32
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf hbh; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf mobility; //type: empty
        ydk::YLeaf mobility_type; //type: one of uint8, enumeration
        ydk::YLeaf routing; //type: empty
        ydk::YLeaf routing_type; //type: uint8
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf msg_type_case; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Action;
        class Protocol;
        class NamedMsgType;

}; // Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule


class Native::Ipv6::AccessList::NamedAcl::Default_ : public ydk::Entity
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

        class AccessListSeqRule; //type: Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule> > access_list_seq_rule;
        
}; // Native::Ipv6::AccessList::NamedAcl::Default_


class Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule : public ydk::Entity
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
        class AceRule; //type: Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule


class Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule : public ydk::Entity
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
        ydk::YLeaf source_host; //type: one of string, union
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_wildcard_bits; //type: string
        ydk::YLeaf source_prefix; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        ydk::YLeaf destination_host; //type: one of string, union
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wildcard_bits; //type: string
        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_any; //type: empty
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration
        ydk::YLeaf auth; //type: empty
        ydk::YLeaf dest_option; //type: empty
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf flow_label; //type: uint32
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf hbh; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf mobility; //type: empty
        ydk::YLeaf mobility_type; //type: one of uint8, enumeration
        ydk::YLeaf routing; //type: empty
        ydk::YLeaf routing_type; //type: uint8
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf msg_type_case; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Action;
        class Protocol;
        class NamedMsgType;

}; // Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule


class Native::Ipv6::AccessList::NamedRbAcl : public ydk::Entity
{
    public:
        NamedRbAcl();
        ~NamedRbAcl();

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
        ydk::YLeaf role_based; //type: empty
        class AccessListSeqRule; //type: Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule
        class Default_; //type: Native::Ipv6::AccessList::NamedRbAcl::Default_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule> > access_list_seq_rule;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedRbAcl::Default_> default_;
        
}; // Native::Ipv6::AccessList::NamedRbAcl


class Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule : public ydk::Entity
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
        class AceRule; //type: Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule


class Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule : public ydk::Entity
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
        ydk::YLeaf source_host; //type: one of string, union
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_wildcard_bits; //type: string
        ydk::YLeaf source_prefix; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        ydk::YLeaf destination_host; //type: one of string, union
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wildcard_bits; //type: string
        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_any; //type: empty
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration
        ydk::YLeaf auth; //type: empty
        ydk::YLeaf dest_option; //type: empty
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf flow_label; //type: uint32
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf hbh; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf mobility; //type: empty
        ydk::YLeaf mobility_type; //type: one of uint8, enumeration
        ydk::YLeaf routing; //type: empty
        ydk::YLeaf routing_type; //type: uint8
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf msg_type_case; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Action;
        class Protocol;
        class NamedMsgType;

}; // Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule


class Native::Ipv6::AccessList::NamedRbAcl::Default_ : public ydk::Entity
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

        class AccessListSeqRule; //type: Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule> > access_list_seq_rule;
        
}; // Native::Ipv6::AccessList::NamedRbAcl::Default_


class Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule : public ydk::Entity
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
        class AceRule; //type: Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule> ace_rule;
        
}; // Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule


class Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule : public ydk::Entity
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
        ydk::YLeaf source_host; //type: one of string, union
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_wildcard_bits; //type: string
        ydk::YLeaf source_prefix; //type: string
        ydk::YLeaf any; //type: empty
        ydk::YLeaf src_eq; //type: one of uint16, enumeration
        ydk::YLeaf src_gt; //type: one of uint16, enumeration
        ydk::YLeaf src_lt; //type: one of uint16, enumeration
        ydk::YLeaf src_neq; //type: one of uint16, enumeration
        ydk::YLeaf src_range1; //type: one of uint16, enumeration
        ydk::YLeaf src_range2; //type: one of uint16, enumeration
        ydk::YLeaf destination_host; //type: one of string, union
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wildcard_bits; //type: string
        ydk::YLeaf destination_prefix; //type: string
        ydk::YLeaf destination_any; //type: empty
        ydk::YLeaf dst_eq; //type: one of uint16, enumeration
        ydk::YLeaf dst_gt; //type: one of uint16, enumeration
        ydk::YLeaf dst_lt; //type: one of uint16, enumeration
        ydk::YLeaf dst_neq; //type: one of uint16, enumeration
        ydk::YLeaf dst_range1; //type: one of uint16, enumeration
        ydk::YLeaf dst_range2; //type: one of uint16, enumeration
        ydk::YLeaf auth; //type: empty
        ydk::YLeaf dest_option; //type: empty
        ydk::YLeaf dscp; //type: one of uint8, enumeration
        ydk::YLeaf flow_label; //type: uint32
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf hbh; //type: empty
        ydk::YLeaf log; //type: empty
        ydk::YLeaf log_input; //type: empty
        ydk::YLeaf mobility; //type: empty
        ydk::YLeaf mobility_type; //type: one of uint8, enumeration
        ydk::YLeaf routing; //type: empty
        ydk::YLeaf routing_type; //type: uint8
        ydk::YLeaf time_range; //type: string
        ydk::YLeaf ack; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty
        ydk::YLeaf established; //type: empty
        ydk::YLeaf msg_type_case; //type: uint8
        ydk::YLeaf msg_code; //type: uint8
        ydk::YLeaf named_msg_type; //type: NamedMsgType
        class Action;
        class Protocol;
        class NamedMsgType;

}; // Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule


class Native::Ipv6::AccessList::LogUpdate : public ydk::Entity
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

}; // Native::Ipv6::AccessList::LogUpdate


class Native::Ipv6::Multicast : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf; //type: string
        class Rpf; //type: Native::Ipv6::Multicast::Rpf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Multicast::Rpf> rpf;
        
}; // Native::Ipv6::Multicast


class Native::Ipv6::Multicast::Rpf : public ydk::Entity
{
    public:
        Rpf();
        ~Rpf();

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

        ydk::YLeaf use_bgp; //type: empty
        class Backoff; //type: Native::Ipv6::Multicast::Rpf::Backoff

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Multicast::Rpf::Backoff> backoff;
        
}; // Native::Ipv6::Multicast::Rpf


class Native::Ipv6::Multicast::Rpf::Backoff : public ydk::Entity
{
    public:
        Backoff();
        ~Backoff();

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

        ydk::YLeaf initial_delay; //type: uint16
        ydk::YLeaf max_delay; //type: uint16

}; // Native::Ipv6::Multicast::Rpf::Backoff


class Native::Ipv6::Cef : public ydk::Entity
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
        class Accounting; //type: Native::Ipv6::Cef::Accounting
        class Optimize; //type: Native::Ipv6::Cef::Optimize
        class TrafficStatistics; //type: Native::Ipv6::Cef::TrafficStatistics
        class LoadSharing; //type: Native::Ipv6::Cef::LoadSharing

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::Optimize> optimize;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::TrafficStatistics> traffic_statistics;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing> load_sharing;
        
}; // Native::Ipv6::Cef


class Native::Ipv6::Cef::Accounting : public ydk::Entity
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

}; // Native::Ipv6::Cef::Accounting


class Native::Ipv6::Cef::Optimize : public ydk::Entity
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

        class Neighbor; //type: Native::Ipv6::Cef::Optimize::Neighbor

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::Optimize::Neighbor> neighbor;
        
}; // Native::Ipv6::Cef::Optimize


class Native::Ipv6::Cef::Optimize::Neighbor : public ydk::Entity
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

}; // Native::Ipv6::Cef::Optimize::Neighbor


class Native::Ipv6::Cef::TrafficStatistics : public ydk::Entity
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

}; // Native::Ipv6::Cef::TrafficStatistics


class Native::Ipv6::Cef::LoadSharing : public ydk::Entity
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

        class Algorithm; //type: Native::Ipv6::Cef::LoadSharing::Algorithm
        class KeyControl; //type: Native::Ipv6::Cef::LoadSharing::KeyControl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm> algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::KeyControl> key_control;
        
}; // Native::Ipv6::Cef::LoadSharing


class Native::Ipv6::Cef::LoadSharing::Algorithm : public ydk::Entity
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

        class Tunnel; //type: Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel
        class Universal; //type: Native::Ipv6::Cef::LoadSharing::Algorithm::Universal
        class Original; //type: Native::Ipv6::Cef::LoadSharing::Algorithm::Original
        class IncludePorts; //type: Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel> tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm::Universal> universal;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm::Original> original;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts> include_ports; // presence node
        
}; // Native::Ipv6::Cef::LoadSharing::Algorithm


class Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel : public ydk::Entity
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

}; // Native::Ipv6::Cef::LoadSharing::Algorithm::Tunnel


class Native::Ipv6::Cef::LoadSharing::Algorithm::Universal : public ydk::Entity
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

}; // Native::Ipv6::Cef::LoadSharing::Algorithm::Universal


class Native::Ipv6::Cef::LoadSharing::Algorithm::Original : public ydk::Entity
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

}; // Native::Ipv6::Cef::LoadSharing::Algorithm::Original


class Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts : public ydk::Entity
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

        class Destination; //type: Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination
        class Source; //type: Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination> destination; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source> source; // presence node
        
}; // Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts


class Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination : public ydk::Entity
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

}; // Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Destination


class Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source : public ydk::Entity
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
        class Destination; //type: Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination> destination; // presence node
        
}; // Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source


class Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination : public ydk::Entity
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
        class Gtp; //type: Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp> gtp; // presence node
        
}; // Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination


class Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp : public ydk::Entity
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

}; // Native::Ipv6::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp


class Native::Ipv6::Cef::LoadSharing::KeyControl : public ydk::Entity
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


}; // Native::Ipv6::Cef::LoadSharing::KeyControl


class Native::Ipv6::Nd : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Inspection; //type: Native::Ipv6::Nd::Inspection
        class Cache; //type: Native::Ipv6::Nd::Cache
        class Raguard; //type: Native::Ipv6::Nd::Raguard
        class DefaultRoute; //type: Native::Ipv6::Nd::DefaultRoute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection> inspection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Cache> cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Raguard> raguard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::DefaultRoute> default_route;
        
}; // Native::Ipv6::Nd


class Native::Ipv6::Nd::Inspection : public ydk::Entity
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

        class Policy; //type: Native::Ipv6::Nd::Inspection::Policy

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy> > policy;
        
}; // Native::Ipv6::Nd::Inspection


class Native::Ipv6::Nd::Inspection::Policy : public ydk::Entity
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

        ydk::YLeaf name_nd_inspection_policy; //type: string
        ydk::YLeaf drop_unsecure; //type: empty
        ydk::YLeaf trusted_port; //type: empty
        class DeviceRole; //type: Native::Ipv6::Nd::Inspection::Policy::DeviceRole
        class Limit; //type: Native::Ipv6::Nd::Inspection::Policy::Limit
        class SecLevel; //type: Native::Ipv6::Nd::Inspection::Policy::SecLevel
        class Tracking; //type: Native::Ipv6::Nd::Inspection::Policy::Tracking
        class Validate; //type: Native::Ipv6::Nd::Inspection::Policy::Validate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::DeviceRole> device_role;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Limit> limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::SecLevel> sec_level;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Tracking> tracking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Validate> validate;
        
}; // Native::Ipv6::Nd::Inspection::Policy


class Native::Ipv6::Nd::Inspection::Policy::DeviceRole : public ydk::Entity
{
    public:
        DeviceRole();
        ~DeviceRole();

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
        ydk::YLeaf monitor; //type: empty
        ydk::YLeaf router; //type: empty
        ydk::YLeaf switch_; //type: empty

}; // Native::Ipv6::Nd::Inspection::Policy::DeviceRole


class Native::Ipv6::Nd::Inspection::Policy::Limit : public ydk::Entity
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

        ydk::YLeaf address_count; //type: uint16

}; // Native::Ipv6::Nd::Inspection::Policy::Limit


class Native::Ipv6::Nd::Inspection::Policy::SecLevel : public ydk::Entity
{
    public:
        SecLevel();
        ~SecLevel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: uint8

}; // Native::Ipv6::Nd::Inspection::Policy::SecLevel


class Native::Ipv6::Nd::Inspection::Policy::Tracking : public ydk::Entity
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

        class Disable; //type: Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable
        class Enable; //type: Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable> disable; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable> enable; // presence node
        
}; // Native::Ipv6::Nd::Inspection::Policy::Tracking


class Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable : public ydk::Entity
{
    public:
        Disable();
        ~Disable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaleLifetime; //type: Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime> stale_lifetime;
        
}; // Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable

class Native::Ip::Rsvp::Authentication::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};

class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};

class Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};

class Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha_1;

};

class Native::Ip::Sla::Entry::IcmpEcho::History::Filter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf failures;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf overThreshold;

};

class Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Life : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf forever;

};

class Native::Ip::Sla::Schedule::Life : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf forever;

};

class Native::Ip::Sla::ReactionConfiguration::React::Connectionloss::ThresholdType::Xofy::ActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf trapAndTrigger;
        static const ydk::Enum::YLeaf trapOnly;
        static const ydk::Enum::YLeaf triggerOnly;

};

class Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ThresholdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf immediate;

};

class Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf trapAndTrigger;
        static const ydk::Enum::YLeaf trapOnly;
        static const ydk::Enum::YLeaf triggerOnly;

};

class Native::Ip::Wccp::WccpList::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf open;

};

class Native::Ip::Wccp::WccpList::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Ip::Wccp::WebCache::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf open;

};

class Native::Ip::Wccp::WebCache::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Ip::Wccp::Vrf::WccpList::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf open;

};

class Native::Ip::Wccp::Vrf::WccpList::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Ip::Wccp::Vrf::WebCache::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf open;

};

class Native::Ip::Wccp::Vrf::WebCache::Password::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Mka::Policy::ConfidentialityOffset : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_30;
        static const ydk::Enum::YLeaf Y_50;

};

class Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::ValidLifetime : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf infinite;

};

class Native::Ipv6::Dhcp::Pool::Address::Prefix::Lifetime::PreferredLifetime : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf infinite;

};

class Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf hbh;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf sctp;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class Native::Ipv6::AccessList::NamedAcl::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf beyond_scope;
        static const ydk::Enum::YLeaf destination_unreachable;
        static const ydk::Enum::YLeaf dhaad_reply;
        static const ydk::Enum::YLeaf dhaad_request;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf echo_request;
        static const ydk::Enum::YLeaf header;
        static const ydk::Enum::YLeaf hop_limit;
        static const ydk::Enum::YLeaf mld_query;
        static const ydk::Enum::YLeaf mld_reduction;
        static const ydk::Enum::YLeaf mld_report;
        static const ydk::Enum::YLeaf mpd_advertisement;
        static const ydk::Enum::YLeaf mpd_solicitation;
        static const ydk::Enum::YLeaf nd_na;
        static const ydk::Enum::YLeaf nd_ns;
        static const ydk::Enum::YLeaf next_header;
        static const ydk::Enum::YLeaf no_admin;
        static const ydk::Enum::YLeaf no_route;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_option;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf reject_route;
        static const ydk::Enum::YLeaf renum_command;
        static const ydk::Enum::YLeaf renum_result;
        static const ydk::Enum::YLeaf renum_seq_number;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_renumbering;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_policy;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf unreachable;

};

class Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf hbh;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf sctp;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class Native::Ipv6::AccessList::NamedAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf beyond_scope;
        static const ydk::Enum::YLeaf destination_unreachable;
        static const ydk::Enum::YLeaf dhaad_reply;
        static const ydk::Enum::YLeaf dhaad_request;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf echo_request;
        static const ydk::Enum::YLeaf header;
        static const ydk::Enum::YLeaf hop_limit;
        static const ydk::Enum::YLeaf mld_query;
        static const ydk::Enum::YLeaf mld_reduction;
        static const ydk::Enum::YLeaf mld_report;
        static const ydk::Enum::YLeaf mpd_advertisement;
        static const ydk::Enum::YLeaf mpd_solicitation;
        static const ydk::Enum::YLeaf nd_na;
        static const ydk::Enum::YLeaf nd_ns;
        static const ydk::Enum::YLeaf next_header;
        static const ydk::Enum::YLeaf no_admin;
        static const ydk::Enum::YLeaf no_route;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_option;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf reject_route;
        static const ydk::Enum::YLeaf renum_command;
        static const ydk::Enum::YLeaf renum_result;
        static const ydk::Enum::YLeaf renum_seq_number;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_renumbering;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_policy;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf unreachable;

};

class Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf hbh;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf sctp;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class Native::Ipv6::AccessList::NamedRbAcl::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf beyond_scope;
        static const ydk::Enum::YLeaf destination_unreachable;
        static const ydk::Enum::YLeaf dhaad_reply;
        static const ydk::Enum::YLeaf dhaad_request;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf echo_request;
        static const ydk::Enum::YLeaf header;
        static const ydk::Enum::YLeaf hop_limit;
        static const ydk::Enum::YLeaf mld_query;
        static const ydk::Enum::YLeaf mld_reduction;
        static const ydk::Enum::YLeaf mld_report;
        static const ydk::Enum::YLeaf mpd_advertisement;
        static const ydk::Enum::YLeaf mpd_solicitation;
        static const ydk::Enum::YLeaf nd_na;
        static const ydk::Enum::YLeaf nd_ns;
        static const ydk::Enum::YLeaf next_header;
        static const ydk::Enum::YLeaf no_admin;
        static const ydk::Enum::YLeaf no_route;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_option;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf reject_route;
        static const ydk::Enum::YLeaf renum_command;
        static const ydk::Enum::YLeaf renum_result;
        static const ydk::Enum::YLeaf renum_seq_number;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_renumbering;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_policy;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf unreachable;

};

class Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf hbh;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf sctp;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class Native::Ipv6::AccessList::NamedRbAcl::Default_::AccessListSeqRule::AceRule::NamedMsgType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf beyond_scope;
        static const ydk::Enum::YLeaf destination_unreachable;
        static const ydk::Enum::YLeaf dhaad_reply;
        static const ydk::Enum::YLeaf dhaad_request;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf echo_request;
        static const ydk::Enum::YLeaf header;
        static const ydk::Enum::YLeaf hop_limit;
        static const ydk::Enum::YLeaf mld_query;
        static const ydk::Enum::YLeaf mld_reduction;
        static const ydk::Enum::YLeaf mld_report;
        static const ydk::Enum::YLeaf mpd_advertisement;
        static const ydk::Enum::YLeaf mpd_solicitation;
        static const ydk::Enum::YLeaf nd_na;
        static const ydk::Enum::YLeaf nd_ns;
        static const ydk::Enum::YLeaf next_header;
        static const ydk::Enum::YLeaf no_admin;
        static const ydk::Enum::YLeaf no_route;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf parameter_option;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf reject_route;
        static const ydk::Enum::YLeaf renum_command;
        static const ydk::Enum::YLeaf renum_result;
        static const ydk::Enum::YLeaf renum_seq_number;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_renumbering;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf source_policy;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf unreachable;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_10_ */

