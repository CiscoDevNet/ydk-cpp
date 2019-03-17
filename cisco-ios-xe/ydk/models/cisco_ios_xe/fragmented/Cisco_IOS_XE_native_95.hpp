#ifndef _CISCO_IOS_XE_NATIVE_95_
#define _CISCO_IOS_XE_NATIVE_95_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_20.hpp"
#include "Cisco_IOS_XE_native_94.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::Cellular::StormControl::Multicast::Level::Threshold : public ydk::Entity
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

}; // Native::Interface::Cellular::StormControl::Multicast::Level::Threshold


class Native::Interface::Cellular::StormControl::Multicast::Level::Bps : public ydk::Entity
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

}; // Native::Interface::Cellular::StormControl::Multicast::Level::Bps


class Native::Interface::Cellular::StormControl::Multicast::Level::Pps : public ydk::Entity
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

}; // Native::Interface::Cellular::StormControl::Multicast::Level::Pps


class Native::Interface::Cellular::StormControl::Unicast : public ydk::Entity
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

        class Level; //type: Native::Interface::Cellular::StormControl::Unicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Unicast::Level> level;
        
}; // Native::Interface::Cellular::StormControl::Unicast


class Native::Interface::Cellular::StormControl::Unicast::Level : public ydk::Entity
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

        class Threshold; //type: Native::Interface::Cellular::StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::Cellular::StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::Cellular::StormControl::Unicast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Unicast::Level::Threshold> threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Cellular::StormControl::Unicast::Level::Pps> pps;
        
}; // Native::Interface::Cellular::StormControl::Unicast::Level


class Native::Interface::Cellular::StormControl::Unicast::Level::Threshold : public ydk::Entity
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

}; // Native::Interface::Cellular::StormControl::Unicast::Level::Threshold


class Native::Interface::Cellular::StormControl::Unicast::Level::Bps : public ydk::Entity
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

}; // Native::Interface::Cellular::StormControl::Unicast::Level::Bps


class Native::Interface::Cellular::StormControl::Unicast::Level::Pps : public ydk::Entity
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

}; // Native::Interface::Cellular::StormControl::Unicast::Level::Pps


class Native::Interface::Cellular::Trust : public ydk::Entity
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

}; // Native::Interface::Cellular::Trust


class Native::Interface::Cellular::PriorityQueue : public ydk::Entity
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
        class CosMap; //type: Native::Interface::Cellular::PriorityQueue::CosMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Cellular::PriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::Cellular::PriorityQueue


class Native::Interface::Cellular::PriorityQueue::CosMap : public ydk::Entity
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

}; // Native::Interface::Cellular::PriorityQueue::CosMap


class Native::Interface::Cellular::RcvQueue : public ydk::Entity
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

        class CosMap; //type: Native::Interface::Cellular::RcvQueue::CosMap

        ydk::YList cos_map;
        
}; // Native::Interface::Cellular::RcvQueue


class Native::Interface::Cellular::RcvQueue::CosMap : public ydk::Entity
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

}; // Native::Interface::Cellular::RcvQueue::CosMap


class Native::Interface::Cellular::Peer : public ydk::Entity
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

        class Default; //type: Native::Interface::Cellular::Peer::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Cellular::Peer::Default> default_;
        
}; // Native::Interface::Cellular::Peer


class Native::Interface::Cellular::Peer::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Interface::Cellular::Peer::Default::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Cellular::Peer::Default::Ip> ip;
        
}; // Native::Interface::Cellular::Peer::Default


class Native::Interface::Cellular::Peer::Default::Ip : public ydk::Entity
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

        class Address; //type: Native::Interface::Cellular::Peer::Default::Ip::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Cellular::Peer::Default::Ip::Address> address;
        
}; // Native::Interface::Cellular::Peer::Default::Ip


class Native::Interface::Cellular::Peer::Default::Ip::Address : public ydk::Entity
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
        class DhcpPool; //type: Native::Interface::Cellular::Peer::Default::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::Cellular::Peer::Default::Ip::Address::Pool

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Cellular::Peer::Default::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Cellular::Peer::Default::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::Cellular::Peer::Default::Ip::Address


class Native::Interface::Cellular::Peer::Default::Ip::Address::DhcpPool : public ydk::Entity
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

}; // Native::Interface::Cellular::Peer::Default::Ip::Address::DhcpPool


class Native::Interface::Cellular::Peer::Default::Ip::Address::Pool : public ydk::Entity
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

}; // Native::Interface::Cellular::Peer::Default::Ip::Address::Pool


class Native::Interface::Cellular::PmPath : public ydk::Entity
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

}; // Native::Interface::Cellular::PmPath


class Native::Interface::Cellular::Dialer : public ydk::Entity
{
    public:
        Dialer();
        ~Dialer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_band; //type: empty
        ydk::YLeaf idle_timeout; //type: uint32
        ydk::YLeaf string; //type: string
        ydk::YLeaf watch_group; //type: uint32

}; // Native::Interface::Cellular::Dialer


class Native::Interface::Cellular::Async : public ydk::Entity
{
    public:
        Async();
        ~Async();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::Interface::Cellular::Async


class Native::Interface::Cellular::ServicePolicy : public ydk::Entity
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
        class Type; //type: Native::Interface::Cellular::ServicePolicy::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Cellular::ServicePolicy::Type> type;
        
}; // Native::Interface::Cellular::ServicePolicy


class Native::Interface::Cellular::ServicePolicy::Type : public ydk::Entity
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

        class Control; //type: Native::Interface::Cellular::ServicePolicy::Type::Control
        class PerformanceMonitor; //type: Native::Interface::Cellular::ServicePolicy::Type::PerformanceMonitor
        class ServiceChain; //type: Native::Interface::Cellular::ServicePolicy::Type::ServiceChain

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Cellular::ServicePolicy::Type::Control> control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Cellular::ServicePolicy::Type::PerformanceMonitor> performance_monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Cellular::ServicePolicy::Type::ServiceChain> service_chain;
        
}; // Native::Interface::Cellular::ServicePolicy::Type


class Native::Interface::Cellular::ServicePolicy::Type::Control : public ydk::Entity
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

}; // Native::Interface::Cellular::ServicePolicy::Type::Control


class Native::Interface::Cellular::ServicePolicy::Type::PerformanceMonitor : public ydk::Entity
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

}; // Native::Interface::Cellular::ServicePolicy::Type::PerformanceMonitor


class Native::Interface::Cellular::ServicePolicy::Type::ServiceChain : public ydk::Entity
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

        class Input; //type: Native::Interface::Cellular::ServicePolicy::Type::ServiceChain::Input
        class Output; //type: Native::Interface::Cellular::ServicePolicy::Type::ServiceChain::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Cellular::ServicePolicy::Type::ServiceChain::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Cellular::ServicePolicy::Type::ServiceChain::Output> output;
        
}; // Native::Interface::Cellular::ServicePolicy::Type::ServiceChain


class Native::Interface::Cellular::ServicePolicy::Type::ServiceChain::Input : public ydk::Entity
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

}; // Native::Interface::Cellular::ServicePolicy::Type::ServiceChain::Input


class Native::Interface::Cellular::ServicePolicy::Type::ServiceChain::Output : public ydk::Entity
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

}; // Native::Interface::Cellular::ServicePolicy::Type::ServiceChain::Output


class Native::Interface::Vlan : public ydk::Entity
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

        ydk::YLeaf name; //type: uint16
        ydk::YLeaf cisco_ios_xe_interfaces_description; //type: string
        ydk::YLeaf cisco_ios_xe_interfaces_mac_address; //type: string
        ydk::YLeaf cisco_ios_xe_interfaces_shutdown; //type: empty
        ydk::YLeaf keepalive; //type: boolean
        ydk::YLeaf cisco_ios_xe_interfaces_if_state; //type: IfState
        ydk::YLeaf cisco_ios_xe_interfaces_delay; //type: uint32
        ydk::YLeaf cisco_ios_xe_interfaces_load_interval; //type: uint16
        ydk::YLeaf cisco_ios_xe_interfaces_max_reserved_bandwidth; //type: uint8
        ydk::YLeaf cisco_ios_xe_interfaces_mtu; //type: uint16
        ydk::YLeaf cisco_ios_xe_interfaces_service_insertion; //type: ServiceInsertion
        ydk::YLeaf channel_protocol; //type: ChannelProtocol
        ydk::YLeaf duplex; //type: Duplex
        ydk::YLeaf nat66; //type: Nat66
        ydk::YLeaf cisco_ios_xe_interfaces_description_; //type: string
        ydk::YLeaf cisco_ios_xe_interfaces_mac_address_; //type: string
        ydk::YLeaf cisco_ios_xe_interfaces_shutdown_; //type: empty
        ydk::YLeaf keepalive_; //type: boolean
        ydk::YLeaf cisco_ios_xe_interfaces_if_state_; //type: IfState_
        ydk::YLeaf cisco_ios_xe_interfaces_delay_; //type: uint32
        ydk::YLeaf cisco_ios_xe_interfaces_load_interval_; //type: uint16
        ydk::YLeaf cisco_ios_xe_interfaces_max_reserved_bandwidth_; //type: uint8
        ydk::YLeaf cisco_ios_xe_interfaces_mtu_; //type: uint16
        ydk::YLeaf cisco_ios_xe_interfaces_service_insertion_; //type: ServiceInsertion_
        class CiscoIOSXEInterfacesSwitchportConf; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf
        class CiscoIOSXEInterfacesSwitchport; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport
        class CiscoIOSXEInterfacesStackwiseVirtual; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStackwiseVirtual
        class CiscoIOSXEInterfacesArp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesArp
        class CiscoIOSXEInterfacesBackup; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup
        class CiscoIOSXEInterfacesCemoudp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp
        class CiscoIOSXEInterfacesCwsTunnel; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel
        class CiscoIOSXEInterfacesL2protocolTunnel; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesL2protocolTunnel
        class CiscoIOSXEInterfacesEncapsulation; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation
        class CiscoIOSXEInterfacesFairQueueConf; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf
        class CiscoIOSXEInterfacesFairQueue; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue
        class CiscoIOSXEInterfacesFlowcontrol; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol
        class CiscoIOSXEInterfacesIsis; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis
        class KeepaliveSettings; //type: Native::Interface::Vlan::KeepaliveSettings
        class CiscoIOSXEInterfacesBfd; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBfd
        class CiscoIOSXEInterfacesBandwidth; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth
        class CiscoIOSXEInterfacesDampening; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesDampening
        class CiscoIOSXEInterfacesDomain; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesDomain
        class CiscoIOSXEInterfacesHoldQueue; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue
        class CiscoIOSXEInterfacesMpls; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls
        class IpVrf; //type: Native::Interface::Vlan::IpVrf
        class Vrf; //type: Native::Interface::Vlan::Vrf
        class CiscoIOSXEInterfacesIp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp
        class CiscoIOSXEInterfacesIpv6; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6
        class CiscoIOSXEInterfacesLogging; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesLogging
        class CiscoIOSXEInterfacesMdix; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMdix
        class CiscoIOSXEInterfacesMop; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMop
        class CiscoIOSXEInterfacesInterfaceQos; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos
        class CiscoIOSXEInterfacesSource; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesSource
        class CiscoIOSXEInterfacesStandby; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby
        class CiscoIOSXEInterfacesAccessSession; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession
        class CiscoIOSXEInterfacesStormControl; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl
        class CiscoIOSXEInterfacesTrust; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesTrust
        class CiscoIOSXEInterfacesPriorityQueue; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue
        class CiscoIOSXEInterfacesRcvQueue; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue
        class CiscoIOSXEInterfacesPeer; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPeer
        class CiscoIOSXEInterfacesPmPath; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath
        class CarrierDelay; //type: Native::Interface::Vlan::CarrierDelay
        class ChannelGroup; //type: Native::Interface::Vlan::ChannelGroup
        class Ethernet; //type: Native::Interface::Vlan::Ethernet
        class Eapol; //type: Native::Interface::Vlan::Eapol
        class Synchronous; //type: Native::Interface::Vlan::Synchronous
        class Speed; //type: Native::Interface::Vlan::Speed
        class Negotiation; //type: Native::Interface::Vlan::Negotiation
        class Plim; //type: Native::Interface::Vlan::Plim
        class Pppoe; //type: Native::Interface::Vlan::Pppoe
        class Service; //type: Native::Interface::Vlan::Service
        class EtAnalytics; //type: Native::Interface::Vlan::EtAnalytics
        class ServicePolicy; //type: Native::Interface::Vlan::ServicePolicy
        class Lisp; //type: Native::Interface::Vlan::Lisp
        class SpanningTree; //type: Native::Interface::Vlan::SpanningTree
        class Umbrella; //type: Native::Interface::Vlan::Umbrella
        class Crypto; //type: Native::Interface::Vlan::Crypto
        class ZoneMember; //type: Native::Interface::Vlan::ZoneMember
        class Vrrp; //type: Native::Interface::Vlan::Vrrp
        class PrivateVlan; //type: Native::Interface::Vlan::PrivateVlan
        class ServiceRouting; //type: Native::Interface::Vlan::ServiceRouting
        class Glbp; //type: Native::Interface::Vlan::Glbp
        class CiscoIOSXEInterfacesSwitchportConf_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_
        class CiscoIOSXEInterfacesSwitchport_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_
        class CiscoIOSXEInterfacesStackwiseVirtual_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStackwiseVirtual_
        class CiscoIOSXEInterfacesArp_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesArp_
        class CiscoIOSXEInterfacesBackup_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_
        class CiscoIOSXEInterfacesCemoudp_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_
        class CiscoIOSXEInterfacesCwsTunnel_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_
        class CiscoIOSXEInterfacesL2protocolTunnel_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesL2protocolTunnel_
        class CiscoIOSXEInterfacesEncapsulation_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_
        class CiscoIOSXEInterfacesFairQueueConf_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_
        class CiscoIOSXEInterfacesFairQueue_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_
        class CiscoIOSXEInterfacesFlowcontrol_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_
        class CiscoIOSXEInterfacesIsis_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_
        class KeepaliveSettings_; //type: Native::Interface::Vlan::KeepaliveSettings_
        class CiscoIOSXEInterfacesBfd_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_
        class CiscoIOSXEInterfacesBandwidth_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_
        class CiscoIOSXEInterfacesDampening_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_
        class CiscoIOSXEInterfacesDomain_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_
        class CiscoIOSXEInterfacesHoldQueue_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_
        class CiscoIOSXEInterfacesMpls_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_
        class IpVrf_; //type: Native::Interface::Vlan::IpVrf_
        class Vrf_; //type: Native::Interface::Vlan::Vrf_
        class CiscoIOSXEInterfacesIp_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp_
        class CiscoIOSXEInterfacesIpv6_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_
        class CiscoIOSXEInterfacesLogging_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_
        class CiscoIOSXEInterfacesMdix_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_
        class CiscoIOSXEInterfacesMop_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMop_
        class CiscoIOSXEInterfacesInterfaceQos_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_
        class CiscoIOSXEInterfacesSource_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesSource_
        class CiscoIOSXEInterfacesStandby_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_
        class CiscoIOSXEInterfacesAccessSession_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_
        class CiscoIOSXEInterfacesStormControl_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_
        class CiscoIOSXEInterfacesTrust_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_
        class CiscoIOSXEInterfacesPriorityQueue_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_
        class CiscoIOSXEInterfacesRcvQueue_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_
        class CiscoIOSXEInterfacesPeer_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_
        class CiscoIOSXEInterfacesPmPath_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_
        class Cts; //type: Native::Interface::Vlan::Cts
        class Ntp; //type: Native::Interface::Vlan::Ntp
        class Utd; //type: Native::Interface::Vlan::Utd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf> cisco_ios_xe_interfaces_switchport_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport> cisco_ios_xe_interfaces_switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStackwiseVirtual> cisco_ios_xe_interfaces_stackwise_virtual;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesArp> cisco_ios_xe_interfaces_arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup> cisco_ios_xe_interfaces_backup;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp> cisco_ios_xe_interfaces_cemoudp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel> cisco_ios_xe_interfaces_cws_tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesL2protocolTunnel> cisco_ios_xe_interfaces_l2protocol_tunnel; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation> cisco_ios_xe_interfaces_encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf> cisco_ios_xe_interfaces_fair_queue_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue> cisco_ios_xe_interfaces_fair_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol> cisco_ios_xe_interfaces_flowcontrol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis> cisco_ios_xe_interfaces_isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBfd> cisco_ios_xe_interfaces_bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth> cisco_ios_xe_interfaces_bandwidth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesDampening> cisco_ios_xe_interfaces_dampening;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesDomain> cisco_ios_xe_interfaces_domain;
        ydk::YList cisco_ios_xe_interfaces_hold_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls> cisco_ios_xe_interfaces_mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf> ip_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp> cisco_ios_xe_interfaces_ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6> cisco_ios_xe_interfaces_ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesLogging> cisco_ios_xe_interfaces_logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMdix> cisco_ios_xe_interfaces_mdix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMop> cisco_ios_xe_interfaces_mop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos> cisco_ios_xe_interfaces_interface_qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesSource> cisco_ios_xe_interfaces_source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby> cisco_ios_xe_interfaces_standby;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession> cisco_ios_xe_interfaces_access_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl> cisco_ios_xe_interfaces_storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesTrust> cisco_ios_xe_interfaces_trust;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue> cisco_ios_xe_interfaces_priority_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue> cisco_ios_xe_interfaces_rcv_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPeer> cisco_ios_xe_interfaces_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath> cisco_ios_xe_interfaces_pm_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CarrierDelay> carrier_delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::ChannelGroup> channel_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Eapol> eapol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Synchronous> synchronous;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Speed> speed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Negotiation> negotiation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Plim> plim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Service> service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::EtAnalytics> et_analytics;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::SpanningTree> spanning_tree;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Umbrella> umbrella;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Crypto> crypto;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::ZoneMember> zone_member;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Vrrp> vrrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::PrivateVlan> private_vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::ServiceRouting> service_routing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp> glbp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_> cisco_ios_xe_interfaces_switchport_conf_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_> cisco_ios_xe_interfaces_switchport_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStackwiseVirtual_> cisco_ios_xe_interfaces_stackwise_virtual_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesArp_> cisco_ios_xe_interfaces_arp_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_> cisco_ios_xe_interfaces_backup_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_> cisco_ios_xe_interfaces_cemoudp_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_> cisco_ios_xe_interfaces_cws_tunnel_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesL2protocolTunnel_> cisco_ios_xe_interfaces_l2protocol_tunnel_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_> cisco_ios_xe_interfaces_encapsulation_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_> cisco_ios_xe_interfaces_fair_queue_conf_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_> cisco_ios_xe_interfaces_fair_queue_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_> cisco_ios_xe_interfaces_flowcontrol_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_> cisco_ios_xe_interfaces_isis_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::KeepaliveSettings_> keepalive_settings_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_> cisco_ios_xe_interfaces_bfd_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_> cisco_ios_xe_interfaces_bandwidth_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_> cisco_ios_xe_interfaces_dampening_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_> cisco_ios_xe_interfaces_domain_;
        ydk::YList cisco_ios_xe_interfaces_hold_queue_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_> cisco_ios_xe_interfaces_mpls_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf_> ip_vrf_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Vrf_> vrf_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp_> cisco_ios_xe_interfaces_ip_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_> cisco_ios_xe_interfaces_ipv6_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_> cisco_ios_xe_interfaces_logging_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_> cisco_ios_xe_interfaces_mdix_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMop_> cisco_ios_xe_interfaces_mop_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_> cisco_ios_xe_interfaces_interface_qos_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesSource_> cisco_ios_xe_interfaces_source_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_> cisco_ios_xe_interfaces_standby_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_> cisco_ios_xe_interfaces_access_session_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_> cisco_ios_xe_interfaces_storm_control_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_> cisco_ios_xe_interfaces_trust_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_> cisco_ios_xe_interfaces_priority_queue_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_> cisco_ios_xe_interfaces_rcv_queue_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_> cisco_ios_xe_interfaces_peer_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_> cisco_ios_xe_interfaces_pm_path_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Cts> cts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Ntp> ntp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Utd> utd;
                class IfState;
        class ServiceInsertion;
        class ChannelProtocol;
        class Duplex;
        class Nat66;
        class IfState_;
        class ServiceInsertion_;

}; // Native::Interface::Vlan


class Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesSwitchportConf();
        ~CiscoIOSXEInterfacesSwitchportConf();

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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf


class Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesSwitchport();
        ~CiscoIOSXEInterfacesSwitchport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport


class Native::Interface::Vlan::CiscoIOSXEInterfacesStackwiseVirtual : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesStackwiseVirtual();
        ~CiscoIOSXEInterfacesStackwiseVirtual();

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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesStackwiseVirtual


class Native::Interface::Vlan::CiscoIOSXEInterfacesArp : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesArp();
        ~CiscoIOSXEInterfacesArp();

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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesArp


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesBackup();
        ~CiscoIOSXEInterfacesBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay
        class Interface_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_
        class Load; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load> load;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_ : public ydk::Entity
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
        class ATMSubinterface; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load


class Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesCemoudp();
        ~CiscoIOSXEInterfacesCemoudp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reserve; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve> reserve;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp


class Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve


class Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesCwsTunnel();
        ~CiscoIOSXEInterfacesCwsTunnel();

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
        class Out; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out> out;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel


class Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out


class Native::Interface::Vlan::CiscoIOSXEInterfacesL2protocolTunnel : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesL2protocolTunnel();
        ~CiscoIOSXEInterfacesL2protocolTunnel();

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
        class DropThreshold; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesL2protocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesL2protocolTunnel::ShutdownThreshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesL2protocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesL2protocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesL2protocolTunnel


class Native::Interface::Vlan::CiscoIOSXEInterfacesL2protocolTunnel::DropThreshold : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesL2protocolTunnel::DropThreshold


class Native::Interface::Vlan::CiscoIOSXEInterfacesL2protocolTunnel::ShutdownThreshold : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesL2protocolTunnel::ShutdownThreshold


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesEncapsulation();
        ~CiscoIOSXEInterfacesEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Q; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q
        class Isl; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl
        class Ppp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp
        class Slip; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip
        class FrameRelay; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q> dot1q;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl> isl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp> ppp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip> slip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay> frame_relay; // presence node
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp : public ydk::Entity
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


}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip : public ydk::Entity
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


}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay


class Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesFairQueueConf();
        ~CiscoIOSXEInterfacesFairQueueConf();

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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf


class Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesFairQueue();
        ~CiscoIOSXEInterfacesFairQueue();

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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue


class Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesFlowcontrol();
        ~CiscoIOSXEInterfacesFlowcontrol();

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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesIsis();
        ~CiscoIOSXEInterfacesIsis();

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
        class AdjacencyFilter; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter
        class Advertise; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise
        class Authentication; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication
        class CircuitType; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType
        class CsnpInterval; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval
        class Hello; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello
        class HelloInterval; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval
        class HelloMultiplier; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier
        class Ipv6; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6
        class Metric; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric
        class Password; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password
        class Priority; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority
        class Bfd; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Bfd
        class ThreeWayHandshake; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter> adjacency_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise> advertise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType> circuit_type; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval> csnp_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello> hello;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval> hello_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier> hello_multiplier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority> priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Bfd> bfd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake> three_way_handshake; // presence node
                class MeshGroup;
        class Network;
        class Protocol;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication : public ydk::Entity
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

        class Mode; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode
        class KeyChain; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain
        class SendOnly; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain> key_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly> send_only; // presence node
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode : public ydk::Entity
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

        class Md5; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5
        class Text; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5> md5; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text> text; // presence node
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5 : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain : public ydk::Entity
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
        class KeyChainList; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList

        ydk::YList key_chain_list;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval : public ydk::Entity
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
        class CsnpIntervalList; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList

        ydk::YList csnp_interval_list;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello : public ydk::Entity
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

        class Padding; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding> padding; // presence node
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval : public ydk::Entity
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
        class HelloIntervalList; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList

        ydk::YList hello_interval_list;
                class Value_;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier : public ydk::Entity
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
        class HelloMultiplierList; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList

        ydk::YList hello_multiplier_list;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6 : public ydk::Entity
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
        class Metric; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric
        class Bfd; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Bfd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Bfd> bfd; // presence node
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric : public ydk::Entity
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
        class MetricList; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList

        ydk::YList metric_list;
                class Value_;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList : public ydk::Entity
{
    public:
        MetricList();
        ~MetricList();

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
        ydk::YLeaf value_; //type: one of uint32, enumeration
        class Levels;
        class Value_;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Bfd : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Bfd


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric : public ydk::Entity
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
        class MetricList; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList

        ydk::YList metric_list;
                class Value_;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList : public ydk::Entity
{
    public:
        MetricList();
        ~MetricList();

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
        ydk::YLeaf value_; //type: one of uint32, enumeration
        class Levels;
        class Value_;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password : public ydk::Entity
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

        ydk::YLeaf password; //type: string
        class PasswordList; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList

        ydk::YList password_list;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList : public ydk::Entity
{
    public:
        PasswordList();
        ~PasswordList();

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
        ydk::YLeaf password; //type: string
        class Levels;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority : public ydk::Entity
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

        ydk::YLeaf value_; //type: uint8
        class PriorityList; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList

        ydk::YList priority_list;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList : public ydk::Entity
{
    public:
        PriorityList();
        ~PriorityList();

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
        ydk::YLeaf value_; //type: uint8
        class Levels;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Bfd : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Bfd


class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake : public ydk::Entity
{
    public:
        ThreeWayHandshake();
        ~ThreeWayHandshake();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf implementor; //type: Implementor
        class Implementor;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake


class Native::Interface::Vlan::KeepaliveSettings : public ydk::Entity
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

        class Keepalive; //type: Native::Interface::Vlan::KeepaliveSettings::Keepalive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::Vlan::KeepaliveSettings


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


class Native::Interface::Vlan::CiscoIOSXEInterfacesBfd : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesBfd();
        ~CiscoIOSXEInterfacesBfd();

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
        class Interval; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::Interval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::Interval> interval;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBfd


class Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::Interval : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::Interval


class Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesBandwidth();
        ~CiscoIOSXEInterfacesBandwidth();

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
        class Receive; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive
        class Inherit; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive> receive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit> inherit; // presence node
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth


class Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive


class Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit


class Native::Interface::Vlan::CiscoIOSXEInterfacesDampening : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesDampening();
        ~CiscoIOSXEInterfacesDampening();

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
        class Restart; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart> restart;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesDampening


class Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart


class Native::Interface::Vlan::CiscoIOSXEInterfacesDomain : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesDomain();
        ~CiscoIOSXEInterfacesDomain();

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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesDomain


class Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesHoldQueue();
        ~CiscoIOSXEInterfacesHoldQueue();

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
        ydk::YLeaf queue_length; //type: uint32
        class Direction;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue


class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesMpls();
        ~CiscoIOSXEInterfacesMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: empty
        ydk::YLeaf mtu; //type: uint16
        class Accounting; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Accounting
        class Bgp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Bgp
        class Label; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Label
        class Ldp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Ldp
        class TrafficEng; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Label> label;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Ldp> ldp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng> traffic_eng;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMpls


class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Accounting : public ydk::Entity
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

        class Experimental; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Accounting::Experimental

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Accounting::Experimental> experimental;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Accounting


class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Accounting::Experimental : public ydk::Entity
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

        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Accounting::Experimental


class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarding; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Bgp


class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        class Protocol;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Label


class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Discovery; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Ldp::Discovery
        class Igp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Ldp::Igp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Ldp::Discovery> discovery;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Ldp::Igp> igp;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Ldp


class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Ldp::Discovery : public ydk::Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport_address; //type: one of string, enumeration

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Ldp::Discovery


class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Ldp::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sync; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Ldp::Igp::Sync

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Ldp::Igp::Sync> sync; // presence node
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Ldp::Igp


class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Ldp::Igp::Sync : public ydk::Entity
{
    public:
        Sync();
        ~Sync();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay; //type: uint8

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Ldp::Igp::Sync


class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng : public ydk::Entity
{
    public:
        TrafficEng();
        ~TrafficEng();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf administrative_weight; //type: uint32
        ydk::YLeaf attribute_flags; //type: string
        ydk::YLeaf tunnels; //type: empty
        class BackupPath; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::BackupPath
        class Flooding; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::Flooding
        class PassiveInterface; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::PassiveInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::BackupPath> backup_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::Flooding> flooding;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::PassiveInterface> passive_interface;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng


class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::BackupPath : public ydk::Entity
{
    public:
        BackupPath();
        ~BackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: uint32

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::BackupPath


class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::Flooding : public ydk::Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Thresholds; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::Flooding::Thresholds

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::Flooding::Thresholds> thresholds;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::Flooding


class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::Flooding::Thresholds : public ydk::Entity
{
    public:
        Thresholds();
        ~Thresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList down; //type: list of  uint8
        ydk::YLeafList up; //type: list of  uint8

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::Flooding::Thresholds


class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::PassiveInterface : public ydk::Entity
{
    public:
        PassiveInterface();
        ~PassiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nbr_te_id; //type: string
        ydk::YLeaf nbr_if_addr; //type: string
        class NbrIgpId; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::PassiveInterface::NbrIgpId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::PassiveInterface::NbrIgpId> nbr_igp_id;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::PassiveInterface


class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::PassiveInterface::NbrIgpId : public ydk::Entity
{
    public:
        NbrIgpId();
        ~NbrIgpId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isis; //type: string
        ydk::YLeaf ospf; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::TrafficEng::PassiveInterface::NbrIgpId


class Native::Interface::Vlan::IpVrf : public ydk::Entity
{
    public:
        IpVrf();
        ~IpVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::Interface::Vlan::IpVrf::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf::Ip> ip;
        
}; // Native::Interface::Vlan::IpVrf


class Native::Interface::Vlan::IpVrf::Ip : public ydk::Entity
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

        class Vrf; //type: Native::Interface::Vlan::IpVrf::Ip::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::Vlan::IpVrf::Ip


class Native::Interface::Vlan::IpVrf::Ip::Vrf : public ydk::Entity
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

}; // Native::Interface::Vlan::IpVrf::Ip::Vrf


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
        ydk::YLeaf downstream; //type: string

}; // Native::Interface::Vlan::Vrf


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesIp();
        ~CiscoIOSXEInterfacesIp();

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
        ydk::YLeaf local_proxy_arp; //type: empty
        ydk::YLeaf proxy_arp; //type: boolean
        ydk::YLeaf redirects; //type: boolean
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf mroute_cache; //type: boolean
        ydk::YLeaf unreachables; //type: boolean
        class AccessGroup; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup
        class Arp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp
        class Vrf; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf
        class Address; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address
        class DirectedBroadcast; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::DirectedBroadcast
        class HelloInterval; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval
        class Authentication; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication
        class HoldTime; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime
        class HelperAddress; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress
        class Pim; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim
        class Policy; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy
        class Rip; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip
        class RouteCacheConf; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf
        class RouteCache; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache
        class Router; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router
        class Tcp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp
        class VirtualReassembly; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly
        class Dhcp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp
        class SummaryAddress; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress
        class Verify; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify
        class Igmp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Igmp
        class Nat; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nat
        class Nbar; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup> access_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::DirectedBroadcast> directed_broadcast; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval> hello_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime> hold_time;
        ydk::YList helper_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim> pim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip> rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf> route_cache_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache> route_cache; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router> router;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress> summary_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify> verify;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Igmp> igmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nat> nat;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar> nbar;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup : public ydk::Entity
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

        class In; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In
        class Out; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In> in;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out> out;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In : public ydk::Entity
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

        class CommonAcl; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl> common_acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl> acl;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl : public ydk::Entity
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

        ydk::YLeaf common; //type: one of uint16, string
        ydk::YLeaf in; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl : public ydk::Entity
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

        ydk::YLeaf acl_name; //type: one of uint16, string
        ydk::YLeaf in; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out : public ydk::Entity
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

        class CommonAcl; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl> common_acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl> acl;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl : public ydk::Entity
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

        ydk::YLeaf common; //type: one of uint16, string
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl : public ydk::Entity
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

        ydk::YLeaf acl_name; //type: one of uint16, string
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp : public ydk::Entity
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

        class Inspection; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection> inspection;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection : public ydk::Entity
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
        class Limit; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf : public ydk::Entity
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

        ydk::YLeaf receive; //type: string
        ydk::YLeaf sitemap; //type: string
        class Forwarding; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding> forwarding;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding : public ydk::Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf liin_vrf; //type: empty
        ydk::YLeaf mgmtvrf; //type: empty
        ydk::YLeaf word; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address : public ydk::Entity
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
        class Secondary; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary
        class Primary; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary
        class Dhcp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp

        ydk::YList secondary;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary> primary;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp> dhcp; // presence node
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp : public ydk::Entity
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
        class ClientId; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId> client_id;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId : public ydk::Entity
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

        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::DirectedBroadcast : public ydk::Entity
{
    public:
        DirectedBroadcast();
        ~DirectedBroadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direct_broadcast; //type: one of uint16, string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::DirectedBroadcast


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication : public ydk::Entity
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

        class KeyChain; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain
        class Mode; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain> key_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode> mode;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim : public ydk::Entity
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

        ydk::YLeaf pim_mode; //type: PimMode
        ydk::YLeaf nbma_mode; //type: empty
        ydk::YLeaf dr_priority; //type: uint32
        ydk::YLeaf spt_threshold; //type: SptThreshold
        class AcceptRegister; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister
        class QueryInterval; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister> accept_register;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval> query_interval;
                class PimMode;
        class SptThreshold;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy : public ydk::Entity
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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip : public ydk::Entity
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

        class Authentication; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication> authentication;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication : public ydk::Entity
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
        class Mode; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode> mode;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication

class Native::Interface::Cellular::Trust::Device : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_phone;
        static const ydk::Enum::YLeaf cts;
        static const ydk::Enum::YLeaf ip_camera;
        static const ydk::Enum::YLeaf media_player;

};

class Native::Interface::Cellular::Async::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interactive;

};

class Native::Interface::Cellular::ServicePolicy::Type::PerformanceMonitor::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;

};

class Native::Interface::Vlan::IfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nhrp;

};

class Native::Interface::Vlan::ServiceInsertion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf waas;

};

class Native::Interface::Vlan::ChannelProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lacp;
        static const ydk::Enum::YLeaf pagp;

};

class Native::Interface::Vlan::Duplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf half;

};

class Native::Interface::Vlan::Nat66 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inside;
        static const ydk::Enum::YLeaf outside;

};

class Native::Interface::Vlan::IfState_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nhrp;

};

class Native::Interface::Vlan::ServiceInsertion_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf waas;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::Failure : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::SecondaryDisable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::Kickin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::Kickout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::Receive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::Send : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::MeshGroup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf blocked;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Network : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf point_to_point;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf shutdown;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_1_2;
        static const ydk::Enum::YLeaf level_2_only;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf minimal;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf minimal;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::Implementor : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf ietf;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::Label::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf tdp;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::PimMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf dense_mode;
        static const ydk::Enum::YLeaf sparse_mode;
        static const ydk::Enum::YLeaf sparse_dense_mode;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::SptThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf infinity;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_95_ */

