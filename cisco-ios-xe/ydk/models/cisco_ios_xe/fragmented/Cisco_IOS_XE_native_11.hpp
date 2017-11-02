#ifndef _CISCO_IOS_XE_NATIVE_11_
#define _CISCO_IOS_XE_NATIVE_11_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_10.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile : public ydk::Entity
{
    public:
        Mobile();
        ~Mobile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr : public ydk::Entity
{
    public:
        Odr();
        ~Odr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf : public ydk::Entity
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

        ydk::YLeaf process_id; //type: uint16
        class Vrf_; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_
        class Match; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_> > vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_ : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match : public ydk::Entity
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

        class Internal; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External : public ydk::Entity
{
    public:
        External();
        ~External();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_routes; //type: RedistOspfExternalType
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal : public ydk::Entity
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
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_ : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_ : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers


class Native::Ipv6::Router::Rip::DistributeList : public ydk::Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixList; //type: Native::Ipv6::Router::Rip::DistributeList::PrefixList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::DistributeList::PrefixList> > prefix_list;
        
}; // Native::Ipv6::Router::Rip::DistributeList


class Native::Ipv6::Router::Rip::DistributeList::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

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
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Ipv6::Router::Rip::DistributeList::PrefixList


class Native::Ipv6::Router::Rip::Redistribute : public ydk::Entity
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

        class Application; //type: Native::Ipv6::Router::Rip::Redistribute::Application
        class Lisp; //type: Native::Ipv6::Router::Rip::Redistribute::Lisp
        class Nd; //type: Native::Ipv6::Router::Rip::Redistribute::Nd
        class Connected; //type: Native::Ipv6::Router::Rip::Redistribute::Connected
        class Bgp; //type: Native::Ipv6::Router::Rip::Redistribute::Bgp
        class Eigrp; //type: Native::Ipv6::Router::Rip::Redistribute::Eigrp
        class Isis; //type: Native::Ipv6::Router::Rip::Redistribute::Isis
        class IsoIgrp; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp
        class Mobile; //type: Native::Ipv6::Router::Rip::Redistribute::Mobile
        class Odr; //type: Native::Ipv6::Router::Rip::Redistribute::Odr
        class Ospf; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf
        class Static_; //type: Native::Ipv6::Router::Rip::Redistribute::Static_
        class Rip_; //type: Native::Ipv6::Router::Rip::Redistribute::Rip_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Nd> nd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Bgp> > bgp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf> > ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Static_> static_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Rip_> rip; // presence node
        
}; // Native::Ipv6::Router::Rip::Redistribute


class Native::Ipv6::Router::Rip::Redistribute::Application : public ydk::Entity
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

        ydk::YLeaf include_connected; //type: empty
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Ipv6::Router::Rip::Redistribute::Application


class Native::Ipv6::Router::Rip::Redistribute::Lisp : public ydk::Entity
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

        ydk::YLeaf include_connected; //type: empty
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Ipv6::Router::Rip::Redistribute::Lisp


class Native::Ipv6::Router::Rip::Redistribute::Nd : public ydk::Entity
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

        ydk::YLeaf include_connected; //type: empty
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Ipv6::Router::Rip::Redistribute::Nd


class Native::Ipv6::Router::Rip::Redistribute::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Connected


class Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Bgp : public ydk::Entity
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

        ydk::YLeaf as_number; //type: one of string, uint32
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Bgp


class Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: uint16
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Eigrp


class Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Isis : public ydk::Entity
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

        class IsisArea; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea
        class RipIsisRedist; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea> > isis_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist> rip_isis_redist;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Isis


class Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea : public ydk::Entity
{
    public:
        IsisArea();
        ~IsisArea();

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
        class RipIsisRedist; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist> rip_isis_redist;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea


class Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist : public ydk::Entity
{
    public:
        RipIsisRedist();
        ~RipIsisRedist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isis_level_routes; //type: IsisLevelRoutes
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutes;

}; // Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist


class Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist : public ydk::Entity
{
    public:
        RipIsisRedist();
        ~RipIsisRedist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isis_level_routes; //type: IsisLevelRoutes
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutes;

}; // Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist


class Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp : public ydk::Entity
{
    public:
        IsoIgrp();
        ~IsoIgrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IsoigrpList; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList> > isoigrp_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList : public ydk::Entity
{
    public:
        IsoigrpList();
        ~IsoigrpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iso_area_tag; //type: string
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Mobile : public ydk::Entity
{
    public:
        Mobile();
        ~Mobile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Mobile


class Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Odr : public ydk::Entity
{
    public:
        Odr();
        ~Odr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Odr


class Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Ospf : public ydk::Entity
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

        ydk::YLeaf process_id; //type: uint16
        class Vrf; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf
        class Match; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf> > vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf


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


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match : public ydk::Entity
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

        class Internal; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External : public ydk::Entity
{
    public:
        External();
        ~External();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_routes; //type: RedistOspfExternalType
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric


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


class Native::Ipv6::PrefixList : public ydk::Entity
{
    public:
        PrefixList();
        ~PrefixList();

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

        ydk::YLeaf sequence_number; //type: empty
        class Prefixes; //type: Native::Ipv6::PrefixList::Prefixes

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::PrefixList::Prefixes> > prefixes;
        
}; // Native::Ipv6::PrefixList


class Native::Ipv6::PrefixList::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

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
        class Permit; //type: Native::Ipv6::PrefixList::Prefixes::Permit
        class Deny; //type: Native::Ipv6::PrefixList::Prefixes::Deny
        class Seq; //type: Native::Ipv6::PrefixList::Prefixes::Seq

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::PrefixList::Prefixes::Permit> permit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::PrefixList::Prefixes::Deny> deny;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::PrefixList::Prefixes::Seq> > seq;
        
}; // Native::Ipv6::PrefixList::Prefixes


class Native::Ipv6::PrefixList::Prefixes::Permit : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf ge; //type: uint8
        ydk::YLeaf le; //type: uint8

}; // Native::Ipv6::PrefixList::Prefixes::Permit


class Native::Ipv6::PrefixList::Prefixes::Deny : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf ge; //type: uint8
        ydk::YLeaf le; //type: uint8

}; // Native::Ipv6::PrefixList::Prefixes::Deny


class Native::Ipv6::PrefixList::Prefixes::Seq : public ydk::Entity
{
    public:
        Seq();
        ~Seq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no; //type: uint32
        class Deny; //type: Native::Ipv6::PrefixList::Prefixes::Seq::Deny
        class Permit; //type: Native::Ipv6::PrefixList::Prefixes::Seq::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::PrefixList::Prefixes::Seq::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::PrefixList::Prefixes::Seq::Permit> permit;
        
}; // Native::Ipv6::PrefixList::Prefixes::Seq


class Native::Ipv6::PrefixList::Prefixes::Seq::Deny : public ydk::Entity
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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf ge; //type: uint16
        ydk::YLeaf le; //type: uint16

}; // Native::Ipv6::PrefixList::Prefixes::Seq::Deny


class Native::Ipv6::PrefixList::Prefixes::Seq::Permit : public ydk::Entity
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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf ge; //type: uint16
        ydk::YLeaf le; //type: uint16

}; // Native::Ipv6::PrefixList::Prefixes::Seq::Permit


class Native::Ipv6::Neighbor : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf hardware_address; //type: string

}; // Native::Ipv6::Neighbor


class Native::Ipv6::Mld : public ydk::Entity
{
    public:
        Mld();
        ~Mld();

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

        class SsmMap; //type: Native::Ipv6::Mld::SsmMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Mld::SsmMap> ssm_map;
        
}; // Native::Ipv6::Mld


class Native::Ipv6::Mld::SsmMap : public ydk::Entity
{
    public:
        SsmMap();
        ~SsmMap();

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
        class Query; //type: Native::Ipv6::Mld::SsmMap::Query
        class Static_; //type: Native::Ipv6::Mld::SsmMap::Static_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Mld::SsmMap::Query> query;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Mld::SsmMap::Static_> static_;
        
}; // Native::Ipv6::Mld::SsmMap


class Native::Ipv6::Mld::SsmMap::Query : public ydk::Entity
{
    public:
        Query();
        ~Query();

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

        ydk::YLeaf dns; //type: empty

}; // Native::Ipv6::Mld::SsmMap::Query


class Native::Ipv6::Mld::SsmMap::Static_ : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf acl; //type: string
        ydk::YLeaf source_ip; //type: string

}; // Native::Ipv6::Mld::SsmMap::Static_


class Native::Ipv6::MulticastRouting : public ydk::Entity
{
    public:
        MulticastRouting();
        ~MulticastRouting();

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

}; // Native::Ipv6::MulticastRouting


class Native::Ipv6::Rip : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_mode; //type: VrfMode
        class VrfMode;

}; // Native::Ipv6::Rip


class Native::Vlan : public ydk::Entity
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

        class AccessMap; //type: Native::Vlan::AccessMap
        class Configuration; //type: Native::Vlan::Configuration
        class Filter; //type: Native::Vlan::Filter
        class Accounting; //type: Native::Vlan::Accounting
        class Internal; //type: Native::Vlan::Internal
        class Dot1Q; //type: Native::Vlan::Dot1Q
        class AccessLog; //type: Native::Vlan::AccessLog
        class VlanList; //type: Native::Vlan::VlanList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::AccessMap> > access_map;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Configuration> > configuration;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Filter> > filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Accounting> accounting; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Internal> internal;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Dot1Q> dot1q;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::AccessLog> access_log;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::VlanList> > vlan_list;
        
}; // Native::Vlan


class Native::Vlan::AccessMap : public ydk::Entity
{
    public:
        AccessMap();
        ~AccessMap();

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
        ydk::YLeaf value_; //type: uint16
        ydk::YLeaf action; //type: Action
        class Match; //type: Native::Vlan::AccessMap::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::AccessMap::Match> match;
                class Action;

}; // Native::Vlan::AccessMap


class Native::Vlan::AccessMap::Match : public ydk::Entity
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

        class Ipv6; //type: Native::Vlan::AccessMap::Match::Ipv6
        class Ip; //type: Native::Vlan::AccessMap::Match::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::AccessMap::Match::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::AccessMap::Match::Ip> ip;
        
}; // Native::Vlan::AccessMap::Match


class Native::Vlan::AccessMap::Match::Ipv6 : public ydk::Entity
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

        ydk::YLeafList address; //type: list of  string

}; // Native::Vlan::AccessMap::Match::Ipv6


class Native::Vlan::AccessMap::Match::Ip : public ydk::Entity
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

        ydk::YLeafList address; //type: list of  string

}; // Native::Vlan::AccessMap::Match::Ip


class Native::Vlan::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

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

        ydk::YLeaf vlan_id; //type: one of uint16, string
        class Ip; //type: Native::Vlan::Configuration::Ip
        class Ipv6; //type: Native::Vlan::Configuration::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Configuration::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Configuration::Ipv6> ipv6;
        
}; // Native::Vlan::Configuration


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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Configuration::Ip::Flow::Monitor> > monitor;
        
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

        class Dhcp; //type: Native::Vlan::Configuration::Ipv6::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Configuration::Ipv6::Dhcp> dhcp;
        
}; // Native::Vlan::Configuration::Ipv6


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


class Native::Vlan::Dot1Q : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Tag; //type: Native::Vlan::Dot1Q::Tag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vlan::Dot1Q::Tag> tag;
        
}; // Native::Vlan::Dot1Q


class Native::Vlan::Dot1Q::Tag : public ydk::Entity
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

}; // Native::Vlan::Dot1Q::Tag


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

        ydk::YLeaf run; //type: empty

}; // Native::Cdp


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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap> > class_map;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::PolicyMap> > policy_map;
        
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
        ydk::YLeafList class_map; //type: list of  string
        ydk::YLeafList cos; //type: list of  uint8
        ydk::YLeafList discard_class; //type: list of  uint8
        ydk::YLeafList dscp; //type: list of  one of uint8, enumeration
        ydk::YLeafList fr_dlci; //type: list of  uint16
        ydk::YLeafList input_interface; //type: list of  string
        ydk::YLeafList precedence; //type: list of  one of uint8, enumeration
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
        class SourceAddress; //type: Native::Policy::ClassMap::Match::SourceAddress
        class Vlan; //type: Native::Policy::ClassMap::Match::Vlan
        class ActivatedServiceTemplate; //type: Native::Policy::ClassMap::Match::ActivatedServiceTemplate
        class AuthorizationStatus; //type: Native::Policy::ClassMap::Match::AuthorizationStatus
        class AuthorizingMethodPriority; //type: Native::Policy::ClassMap::Match::AuthorizingMethodPriority
        class Method; //type: Native::Policy::ClassMap::Match::Method
        class ResultType; //type: Native::Policy::ClassMap::Match::ResultType
        class Not_; //type: Native::Policy::ClassMap::Match::Not_

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
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::SourceAddress> source_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Vlan> vlan;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ActivatedServiceTemplate> > activated_service_template;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::AuthorizationStatus> authorization_status;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::AuthorizingMethodPriority> authorizing_method_priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Method> method;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::ResultType> result_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Not_> not_;
        
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

        ydk::YLeafList dscp; //type: list of  one of uint8, enumeration
        ydk::YLeafList precedence; //type: list of  one of uint8, enumeration
        class Rtp; //type: Native::Policy::ClassMap::Match::Ip::Rtp

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Ip::Rtp> > rtp;
        
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

        ydk::YLeaf protocols; //type: Protocols
        ydk::YLeaf clns; //type: empty
        ydk::YLeaf clns_es; //type: empty
        ydk::YLeaf clns_is; //type: empty
        ydk::YLeaf cmns; //type: empty
        ydk::YLeaf compressedtcp; //type: empty
        ydk::YLeaf cuseeme; //type: empty
        ydk::YLeaf decnet; //type: empty
        ydk::YLeaf decnet_node; //type: empty
        ydk::YLeaf decnet_router_l1; //type: empty
        ydk::YLeaf decnet_router_l2; //type: empty
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf dlsw; //type: empty
        ydk::YLeaf dns; //type: empty
        ydk::YLeaf edonkey; //type: empty
        ydk::YLeaf egp; //type: empty
        ydk::YLeaf eigrp; //type: empty
        ydk::YLeaf exchange; //type: empty
        ydk::YLeaf finger; //type: empty
        ydk::YLeaf ftp; //type: empty
        ydk::YLeaf gopher; //type: empty
        ydk::YLeaf gre; //type: empty
        ydk::YLeaf h323; //type: empty
        ydk::YLeaf icmp; //type: empty
        ydk::YLeaf imap; //type: empty
        ydk::YLeaf ip; //type: empty
        ydk::YLeaf ipinip; //type: empty
        ydk::YLeaf ipsec; //type: empty
        ydk::YLeaf ipv6; //type: empty
        ydk::YLeaf ipx; //type: empty
        ydk::YLeaf irc; //type: empty
        ydk::YLeaf kerberos; //type: empty
        ydk::YLeaf l2tp; //type: empty
        ydk::YLeaf ldap; //type: empty
        ydk::YLeaf llc2; //type: empty
        ydk::YLeaf mgcp; //type: empty
        ydk::YLeaf netbios; //type: empty
        ydk::YLeaf netshow; //type: empty
        ydk::YLeaf nfs; //type: empty
        ydk::YLeaf nntp; //type: empty
        ydk::YLeaf notes; //type: empty
        ydk::YLeaf novadigm; //type: empty
        ydk::YLeaf ntp; //type: empty
        ydk::YLeaf ospf; //type: empty
        ydk::YLeaf pad; //type: empty
        ydk::YLeaf pcanywhere; //type: empty
        ydk::YLeaf pop3; //type: empty
        ydk::YLeaf pppoe; //type: empty
        ydk::YLeaf pptp; //type: empty
        ydk::YLeaf printer; //type: empty
        ydk::YLeaf qllc; //type: empty
        ydk::YLeaf rcmd; //type: empty
        ydk::YLeaf rip; //type: empty
        ydk::YLeaf rsrb; //type: empty
        ydk::YLeaf rsvp; //type: empty
        ydk::YLeaf rtcp; //type: empty
        ydk::YLeaf rtsp; //type: empty
        ydk::YLeaf secure_ftp; //type: empty
        ydk::YLeaf secure_http; //type: empty
        ydk::YLeaf secure_imap; //type: empty
        ydk::YLeaf secure_irc; //type: empty
        ydk::YLeaf secure_ldap; //type: empty
        ydk::YLeaf secure_nntp; //type: empty
        ydk::YLeaf secure_pop3; //type: empty
        ydk::YLeaf secure_telnet; //type: empty
        ydk::YLeaf sip; //type: empty
        ydk::YLeaf skinny; //type: empty
        ydk::YLeaf snapshot; //type: empty
        ydk::YLeaf snmp; //type: empty
        ydk::YLeaf socks; //type: empty
        ydk::YLeaf sqlnet; //type: empty
        ydk::YLeaf sqlserver; //type: empty
        ydk::YLeaf ssh; //type: empty
        ydk::YLeaf streamwork; //type: empty
        ydk::YLeaf stun; //type: empty
        ydk::YLeaf sunrpc; //type: empty
        ydk::YLeaf syslog; //type: empty
        ydk::YLeaf telnet; //type: empty
        ydk::YLeaf tftp; //type: empty
        ydk::YLeaf vdolive; //type: empty
        ydk::YLeaf vofr; //type: empty
        ydk::YLeaf winmx; //type: empty
        ydk::YLeaf xwindows; //type: empty
        class Citrix; //type: Native::Policy::ClassMap::Match::Protocol::Citrix
        class Fasttrack; //type: Native::Policy::ClassMap::Match::Protocol::Fasttrack
        class Gnutella; //type: Native::Policy::ClassMap::Match::Protocol::Gnutella
        class Http; //type: Native::Policy::ClassMap::Match::Protocol::Http
        class Kazaa2; //type: Native::Policy::ClassMap::Match::Protocol::Kazaa2
        class Napster; //type: Native::Policy::ClassMap::Match::Protocol::Napster
        class Rtp; //type: Native::Policy::ClassMap::Match::Protocol::Rtp
        class Smtp; //type: Native::Policy::ClassMap::Match::Protocol::Smtp
        class Attribute; //type: Native::Policy::ClassMap::Match::Protocol::Attribute

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Citrix> citrix; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Fasttrack> fasttrack; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Gnutella> gnutella; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Http> http; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Kazaa2> kazaa2; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Napster> napster; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Rtp> rtp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Smtp> smtp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Policy::ClassMap::Match::Protocol::Attribute> attribute;
                class Protocols;

}; // Native::Policy::ClassMap::Match::Protocol


class Native::Policy::ClassMap::Match::Protocol::Citrix : public ydk::Entity
{
    public:
        Citrix();
        ~Citrix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ica_tag; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Citrix


class Native::Policy::ClassMap::Match::Protocol::Fasttrack : public ydk::Entity
{
    public:
        Fasttrack();
        ~Fasttrack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf file_transfer; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Fasttrack


class Native::Policy::ClassMap::Match::Protocol::Gnutella : public ydk::Entity
{
    public:
        Gnutella();
        ~Gnutella();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf file_transfer; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Gnutella


class Native::Policy::ClassMap::Match::Protocol::Http : public ydk::Entity
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

        ydk::YLeaf c_header_field; //type: string
        ydk::YLeaf host; //type: string
        ydk::YLeaf mime; //type: string
        ydk::YLeaf s_header_field; //type: string
        ydk::YLeaf url; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Http


class Native::Policy::ClassMap::Match::Protocol::Kazaa2 : public ydk::Entity
{
    public:
        Kazaa2();
        ~Kazaa2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf file_transfer; //type: string

}; // Native::Policy::ClassMap::Match::Protocol::Kazaa2


class Native::Policy::ClassMap::Match::Protocol::Napster : public ydk::Entity
{
    public:
        Napster();
        ~Napster();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_std; //type: empty

}; // Native::Policy::ClassMap::Match::Protocol::Napster


class Native::Policy::ClassMap::Match::Protocol::Rtp : public ydk::Entity
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

        ydk::YLeaf audio; //type: empty
        ydk::YLeaf payload_type; //type: string
        ydk::YLeaf video; //type: empty

}; // Native::Policy::ClassMap::Match::Protocol::Rtp


class Native::Policy::ClassMap::Match::Protocol::Smtp : public ydk::Entity
{
    public:
        Smtp();
        ~Smtp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf extended; //type: empty

}; // Native::Policy::ClassMap::Match::Protocol::Smtp

class Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Ipv6::Spd::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aggressive;

};

class Native::Ipv6::Rip::VrfMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;

};

class Native::Vlan::AccessMap::Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf forward;

};

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

class Native::Policy::ClassMap::Match::Application::Attribute::MediaType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf audio;
        static const ydk::Enum::YLeaf audio_video;
        static const ydk::Enum::YLeaf control;
        static const ydk::Enum::YLeaf data;
        static const ydk::Enum::YLeaf video;

};

class Native::Policy::ClassMap::Match::Protocol::Protocols : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf x802_11_iapp;
        static const ydk::Enum::YLeaf ace_svr;
        static const ydk::Enum::YLeaf aol;
        static const ydk::Enum::YLeaf appleqtc;
        static const ydk::Enum::YLeaf biff;
        static const ydk::Enum::YLeaf bittorrent;
        static const ydk::Enum::YLeaf bootpc;
        static const ydk::Enum::YLeaf bootps;
        static const ydk::Enum::YLeaf cddbp;
        static const ydk::Enum::YLeaf cifs;
        static const ydk::Enum::YLeaf cisco_fna;
        static const ydk::Enum::YLeaf cisco_net_mgmt;
        static const ydk::Enum::YLeaf cisco_svcs;
        static const ydk::Enum::YLeaf cisco_sys;
        static const ydk::Enum::YLeaf cisco_tdp;
        static const ydk::Enum::YLeaf cisco_tna;
        static const ydk::Enum::YLeaf citriximaclient;
        static const ydk::Enum::YLeaf clp;
        static const ydk::Enum::YLeaf creativepartnr;
        static const ydk::Enum::YLeaf creativeserver;
        static const ydk::Enum::YLeaf daytime;
        static const ydk::Enum::YLeaf dbase;
        static const ydk::Enum::YLeaf dbcontrol_agent;
        static const ydk::Enum::YLeaf ddns_v3;
        static const ydk::Enum::YLeaf dhcp_failover;
        static const ydk::Enum::YLeaf directconnect;
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf dnsix;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf entrust_svc_hdlr;
        static const ydk::Enum::YLeaf entrust_svcs;
        static const ydk::Enum::YLeaf exec;
        static const ydk::Enum::YLeaf fcip_port;
        static const ydk::Enum::YLeaf ftps;
        static const ydk::Enum::YLeaf gdoi;
        static const ydk::Enum::YLeaf giop;
        static const ydk::Enum::YLeaf gtpv0;
        static const ydk::Enum::YLeaf gtpv1;
        static const ydk::Enum::YLeaf h225ras;
        static const ydk::Enum::YLeaf h323callsigalt;
        static const ydk::Enum::YLeaf hp_alarm_mgr;
        static const ydk::Enum::YLeaf hp_collector;
        static const ydk::Enum::YLeaf hp_managed_node;
        static const ydk::Enum::YLeaf hsrp;
        static const ydk::Enum::YLeaf https;
        static const ydk::Enum::YLeaf ica;
        static const ydk::Enum::YLeaf icabrowser;
        static const ydk::Enum::YLeaf ident;
        static const ydk::Enum::YLeaf igmpv3lite;
        static const ydk::Enum::YLeaf imap3;
        static const ydk::Enum::YLeaf imaps;
        static const ydk::Enum::YLeaf ipass;
        static const ydk::Enum::YLeaf ipsec_msft;
        static const ydk::Enum::YLeaf irc_serv;
        static const ydk::Enum::YLeaf ircs;
        static const ydk::Enum::YLeaf ircu;
        static const ydk::Enum::YLeaf isakmp;
        static const ydk::Enum::YLeaf iscsi;
        static const ydk::Enum::YLeaf iscsi_target;
        static const ydk::Enum::YLeaf kermit;
        static const ydk::Enum::YLeaf ldap_admin;
        static const ydk::Enum::YLeaf ldaps;
        static const ydk::Enum::YLeaf login;
        static const ydk::Enum::YLeaf lotusmtap;
        static const ydk::Enum::YLeaf lotusnote;
        static const ydk::Enum::YLeaf mapi;
        static const ydk::Enum::YLeaf ms_ad_rep;
        static const ydk::Enum::YLeaf ms_exch_nspi;
        static const ydk::Enum::YLeaf ms_frs;
        static const ydk::Enum::YLeaf ms_frsapi;
        static const ydk::Enum::YLeaf ms_rfr;
        static const ydk::Enum::YLeaf msn_messenger;
        static const ydk::Enum::YLeaf netlogon;
        static const ydk::Enum::YLeaf microsoft_ds;
        static const ydk::Enum::YLeaf ms_cluster_net;
        static const ydk::Enum::YLeaf ms_dotnetster;
        static const ydk::Enum::YLeaf ms_sna;
        static const ydk::Enum::YLeaf ms_sql;
        static const ydk::Enum::YLeaf ms_sql_m;
        static const ydk::Enum::YLeaf msexch_routing;
        static const ydk::Enum::YLeaf msnmsgr;
        static const ydk::Enum::YLeaf msrpc;
        static const ydk::Enum::YLeaf mysql;
        static const ydk::Enum::YLeaf n2h2server;
        static const ydk::Enum::YLeaf ncp;
        static const ydk::Enum::YLeaf net8_cman;
        static const ydk::Enum::YLeaf netbios_dgm;
        static const ydk::Enum::YLeaf netbios_ns;
        static const ydk::Enum::YLeaf netbios_ssn;
        static const ydk::Enum::YLeaf netstat;
        static const ydk::Enum::YLeaf oem_agent;
        static const ydk::Enum::YLeaf oracle;
        static const ydk::Enum::YLeaf oracle_em_vp;
        static const ydk::Enum::YLeaf oraclenames;
        static const ydk::Enum::YLeaf orasrv;
        static const ydk::Enum::YLeaf pcanywheredata;
        static const ydk::Enum::YLeaf pcanywherestat;
        static const ydk::Enum::YLeaf pop3s;
        static const ydk::Enum::YLeaf pwdgen;
        static const ydk::Enum::YLeaf qmtp;
        static const ydk::Enum::YLeaf r_winsock;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf rdb_dbs_disp;
        static const ydk::Enum::YLeaf realmedia;
        static const ydk::Enum::YLeaf realsecure;
        static const ydk::Enum::YLeaf router;
        static const ydk::Enum::YLeaf rsvp_encap;
        static const ydk::Enum::YLeaf rsvp_tunnel;
        static const ydk::Enum::YLeaf rtc_pm_port;
        static const ydk::Enum::YLeaf rtelnet;
        static const ydk::Enum::YLeaf send;
        static const ydk::Enum::YLeaf shell;
        static const ydk::Enum::YLeaf sip_tls;
        static const ydk::Enum::YLeaf sms;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf snmptrap;
        static const ydk::Enum::YLeaf sql_net;
        static const ydk::Enum::YLeaf sqlserv;
        static const ydk::Enum::YLeaf sqlsrv;
        static const ydk::Enum::YLeaf sshell;
        static const ydk::Enum::YLeaf ssp;
        static const ydk::Enum::YLeaf syslog_conn;
        static const ydk::Enum::YLeaf tacacs;
        static const ydk::Enum::YLeaf tacacs_ds;
        static const ydk::Enum::YLeaf tarantella;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf telnets;
        static const ydk::Enum::YLeaf time;
        static const ydk::Enum::YLeaf timed;
        static const ydk::Enum::YLeaf tr_rsrb;
        static const ydk::Enum::YLeaf ttc;
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf uucp;
        static const ydk::Enum::YLeaf vqp;
        static const ydk::Enum::YLeaf webster;
        static const ydk::Enum::YLeaf who;
        static const ydk::Enum::YLeaf wins;
        static const ydk::Enum::YLeaf x11;
        static const ydk::Enum::YLeaf xdmcp;
        static const ydk::Enum::YLeaf ymsgr;
        static const ydk::Enum::YLeaf aarp;
        static const ydk::Enum::YLeaf appletalk;
        static const ydk::Enum::YLeaf arp;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf bridge;
        static const ydk::Enum::YLeaf bstun;
        static const ydk::Enum::YLeaf cdp;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_11_ */

