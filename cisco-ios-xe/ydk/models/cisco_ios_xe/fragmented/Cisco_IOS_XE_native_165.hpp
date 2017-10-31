#ifndef _CISCO_IOS_XE_NATIVE_165_
#define _CISCO_IOS_XE_NATIVE_165_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_160.hpp"
#include "Cisco_IOS_XE_native_163.hpp"
#include "Cisco_IOS_XE_native_164.hpp"
#include "Cisco_IOS_XE_native_87.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp : public ydk::Entity
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

        ydk::YLeaf as_number; //type: one of string, uint32
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis : public ydk::Entity
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

        ydk::YLeaf isis_level_routes; //type: IsisLevelRoutes
        class IsisArea; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea> > isis_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions> redist_options;
                class IsisLevelRoutes;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea : public ydk::Entity
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
        ydk::YLeaf isis_level_routes; //type: IsisLevelRoutes
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions> redist_options;
                class IsisLevelRoutes;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp : public ydk::Entity
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

        ydk::YLeaf route_map; //type: string
        class AreaTagRouteMapContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer
        class IsoIgrpContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer> iso_igrp_container;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer : public ydk::Entity
{
    public:
        AreaTagRouteMapContainer();
        ~AreaTagRouteMapContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_tag; //type: string
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer : public ydk::Entity
{
    public:
        IsoIgrpContainer();
        ~IsoIgrpContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf : public ydk::Entity
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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf vrf; //type: string
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match> match;
                class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal : public ydk::Entity
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

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External : public ydk::Entity
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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal : public ydk::Entity
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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_ : public ydk::Entity
{
    public:
        Ospfv3_();
        ~Ospfv3_();

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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match> match;
                class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal : public ydk::Entity
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

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External : public ydk::Entity
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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal : public ydk::Entity
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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static_ : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static_::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static_::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static_


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static_::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static_::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix : public ydk::Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

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
        class ThresholdWarningOnlyContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer> threshold_warning_only_container;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer : public ydk::Entity
{
    public:
        ThresholdWarningOnlyContainer();
        ~ThresholdWarningOnlyContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf warning_only; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_ : public ydk::Entity
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

        class NonGlobalVrf; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf
        class Global; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf> > non_global_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global> global;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf : public ydk::Entity
{
    public:
        NonGlobalVrf();
        ~NonGlobalVrf();

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
        class Application; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application
        class Bgp; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp
        class Connected; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected
        class Eigrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp
        class Isis; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis
        class IsoIgrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp
        class Lisp; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp
        class Mobile; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile
        class Odr; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr
        class Ospf; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf
        class Ospfv3_; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_
        class Rip; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip
        class Static_; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application> > application;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr> odr; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_> > ospfv3;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip> > rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_> static_; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp : public ydk::Entity
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

        ydk::YLeaf as_number; //type: one of string, uint32
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis : public ydk::Entity
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

        ydk::YLeaf isis_level_routes; //type: IsisLevelRoutes
        class IsisArea; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea> > isis_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions> redist_options;
                class IsisLevelRoutes;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea : public ydk::Entity
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
        ydk::YLeaf isis_level_routes; //type: IsisLevelRoutes
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions> redist_options;
                class IsisLevelRoutes;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp : public ydk::Entity
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

        ydk::YLeaf route_map; //type: string
        class AreaTagRouteMapContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer
        class IsoIgrpContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer> iso_igrp_container;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer : public ydk::Entity
{
    public:
        AreaTagRouteMapContainer();
        ~AreaTagRouteMapContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_tag; //type: string
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer : public ydk::Entity
{
    public:
        IsoIgrpContainer();
        ~IsoIgrpContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf : public ydk::Entity
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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf vrf; //type: string
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match> match;
                class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal : public ydk::Entity
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

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External : public ydk::Entity
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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal : public ydk::Entity
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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_ : public ydk::Entity
{
    public:
        Ospfv3_();
        ~Ospfv3_();

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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match> match;
                class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal : public ydk::Entity
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

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External : public ydk::Entity
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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal : public ydk::Entity
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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_ : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global : public ydk::Entity
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

        class Application; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application
        class Bgp; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp
        class Connected; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected
        class Eigrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp
        class Isis; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis
        class IsoIgrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp
        class Lisp; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp
        class Mobile; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile
        class Odr; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr
        class Ospf; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf
        class Ospfv3_; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_
        class Rip; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip
        class Static_; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application> > application;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr> odr; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_> > ospfv3;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip> > rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static_> static_; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp : public ydk::Entity
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

        ydk::YLeaf as_number; //type: one of string, uint32
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis : public ydk::Entity
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

        ydk::YLeaf isis_level_routes; //type: IsisLevelRoutes
        class IsisArea; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea> > isis_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions> redist_options;
                class IsisLevelRoutes;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea : public ydk::Entity
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
        ydk::YLeaf isis_level_routes; //type: IsisLevelRoutes
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions> redist_options;
                class IsisLevelRoutes;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp : public ydk::Entity
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

        ydk::YLeaf route_map; //type: string
        class AreaTagRouteMapContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer
        class IsoIgrpContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer> iso_igrp_container;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer : public ydk::Entity
{
    public:
        AreaTagRouteMapContainer();
        ~AreaTagRouteMapContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area_tag; //type: string
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer : public ydk::Entity
{
    public:
        IsoIgrpContainer();
        ~IsoIgrpContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf : public ydk::Entity
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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf vrf; //type: string
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match> match;
                class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal : public ydk::Entity
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

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External : public ydk::Entity
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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal : public ydk::Entity
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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_ : public ydk::Entity
{
    public:
        Ospfv3_();
        ~Ospfv3_();

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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match> match;
                class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal : public ydk::Entity
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

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External : public ydk::Entity
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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal : public ydk::Entity
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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf tag; //type: uint32
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static_ : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static_


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions : public ydk::Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf subnets; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf nssa_only; //type: empty
        class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication : public ydk::Entity
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

        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf restart_interval; //type: uint16
        class Helper; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper> helper; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf strict_lsa_checking; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::GracefulRestart::Helper


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet : public ydk::Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hello; //type: Hello
        ydk::YLeaf willingness; //type: uint8
        class Cache; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache
        class Peering; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache> cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering> peering;
                class Hello;

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache : public ydk::Entity
{
    public:
        Cache();
        ~Cache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acknowledgement; //type: uint64
        ydk::YLeaf update; //type: uint64

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Cache


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering : public ydk::Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Selective; //type: Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective> selective;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective : public ydk::Entity
{
    public:
        Selective();
        ~Selective();

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
        ydk::YLeaf per_interface; //type: empty
        ydk::YLeaf redundancy; //type: uint8

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Peering::Selective


class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::SummaryPrefix : public ydk::Entity
{
    public:
        SummaryPrefix();
        ~SummaryPrefix();

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
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf not_advertise; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::SummaryPrefix


class Native::Router::Rip : public ydk::Entity
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

        ydk::YLeaf auto_summary; //type: empty
        ydk::YLeaf maximum_paths; //type: uint8
        ydk::YLeaf validate_update_source; //type: boolean
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf version; //type: uint8
        ydk::YLeaf flash_update_threshold; //type: uint8
        ydk::YLeaf input_queue; //type: uint16
        ydk::YLeaf output_delay; //type: uint8
        class Neighbor; //type: Native::Router::Rip::Neighbor
        class Network; //type: Native::Router::Rip::Network
        class DefaultInformation; //type: Native::Router::Rip::DefaultInformation
        class Distance; //type: Native::Router::Rip::Distance
        class DistributeList; //type: Native::Router::Rip::DistributeList
        class OffsetList; //type: Native::Router::Rip::OffsetList
        class Redistribute; //type: Native::Router::Rip::Redistribute
        class Timers; //type: Native::Router::Rip::Timers
        class PassiveInterface; //type: Native::Router::Rip::PassiveInterface
        class Disable; //type: Native::Router::Rip::Disable
        class TrafficShare; //type: Native::Router::Rip::TrafficShare
        class AddressFamily; //type: Native::Router::Rip::AddressFamily
        class Default_; //type: Native::Router::Rip::Default_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Neighbor> > neighbor;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Network> > network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::DistributeList> distribute_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::OffsetList> > offset_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::PassiveInterface> passive_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Disable> disable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::TrafficShare> traffic_share;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily> address_family;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_> default_;
        
}; // Native::Router::Rip


class Native::Router::Rip::Neighbor : public ydk::Entity
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

        ydk::YLeaf ip; //type: string

}; // Native::Router::Rip::Neighbor


class Native::Router::Rip::Network : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ip; //type: string

}; // Native::Router::Rip::Network


class Native::Router::Rip::DefaultInformation : public ydk::Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Originate; //type: Native::Router::Rip::DefaultInformation::Originate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::DefaultInformation::Originate> originate; // presence node
        
}; // Native::Router::Rip::DefaultInformation


class Native::Router::Rip::DefaultInformation::Originate : public ydk::Entity
{
    public:
        Originate();
        ~Originate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf route_map; //type: string

}; // Native::Router::Rip::DefaultInformation::Originate


class Native::Router::Rip::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf distance_leaf; //type: uint8
        class DistanceList; //type: Native::Router::Rip::Distance::DistanceList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Distance::DistanceList> > distance_list;
        
}; // Native::Router::Rip::Distance


class Native::Router::Rip::Distance::DistanceList : public ydk::Entity
{
    public:
        DistanceList();
        ~DistanceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf ip; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf access_list; //type: one of union, string

}; // Native::Router::Rip::Distance::DistanceList


class Native::Router::Rip::DistributeList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Accesslist; //type: Native::Router::Rip::DistributeList::Accesslist
        class AccesslistIfname; //type: Native::Router::Rip::DistributeList::AccesslistIfname
        class AccesslistPrefixGateway; //type: Native::Router::Rip::DistributeList::AccesslistPrefixGateway
        class AccesslistPrefixGatewayIfname; //type: Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::DistributeList::Accesslist> > accesslist;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::DistributeList::AccesslistIfname> > accesslist_ifname;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::DistributeList::AccesslistPrefixGateway> > accesslist_prefix_gateway;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname> > accesslist_prefix_gateway_ifname;
        
}; // Native::Router::Rip::DistributeList


class Native::Router::Rip::DistributeList::Accesslist : public ydk::Entity
{
    public:
        Accesslist();
        ~Accesslist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf in_out; //type: AccessListInOutType
        ydk::YLeaf id; //type: one of union, string

}; // Native::Router::Rip::DistributeList::Accesslist


class Native::Router::Rip::DistributeList::AccesslistIfname : public ydk::Entity
{
    public:
        AccesslistIfname();
        ~AccesslistIfname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf in_out; //type: AccessListInOutType
        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_routing_id; //type: uint8
        ydk::YLeaf isis_tag; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf id; //type: one of union, string

}; // Native::Router::Rip::DistributeList::AccesslistIfname


class Native::Router::Rip::DistributeList::AccesslistPrefixGateway : public ydk::Entity
{
    public:
        AccesslistPrefixGateway();
        ~AccesslistPrefixGateway();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf in_out; //type: AccessListInOutType
        ydk::YLeaf prefix_gateway; //type: PrefixGateway
        ydk::YLeaf name; //type: string
        class PrefixGateway;

}; // Native::Router::Rip::DistributeList::AccesslistPrefixGateway


class Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname : public ydk::Entity
{
    public:
        AccesslistPrefixGatewayIfname();
        ~AccesslistPrefixGatewayIfname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf in_out; //type: AccessListInOutType
        ydk::YLeaf interface; //type: string
        ydk::YLeaf prefix_gateway; //type: PrefixGateway
        ydk::YLeaf name; //type: string
        ydk::YLeaf interface_routing_id; //type: uint8
        ydk::YLeaf isis_tag; //type: string
        ydk::YLeaf vrf; //type: string
        class PrefixGateway;

}; // Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname


class Native::Router::Rip::OffsetList : public ydk::Entity
{
    public:
        OffsetList();
        ~OffsetList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf in_out; //type: OffsetListInOutType
        ydk::YLeaf offset; //type: uint8
        ydk::YLeaf id; //type: one of union, string

}; // Native::Router::Rip::OffsetList


class Native::Router::Rip::Redistribute : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class RipMetricRouteMap; //type: Native::Router::Rip::Redistribute::RipMetricRouteMap
        class Connected; //type: Native::Router::Rip::Redistribute::Connected
        class Bgp; //type: Native::Router::Rip::Redistribute::Bgp
        class Eigrp; //type: Native::Router::Rip::Redistribute::Eigrp
        class Isis; //type: Native::Router::Rip::Redistribute::Isis
        class IsoIgrp; //type: Native::Router::Rip::Redistribute::IsoIgrp
        class Mobile; //type: Native::Router::Rip::Redistribute::Mobile
        class Odr; //type: Native::Router::Rip::Redistribute::Odr
        class Ospf; //type: Native::Router::Rip::Redistribute::Ospf
        class Static_; //type: Native::Router::Rip::Redistribute::Static_
        class Rip_; //type: Native::Router::Rip::Redistribute::Rip_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::RipMetricRouteMap> rip_metric_route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Bgp> > bgp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Ospf> > ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Static_> static_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Rip_> rip; // presence node
        
}; // Native::Router::Rip::Redistribute


class Native::Router::Rip::Redistribute::RipMetricRouteMap : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Redistribute::RipMetricRouteMap


class Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Router::Rip::Redistribute::RipMetricRouteMap::Metric


class Native::Router::Rip::Redistribute::Connected : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class RipMetricRouteMap; //type: Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Redistribute::Connected


class Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap


class Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric


class Native::Router::Rip::Redistribute::Bgp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf as_number; //type: one of string, uint32
        class RipMetricRouteMap; //type: Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Redistribute::Bgp


class Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap


class Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric


class Native::Router::Rip::Redistribute::Eigrp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf as_number; //type: uint16
        class RipMetricRouteMap; //type: Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Redistribute::Eigrp


class Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap


class Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric


class Native::Router::Rip::Redistribute::Isis : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class IsisArea; //type: Native::Router::Rip::Redistribute::Isis::IsisArea
        class RipIsisRedist; //type: Native::Router::Rip::Redistribute::Isis::RipIsisRedist

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Isis::IsisArea> > isis_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Isis::RipIsisRedist> rip_isis_redist;
        
}; // Native::Router::Rip::Redistribute::Isis


class Native::Router::Rip::Redistribute::Isis::IsisArea : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class RipIsisRedist; //type: Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist> rip_isis_redist;
        
}; // Native::Router::Rip::Redistribute::Isis::IsisArea


class Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist : public ydk::Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutes;

}; // Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist


class Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap


class Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Router::Rip::Redistribute::Isis::RipIsisRedist : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf isis_level_routes; //type: IsisLevelRoutes
        class RipMetricRouteMap; //type: Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutes;

}; // Native::Router::Rip::Redistribute::Isis::RipIsisRedist


class Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap


class Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Router::Rip::Redistribute::IsoIgrp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class IsoigrpList; //type: Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList
        class RipMetricRouteMap; //type: Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList> > isoigrp_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Redistribute::IsoIgrp


class Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf iso_area_tag; //type: string
        class RipMetricRouteMap; //type: Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList


class Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap


class Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric


class Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Eigrp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::IsisArea::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Isis::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Lisp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Mobile::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Odr::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospf::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Rip::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Static_::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Authentication::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deployment;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf strict;

};

class Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf::Manet::Hello : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;

};

class Native::Router::Rip::DistributeList::AccesslistPrefixGateway::PrefixGateway : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf prefix;
        static const ydk::Enum::YLeaf gateway;
        static const ydk::Enum::YLeaf route_map;

};

class Native::Router::Rip::DistributeList::AccesslistPrefixGatewayIfname::PrefixGateway : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf prefix;
        static const ydk::Enum::YLeaf gateway;
        static const ydk::Enum::YLeaf route_map;

};

class Native::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Rip::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_165_ */

