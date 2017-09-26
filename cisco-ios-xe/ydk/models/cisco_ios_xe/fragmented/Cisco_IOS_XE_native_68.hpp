#ifndef _CISCO_IOS_XE_NATIVE_68_
#define _CISCO_IOS_XE_NATIVE_68_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_67.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::Vasiright::Ipv6::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjust_mss; //type: uint16

}; // Native::Interface::Vasiright::Ipv6::Tcp


class Native::Interface::Vasiright::Ipv6::TrafficFilter : public ydk::Entity
{
    public:
        TrafficFilter();
        ~TrafficFilter();

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
        ydk::YLeaf access_list; //type: string
        class Direction;

}; // Native::Interface::Vasiright::Ipv6::TrafficFilter


class Native::Interface::Vasiright::Isis : public ydk::Entity
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


}; // Native::Interface::Vasiright::Isis


class Native::Interface::Vasiright::KeepaliveSettings : public ydk::Entity
{
    public:
        KeepaliveSettings();
        ~KeepaliveSettings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Keepalive; //type: Native::Interface::Vasiright::KeepaliveSettings::Keepalive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::Vasiright::KeepaliveSettings


class Native::Interface::Vasiright::KeepaliveSettings::Keepalive : public ydk::Entity
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

}; // Native::Interface::Vasiright::KeepaliveSettings::Keepalive


class Native::Interface::Vasiright::L2ProtocolTunnel : public ydk::Entity
{
    public:
        L2ProtocolTunnel();
        ~L2ProtocolTunnel();

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
        class DropThreshold; //type: Native::Interface::Vasiright::L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::Vasiright::L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::Vasiright::L2ProtocolTunnel


class Native::Interface::Vasiright::L2ProtocolTunnel::DropThreshold : public ydk::Entity
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

}; // Native::Interface::Vasiright::L2ProtocolTunnel::DropThreshold


class Native::Interface::Vasiright::L2ProtocolTunnel::ShutdownThreshold : public ydk::Entity
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

}; // Native::Interface::Vasiright::L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::Vasiright::Logging : public ydk::Entity
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

        class Event; //type: Native::Interface::Vasiright::Logging::Event

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Logging::Event> event;
        
}; // Native::Interface::Vasiright::Logging


class Native::Interface::Vasiright::Logging::Event : public ydk::Entity
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

        ydk::YLeaf bundle_status; //type: empty
        ydk::YLeaf link_status; //type: empty
        ydk::YLeaf trunk_status; //type: empty
        ydk::YLeaf nfas_status; //type: empty
        ydk::YLeaf power_inline_status; //type: empty
        ydk::YLeaf status; //type: empty
        class SpanningTree; //type: Native::Interface::Vasiright::Logging::Event::SpanningTree
        class SubifLinkStatus; //type: Native::Interface::Vasiright::Logging::Event::SubifLinkStatus

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Logging::Event::SpanningTree> spanning_tree; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Logging::Event::SubifLinkStatus> subif_link_status; // presence node
        
}; // Native::Interface::Vasiright::Logging::Event


class Native::Interface::Vasiright::Logging::Event::SpanningTree : public ydk::Entity
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

        ydk::YLeaf status; //type: empty

}; // Native::Interface::Vasiright::Logging::Event::SpanningTree


class Native::Interface::Vasiright::Logging::Event::SubifLinkStatus : public ydk::Entity
{
    public:
        SubifLinkStatus();
        ~SubifLinkStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_bulk; //type: empty

}; // Native::Interface::Vasiright::Logging::Event::SubifLinkStatus


class Native::Interface::Vasiright::Mdix : public ydk::Entity
{
    public:
        Mdix();
        ~Mdix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_; //type: boolean

}; // Native::Interface::Vasiright::Mdix


class Native::Interface::Vasiright::Mop : public ydk::Entity
{
    public:
        Mop();
        ~Mop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Native::Interface::Vasiright::Mop


class Native::Interface::Vasiright::Mpls : public ydk::Entity
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


}; // Native::Interface::Vasiright::Mpls


class Native::Interface::Vasiright::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Default_; //type: Native::Interface::Vasiright::Peer::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Peer::Default_> default_;
        
}; // Native::Interface::Vasiright::Peer


class Native::Interface::Vasiright::Peer::Default_ : public ydk::Entity
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

        class Ip; //type: Native::Interface::Vasiright::Peer::Default_::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Peer::Default_::Ip> ip;
        
}; // Native::Interface::Vasiright::Peer::Default_


class Native::Interface::Vasiright::Peer::Default_::Ip : public ydk::Entity
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

        class Address; //type: Native::Interface::Vasiright::Peer::Default_::Ip::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Peer::Default_::Ip::Address> address;
        
}; // Native::Interface::Vasiright::Peer::Default_::Ip


class Native::Interface::Vasiright::Peer::Default_::Ip::Address : public ydk::Entity
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

        ydk::YLeaf dhcp; //type: empty
        class DhcpPool; //type: Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::Vasiright::Peer::Default_::Ip::Address


class Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool : public ydk::Entity
{
    public:
        DhcpPool();
        ~DhcpPool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pools; //type: string

}; // Native::Interface::Vasiright::Peer::Default_::Ip::Address::DhcpPool


class Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool : public ydk::Entity
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

        ydk::YLeaf pools; //type: string

}; // Native::Interface::Vasiright::Peer::Default_::Ip::Address::Pool


class Native::Interface::Vasiright::PmPath : public ydk::Entity
{
    public:
        PmPath();
        ~PmPath();

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
        ydk::YLeaf interface_id; //type: uint8

}; // Native::Interface::Vasiright::PmPath


class Native::Interface::Vasiright::PriorityQueue : public ydk::Entity
{
    public:
        PriorityQueue();
        ~PriorityQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out; //type: empty
        class CosMap; //type: Native::Interface::Vasiright::PriorityQueue::CosMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::PriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::Vasiright::PriorityQueue


class Native::Interface::Vasiright::PriorityQueue::CosMap : public ydk::Entity
{
    public:
        CosMap();
        ~CosMap();

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
        ydk::YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::Vasiright::PriorityQueue::CosMap


class Native::Interface::Vasiright::RcvQueue : public ydk::Entity
{
    public:
        RcvQueue();
        ~RcvQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CosMap; //type: Native::Interface::Vasiright::RcvQueue::CosMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::RcvQueue::CosMap> > cos_map;
        
}; // Native::Interface::Vasiright::RcvQueue


class Native::Interface::Vasiright::RcvQueue::CosMap : public ydk::Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint8
        ydk::YLeaf threshold_id; //type: uint8
        ydk::YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::Vasiright::RcvQueue::CosMap


class Native::Interface::Vasiright::ServicePolicy : public ydk::Entity
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
        class Type; //type: Native::Interface::Vasiright::ServicePolicy::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::ServicePolicy::Type> type;
        
}; // Native::Interface::Vasiright::ServicePolicy


class Native::Interface::Vasiright::ServicePolicy::Type : public ydk::Entity
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

        class Control; //type: Native::Interface::Vasiright::ServicePolicy::Type::Control
        class PerformanceMonitor; //type: Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor
        class ServiceChain; //type: Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::ServicePolicy::Type::Control> control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor> performance_monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain> service_chain;
        
}; // Native::Interface::Vasiright::ServicePolicy::Type


class Native::Interface::Vasiright::ServicePolicy::Type::Control : public ydk::Entity
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

}; // Native::Interface::Vasiright::ServicePolicy::Type::Control


class Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor : public ydk::Entity
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

}; // Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor


class Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain : public ydk::Entity
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

        class Input; //type: Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input
        class Output; //type: Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output> output;
        
}; // Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain


class Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input : public ydk::Entity
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

}; // Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Input


class Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output : public ydk::Entity
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

}; // Native::Interface::Vasiright::ServicePolicy::Type::ServiceChain::Output


class Native::Interface::Vasiright::Standby : public ydk::Entity
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
        class Delay; //type: Native::Interface::Vasiright::Standby::Delay
        class UseBia; //type: Native::Interface::Vasiright::Standby::UseBia
        class StandbyList; //type: Native::Interface::Vasiright::Standby::StandbyList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::Delay> delay;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList> > standby_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::UseBia> use_bia; // presence node
                class Version;

}; // Native::Interface::Vasiright::Standby


class Native::Interface::Vasiright::Standby::Delay : public ydk::Entity
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

}; // Native::Interface::Vasiright::Standby::Delay


class Native::Interface::Vasiright::Standby::StandbyList : public ydk::Entity
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
        class Authentication; //type: Native::Interface::Vasiright::Standby::StandbyList::Authentication
        class Ip; //type: Native::Interface::Vasiright::Standby::StandbyList::Ip
        class Preempt; //type: Native::Interface::Vasiright::Standby::StandbyList::Preempt
        class Redirect; //type: Native::Interface::Vasiright::Standby::StandbyList::Redirect
        class Timers; //type: Native::Interface::Vasiright::Standby::StandbyList::Timers
        class Track; //type: Native::Interface::Vasiright::Standby::StandbyList::Track

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Ip> ip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Preempt> preempt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Redirect> redirect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Timers> timers;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Track> > track;
                class Ipv6;

}; // Native::Interface::Vasiright::Standby::StandbyList


class Native::Interface::Vasiright::Standby::StandbyList::Authentication : public ydk::Entity
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
        class Md5; //type: Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5> md5;
        
}; // Native::Interface::Vasiright::Standby::StandbyList::Authentication


class Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5 : public ydk::Entity
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
        class KeyString; //type: Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5


class Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString : public ydk::Entity
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

}; // Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString


class Native::Interface::Vasiright::Standby::StandbyList::Ip : public ydk::Entity
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

}; // Native::Interface::Vasiright::Standby::StandbyList::Ip


class Native::Interface::Vasiright::Standby::StandbyList::Preempt : public ydk::Entity
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

        class Delay; //type: Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay> delay;
        
}; // Native::Interface::Vasiright::Standby::StandbyList::Preempt


class Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay : public ydk::Entity
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

}; // Native::Interface::Vasiright::Standby::StandbyList::Preempt::Delay


class Native::Interface::Vasiright::Standby::StandbyList::Redirect : public ydk::Entity
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
        class Advertisement; //type: Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement
        class Timers; //type: Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement> advertisement;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers> timers;
        
}; // Native::Interface::Vasiright::Standby::StandbyList::Redirect


class Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement : public ydk::Entity
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

        class Authentication; //type: Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication> authentication;
        
}; // Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement


class Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication : public ydk::Entity
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

        class Md5; //type: Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5> md5;
        
}; // Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication


class Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5 : public ydk::Entity
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
        class KeyString; //type: Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString> key_string;
        
}; // Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5


class Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString : public ydk::Entity
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

}; // Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString


class Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers : public ydk::Entity
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

}; // Native::Interface::Vasiright::Standby::StandbyList::Redirect::Timers


class Native::Interface::Vasiright::Standby::StandbyList::Timers : public ydk::Entity
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

        class HelloInterval; //type: Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval
        class HoldTime; //type: Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval> hello_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime> hold_time;
        
}; // Native::Interface::Vasiright::Standby::StandbyList::Timers


class Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval : public ydk::Entity
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

}; // Native::Interface::Vasiright::Standby::StandbyList::Timers::HelloInterval


class Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime : public ydk::Entity
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

}; // Native::Interface::Vasiright::Standby::StandbyList::Timers::HoldTime


class Native::Interface::Vasiright::Standby::StandbyList::Track : public ydk::Entity
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

}; // Native::Interface::Vasiright::Standby::StandbyList::Track


class Native::Interface::Vasiright::Standby::UseBia : public ydk::Entity
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

        class Scope; //type: Native::Interface::Vasiright::Standby::UseBia::Scope

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::Standby::UseBia::Scope> scope;
        
}; // Native::Interface::Vasiright::Standby::UseBia


class Native::Interface::Vasiright::Standby::UseBia::Scope : public ydk::Entity
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

}; // Native::Interface::Vasiright::Standby::UseBia::Scope


class Native::Interface::Vasiright::StormControl : public ydk::Entity
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

        class Action; //type: Native::Interface::Vasiright::StormControl::Action
        class Broadcast; //type: Native::Interface::Vasiright::StormControl::Broadcast
        class Multicast; //type: Native::Interface::Vasiright::StormControl::Multicast
        class Unicast; //type: Native::Interface::Vasiright::StormControl::Unicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Broadcast> broadcast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Multicast> multicast;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Unicast> unicast;
        
}; // Native::Interface::Vasiright::StormControl


class Native::Interface::Vasiright::StormControl::Action : public ydk::Entity
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

}; // Native::Interface::Vasiright::StormControl::Action


class Native::Interface::Vasiright::StormControl::Broadcast : public ydk::Entity
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

        class Include; //type: Native::Interface::Vasiright::StormControl::Broadcast::Include
        class Level; //type: Native::Interface::Vasiright::StormControl::Broadcast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Broadcast::Include> include;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Broadcast::Level> level;
        
}; // Native::Interface::Vasiright::StormControl::Broadcast


class Native::Interface::Vasiright::StormControl::Broadcast::Include : public ydk::Entity
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

}; // Native::Interface::Vasiright::StormControl::Broadcast::Include


class Native::Interface::Vasiright::StormControl::Broadcast::Level : public ydk::Entity
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
        class Bps; //type: Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps
        class Pps; //type: Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps> pps;
        
}; // Native::Interface::Vasiright::StormControl::Broadcast::Level


class Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps : public ydk::Entity
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

}; // Native::Interface::Vasiright::StormControl::Broadcast::Level::Bps


class Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps : public ydk::Entity
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

}; // Native::Interface::Vasiright::StormControl::Broadcast::Level::Pps


class Native::Interface::Vasiright::StormControl::Multicast : public ydk::Entity
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

        class Level; //type: Native::Interface::Vasiright::StormControl::Multicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Multicast::Level> level;
        
}; // Native::Interface::Vasiright::StormControl::Multicast


class Native::Interface::Vasiright::StormControl::Multicast::Level : public ydk::Entity
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
        class Bps; //type: Native::Interface::Vasiright::StormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::Vasiright::StormControl::Multicast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::Vasiright::StormControl::Multicast::Level


class Native::Interface::Vasiright::StormControl::Multicast::Level::Bps : public ydk::Entity
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

}; // Native::Interface::Vasiright::StormControl::Multicast::Level::Bps


class Native::Interface::Vasiright::StormControl::Multicast::Level::Pps : public ydk::Entity
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

}; // Native::Interface::Vasiright::StormControl::Multicast::Level::Pps


class Native::Interface::Vasiright::StormControl::Unicast : public ydk::Entity
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

        class Level; //type: Native::Interface::Vasiright::StormControl::Unicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Unicast::Level> level;
        
}; // Native::Interface::Vasiright::StormControl::Unicast


class Native::Interface::Vasiright::StormControl::Unicast::Level : public ydk::Entity
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

        class Threshold; //type: Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::Vasiright::StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::Vasiright::StormControl::Unicast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Unicast::Level::Pps> pps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold> threshold;
        
}; // Native::Interface::Vasiright::StormControl::Unicast::Level


class Native::Interface::Vasiright::StormControl::Unicast::Level::Bps : public ydk::Entity
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

}; // Native::Interface::Vasiright::StormControl::Unicast::Level::Bps


class Native::Interface::Vasiright::StormControl::Unicast::Level::Pps : public ydk::Entity
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

}; // Native::Interface::Vasiright::StormControl::Unicast::Level::Pps


class Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold : public ydk::Entity
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

}; // Native::Interface::Vasiright::StormControl::Unicast::Level::Threshold


class Native::Interface::Vasiright::Switchport : public ydk::Entity
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


}; // Native::Interface::Vasiright::Switchport


class Native::Interface::Vasiright::SwitchportConf : public ydk::Entity
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

}; // Native::Interface::Vasiright::SwitchportConf


class Native::Interface::Vasiright::Trust : public ydk::Entity
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

}; // Native::Interface::Vasiright::Trust


class Native::Interface::Vasiright::Utd : public ydk::Entity
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

}; // Native::Interface::Vasiright::Utd


class Native::Interface::Vasiright::Vrf : public ydk::Entity
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

}; // Native::Interface::Vasiright::Vrf


class Native::Interface::VirtualPortGroup : public ydk::Entity
{
    public:
        VirtualPortGroup();
        ~VirtualPortGroup();

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
        class SwitchportConf; //type: Native::Interface::VirtualPortGroup::SwitchportConf
        class Switchport; //type: Native::Interface::VirtualPortGroup::Switchport
        class Arp; //type: Native::Interface::VirtualPortGroup::Arp
        class Backup; //type: Native::Interface::VirtualPortGroup::Backup
        class Cemoudp; //type: Native::Interface::VirtualPortGroup::Cemoudp
        class CwsTunnel; //type: Native::Interface::VirtualPortGroup::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::VirtualPortGroup::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::VirtualPortGroup::Encapsulation
        class FairQueueConf; //type: Native::Interface::VirtualPortGroup::FairQueueConf
        class FairQueue; //type: Native::Interface::VirtualPortGroup::FairQueue
        class Flowcontrol; //type: Native::Interface::VirtualPortGroup::Flowcontrol
        class Isis; //type: Native::Interface::VirtualPortGroup::Isis
        class KeepaliveSettings; //type: Native::Interface::VirtualPortGroup::KeepaliveSettings
        class Bfd; //type: Native::Interface::VirtualPortGroup::Bfd
        class Bandwidth; //type: Native::Interface::VirtualPortGroup::Bandwidth
        class Dampening; //type: Native::Interface::VirtualPortGroup::Dampening
        class Domain; //type: Native::Interface::VirtualPortGroup::Domain
        class HoldQueue; //type: Native::Interface::VirtualPortGroup::HoldQueue
        class Mpls; //type: Native::Interface::VirtualPortGroup::Mpls
        class IpVrf; //type: Native::Interface::VirtualPortGroup::IpVrf
        class Vrf; //type: Native::Interface::VirtualPortGroup::Vrf
        class Ip; //type: Native::Interface::VirtualPortGroup::Ip
        class Ipv6; //type: Native::Interface::VirtualPortGroup::Ipv6
        class Logging; //type: Native::Interface::VirtualPortGroup::Logging
        class Mdix; //type: Native::Interface::VirtualPortGroup::Mdix
        class Mop; //type: Native::Interface::VirtualPortGroup::Mop
        class InterfaceQos; //type: Native::Interface::VirtualPortGroup::InterfaceQos
        class Standby; //type: Native::Interface::VirtualPortGroup::Standby
        class AccessSession; //type: Native::Interface::VirtualPortGroup::AccessSession
        class StormControl; //type: Native::Interface::VirtualPortGroup::StormControl
        class Trust; //type: Native::Interface::VirtualPortGroup::Trust
        class Utd; //type: Native::Interface::VirtualPortGroup::Utd
        class PriorityQueue; //type: Native::Interface::VirtualPortGroup::PriorityQueue
        class RcvQueue; //type: Native::Interface::VirtualPortGroup::RcvQueue
        class Peer; //type: Native::Interface::VirtualPortGroup::Peer
        class PmPath; //type: Native::Interface::VirtualPortGroup::PmPath
        class Snmp; //type: Native::Interface::VirtualPortGroup::Snmp
        class ServicePolicy; //type: Native::Interface::VirtualPortGroup::ServicePolicy
        class Mab; //type: Native::Interface::VirtualPortGroup::Mab
        class Cts; //type: Native::Interface::VirtualPortGroup::Cts
        class CarrierDelay; //type: Native::Interface::VirtualPortGroup::CarrierDelay
        class ChannelGroup; //type: Native::Interface::VirtualPortGroup::ChannelGroup
        class Ethernet; //type: Native::Interface::VirtualPortGroup::Ethernet
        class Negotiation; //type: Native::Interface::VirtualPortGroup::Negotiation
        class Synchronous; //type: Native::Interface::VirtualPortGroup::Synchronous
        class Speed; //type: Native::Interface::VirtualPortGroup::Speed
        class Plim; //type: Native::Interface::VirtualPortGroup::Plim
        class Pppoe; //type: Native::Interface::VirtualPortGroup::Pppoe
        class Service; //type: Native::Interface::VirtualPortGroup::Service

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::AccessSession> access_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Backup> backup;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::CarrierDelay> carrier_delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Cemoudp> cemoudp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::ChannelGroup> channel_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Cts> cts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::CwsTunnel> cws_tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Dampening> dampening;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Domain> domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::FairQueue> fair_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::FairQueueConf> fair_queue_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Flowcontrol> flowcontrol;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::HoldQueue> > hold_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::InterfaceQos> interface_qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::IpVrf> ip_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Mab> mab; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Mdix> mdix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Mop> mop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Negotiation> negotiation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Plim> plim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::PmPath> pm_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::PriorityQueue> priority_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::RcvQueue> rcv_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Service> service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Snmp> snmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Speed> speed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Standby> standby;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::SwitchportConf> switchport_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Synchronous> synchronous;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Trust> trust;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Utd> utd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Vrf> vrf;
                class IfState;
        class ServiceInsertion;
        class ChannelProtocol;
        class Duplex;

}; // Native::Interface::VirtualPortGroup


class Native::Interface::VirtualPortGroup::AccessSession : public ydk::Entity
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
        class PortControl; //type: Native::Interface::VirtualPortGroup::AccessSession::PortControl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::AccessSession::PortControl> port_control;
                class HostMode;

}; // Native::Interface::VirtualPortGroup::AccessSession


class Native::Interface::VirtualPortGroup::AccessSession::PortControl : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::AccessSession::PortControl


class Native::Interface::VirtualPortGroup::Arp : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Arp


class Native::Interface::VirtualPortGroup::Backup : public ydk::Entity
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

        class Delay; //type: Native::Interface::VirtualPortGroup::Backup::Delay
        class Interface_; //type: Native::Interface::VirtualPortGroup::Backup::Interface_
        class Load; //type: Native::Interface::VirtualPortGroup::Backup::Load

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Backup::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Backup::Interface_> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Backup::Load> load;
        
}; // Native::Interface::VirtualPortGroup::Backup


class Native::Interface::VirtualPortGroup::Backup::Delay : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Backup::Delay


class Native::Interface::VirtualPortGroup::Backup::Interface_ : public ydk::Entity
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
        class ATMSubinterface; //type: Native::Interface::VirtualPortGroup::Backup::Interface_::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Interface::VirtualPortGroup::Backup::Interface_::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Interface::VirtualPortGroup::Backup::Interface_::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Interface::VirtualPortGroup::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Backup::Interface_::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Backup::Interface_::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Backup::Interface_::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::VirtualPortGroup::Backup::Interface_


class Native::Interface::VirtualPortGroup::Backup::Interface_::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Backup::Interface_::ATMACRsubinterface


class Native::Interface::VirtualPortGroup::Backup::Interface_::ATMSubinterface : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Backup::Interface_::ATMSubinterface


class Native::Interface::VirtualPortGroup::Backup::Interface_::LISPSubinterface : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Backup::Interface_::LISPSubinterface


class Native::Interface::VirtualPortGroup::Backup::Interface_::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Backup::Interface_::PortChannelSubinterface


class Native::Interface::VirtualPortGroup::Backup::Load : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Backup::Load


class Native::Interface::VirtualPortGroup::Bandwidth : public ydk::Entity
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
        class Receive; //type: Native::Interface::VirtualPortGroup::Bandwidth::Receive
        class Inherit; //type: Native::Interface::VirtualPortGroup::Bandwidth::Inherit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Bandwidth::Inherit> inherit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Bandwidth::Receive> receive;
        
}; // Native::Interface::VirtualPortGroup::Bandwidth


class Native::Interface::VirtualPortGroup::Bandwidth::Inherit : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Bandwidth::Inherit


class Native::Interface::VirtualPortGroup::Bandwidth::Receive : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Bandwidth::Receive


class Native::Interface::VirtualPortGroup::Bfd : public ydk::Entity
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
        class Interval; //type: Native::Interface::VirtualPortGroup::Bfd::Interval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Bfd::Interval> interval;
        
}; // Native::Interface::VirtualPortGroup::Bfd


class Native::Interface::VirtualPortGroup::Bfd::Interval : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Bfd::Interval


class Native::Interface::VirtualPortGroup::CarrierDelay : public ydk::Entity
{
    public:
        CarrierDelay();
        ~CarrierDelay();

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
        class Down; //type: Native::Interface::VirtualPortGroup::CarrierDelay::Down
        class Up; //type: Native::Interface::VirtualPortGroup::CarrierDelay::Up

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::CarrierDelay::Down> down;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::CarrierDelay::Up> up;
        
}; // Native::Interface::VirtualPortGroup::CarrierDelay


class Native::Interface::VirtualPortGroup::CarrierDelay::Down : public ydk::Entity
{
    public:
        Down();
        ~Down();

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

}; // Native::Interface::VirtualPortGroup::CarrierDelay::Down


class Native::Interface::VirtualPortGroup::CarrierDelay::Up : public ydk::Entity
{
    public:
        Up();
        ~Up();

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

}; // Native::Interface::VirtualPortGroup::CarrierDelay::Up


class Native::Interface::VirtualPortGroup::Cemoudp : public ydk::Entity
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

        class Reserve; //type: Native::Interface::VirtualPortGroup::Cemoudp::Reserve

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::VirtualPortGroup::Cemoudp


class Native::Interface::VirtualPortGroup::Cemoudp::Reserve : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Cemoudp::Reserve


class Native::Interface::VirtualPortGroup::ChannelGroup : public ydk::Entity
{
    public:
        ChannelGroup();
        ~ChannelGroup();

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
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf non_silent; //type: empty
        ydk::YLeaf link; //type: uint8
        ydk::YLeaf auto_; //type: empty
        class Mode;

}; // Native::Interface::VirtualPortGroup::ChannelGroup


class Native::Interface::VirtualPortGroup::Cts : public ydk::Entity
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

        class Manual; //type: Native::Interface::VirtualPortGroup::Cts::Manual

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Cts::Manual> manual; // presence node
        
}; // Native::Interface::VirtualPortGroup::Cts


class Native::Interface::VirtualPortGroup::Cts::Manual : public ydk::Entity
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

        class Policy; //type: Native::Interface::VirtualPortGroup::Cts::Manual::Policy
        class Sap; //type: Native::Interface::VirtualPortGroup::Cts::Manual::Sap
        class Propagate; //type: Native::Interface::VirtualPortGroup::Cts::Manual::Propagate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Cts::Manual::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Cts::Manual::Propagate> propagate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Cts::Manual::Sap> sap;
        
}; // Native::Interface::VirtualPortGroup::Cts::Manual


class Native::Interface::VirtualPortGroup::Cts::Manual::Policy : public ydk::Entity
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

        class Static_; //type: Native::Interface::VirtualPortGroup::Cts::Manual::Policy::Static_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Cts::Manual::Policy::Static_> static_;
        
}; // Native::Interface::VirtualPortGroup::Cts::Manual::Policy


class Native::Interface::VirtualPortGroup::Cts::Manual::Policy::Static_ : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Cts::Manual::Policy::Static_


class Native::Interface::VirtualPortGroup::Cts::Manual::Propagate : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Cts::Manual::Propagate


class Native::Interface::VirtualPortGroup::Cts::Manual::Sap : public ydk::Entity
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

        class Pmk; //type: Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk> > pmk;
        
}; // Native::Interface::VirtualPortGroup::Cts::Manual::Sap


class Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk : public ydk::Entity
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
        class ModeList; //type: Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList> mode_list;
        
}; // Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk


class Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList : public ydk::Entity
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

        class GcmEncrypt; //type: Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt
        class NoEncap; //type: Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList::NoEncap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt> gcm_encrypt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList::NoEncap> no_encap; // presence node
        
}; // Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList


class Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt : public ydk::Entity
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

        class Gmac; //type: Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac> gmac; // presence node
        
}; // Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt


class Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac


class Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList::NoEncap : public ydk::Entity
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

        class Gmac; //type: Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac> gmac; // presence node
        
}; // Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList::NoEncap


class Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac


class Native::Interface::VirtualPortGroup::CwsTunnel : public ydk::Entity
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
        class Out; //type: Native::Interface::VirtualPortGroup::CwsTunnel::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::CwsTunnel::Out> out;
        
}; // Native::Interface::VirtualPortGroup::CwsTunnel


class Native::Interface::VirtualPortGroup::CwsTunnel::Out : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::CwsTunnel::Out


class Native::Interface::VirtualPortGroup::Dampening : public ydk::Entity
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
        class Restart; //type: Native::Interface::VirtualPortGroup::Dampening::Restart

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Dampening::Restart> restart;
        
}; // Native::Interface::VirtualPortGroup::Dampening


class Native::Interface::VirtualPortGroup::Dampening::Restart : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Dampening::Restart


class Native::Interface::VirtualPortGroup::Domain : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Domain


class Native::Interface::VirtualPortGroup::Encapsulation : public ydk::Entity
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

        class Dot1Q; //type: Native::Interface::VirtualPortGroup::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::VirtualPortGroup::Encapsulation::Isl
        class Ppp; //type: Native::Interface::VirtualPortGroup::Encapsulation::Ppp
        class Slip; //type: Native::Interface::VirtualPortGroup::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::VirtualPortGroup::Encapsulation::FrameRelay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Encapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Encapsulation::Isl> isl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Encapsulation::Slip> slip; // presence node
        
}; // Native::Interface::VirtualPortGroup::Encapsulation


class Native::Interface::VirtualPortGroup::Encapsulation::Dot1Q : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Encapsulation::Dot1Q


class Native::Interface::VirtualPortGroup::Encapsulation::FrameRelay : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Encapsulation::FrameRelay


class Native::Interface::VirtualPortGroup::Encapsulation::Isl : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::Encapsulation::Isl


class Native::Interface::VirtualPortGroup::Encapsulation::Ppp : public ydk::Entity
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


}; // Native::Interface::VirtualPortGroup::Encapsulation::Ppp


class Native::Interface::VirtualPortGroup::Encapsulation::Slip : public ydk::Entity
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


}; // Native::Interface::VirtualPortGroup::Encapsulation::Slip


class Native::Interface::VirtualPortGroup::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Oam; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam> oam; // presence node
        
}; // Native::Interface::VirtualPortGroup::Ethernet


class Native::Interface::VirtualPortGroup::Ethernet::Oam : public ydk::Entity
{
    public:
        Oam();
        ~Oam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_rate; //type: uint8
        ydk::YLeaf min_rate; //type: uint8
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf timeout; //type: uint8
        class LinkMonitor; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor
        class RemoteFailure; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure
        class RemoteLoopback; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteLoopback

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor> link_monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure> remote_failure;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteLoopback> remote_loopback;
                class Mode;

}; // Native::Interface::VirtualPortGroup::Ethernet::Oam


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor : public ydk::Entity
{
    public:
        LinkMonitor();
        ~LinkMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf on; //type: empty
        ydk::YLeaf supported; //type: empty
        class Frame; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::Frame
        class FramePeriod; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FramePeriod
        class FrameSeconds; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FrameSeconds
        class HighThreshold; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::HighThreshold
        class ReceiveCrc; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::ReceiveCrc
        class SymbolPeriod; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::SymbolPeriod

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::Frame> frame;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FramePeriod> frame_period;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FrameSeconds> frame_seconds;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::HighThreshold> high_threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::ReceiveCrc> receive_crc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::SymbolPeriod> symbol_period;
        
}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::Frame : public ydk::Entity
{
    public:
        Frame();
        ~Frame();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::Frame::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::Frame::Threshold> threshold;
        
}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::Frame


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::Frame::Threshold : public ydk::Entity
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

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::Frame::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::Frame::Threshold::High> high;
        
}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::Frame::Threshold


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::Frame::Threshold::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf thresh; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::Frame::Threshold::High


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FramePeriod : public ydk::Entity
{
    public:
        FramePeriod();
        ~FramePeriod();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold> threshold;
        
}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FramePeriod


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold : public ydk::Entity
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

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High> high;
        
}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf f_thresh; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FrameSeconds : public ydk::Entity
{
    public:
        FrameSeconds();
        ~FrameSeconds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold> threshold;
        
}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FrameSeconds


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold : public ydk::Entity
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

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High> high;
        
}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf e_thresh; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::HighThreshold : public ydk::Entity
{
    public:
        HighThreshold();
        ~HighThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::HighThreshold::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::HighThreshold::Action> action;
        
}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::HighThreshold


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::HighThreshold::Action : public ydk::Entity
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

        ydk::YLeaf error_disable_interface; //type: empty

}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::HighThreshold::Action


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::ReceiveCrc : public ydk::Entity
{
    public:
        ReceiveCrc();
        ~ReceiveCrc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold> threshold;
        
}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::ReceiveCrc


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold : public ydk::Entity
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

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High> high;
        
}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf crc_thresh; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::SymbolPeriod : public ydk::Entity
{
    public:
        SymbolPeriod();
        ~SymbolPeriod();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Threshold; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold> threshold;
        
}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::SymbolPeriod


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold : public ydk::Entity
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

        ydk::YLeaf low; //type: uint16
        class High; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High> high;
        
}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold


class Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf err_thresh; //type: uint16
        ydk::YLeaf none; //type: empty

}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High


class Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure : public ydk::Entity
{
    public:
        RemoteFailure();
        ~RemoteFailure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CriticalEvent; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::CriticalEvent
        class DyingGasp; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::DyingGasp
        class LinkFault; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::LinkFault

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::CriticalEvent> critical_event;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::DyingGasp> dying_gasp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::LinkFault> link_fault;
        
}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure


class Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::CriticalEvent : public ydk::Entity
{
    public:
        CriticalEvent();
        ~CriticalEvent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::CriticalEvent::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::CriticalEvent::Action> action;
        
}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::CriticalEvent


class Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::CriticalEvent::Action : public ydk::Entity
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

        ydk::YLeaf error_disable_interface; //type: empty

}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::CriticalEvent::Action


class Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::DyingGasp : public ydk::Entity
{
    public:
        DyingGasp();
        ~DyingGasp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::DyingGasp::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::DyingGasp::Action> action; // presence node
        
}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::DyingGasp


class Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::DyingGasp::Action : public ydk::Entity
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

        ydk::YLeaf error_disable_interface; //type: empty

}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::DyingGasp::Action


class Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::LinkFault : public ydk::Entity
{
    public:
        LinkFault();
        ~LinkFault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Action; //type: Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::LinkFault::Action

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::LinkFault::Action> action; // presence node
        
}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::LinkFault


class Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::LinkFault::Action : public ydk::Entity
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

        ydk::YLeaf error_disable_interface; //type: empty

}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteFailure::LinkFault::Action


class Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteLoopback : public ydk::Entity
{
    public:
        RemoteLoopback();
        ~RemoteLoopback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf supported; //type: empty
        ydk::YLeaf timeout; //type: uint8

}; // Native::Interface::VirtualPortGroup::Ethernet::Oam::RemoteLoopback


class Native::Interface::VirtualPortGroup::FairQueue : public ydk::Entity
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

}; // Native::Interface::VirtualPortGroup::FairQueue

class Native::Interface::Vasiright::Ipv6::TrafficFilter::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::Vasiright::ServicePolicy::Type::PerformanceMonitor::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;

};

class Native::Interface::Vasiright::Standby::Version : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Interface::Vasiright::Standby::StandbyList::Ipv6 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf autoconfig;

};

class Native::Interface::Vasiright::Standby::StandbyList::Authentication::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::Vasiright::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Interface::Vasiright::Trust::Device : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_phone;
        static const ydk::Enum::YLeaf cts;
        static const ydk::Enum::YLeaf ip_camera;
        static const ydk::Enum::YLeaf media_player;

};

class Native::Interface::VirtualPortGroup::IfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nhrp;

};

class Native::Interface::VirtualPortGroup::ServiceInsertion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf waas;

};

class Native::Interface::VirtualPortGroup::ChannelProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lacp;
        static const ydk::Enum::YLeaf pagp;

};

class Native::Interface::VirtualPortGroup::Duplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf half;

};

class Native::Interface::VirtualPortGroup::AccessSession::HostMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf multi_auth;
        static const ydk::Enum::YLeaf multi_domain;
        static const ydk::Enum::YLeaf multi_host;
        static const ydk::Enum::YLeaf single_host;

};

class Native::Interface::VirtualPortGroup::Backup::Delay::Failure : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::VirtualPortGroup::Backup::Delay::SecondaryDisable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::VirtualPortGroup::Backup::Load::Kickin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::VirtualPortGroup::Backup::Load::Kickout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::VirtualPortGroup::ChannelGroup::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf desirable;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf passive;

};

class Native::Interface::VirtualPortGroup::Ethernet::Oam::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_68_ */

