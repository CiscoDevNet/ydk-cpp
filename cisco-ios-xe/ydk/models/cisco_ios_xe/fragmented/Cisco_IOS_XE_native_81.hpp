#ifndef _CISCO_IOS_XE_NATIVE_81_
#define _CISCO_IOS_XE_NATIVE_81_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_79.hpp"
#include "Cisco_IOS_XE_native_80.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal : public ydk::Entity
{
    public:
        NssaExternal();
        ~NssaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nssa_external_routes; //type: RedistOspfExternalType
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric : public ydk::Entity
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

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric : public ydk::Entity
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

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf


class Native::Ipv6::Router::Rip::Redistribute::Rip_ : public ydk::Entity
{
    public:
        Rip_();
        ~Rip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Rip_


class Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric : public ydk::Entity
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

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Static_ : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Static_


class Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric : public ydk::Entity
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

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Timers : public ydk::Entity
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

        ydk::YLeaf update; //type: uint16
        ydk::YLeaf timeout; //type: uint16
        ydk::YLeaf holddown; //type: uint16
        ydk::YLeaf garbage_collection; //type: uint16

}; // Native::Ipv6::Router::Rip::Timers


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::SourceGuard::Policy::Validate> validate;
        
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


class Native::Ipv6::Spd : public ydk::Entity
{
    public:
        Spd();
        ~Spd();

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

        ydk::YLeaf mode; //type: Mode
        class Queue; //type: Native::Ipv6::Spd::Queue

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Spd::Queue> queue;
                class Mode;

}; // Native::Ipv6::Spd


class Native::Ipv6::Spd::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

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

        ydk::YLeaf max_threshold; //type: uint16
        ydk::YLeaf min_threshold; //type: uint16

}; // Native::Ipv6::Spd::Queue


class Native::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

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

        class Chain; //type: Native::Key::Chain

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Key::Chain> > chain;
        
}; // Native::Key


class Native::Key::Chain : public ydk::Entity
{
    public:
        Chain();
        ~Chain();

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
        ydk::YLeaf macsec; //type: empty
        class Key_; //type: Native::Key::Chain::Key_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Key::Chain::Key_> > key;
        
}; // Native::Key::Chain


class Native::Key::Chain::Key_ : public ydk::Entity
{
    public:
        Key_();
        ~Key_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf cryptographic_algorithm; //type: CryptographicAlgorithm
        class KeyString; //type: Native::Key::Chain::Key_::KeyString

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Key::Chain::Key_::KeyString> key_string;
                class CryptographicAlgorithm;

}; // Native::Key::Chain::Key_


class Native::Key::Chain::Key_::KeyString : public ydk::Entity
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

        ydk::YLeaf encryption; //type: Encryption
        ydk::YLeaf key; //type: string
        class Encryption;

}; // Native::Key::Chain::Key_::KeyString


class Native::L2 : public ydk::Entity
{
    public:
        L2();
        ~L2();

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

        ydk::YLeaf router_id; //type: string
        class Vfi; //type: Native::L2::Vfi

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2::Vfi> > vfi;
        
}; // Native::L2


class Native::L2::Vfi : public ydk::Entity
{
    public:
        Vfi();
        ~Vfi();

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
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf evc; //type: string
        ydk::YLeaf bridge_domain; //type: uint16
        class Vpn; //type: Native::L2::Vfi::Vpn
        class Neighbor; //type: Native::L2::Vfi::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2::Vfi::Neighbor> > neighbor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2::Vfi::Vpn> vpn;
                class Mode;

}; // Native::L2::Vfi


class Native::L2::Vfi::Neighbor : public ydk::Entity
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

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf vc_id; //type: uint64
        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf pw_class; //type: string
        class Encapsulation;

}; // Native::L2::Vfi::Neighbor


class Native::L2::Vfi::Vpn : public ydk::Entity
{
    public:
        Vpn();
        ~Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint64

}; // Native::L2::Vfi::Vpn


class Native::L2ProtocolTunnel : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf cos; //type: uint8
        class Global; //type: Native::L2ProtocolTunnel::Global

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2ProtocolTunnel::Global> global;
        
}; // Native::L2ProtocolTunnel


class Native::L2ProtocolTunnel::Global : public ydk::Entity
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

        ydk::YLeaf drop_threshold; //type: uint16

}; // Native::L2ProtocolTunnel::Global


class Native::L2Vpn : public ydk::Entity
{
    public:
        L2Vpn();
        ~L2Vpn();

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

        class Pseudowire; //type: Native::L2Vpn::Pseudowire
        class Vfi; //type: Native::L2Vpn::Vfi
        class Xconnect; //type: Native::L2Vpn::Xconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire> pseudowire;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Vfi> vfi;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Xconnect> xconnect;
        
}; // Native::L2Vpn


class Native::L2Vpn::Pseudowire : public ydk::Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

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

        ydk::YLeaf routing; //type: empty
        class StaticOam; //type: Native::L2Vpn::Pseudowire::StaticOam
        class Tlv; //type: Native::L2Vpn::Pseudowire::Tlv
        class Group; //type: Native::L2Vpn::Pseudowire::Group

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Group> group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::StaticOam> static_oam;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Tlv> tlv;
        
}; // Native::L2Vpn::Pseudowire


class Native::L2Vpn::Pseudowire::Group : public ydk::Entity
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

        ydk::YLeaf status; //type: empty

}; // Native::L2Vpn::Pseudowire::Group


class Native::L2Vpn::Pseudowire::StaticOam : public ydk::Entity
{
    public:
        StaticOam();
        ~StaticOam();

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

        class Class_; //type: Native::L2Vpn::Pseudowire::StaticOam::Class_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::StaticOam::Class_> > class_;
        
}; // Native::L2Vpn::Pseudowire::StaticOam


class Native::L2Vpn::Pseudowire::StaticOam::Class_ : public ydk::Entity
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

        ydk::YLeaf pw_nm; //type: string
        class Timeout; //type: Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout> timeout;
        
}; // Native::L2Vpn::Pseudowire::StaticOam::Class_


class Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Refresh; //type: Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh> refresh;
        
}; // Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout


class Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh : public ydk::Entity
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

        class Send; //type: Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send> send;
        
}; // Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh


class Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send : public ydk::Entity
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

        ydk::YLeaf interval; //type: uint32

}; // Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send


class Native::L2Vpn::Pseudowire::Tlv : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Template_; //type: Native::L2Vpn::Pseudowire::Tlv::Template_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Tlv::Template_> > template_;
        
}; // Native::L2Vpn::Pseudowire::Tlv


class Native::L2Vpn::Pseudowire::Tlv::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

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

        ydk::YLeaf tlv_nm; //type: string
        class Tlv_; //type: Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_> tlv;
        
}; // Native::L2Vpn::Pseudowire::Tlv::Template_


class Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_ : public ydk::Entity
{
    public:
        Tlv_();
        ~Tlv_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TlvType; //type: Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType
        class TlvDescription; //type: Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription> tlv_description;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType> tlv_type;
        
}; // Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_


class Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription : public ydk::Entity
{
    public:
        TlvDescription();
        ~TlvDescription();

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

}; // Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription


class Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType : public ydk::Entity
{
    public:
        TlvType();
        ~TlvType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8

}; // Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType


class Native::L2Vpn::Vfi : public ydk::Entity
{
    public:
        Vfi();
        ~Vfi();

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

        class Context; //type: Native::L2Vpn::Vfi::Context

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context> > context;
        
}; // Native::L2Vpn::Vfi


class Native::L2Vpn::Vfi::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

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

        ydk::YLeaf vfi_nm; //type: string
        class Autodiscovery; //type: Native::L2Vpn::Vfi::Context::Autodiscovery
        class Vpn; //type: Native::L2Vpn::Vfi::Context::Vpn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Autodiscovery> autodiscovery;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Vpn> vpn;
        
}; // Native::L2Vpn::Vfi::Context


class Native::L2Vpn::Vfi::Context::Autodiscovery : public ydk::Entity
{
    public:
        Autodiscovery();
        ~Autodiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp; //type: Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp> bgp;
        
}; // Native::L2Vpn::Vfi::Context::Autodiscovery


class Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp : public ydk::Entity
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

        class Signaling; //type: Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling> signaling;
        
}; // Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp


class Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling : public ydk::Entity
{
    public:
        Signaling();
        ~Signaling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp_; //type: Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_
        class Ldp; //type: Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_> bgp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp> ldp; // presence node
        
}; // Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling


class Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_ : public ydk::Entity
{
    public:
        Bgp_();
        ~Bgp_();

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

}; // Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_


class Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp : public ydk::Entity
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

        ydk::YLeaf template_; //type: string

}; // Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp


class Native::L2Vpn::Vfi::Context::Vpn : public ydk::Entity
{
    public:
        Vpn();
        ~Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32

}; // Native::L2Vpn::Vfi::Context::Vpn


class Native::L2Vpn::Xconnect : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Context; //type: Native::L2Vpn::Xconnect::Context

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context> > context;
        
}; // Native::L2Vpn::Xconnect


class Native::L2Vpn::Xconnect::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

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

        ydk::YLeaf xc_name; //type: string
        class XcModeConfigXconnect; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect> xc_mode_config_xconnect;
        
}; // Native::L2Vpn::Xconnect::Context


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect : public ydk::Entity
{
    public:
        XcModeConfigXconnect();
        ~XcModeConfigXconnect();

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
        ydk::YLeaf shutdown; //type: empty
        class Interworking; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking
        class Match; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match
        class Member; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member
        class Redundancy; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy
        class Remote; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking> interworking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member> member;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy> redundancy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote> remote;
        
}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking : public ydk::Entity
{
    public:
        Interworking();
        ~Interworking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet; //type: empty
        ydk::YLeaf ip; //type: empty
        ydk::YLeaf vlan; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match : public ydk::Entity
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

        class Protocol; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol> protocol;
        
}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol : public ydk::Entity
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

        ydk::YLeaf ipv6; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member : public ydk::Entity
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

        ydk::YLeaf vlan; //type: uint16
        class Ipv4; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4
        class Interface; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface> > interface;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4> > ipv4;
        
}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf group; //type: empty
        ydk::YLeaf service_instance; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4 : public ydk::Entity
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
        ydk::YLeaf mem_vcid; //type: uint32

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

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
        class Predictive; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive> predictive;
        
}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive : public ydk::Entity
{
    public:
        Predictive();
        ~Predictive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disabled; //type: empty
        ydk::YLeaf enabled; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Circuit; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit
        class Link; //type: Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit> circuit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link> link;
        
}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit : public ydk::Entity
{
    public:
        Circuit();
        ~Circuit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf failure; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link


class Native::L2VpnConfig : public ydk::Entity
{
    public:
        L2VpnConfig();
        ~L2VpnConfig();

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

        class L2Vpn; //type: Native::L2VpnConfig::L2Vpn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2VpnConfig::L2Vpn> l2vpn; // presence node
        
}; // Native::L2VpnConfig


class Native::L2VpnConfig::L2Vpn : public ydk::Entity
{
    public:
        L2Vpn();
        ~L2Vpn();

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

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf shutdown; //type: empty
        class Logging; //type: Native::L2VpnConfig::L2Vpn::Logging
        class Redundancy; //type: Native::L2VpnConfig::L2Vpn::Redundancy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2VpnConfig::L2Vpn::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2VpnConfig::L2Vpn::Redundancy> redundancy;
        
}; // Native::L2VpnConfig::L2Vpn


class Native::L2VpnConfig::L2Vpn::Logging : public ydk::Entity
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

        ydk::YLeaf redundancy; //type: empty
        class Pseudowire; //type: Native::L2VpnConfig::L2Vpn::Logging::Pseudowire

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2VpnConfig::L2Vpn::Logging::Pseudowire> pseudowire;
        
}; // Native::L2VpnConfig::L2Vpn::Logging


class Native::L2VpnConfig::L2Vpn::Logging::Pseudowire : public ydk::Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

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

        ydk::YLeaf status; //type: empty

}; // Native::L2VpnConfig::L2Vpn::Logging::Pseudowire


class Native::L2VpnConfig::L2Vpn::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

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

        class Predictive; //type: Native::L2VpnConfig::L2Vpn::Redundancy::Predictive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2VpnConfig::L2Vpn::Redundancy::Predictive> predictive;
        
}; // Native::L2VpnConfig::L2Vpn::Redundancy


class Native::L2VpnConfig::L2Vpn::Redundancy::Predictive : public ydk::Entity
{
    public:
        Predictive();
        ~Predictive();

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

        ydk::YLeaf enabled; //type: empty

}; // Native::L2VpnConfig::L2Vpn::Redundancy::Predictive


class Native::L3Vpn : public ydk::Entity
{
    public:
        L3Vpn();
        ~L3Vpn();

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

        class Encapsulation; //type: Native::L3Vpn::Encapsulation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation> encapsulation;
        
}; // Native::L3Vpn


class Native::L3Vpn::Encapsulation : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Ip; //type: Native::L3Vpn::Encapsulation::Ip

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip> > ip;
        
}; // Native::L3Vpn::Encapsulation


class Native::L3Vpn::Encapsulation::Ip : public ydk::Entity
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

        ydk::YLeaf profile_name; //type: string
        class Transport; //type: Native::L3Vpn::Encapsulation::Ip::Transport
        class Protocol; //type: Native::L3Vpn::Encapsulation::Ip::Protocol
        class Mpls; //type: Native::L3Vpn::Encapsulation::Ip::Mpls

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip::Protocol> protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip::Transport> transport;
        
}; // Native::L3Vpn::Encapsulation::Ip


class Native::L3Vpn::Encapsulation::Ip::Mpls : public ydk::Entity
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

        ydk::YLeaf mtu; //type: one of uint32, enumeration
        class Mtu;

}; // Native::L3Vpn::Encapsulation::Ip::Mpls


class Native::L3Vpn::Encapsulation::Ip::Protocol : public ydk::Entity
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

        class Gre; //type: Native::L3Vpn::Encapsulation::Ip::Protocol::Gre

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip::Protocol::Gre> gre; // presence node
        
}; // Native::L3Vpn::Encapsulation::Ip::Protocol


class Native::L3Vpn::Encapsulation::Ip::Protocol::Gre : public ydk::Entity
{
    public:
        Gre();
        ~Gre();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: uint32

}; // Native::L3Vpn::Encapsulation::Ip::Protocol::Gre


class Native::L3Vpn::Encapsulation::Ip::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4> ipv4; // presence node
        
}; // Native::L3Vpn::Encapsulation::Ip::Transport


class Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4 : public ydk::Entity
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

        ydk::YLeaf source; //type: string

}; // Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4


class Native::License : public ydk::Entity
{
    public:
        License();
        ~License();

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

        ydk::YLeaf smart; //type: Smart
        class Udi; //type: Native::License::Udi
        class Feature; //type: Native::License::Feature
        class Accept; //type: Native::License::Accept
        class Boot; //type: Native::License::Boot

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Accept> accept;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot> boot;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Feature> feature;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Udi> udi;
                class Smart;

}; // Native::License


class Native::License::Accept : public ydk::Entity
{
    public:
        Accept();
        ~Accept();

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

        ydk::YLeaf end; //type: empty
        ydk::YLeaf user; //type: empty
        ydk::YLeaf agreement; //type: empty

}; // Native::License::Accept


class Native::License::Boot : public ydk::Entity
{
    public:
        Boot();
        ~Boot();

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

        class Level; //type: Native::License::Boot::Level
        class BootModule; //type: Native::License::Boot::BootModule

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::BootModule> boot_module;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level> level;
        
}; // Native::License::Boot


class Native::License::Boot::BootModule : public ydk::Entity
{
    public:
        BootModule();
        ~BootModule();

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

        ydk::YLeaf module; //type: Module
        class TechnologyPackage; //type: Native::License::Boot::BootModule::TechnologyPackage

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::BootModule::TechnologyPackage> technology_package;
                class Module;

}; // Native::License::Boot::BootModule


class Native::License::Boot::BootModule::TechnologyPackage : public ydk::Entity
{
    public:
        TechnologyPackage();
        ~TechnologyPackage();

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

        ydk::YLeaf securityk9; //type: empty
        ydk::YLeaf uck9; //type: empty
        ydk::YLeaf datak9; //type: empty

}; // Native::License::Boot::BootModule::TechnologyPackage


class Native::License::Boot::Level : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ipbasek9; //type: empty
        ydk::YLeaf lanbasek9; //type: empty
        ydk::YLeaf advancedmetroipaccess; //type: empty
        ydk::YLeaf metroaccess; //type: empty
        ydk::YLeaf metroipaccess; //type: empty
        ydk::YLeaf entservices; //type: empty
        ydk::YLeaf adventerprise; //type: empty
        ydk::YLeaf appx; //type: empty
        ydk::YLeaf appxk9; //type: empty
        ydk::YLeaf securityk9; //type: empty
        class Ipbase; //type: Native::License::Boot::Level::Ipbase
        class Ipservices; //type: Native::License::Boot::Level::Ipservices
        class Ipservicesk9; //type: Native::License::Boot::Level::Ipservicesk9
        class Lanbase; //type: Native::License::Boot::Level::Lanbase
        class Lite; //type: Native::License::Boot::Level::Lite
        class Metroaggrservices; //type: Native::License::Boot::Level::Metroaggrservices
        class Uck9; //type: Native::License::Boot::Level::Uck9

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Ipbase> ipbase; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Ipservices> ipservices; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Ipservicesk9> ipservicesk9; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Lanbase> lanbase; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Lite> lite; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Metroaggrservices> metroaggrservices; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Boot::Level::Uck9> uck9; // presence node
        
}; // Native::License::Boot::Level


class Native::License::Boot::Level::Ipbase : public ydk::Entity
{
    public:
        Ipbase();
        ~Ipbase();

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

        ydk::YLeaf switch_; //type: uint8

}; // Native::License::Boot::Level::Ipbase


class Native::License::Boot::Level::Ipservices : public ydk::Entity
{
    public:
        Ipservices();
        ~Ipservices();

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

        ydk::YLeaf switch_; //type: empty

}; // Native::License::Boot::Level::Ipservices


class Native::License::Boot::Level::Ipservicesk9 : public ydk::Entity
{
    public:
        Ipservicesk9();
        ~Ipservicesk9();

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

        ydk::YLeaf switch_; //type: empty

}; // Native::License::Boot::Level::Ipservicesk9


class Native::License::Boot::Level::Lanbase : public ydk::Entity
{
    public:
        Lanbase();
        ~Lanbase();

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

        ydk::YLeaf switch_; //type: empty

}; // Native::License::Boot::Level::Lanbase


class Native::License::Boot::Level::Lite : public ydk::Entity
{
    public:
        Lite();
        ~Lite();

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

        ydk::YLeaf switch_; //type: empty

}; // Native::License::Boot::Level::Lite


class Native::License::Boot::Level::Metroaggrservices : public ydk::Entity
{
    public:
        Metroaggrservices();
        ~Metroaggrservices();

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

        ydk::YLeaf switch_; //type: empty

}; // Native::License::Boot::Level::Metroaggrservices


class Native::License::Boot::Level::Uck9 : public ydk::Entity
{
    public:
        Uck9();
        ~Uck9();

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

}; // Native::License::Boot::Level::Uck9


class Native::License::Feature : public ydk::Entity
{
    public:
        Feature();
        ~Feature();

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
        class Port; //type: Native::License::Feature::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::License::Feature::Port> port;
        
}; // Native::License::Feature


class Native::License::Feature::Port : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf bulk; //type: empty
        ydk::YLeaf onegig; //type: uint8
        ydk::YLeaf b_6xonegig; //type: uint8
        ydk::YLeaf tengig; //type: uint8

}; // Native::License::Feature::Port


class Native::License::Udi : public ydk::Entity
{
    public:
        Udi();
        ~Udi();

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

        ydk::YLeaf pid; //type: string
        ydk::YLeaf sn; //type: string

}; // Native::License::Udi


class Native::Line : public ydk::Entity
{
    public:
        Line();
        ~Line();

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

        class LineList; //type: Native::Line::LineList
        class Aux; //type: Native::Line::Aux
        class Console; //type: Native::Line::Console
        class Vty; //type: Native::Line::Vty

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux> > aux;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console> > console;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::LineList> > line_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Vty> > vty;
        
}; // Native::Line


class Native::Line::Aux : public ydk::Entity
{
    public:
        Aux();
        ~Aux();

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

        ydk::YLeaf first; //type: First
        ydk::YLeaf no_activation_character; //type: boolean
        ydk::YLeaf activation_character; //type: one of string, uint8
        ydk::YLeaf data_character_bits; //type: uint8
        ydk::YLeaf domain_lookup; //type: empty
        ydk::YLeaf editing; //type: empty
        ydk::YLeaf exec_banner; //type: empty
        ydk::YLeaf exec_character_bits; //type: uint8
        ydk::YLeaf full_help; //type: empty
        ydk::YLeaf international; //type: empty
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf line; //type: uint8
        ydk::YLeaf location; //type: string
        ydk::YLeaf monitor; //type: empty
        ydk::YLeaf motd_banner; //type: empty
        ydk::YLeaf notify; //type: empty
        ydk::YLeaf rotary; //type: uint8
        ydk::YLeaf rxspeed; //type: uint32
        ydk::YLeaf special_character_bits; //type: uint8
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf start_character; //type: one of string, uint8
        ydk::YLeaf stop_character; //type: one of string, uint8
        ydk::YLeaf stopbits; //type: Stopbits
        ydk::YLeaf terminal_type; //type: string
        ydk::YLeaf txspeed; //type: uint32
        ydk::YLeaf width; //type: uint16
        class Authorization; //type: Native::Line::Aux::Authorization
        class AccessClass; //type: Native::Line::Aux::AccessClass
        class Autocommand; //type: Native::Line::Aux::Autocommand
        class AutocommandOptions; //type: Native::Line::Aux::AutocommandOptions
        class Databits; //type: Native::Line::Aux::Databits
        class EscapeCharacter; //type: Native::Line::Aux::EscapeCharacter
        class NoExec; //type: Native::Line::Aux::NoExec
        class Exec; //type: Native::Line::Aux::Exec
        class ExecTimeout; //type: Native::Line::Aux::ExecTimeout
        class Flowcontrol; //type: Native::Line::Aux::Flowcontrol
        class History; //type: Native::Line::Aux::History
        class Ip; //type: Native::Line::Aux::Ip
        class Ipv6; //type: Native::Line::Aux::Ipv6
        class Logging; //type: Native::Line::Aux::Logging
        class Login; //type: Native::Line::Aux::Login
        class MediaType; //type: Native::Line::Aux::MediaType
        class Modem; //type: Native::Line::Aux::Modem
        class Padding; //type: Native::Line::Aux::Padding
        class Parity; //type: Native::Line::Aux::Parity
        class Password; //type: Native::Line::Aux::Password
        class Prc; //type: Native::Line::Aux::Prc
        class Privilege; //type: Native::Line::Aux::Privilege
        class SessionTimeout; //type: Native::Line::Aux::SessionTimeout
        class Timeout; //type: Native::Line::Aux::Timeout
        class Telnet; //type: Native::Line::Aux::Telnet
        class Transport; //type: Native::Line::Aux::Transport
        class UsbInactivityTimeout; //type: Native::Line::Aux::UsbInactivityTimeout

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::AccessClass> access_class;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Autocommand> autocommand;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::AutocommandOptions> autocommand_options; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Databits> databits;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::EscapeCharacter> escape_character;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Exec> exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::ExecTimeout> exec_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Flowcontrol> flowcontrol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::History> history; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Login> login; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::MediaType> media_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Modem> modem;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::NoExec> no_exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Padding> padding;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Parity> parity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Prc> prc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Privilege> privilege;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::SessionTimeout> session_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Telnet> telnet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Timeout> timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::UsbInactivityTimeout> usb_inactivity_timeout;
                class First;
        class Stopbits;

}; // Native::Line::Aux


class Native::Line::Aux::AccessClass : public ydk::Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AcccessList; //type: Native::Line::Aux::AccessClass::AcccessList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::AccessClass::AcccessList> > acccess_list;
        
}; // Native::Line::Aux::AccessClass


class Native::Line::Aux::AccessClass::AcccessList : public ydk::Entity
{
    public:
        AcccessList();
        ~AcccessList();

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
        ydk::YLeaf access_list; //type: one of string, uint16
        ydk::YLeaf vrf_also; //type: empty
        class Direction;

}; // Native::Line::Aux::AccessClass::AcccessList


class Native::Line::Aux::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Command; //type: Native::Line::Aux::Authorization::Command

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Authorization::Command> command;
        
}; // Native::Line::Aux::Authorization


class Native::Line::Aux::Authorization::Command : public ydk::Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable_level; //type: uint8
        ydk::YLeaf auth_name; //type: string

}; // Native::Line::Aux::Authorization::Command


class Native::Line::Aux::Autocommand : public ydk::Entity
{
    public:
        Autocommand();
        ~Autocommand();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string
        class NoSuppressLinenumber; //type: Native::Line::Aux::Autocommand::NoSuppressLinenumber

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Autocommand::NoSuppressLinenumber> no_suppress_linenumber; // presence node
        
}; // Native::Line::Aux::Autocommand


class Native::Line::Aux::Autocommand::NoSuppressLinenumber : public ydk::Entity
{
    public:
        NoSuppressLinenumber();
        ~NoSuppressLinenumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string

}; // Native::Line::Aux::Autocommand::NoSuppressLinenumber


class Native::Line::Aux::AutocommandOptions : public ydk::Entity
{
    public:
        AutocommandOptions();
        ~AutocommandOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AbortCharacter; //type: Native::Line::Aux::AutocommandOptions::AbortCharacter
        class Delay; //type: Native::Line::Aux::AutocommandOptions::Delay
        class Nohangup; //type: Native::Line::Aux::AutocommandOptions::Nohangup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::AutocommandOptions::AbortCharacter> abort_character; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::AutocommandOptions::Delay> delay; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::AutocommandOptions::Nohangup> nohangup; // presence node
        
}; // Native::Line::Aux::AutocommandOptions


class Native::Line::Aux::AutocommandOptions::AbortCharacter : public ydk::Entity
{
    public:
        AbortCharacter();
        ~AbortCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf character; //type: one of string, uint8

}; // Native::Line::Aux::AutocommandOptions::AbortCharacter


class Native::Line::Aux::AutocommandOptions::Delay : public ydk::Entity
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

        ydk::YLeaf time; //type: uint8

}; // Native::Line::Aux::AutocommandOptions::Delay


class Native::Line::Aux::AutocommandOptions::Nohangup : public ydk::Entity
{
    public:
        Nohangup();
        ~Nohangup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf abort_character; //type: empty
        ydk::YLeaf delay; //type: empty

}; // Native::Line::Aux::AutocommandOptions::Nohangup


class Native::Line::Aux::Databits : public ydk::Entity
{
    public:
        Databits();
        ~Databits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_to_5; //type: empty
        ydk::YLeaf set_to_6; //type: empty
        ydk::YLeaf set_to_7; //type: empty
        ydk::YLeaf set_to_8; //type: empty

}; // Native::Line::Aux::Databits


class Native::Line::Aux::EscapeCharacter : public ydk::Entity
{
    public:
        EscapeCharacter();
        ~EscapeCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf char_; //type: one of string, uint8, enumeration
        ydk::YLeaf soft; //type: empty
        class Char_;

}; // Native::Line::Aux::EscapeCharacter


class Native::Line::Aux::Exec : public ydk::Entity
{
    public:
        Exec();
        ~Exec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prompt; //type: Native::Line::Aux::Exec::Prompt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Exec::Prompt> prompt;
        
}; // Native::Line::Aux::Exec


class Native::Line::Aux::Exec::Prompt : public ydk::Entity
{
    public:
        Prompt();
        ~Prompt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp; //type: empty

}; // Native::Line::Aux::Exec::Prompt


class Native::Line::Aux::ExecTimeout : public ydk::Entity
{
    public:
        ExecTimeout();
        ~ExecTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minutes; //type: uint32
        ydk::YLeaf seconds; //type: uint32

}; // Native::Line::Aux::ExecTimeout


class Native::Line::Aux::Flowcontrol : public ydk::Entity
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

        ydk::YLeaf none; //type: empty
        ydk::YLeaf hardware; //type: empty
        ydk::YLeaf software; //type: empty

}; // Native::Line::Aux::Flowcontrol


class Native::Line::Aux::History : public ydk::Entity
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

        ydk::YLeaf size; //type: uint8

}; // Native::Line::Aux::History


class Native::Line::Aux::Ip : public ydk::Entity
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

        ydk::YLeaf tcp; //type: empty
        class NetmaskFormat; //type: Native::Line::Aux::Ip::NetmaskFormat

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Ip::NetmaskFormat> netmask_format; // presence node
        
}; // Native::Line::Aux::Ip


class Native::Line::Aux::Ip::NetmaskFormat : public ydk::Entity
{
    public:
        NetmaskFormat();
        ~NetmaskFormat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: Format
        class Format;

}; // Native::Line::Aux::Ip::NetmaskFormat


class Native::Line::Aux::Ipv6 : public ydk::Entity
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

        class AccessClass; //type: Native::Line::Aux::Ipv6::AccessClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Ipv6::AccessClass> access_class;
        
}; // Native::Line::Aux::Ipv6


class Native::Line::Aux::Ipv6::AccessClass : public ydk::Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessClass_; //type: Native::Line::Aux::Ipv6::AccessClass::AccessClass_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Ipv6::AccessClass::AccessClass_> > access_class;
        
}; // Native::Line::Aux::Ipv6::AccessClass


class Native::Line::Aux::Ipv6::AccessClass::AccessClass_ : public ydk::Entity
{
    public:
        AccessClass_();
        ~AccessClass_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_class_name; //type: string
        ydk::YLeaf enumeration_in_out; //type: EnumerationInOut
        class EnumerationInOut;

}; // Native::Line::Aux::Ipv6::AccessClass::AccessClass_


class Native::Line::Aux::Logging : public ydk::Entity
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

        class Synchronous; //type: Native::Line::Aux::Logging::Synchronous

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Logging::Synchronous> synchronous; // presence node
        
}; // Native::Line::Aux::Logging


class Native::Line::Aux::Logging::Synchronous : public ydk::Entity
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


}; // Native::Line::Aux::Logging::Synchronous


class Native::Line::Aux::Login : public ydk::Entity
{
    public:
        Login();
        ~Login();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local; //type: empty
        ydk::YLeaf authentication; //type: string

}; // Native::Line::Aux::Login


class Native::Line::Aux::MediaType : public ydk::Entity
{
    public:
        MediaType();
        ~MediaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rj45; //type: empty

}; // Native::Line::Aux::MediaType


class Native::Line::Aux::Modem : public ydk::Entity
{
    public:
        Modem();
        ~Modem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cts_alarm; //type: empty
        ydk::YLeaf dtr_active; //type: empty
        ydk::YLeaf dialin; //type: empty
        ydk::YLeaf host; //type: empty
        ydk::YLeaf inout; //type: empty
        ydk::YLeaf printer; //type: empty
        ydk::YLeaf answer_timeout; //type: empty
        ydk::YLeaf dtr_delay; //type: empty

}; // Native::Line::Aux::Modem


class Native::Line::Aux::NoExec : public ydk::Entity
{
    public:
        NoExec();
        ~NoExec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exec; //type: boolean

}; // Native::Line::Aux::NoExec


class Native::Line::Aux::Padding : public ydk::Entity
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

        ydk::YLeaf character; //type: one of string, uint8
        ydk::YLeaf null; //type: uint8

}; // Native::Line::Aux::Padding


class Native::Line::Aux::Parity : public ydk::Entity
{
    public:
        Parity();
        ~Parity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf even; //type: empty
        ydk::YLeaf mark; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf odd; //type: empty
        ydk::YLeaf space; //type: empty

}; // Native::Line::Aux::Parity


class Native::Line::Aux::Password : public ydk::Entity
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

        ydk::YLeaf level; //type: uint8
        ydk::YLeaf type; //type: Type
        ydk::YLeaf secret; //type: string
        class Type;

}; // Native::Line::Aux::Password


class Native::Line::Aux::Prc : public ydk::Entity
{
    public:
        Prc();
        ~Prc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf expose; //type: empty
        ydk::YLeaf hide; //type: empty

}; // Native::Line::Aux::Prc


class Native::Line::Aux::Privilege : public ydk::Entity
{
    public:
        Privilege();
        ~Privilege();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level; //type: Native::Line::Aux::Privilege::Level

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Privilege::Level> level; // presence node
        
}; // Native::Line::Aux::Privilege


class Native::Line::Aux::Privilege::Level : public ydk::Entity
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

        ydk::YLeaf number; //type: uint8

}; // Native::Line::Aux::Privilege::Level


class Native::Line::Aux::SessionTimeout : public ydk::Entity
{
    public:
        SessionTimeout();
        ~SessionTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_timeout_value; //type: uint16
        ydk::YLeaf output; //type: empty

}; // Native::Line::Aux::SessionTimeout


class Native::Line::Aux::Telnet : public ydk::Entity
{
    public:
        Telnet();
        ~Telnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transparent; //type: empty

}; // Native::Line::Aux::Telnet


class Native::Line::Aux::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf login; //type: empty

}; // Native::Line::Aux::Timeout


class Native::Line::Aux::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: Native::Line::Aux::Transport::Input
        class Output; //type: Native::Line::Aux::Transport::Output
        class Preferred; //type: Native::Line::Aux::Transport::Preferred

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Transport::Input> input;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Transport::Output> output;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Aux::Transport::Preferred> preferred; // presence node
        
}; // Native::Line::Aux::Transport


class Native::Line::Aux::Transport::Input : public ydk::Entity
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

        ydk::YLeafList input; //type: list of  Input_
        class Input_;

}; // Native::Line::Aux::Transport::Input


class Native::Line::Aux::Transport::Output : public ydk::Entity
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

        ydk::YLeafList output; //type: list of  Output_
        class Output_;

}; // Native::Line::Aux::Transport::Output


class Native::Line::Aux::Transport::Preferred : public ydk::Entity
{
    public:
        Preferred();
        ~Preferred();

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

}; // Native::Line::Aux::Transport::Preferred


class Native::Line::Aux::UsbInactivityTimeout : public ydk::Entity
{
    public:
        UsbInactivityTimeout();
        ~UsbInactivityTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switch_; //type: empty

}; // Native::Line::Aux::UsbInactivityTimeout


class Native::Line::Console : public ydk::Entity
{
    public:
        Console();
        ~Console();

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

        ydk::YLeaf first; //type: First
        ydk::YLeaf no_activation_character; //type: boolean
        ydk::YLeaf activation_character; //type: one of string, uint8
        ydk::YLeaf data_character_bits; //type: uint8
        ydk::YLeaf domain_lookup; //type: empty
        ydk::YLeaf editing; //type: empty
        ydk::YLeaf exec_banner; //type: empty
        ydk::YLeaf exec_character_bits; //type: uint8
        ydk::YLeaf full_help; //type: empty
        ydk::YLeaf international; //type: empty
        ydk::YLeaf length; //type: uint16
        ydk::YLeaf line; //type: uint8
        ydk::YLeaf location; //type: string
        ydk::YLeaf monitor; //type: empty
        ydk::YLeaf motd_banner; //type: empty
        ydk::YLeaf notify; //type: empty
        ydk::YLeaf rotary; //type: uint8
        ydk::YLeaf rxspeed; //type: uint32
        ydk::YLeaf special_character_bits; //type: uint8
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf start_character; //type: one of string, uint8
        ydk::YLeaf stop_character; //type: one of string, uint8
        ydk::YLeaf stopbits; //type: Stopbits
        ydk::YLeaf terminal_type; //type: string
        ydk::YLeaf txspeed; //type: uint32
        ydk::YLeaf width; //type: uint16
        class Authorization; //type: Native::Line::Console::Authorization
        class AccessClass; //type: Native::Line::Console::AccessClass
        class Autocommand; //type: Native::Line::Console::Autocommand
        class AutocommandOptions; //type: Native::Line::Console::AutocommandOptions
        class Databits; //type: Native::Line::Console::Databits
        class EscapeCharacter; //type: Native::Line::Console::EscapeCharacter
        class NoExec; //type: Native::Line::Console::NoExec
        class Exec; //type: Native::Line::Console::Exec
        class ExecTimeout; //type: Native::Line::Console::ExecTimeout
        class Flowcontrol; //type: Native::Line::Console::Flowcontrol
        class History; //type: Native::Line::Console::History
        class Ip; //type: Native::Line::Console::Ip
        class Ipv6; //type: Native::Line::Console::Ipv6
        class Logging; //type: Native::Line::Console::Logging
        class Login; //type: Native::Line::Console::Login
        class MediaType; //type: Native::Line::Console::MediaType
        class Modem; //type: Native::Line::Console::Modem
        class Padding; //type: Native::Line::Console::Padding
        class Parity; //type: Native::Line::Console::Parity
        class Password; //type: Native::Line::Console::Password
        class Prc; //type: Native::Line::Console::Prc
        class Privilege; //type: Native::Line::Console::Privilege
        class SessionTimeout; //type: Native::Line::Console::SessionTimeout
        class Timeout; //type: Native::Line::Console::Timeout
        class Telnet; //type: Native::Line::Console::Telnet
        class Transport; //type: Native::Line::Console::Transport
        class UsbInactivityTimeout; //type: Native::Line::Console::UsbInactivityTimeout

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::AccessClass> access_class;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Autocommand> autocommand;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::AutocommandOptions> autocommand_options; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Databits> databits;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::EscapeCharacter> escape_character;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Exec> exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::ExecTimeout> exec_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Flowcontrol> flowcontrol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::History> history; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Login> login; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::MediaType> media_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Modem> modem;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::NoExec> no_exec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Padding> padding;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Parity> parity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Prc> prc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Privilege> privilege;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::SessionTimeout> session_timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Telnet> telnet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Timeout> timeout;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::UsbInactivityTimeout> usb_inactivity_timeout;
                class First;
        class Stopbits;

}; // Native::Line::Console


class Native::Line::Console::AccessClass : public ydk::Entity
{
    public:
        AccessClass();
        ~AccessClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AcccessList; //type: Native::Line::Console::AccessClass::AcccessList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::AccessClass::AcccessList> > acccess_list;
        
}; // Native::Line::Console::AccessClass


class Native::Line::Console::AccessClass::AcccessList : public ydk::Entity
{
    public:
        AcccessList();
        ~AcccessList();

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
        ydk::YLeaf access_list; //type: one of string, uint16
        ydk::YLeaf vrf_also; //type: empty
        class Direction;

}; // Native::Line::Console::AccessClass::AcccessList


class Native::Line::Console::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Command; //type: Native::Line::Console::Authorization::Command

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Authorization::Command> command;
        
}; // Native::Line::Console::Authorization


class Native::Line::Console::Authorization::Command : public ydk::Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable_level; //type: uint8
        ydk::YLeaf auth_name; //type: string

}; // Native::Line::Console::Authorization::Command


class Native::Line::Console::Autocommand : public ydk::Entity
{
    public:
        Autocommand();
        ~Autocommand();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string
        class NoSuppressLinenumber; //type: Native::Line::Console::Autocommand::NoSuppressLinenumber

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::Autocommand::NoSuppressLinenumber> no_suppress_linenumber; // presence node
        
}; // Native::Line::Console::Autocommand


class Native::Line::Console::Autocommand::NoSuppressLinenumber : public ydk::Entity
{
    public:
        NoSuppressLinenumber();
        ~NoSuppressLinenumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string

}; // Native::Line::Console::Autocommand::NoSuppressLinenumber


class Native::Line::Console::AutocommandOptions : public ydk::Entity
{
    public:
        AutocommandOptions();
        ~AutocommandOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AbortCharacter; //type: Native::Line::Console::AutocommandOptions::AbortCharacter
        class Delay; //type: Native::Line::Console::AutocommandOptions::Delay
        class Nohangup; //type: Native::Line::Console::AutocommandOptions::Nohangup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::AutocommandOptions::AbortCharacter> abort_character; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::AutocommandOptions::Delay> delay; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Line::Console::AutocommandOptions::Nohangup> nohangup; // presence node
        
}; // Native::Line::Console::AutocommandOptions


class Native::Line::Console::AutocommandOptions::AbortCharacter : public ydk::Entity
{
    public:
        AbortCharacter();
        ~AbortCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf character; //type: one of string, uint8

}; // Native::Line::Console::AutocommandOptions::AbortCharacter


class Native::Line::Console::AutocommandOptions::Delay : public ydk::Entity
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

        ydk::YLeaf time; //type: uint8

}; // Native::Line::Console::AutocommandOptions::Delay


class Native::Line::Console::AutocommandOptions::Nohangup : public ydk::Entity
{
    public:
        Nohangup();
        ~Nohangup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf abort_character; //type: empty
        ydk::YLeaf delay; //type: empty

}; // Native::Line::Console::AutocommandOptions::Nohangup


class Native::Line::Console::Databits : public ydk::Entity
{
    public:
        Databits();
        ~Databits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_to_5; //type: empty
        ydk::YLeaf set_to_6; //type: empty
        ydk::YLeaf set_to_7; //type: empty
        ydk::YLeaf set_to_8; //type: empty

}; // Native::Line::Console::Databits


class Native::Line::Console::EscapeCharacter : public ydk::Entity
{
    public:
        EscapeCharacter();
        ~EscapeCharacter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf char_; //type: one of string, uint8, enumeration
        ydk::YLeaf soft; //type: empty
        class Char_;

}; // Native::Line::Console::EscapeCharacter

class Native::Ipv6::Spd::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aggressive;

};

class Native::Key::Chain::Key_::CryptographicAlgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aes_128_cmac;
        static const ydk::Enum::YLeaf aes_256_cmac;
        static const ydk::Enum::YLeaf hmac_sha_1;
        static const ydk::Enum::YLeaf hmac_sha_256;
        static const ydk::Enum::YLeaf hmac_sha_384;
        static const ydk::Enum::YLeaf hmac_sha_512;
        static const ydk::Enum::YLeaf md5;

};

class Native::Key::Chain::Key_::KeyString::Encryption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::L2::Vfi::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf autodiscovery;
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf point_to_point;

};

class Native::L2::Vfi::Neighbor::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf mpls;

};

class Native::L3Vpn::Encapsulation::Ip::Mpls::Mtu : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max;

};

class Native::License::Smart : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;

};

class Native::License::Boot::BootModule::Module : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf c2900;

};

class Native::Line::Aux::First : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;

};

class Native::Line::Aux::Stopbits : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_1__DOT__5;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Line::Aux::AccessClass::AcccessList::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Line::Aux::EscapeCharacter::Char_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf BREAK;
        static const ydk::Enum::YLeaf DEFAULT;
        static const ydk::Enum::YLeaf NONE;

};

class Native::Line::Aux::Ip::NetmaskFormat::Format : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bit_count;
        static const ydk::Enum::YLeaf decimal;
        static const ydk::Enum::YLeaf hexadecimal;

};

class Native::Line::Aux::Ipv6::AccessClass::AccessClass_::EnumerationInOut : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Line::Aux::Password::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_7;

};

class Native::Line::Aux::Transport::Input::Input_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf acercon;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf lapb_ta;
        static const ydk::Enum::YLeaf lat;
        static const ydk::Enum::YLeaf mop;
        static const ydk::Enum::YLeaf nasi;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf pad;
        static const ydk::Enum::YLeaf rlogin;
        static const ydk::Enum::YLeaf ssh;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf udptn;
        static const ydk::Enum::YLeaf v120;

};

class Native::Line::Aux::Transport::Output::Output_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf acercon;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf lapb_ta;
        static const ydk::Enum::YLeaf lat;
        static const ydk::Enum::YLeaf mop;
        static const ydk::Enum::YLeaf nasi;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf pad;
        static const ydk::Enum::YLeaf rlogin;
        static const ydk::Enum::YLeaf ssh;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf udptn;
        static const ydk::Enum::YLeaf v120;

};

class Native::Line::Aux::Transport::Preferred::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf acercon;
        static const ydk::Enum::YLeaf lat;
        static const ydk::Enum::YLeaf mop;
        static const ydk::Enum::YLeaf nasi;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf pad;
        static const ydk::Enum::YLeaf rlogin;
        static const ydk::Enum::YLeaf ssh;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf udptn;

};

class Native::Line::Console::First : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;

};

class Native::Line::Console::Stopbits : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_1__DOT__5;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Line::Console::AccessClass::AcccessList::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Line::Console::EscapeCharacter::Char_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf BREAK;
        static const ydk::Enum::YLeaf DEFAULT;
        static const ydk::Enum::YLeaf NONE;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_81_ */

