#ifndef _CISCO_IOS_XE_NATIVE_21_
#define _CISCO_IOS_XE_NATIVE_21_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_18.hpp"
#include "Cisco_IOS_XE_native_20.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::AppNavUnCompress::StormControl::Broadcast::Level::Threshold : public ydk::Entity
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

}; // Native::Interface::AppNavUnCompress::StormControl::Broadcast::Level::Threshold


class Native::Interface::AppNavUnCompress::StormControl::Broadcast::Level::Bps : public ydk::Entity
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

}; // Native::Interface::AppNavUnCompress::StormControl::Broadcast::Level::Bps


class Native::Interface::AppNavUnCompress::StormControl::Broadcast::Level::Pps : public ydk::Entity
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

}; // Native::Interface::AppNavUnCompress::StormControl::Broadcast::Level::Pps


class Native::Interface::AppNavUnCompress::StormControl::Multicast : public ydk::Entity
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

        class Level; //type: Native::Interface::AppNavUnCompress::StormControl::Multicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavUnCompress::StormControl::Multicast::Level> level;
        
}; // Native::Interface::AppNavUnCompress::StormControl::Multicast


class Native::Interface::AppNavUnCompress::StormControl::Multicast::Level : public ydk::Entity
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

        class Threshold; //type: Native::Interface::AppNavUnCompress::StormControl::Multicast::Level::Threshold
        class Bps; //type: Native::Interface::AppNavUnCompress::StormControl::Multicast::Level::Bps
        class Pps; //type: Native::Interface::AppNavUnCompress::StormControl::Multicast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavUnCompress::StormControl::Multicast::Level::Threshold> threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavUnCompress::StormControl::Multicast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavUnCompress::StormControl::Multicast::Level::Pps> pps;
        
}; // Native::Interface::AppNavUnCompress::StormControl::Multicast::Level


class Native::Interface::AppNavUnCompress::StormControl::Multicast::Level::Threshold : public ydk::Entity
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

}; // Native::Interface::AppNavUnCompress::StormControl::Multicast::Level::Threshold


class Native::Interface::AppNavUnCompress::StormControl::Multicast::Level::Bps : public ydk::Entity
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

}; // Native::Interface::AppNavUnCompress::StormControl::Multicast::Level::Bps


class Native::Interface::AppNavUnCompress::StormControl::Multicast::Level::Pps : public ydk::Entity
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

}; // Native::Interface::AppNavUnCompress::StormControl::Multicast::Level::Pps


class Native::Interface::AppNavUnCompress::StormControl::Unicast : public ydk::Entity
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

        class Level; //type: Native::Interface::AppNavUnCompress::StormControl::Unicast::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavUnCompress::StormControl::Unicast::Level> level;
        
}; // Native::Interface::AppNavUnCompress::StormControl::Unicast


class Native::Interface::AppNavUnCompress::StormControl::Unicast::Level : public ydk::Entity
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

        class Threshold; //type: Native::Interface::AppNavUnCompress::StormControl::Unicast::Level::Threshold
        class Bps; //type: Native::Interface::AppNavUnCompress::StormControl::Unicast::Level::Bps
        class Pps; //type: Native::Interface::AppNavUnCompress::StormControl::Unicast::Level::Pps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavUnCompress::StormControl::Unicast::Level::Threshold> threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavUnCompress::StormControl::Unicast::Level::Bps> bps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavUnCompress::StormControl::Unicast::Level::Pps> pps;
        
}; // Native::Interface::AppNavUnCompress::StormControl::Unicast::Level


class Native::Interface::AppNavUnCompress::StormControl::Unicast::Level::Threshold : public ydk::Entity
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

}; // Native::Interface::AppNavUnCompress::StormControl::Unicast::Level::Threshold


class Native::Interface::AppNavUnCompress::StormControl::Unicast::Level::Bps : public ydk::Entity
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

}; // Native::Interface::AppNavUnCompress::StormControl::Unicast::Level::Bps


class Native::Interface::AppNavUnCompress::StormControl::Unicast::Level::Pps : public ydk::Entity
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

}; // Native::Interface::AppNavUnCompress::StormControl::Unicast::Level::Pps


class Native::Interface::AppNavUnCompress::Trust : public ydk::Entity
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

}; // Native::Interface::AppNavUnCompress::Trust


class Native::Interface::AppNavUnCompress::PriorityQueue : public ydk::Entity
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
        class CosMap; //type: Native::Interface::AppNavUnCompress::PriorityQueue::CosMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavUnCompress::PriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::AppNavUnCompress::PriorityQueue


class Native::Interface::AppNavUnCompress::PriorityQueue::CosMap : public ydk::Entity
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

}; // Native::Interface::AppNavUnCompress::PriorityQueue::CosMap


class Native::Interface::AppNavUnCompress::RcvQueue : public ydk::Entity
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

        class CosMap; //type: Native::Interface::AppNavUnCompress::RcvQueue::CosMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavUnCompress::RcvQueue::CosMap> > cos_map;
        
}; // Native::Interface::AppNavUnCompress::RcvQueue


class Native::Interface::AppNavUnCompress::RcvQueue::CosMap : public ydk::Entity
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

}; // Native::Interface::AppNavUnCompress::RcvQueue::CosMap


class Native::Interface::AppNavUnCompress::Peer : public ydk::Entity
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

        class Default; //type: Native::Interface::AppNavUnCompress::Peer::Default

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavUnCompress::Peer::Default> default_;
        
}; // Native::Interface::AppNavUnCompress::Peer


class Native::Interface::AppNavUnCompress::Peer::Default : public ydk::Entity
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

        class Ip; //type: Native::Interface::AppNavUnCompress::Peer::Default::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavUnCompress::Peer::Default::Ip> ip;
        
}; // Native::Interface::AppNavUnCompress::Peer::Default


class Native::Interface::AppNavUnCompress::Peer::Default::Ip : public ydk::Entity
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

        class Address; //type: Native::Interface::AppNavUnCompress::Peer::Default::Ip::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavUnCompress::Peer::Default::Ip::Address> address;
        
}; // Native::Interface::AppNavUnCompress::Peer::Default::Ip


class Native::Interface::AppNavUnCompress::Peer::Default::Ip::Address : public ydk::Entity
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
        class DhcpPool; //type: Native::Interface::AppNavUnCompress::Peer::Default::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::AppNavUnCompress::Peer::Default::Ip::Address::Pool

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavUnCompress::Peer::Default::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::AppNavUnCompress::Peer::Default::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::AppNavUnCompress::Peer::Default::Ip::Address


class Native::Interface::AppNavUnCompress::Peer::Default::Ip::Address::DhcpPool : public ydk::Entity
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

}; // Native::Interface::AppNavUnCompress::Peer::Default::Ip::Address::DhcpPool


class Native::Interface::AppNavUnCompress::Peer::Default::Ip::Address::Pool : public ydk::Entity
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

}; // Native::Interface::AppNavUnCompress::Peer::Default::Ip::Address::Pool


class Native::Interface::AppNavUnCompress::PmPath : public ydk::Entity
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

}; // Native::Interface::AppNavUnCompress::PmPath


class Native::Interface::ATM : public ydk::Entity
{
    public:
        ATM();
        ~ATM();

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
        ydk::YLeaf load_interval; //type: uint32
        class Ip; //type: Native::Interface::ATM::Ip
        class Atm; //type: Native::Interface::ATM::Atm
        class Cem; //type: Native::Interface::ATM::Cem
        class Pvc; //type: Native::Interface::ATM::Pvc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Atm> atm;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Cem> > cem;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Pvc> > pvc;
        
}; // Native::Interface::ATM


class Native::Interface::ATM::Ip : public ydk::Entity
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

}; // Native::Interface::ATM::Ip


class Native::Interface::ATM::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: Bandwidth
        ydk::YLeaf enable_ilmi_trap; //type: boolean
        class Pvp; //type: Native::Interface::ATM::Atm::Pvp

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Atm::Pvp> > pvp;
                class Bandwidth;

}; // Native::Interface::ATM::Atm


class Native::Interface::ATM::Atm::Pvp : public ydk::Entity
{
    public:
        Pvp();
        ~Pvp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pvp_number; //type: uint16
        ydk::YLeaf l2transport; //type: empty
        class Xconnect; //type: Native::Interface::ATM::Atm::Pvp::Xconnect
        class XconnectPwClass; //type: Native::Interface::ATM::Atm::Pvp::XconnectPwClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Atm::Pvp::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Atm::Pvp::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::ATM::Atm::Pvp


class Native::Interface::ATM::Atm::Pvp::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf sequencing; //type: Sequencing
        ydk::YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::ATM::Atm::Pvp::Xconnect::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Atm::Pvp::Xconnect::Backup> backup;
                class Encapsulation;
        class Sequencing;

}; // Native::Interface::ATM::Atm::Pvp::Xconnect


class Native::Interface::ATM::Atm::Pvp::Xconnect::Backup : public ydk::Entity
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

        class Peer; //type: Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Delay> delay;
        
}; // Native::Interface::ATM::Atm::Pvp::Xconnect::Backup


class Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Peer : public ydk::Entity
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

        ydk::YLeaf peer_router_ip_addr; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Peer


class Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Delay : public ydk::Entity
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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Interface::ATM::Atm::Pvp::Xconnect::Backup::Delay


class Native::Interface::ATM::Atm::Pvp::XconnectPwClass : public ydk::Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xconnect; //type: Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::ATM::Atm::Pvp::XconnectPwClass


class Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect


class Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp


class Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port : public ydk::Entity
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

        ydk::YLeaf local; //type: uint32
        ydk::YLeaf remote; //type: uint32

}; // Native::Interface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::ATM::Cem : public ydk::Entity
{
    public:
        Cem();
        ~Cem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class Xconnect; //type: Native::Interface::ATM::Cem::Xconnect
        class XconnectPwClass; //type: Native::Interface::ATM::Cem::XconnectPwClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Cem::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Cem::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::ATM::Cem


class Native::Interface::ATM::Cem::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf sequencing; //type: Sequencing
        ydk::YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::ATM::Cem::Xconnect::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Cem::Xconnect::Backup> backup;
                class Encapsulation;
        class Sequencing;

}; // Native::Interface::ATM::Cem::Xconnect


class Native::Interface::ATM::Cem::Xconnect::Backup : public ydk::Entity
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

        class Peer; //type: Native::Interface::ATM::Cem::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::ATM::Cem::Xconnect::Backup::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Cem::Xconnect::Backup::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Cem::Xconnect::Backup::Delay> delay;
        
}; // Native::Interface::ATM::Cem::Xconnect::Backup


class Native::Interface::ATM::Cem::Xconnect::Backup::Peer : public ydk::Entity
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

        ydk::YLeaf peer_router_ip_addr; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Native::Interface::ATM::Cem::Xconnect::Backup::Peer


class Native::Interface::ATM::Cem::Xconnect::Backup::Delay : public ydk::Entity
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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Interface::ATM::Cem::Xconnect::Backup::Delay


class Native::Interface::ATM::Cem::XconnectPwClass : public ydk::Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xconnect; //type: Native::Interface::ATM::Cem::XconnectPwClass::Xconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Cem::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::ATM::Cem::XconnectPwClass


class Native::Interface::ATM::Cem::XconnectPwClass::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::ATM::Cem::XconnectPwClass::Xconnect


class Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp


class Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port : public ydk::Entity
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

        ydk::YLeaf local; //type: uint32
        ydk::YLeaf remote; //type: uint32

}; // Native::Interface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::ATM::Pvc : public ydk::Entity
{
    public:
        Pvc();
        ~Pvc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_vpi_vci; //type: string
        ydk::YLeaf remote_vpi_vci; //type: string
        ydk::YLeaf l2transport; //type: empty
        ydk::YLeaf ubr; //type: uint32
        class Xconnect; //type: Native::Interface::ATM::Pvc::Xconnect
        class XconnectPwClass; //type: Native::Interface::ATM::Pvc::XconnectPwClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Pvc::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Pvc::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::ATM::Pvc


class Native::Interface::ATM::Pvc::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf sequencing; //type: Sequencing
        ydk::YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::ATM::Pvc::Xconnect::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Pvc::Xconnect::Backup> backup;
                class Encapsulation;
        class Sequencing;

}; // Native::Interface::ATM::Pvc::Xconnect


class Native::Interface::ATM::Pvc::Xconnect::Backup : public ydk::Entity
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

        class Peer; //type: Native::Interface::ATM::Pvc::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::ATM::Pvc::Xconnect::Backup::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Pvc::Xconnect::Backup::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Pvc::Xconnect::Backup::Delay> delay;
        
}; // Native::Interface::ATM::Pvc::Xconnect::Backup


class Native::Interface::ATM::Pvc::Xconnect::Backup::Peer : public ydk::Entity
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

        ydk::YLeaf peer_router_ip_addr; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Native::Interface::ATM::Pvc::Xconnect::Backup::Peer


class Native::Interface::ATM::Pvc::Xconnect::Backup::Delay : public ydk::Entity
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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Interface::ATM::Pvc::Xconnect::Backup::Delay


class Native::Interface::ATM::Pvc::XconnectPwClass : public ydk::Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xconnect; //type: Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::ATM::Pvc::XconnectPwClass


class Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect


class Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp


class Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port : public ydk::Entity
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

        ydk::YLeaf local; //type: uint32
        ydk::YLeaf remote; //type: uint32

}; // Native::Interface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::ATMSubinterface : public ydk::Entity
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

        class ATM; //type: Native::Interface::ATMSubinterface::ATM

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM> > atm;
        
}; // Native::Interface::ATMSubinterface


class Native::Interface::ATMSubinterface::ATM : public ydk::Entity
{
    public:
        ATM();
        ~ATM();

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
        ydk::YLeaf load_interval; //type: uint32
        class Ip; //type: Native::Interface::ATMSubinterface::ATM::Ip
        class Atm; //type: Native::Interface::ATMSubinterface::ATM::Atm
        class Cem; //type: Native::Interface::ATMSubinterface::ATM::Cem
        class Pvc; //type: Native::Interface::ATMSubinterface::ATM::Pvc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Atm> atm;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Cem> > cem;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Pvc> > pvc;
        
}; // Native::Interface::ATMSubinterface::ATM


class Native::Interface::ATMSubinterface::ATM::Ip : public ydk::Entity
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

}; // Native::Interface::ATMSubinterface::ATM::Ip


class Native::Interface::ATMSubinterface::ATM::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: Bandwidth
        ydk::YLeaf enable_ilmi_trap; //type: boolean
        class Pvp; //type: Native::Interface::ATMSubinterface::ATM::Atm::Pvp

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Atm::Pvp> > pvp;
                class Bandwidth;

}; // Native::Interface::ATMSubinterface::ATM::Atm


class Native::Interface::ATMSubinterface::ATM::Atm::Pvp : public ydk::Entity
{
    public:
        Pvp();
        ~Pvp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pvp_number; //type: uint16
        ydk::YLeaf l2transport; //type: empty
        class Xconnect; //type: Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect
        class XconnectPwClass; //type: Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::ATMSubinterface::ATM::Atm::Pvp


class Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf sequencing; //type: Sequencing
        ydk::YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup> backup;
                class Encapsulation;
        class Sequencing;

}; // Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect


class Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup : public ydk::Entity
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

        class Peer; //type: Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Delay> delay;
        
}; // Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup


class Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Peer : public ydk::Entity
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

        ydk::YLeaf peer_router_ip_addr; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Peer


class Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Delay : public ydk::Entity
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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Delay


class Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass : public ydk::Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xconnect; //type: Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass


class Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect


class Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp


class Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port : public ydk::Entity
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

        ydk::YLeaf local; //type: uint32
        ydk::YLeaf remote; //type: uint32

}; // Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::ATMSubinterface::ATM::Cem : public ydk::Entity
{
    public:
        Cem();
        ~Cem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class Xconnect; //type: Native::Interface::ATMSubinterface::ATM::Cem::Xconnect
        class XconnectPwClass; //type: Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Cem::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::ATMSubinterface::ATM::Cem


class Native::Interface::ATMSubinterface::ATM::Cem::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf sequencing; //type: Sequencing
        ydk::YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup> backup;
                class Encapsulation;
        class Sequencing;

}; // Native::Interface::ATMSubinterface::ATM::Cem::Xconnect


class Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup : public ydk::Entity
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

        class Peer; //type: Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Delay> delay;
        
}; // Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup


class Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Peer : public ydk::Entity
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

        ydk::YLeaf peer_router_ip_addr; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Peer


class Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Delay : public ydk::Entity
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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Delay


class Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass : public ydk::Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xconnect; //type: Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass


class Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect


class Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp


class Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port : public ydk::Entity
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

        ydk::YLeaf local; //type: uint32
        ydk::YLeaf remote; //type: uint32

}; // Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::ATMSubinterface::ATM::Pvc : public ydk::Entity
{
    public:
        Pvc();
        ~Pvc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_vpi_vci; //type: string
        ydk::YLeaf remote_vpi_vci; //type: string
        ydk::YLeaf l2transport; //type: empty
        ydk::YLeaf ubr; //type: uint32
        class Xconnect; //type: Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect
        class XconnectPwClass; //type: Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::ATMSubinterface::ATM::Pvc


class Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf sequencing; //type: Sequencing
        ydk::YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup> backup;
                class Encapsulation;
        class Sequencing;

}; // Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect


class Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup : public ydk::Entity
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

        class Peer; //type: Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Delay> delay;
        
}; // Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup


class Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Peer : public ydk::Entity
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

        ydk::YLeaf peer_router_ip_addr; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Peer


class Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Delay : public ydk::Entity
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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Delay


class Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass : public ydk::Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xconnect; //type: Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass


class Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect


class Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp


class Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port : public ydk::Entity
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

        ydk::YLeaf local; //type: uint32
        ydk::YLeaf remote; //type: uint32

}; // Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::ATMACR : public ydk::Entity
{
    public:
        ATMACR();
        ~ATMACR();

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
        ydk::YLeaf load_interval; //type: uint32
        class Ip; //type: Native::Interface::ATMACR::Ip
        class Atm; //type: Native::Interface::ATMACR::Atm
        class Cem; //type: Native::Interface::ATMACR::Cem
        class Pvc; //type: Native::Interface::ATMACR::Pvc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Atm> atm;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Cem> > cem;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Pvc> > pvc;
        
}; // Native::Interface::ATMACR


class Native::Interface::ATMACR::Ip : public ydk::Entity
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

}; // Native::Interface::ATMACR::Ip


class Native::Interface::ATMACR::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: Bandwidth
        ydk::YLeaf enable_ilmi_trap; //type: boolean
        class Pvp; //type: Native::Interface::ATMACR::Atm::Pvp

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Atm::Pvp> > pvp;
                class Bandwidth;

}; // Native::Interface::ATMACR::Atm


class Native::Interface::ATMACR::Atm::Pvp : public ydk::Entity
{
    public:
        Pvp();
        ~Pvp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pvp_number; //type: uint16
        ydk::YLeaf l2transport; //type: empty
        class Xconnect; //type: Native::Interface::ATMACR::Atm::Pvp::Xconnect
        class XconnectPwClass; //type: Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Atm::Pvp::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::ATMACR::Atm::Pvp


class Native::Interface::ATMACR::Atm::Pvp::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf sequencing; //type: Sequencing
        ydk::YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup> backup;
                class Encapsulation;
        class Sequencing;

}; // Native::Interface::ATMACR::Atm::Pvp::Xconnect


class Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup : public ydk::Entity
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

        class Peer; //type: Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay> delay;
        
}; // Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup


class Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer : public ydk::Entity
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

        ydk::YLeaf peer_router_ip_addr; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer


class Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay : public ydk::Entity
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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay


class Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass : public ydk::Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xconnect; //type: Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass


class Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect


class Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp


class Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port : public ydk::Entity
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

        ydk::YLeaf local; //type: uint32
        ydk::YLeaf remote; //type: uint32

}; // Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::ATMACR::Cem : public ydk::Entity
{
    public:
        Cem();
        ~Cem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class Xconnect; //type: Native::Interface::ATMACR::Cem::Xconnect
        class XconnectPwClass; //type: Native::Interface::ATMACR::Cem::XconnectPwClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Cem::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Cem::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::ATMACR::Cem


class Native::Interface::ATMACR::Cem::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf sequencing; //type: Sequencing
        ydk::YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::ATMACR::Cem::Xconnect::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Cem::Xconnect::Backup> backup;
                class Encapsulation;
        class Sequencing;

}; // Native::Interface::ATMACR::Cem::Xconnect


class Native::Interface::ATMACR::Cem::Xconnect::Backup : public ydk::Entity
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

        class Peer; //type: Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay> delay;
        
}; // Native::Interface::ATMACR::Cem::Xconnect::Backup


class Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer : public ydk::Entity
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

        ydk::YLeaf peer_router_ip_addr; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer


class Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay : public ydk::Entity
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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay


class Native::Interface::ATMACR::Cem::XconnectPwClass : public ydk::Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xconnect; //type: Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::ATMACR::Cem::XconnectPwClass


class Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect


class Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp


class Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port : public ydk::Entity
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

        ydk::YLeaf local; //type: uint32
        ydk::YLeaf remote; //type: uint32

}; // Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::ATMACR::Pvc : public ydk::Entity
{
    public:
        Pvc();
        ~Pvc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_vpi_vci; //type: string
        ydk::YLeaf remote_vpi_vci; //type: string
        ydk::YLeaf l2transport; //type: empty
        ydk::YLeaf ubr; //type: uint32
        class Xconnect; //type: Native::Interface::ATMACR::Pvc::Xconnect
        class XconnectPwClass; //type: Native::Interface::ATMACR::Pvc::XconnectPwClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Pvc::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Pvc::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::ATMACR::Pvc


class Native::Interface::ATMACR::Pvc::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf sequencing; //type: Sequencing
        ydk::YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::ATMACR::Pvc::Xconnect::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Pvc::Xconnect::Backup> backup;
                class Encapsulation;
        class Sequencing;

}; // Native::Interface::ATMACR::Pvc::Xconnect


class Native::Interface::ATMACR::Pvc::Xconnect::Backup : public ydk::Entity
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

        class Peer; //type: Native::Interface::ATMACR::Pvc::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::ATMACR::Pvc::Xconnect::Backup::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Pvc::Xconnect::Backup::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Pvc::Xconnect::Backup::Delay> delay;
        
}; // Native::Interface::ATMACR::Pvc::Xconnect::Backup


class Native::Interface::ATMACR::Pvc::Xconnect::Backup::Peer : public ydk::Entity
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

        ydk::YLeaf peer_router_ip_addr; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Native::Interface::ATMACR::Pvc::Xconnect::Backup::Peer


class Native::Interface::ATMACR::Pvc::Xconnect::Backup::Delay : public ydk::Entity
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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Interface::ATMACR::Pvc::Xconnect::Backup::Delay


class Native::Interface::ATMACR::Pvc::XconnectPwClass : public ydk::Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xconnect; //type: Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::ATMACR::Pvc::XconnectPwClass


class Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect


class Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp


class Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port : public ydk::Entity
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

        ydk::YLeaf local; //type: uint32
        ydk::YLeaf remote; //type: uint32

}; // Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::ATMACRsubinterface : public ydk::Entity
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

        class ATMACR; //type: Native::Interface::ATMACRsubinterface::ATMACR

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR> > atm_acr;
        
}; // Native::Interface::ATMACRsubinterface


class Native::Interface::ATMACRsubinterface::ATMACR : public ydk::Entity
{
    public:
        ATMACR();
        ~ATMACR();

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
        ydk::YLeaf load_interval; //type: uint32
        class Ip; //type: Native::Interface::ATMACRsubinterface::ATMACR::Ip
        class Atm; //type: Native::Interface::ATMACRsubinterface::ATMACR::Atm
        class Cem; //type: Native::Interface::ATMACRsubinterface::ATMACR::Cem
        class Pvc; //type: Native::Interface::ATMACRsubinterface::ATMACR::Pvc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Atm> atm;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Cem> > cem;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Pvc> > pvc;
        
}; // Native::Interface::ATMACRsubinterface::ATMACR


class Native::Interface::ATMACRsubinterface::ATMACR::Ip : public ydk::Entity
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

}; // Native::Interface::ATMACRsubinterface::ATMACR::Ip


class Native::Interface::ATMACRsubinterface::ATMACR::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: Bandwidth
        ydk::YLeaf enable_ilmi_trap; //type: boolean
        class Pvp; //type: Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp> > pvp;
                class Bandwidth;

}; // Native::Interface::ATMACRsubinterface::ATMACR::Atm


class Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp : public ydk::Entity
{
    public:
        Pvp();
        ~Pvp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pvp_number; //type: uint16
        ydk::YLeaf l2transport; //type: empty
        class Xconnect; //type: Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect
        class XconnectPwClass; //type: Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp


class Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf sequencing; //type: Sequencing
        ydk::YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup> backup;
                class Encapsulation;
        class Sequencing;

}; // Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect


class Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup : public ydk::Entity
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

        class Peer; //type: Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay> delay;
        
}; // Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup


class Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer : public ydk::Entity
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

        ydk::YLeaf peer_router_ip_addr; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer


class Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay : public ydk::Entity
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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay


class Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass : public ydk::Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xconnect; //type: Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass


class Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect


class Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp


class Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port : public ydk::Entity
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

        ydk::YLeaf local; //type: uint32
        ydk::YLeaf remote; //type: uint32

}; // Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::ATMACRsubinterface::ATMACR::Cem : public ydk::Entity
{
    public:
        Cem();
        ~Cem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class Xconnect; //type: Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect
        class XconnectPwClass; //type: Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::ATMACRsubinterface::ATMACR::Cem


class Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf sequencing; //type: Sequencing
        ydk::YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup> backup;
                class Encapsulation;
        class Sequencing;

}; // Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect


class Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup : public ydk::Entity
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

        class Peer; //type: Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Delay> delay;
        
}; // Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup


class Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Peer : public ydk::Entity
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

        ydk::YLeaf peer_router_ip_addr; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Peer


class Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Delay : public ydk::Entity
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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Delay


class Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass : public ydk::Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xconnect; //type: Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass


class Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect


class Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp


class Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port : public ydk::Entity
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

        ydk::YLeaf local; //type: uint32
        ydk::YLeaf remote; //type: uint32

}; // Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::ATMACRsubinterface::ATMACR::Pvc : public ydk::Entity
{
    public:
        Pvc();
        ~Pvc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_vpi_vci; //type: string
        ydk::YLeaf remote_vpi_vci; //type: string
        ydk::YLeaf l2transport; //type: empty
        ydk::YLeaf ubr; //type: uint32
        class Xconnect; //type: Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect
        class XconnectPwClass; //type: Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::ATMACRsubinterface::ATMACR::Pvc


class Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf sequencing; //type: Sequencing
        ydk::YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup> backup;
                class Encapsulation;
        class Sequencing;

}; // Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect


class Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup : public ydk::Entity
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

        class Peer; //type: Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Delay> delay;
        
}; // Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup


class Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Peer : public ydk::Entity
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

        ydk::YLeaf peer_router_ip_addr; //type: string
        ydk::YLeaf vcid; //type: uint32
        ydk::YLeaf pw_class; //type: string
        ydk::YLeaf priority; //type: uint8

}; // Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Peer


class Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Delay : public ydk::Entity
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

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Delay


class Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass : public ydk::Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Xconnect; //type: Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass


class Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect : public ydk::Entity
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
        ydk::YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect


class Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp


class Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port : public ydk::Entity
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

        ydk::YLeaf local; //type: uint32
        ydk::YLeaf remote; //type: uint32

}; // Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::BDI : public ydk::Entity
{
    public:
        BDI();
        ~BDI();

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
        class SwitchportConf; //type: Native::Interface::BDI::SwitchportConf
        class Switchport; //type: Native::Interface::BDI::Switchport
        class StackwiseVirtual; //type: Native::Interface::BDI::StackwiseVirtual
        class Arp; //type: Native::Interface::BDI::Arp
        class Backup; //type: Native::Interface::BDI::Backup
        class Cemoudp; //type: Native::Interface::BDI::Cemoudp
        class CwsTunnel; //type: Native::Interface::BDI::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::BDI::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::BDI::Encapsulation
        class FairQueueConf; //type: Native::Interface::BDI::FairQueueConf
        class FairQueue; //type: Native::Interface::BDI::FairQueue
        class Flowcontrol; //type: Native::Interface::BDI::Flowcontrol
        class Isis; //type: Native::Interface::BDI::Isis
        class KeepaliveSettings; //type: Native::Interface::BDI::KeepaliveSettings
        class Bfd; //type: Native::Interface::BDI::Bfd
        class Bandwidth; //type: Native::Interface::BDI::Bandwidth
        class Dampening; //type: Native::Interface::BDI::Dampening
        class Domain; //type: Native::Interface::BDI::Domain
        class HoldQueue; //type: Native::Interface::BDI::HoldQueue
        class Mpls; //type: Native::Interface::BDI::Mpls
        class IpVrf; //type: Native::Interface::BDI::IpVrf
        class Vrf; //type: Native::Interface::BDI::Vrf
        class Ip; //type: Native::Interface::BDI::Ip
        class Ipv6; //type: Native::Interface::BDI::Ipv6
        class Logging; //type: Native::Interface::BDI::Logging
        class Mdix; //type: Native::Interface::BDI::Mdix
        class Mop; //type: Native::Interface::BDI::Mop
        class InterfaceQos; //type: Native::Interface::BDI::InterfaceQos
        class Standby; //type: Native::Interface::BDI::Standby
        class AccessSession; //type: Native::Interface::BDI::AccessSession
        class StormControl; //type: Native::Interface::BDI::StormControl
        class Trust; //type: Native::Interface::BDI::Trust
        class PriorityQueue; //type: Native::Interface::BDI::PriorityQueue
        class RcvQueue; //type: Native::Interface::BDI::RcvQueue
        class Peer; //type: Native::Interface::BDI::Peer
        class PmPath; //type: Native::Interface::BDI::PmPath
        class CarrierDelay; //type: Native::Interface::BDI::CarrierDelay
        class ChannelGroup; //type: Native::Interface::BDI::ChannelGroup
        class Ethernet; //type: Native::Interface::BDI::Ethernet
        class Negotiation; //type: Native::Interface::BDI::Negotiation
        class Eapol; //type: Native::Interface::BDI::Eapol
        class Synchronous; //type: Native::Interface::BDI::Synchronous
        class Speed; //type: Native::Interface::BDI::Speed
        class Plim; //type: Native::Interface::BDI::Plim
        class Pppoe; //type: Native::Interface::BDI::Pppoe
        class Service; //type: Native::Interface::BDI::Service
        class ServicePolicy; //type: Native::Interface::BDI::ServicePolicy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::SwitchportConf> switchport_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::StackwiseVirtual> stackwise_virtual;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Backup> backup;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Cemoudp> cemoudp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::CwsTunnel> cws_tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::FairQueueConf> fair_queue_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::FairQueue> fair_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Flowcontrol> flowcontrol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Dampening> dampening;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Domain> domain;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::HoldQueue> > hold_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::IpVrf> ip_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Mdix> mdix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Mop> mop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::InterfaceQos> interface_qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Standby> standby;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::AccessSession> access_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Trust> trust;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::PriorityQueue> priority_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::RcvQueue> rcv_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::PmPath> pm_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::CarrierDelay> carrier_delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::ChannelGroup> channel_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Negotiation> negotiation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Eapol> eapol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Synchronous> synchronous;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Speed> speed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Plim> plim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::Service> service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::BDI::ServicePolicy> service_policy;
                class IfState;
        class ServiceInsertion;
        class ChannelProtocol;
        class Duplex;

}; // Native::Interface::BDI


class Native::Interface::BDI::SwitchportConf : public ydk::Entity
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

}; // Native::Interface::BDI::SwitchportConf


class Native::Interface::BDI::Switchport : public ydk::Entity
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


}; // Native::Interface::BDI::Switchport

class Native::Interface::AppNavUnCompress::Trust::Device : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_phone;
        static const ydk::Enum::YLeaf cts;
        static const ydk::Enum::YLeaf ip_camera;
        static const ydk::Enum::YLeaf media_player;

};

class Native::Interface::ATM::Atm::Bandwidth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;

};

class Native::Interface::ATM::Atm::Pvp::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::ATM::Atm::Pvp::Xconnect::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::ATM::Cem::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::ATM::Cem::Xconnect::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::ATM::Pvc::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::ATM::Pvc::Xconnect::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::ATMSubinterface::ATM::Atm::Bandwidth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;

};

class Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::ATMACR::Atm::Bandwidth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;

};

class Native::Interface::ATMACR::Atm::Pvp::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::ATMACR::Atm::Pvp::Xconnect::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::ATMACR::Cem::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::ATMACR::Cem::Xconnect::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::ATMACR::Pvc::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::ATMACR::Pvc::Xconnect::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::ATMACRsubinterface::ATMACR::Atm::Bandwidth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;

};

class Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;

};

class Native::Interface::BDI::IfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nhrp;

};

class Native::Interface::BDI::ServiceInsertion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf waas;

};

class Native::Interface::BDI::ChannelProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lacp;
        static const ydk::Enum::YLeaf pagp;

};

class Native::Interface::BDI::Duplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf half;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_21_ */

