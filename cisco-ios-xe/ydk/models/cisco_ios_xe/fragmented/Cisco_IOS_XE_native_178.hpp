#ifndef _CISCO_IOS_XE_NATIVE_178_
#define _CISCO_IOS_XE_NATIVE_178_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_105.hpp"
#include "Cisco_IOS_XE_native_177.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Ospf::Redistribute::Ospfv3::Match::External : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Ospfv3::Match::External


class Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal


class Native::Router::Ospf::Redistribute::Rip : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Rip::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Rip::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Rip


class Native::Router::Ospf::Redistribute::Rip::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Rip::RedistOptions


class Native::Router::Ospf::Redistribute::Static_ : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Static_::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Static_::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Static_


class Native::Router::Ospf::Redistribute::Static_::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Static_::RedistOptions


class Native::Router::Ospf::Redistribute::MaximumPrefix : public ydk::Entity
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
        class ThresholdWarningOnlyContainer; //type: Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer> threshold_warning_only_container;
        
}; // Native::Router::Ospf::Redistribute::MaximumPrefix


class Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer


class Native::Router::Ospf::Redistribute::Vrf : public ydk::Entity
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

        class NonGlobalVrf; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf
        class Global; //type: Native::Router::Ospf::Redistribute::Vrf::Global

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf> > non_global_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global> global;
        
}; // Native::Router::Ospf::Redistribute::Vrf


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf : public ydk::Entity
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
        class Application; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application
        class Bgp; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp
        class Connected; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected
        class Eigrp; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp
        class Isis; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis
        class IsoIgrp; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp
        class Lisp; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp
        class Mobile; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile
        class Odr; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr
        class Ospf_; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_
        class Ospfv3; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3
        class Rip; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip
        class Static_; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application> > application;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr> odr; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3> > ospfv3;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip> > rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_> static_; // presence node
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis : public ydk::Entity
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
        class IsisArea; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea> > isis_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions> redist_options;
                class IsisLevelRoutes;

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions> redist_options;
                class IsisLevelRoutes;

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp : public ydk::Entity
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
        class AreaTagRouteMapContainer; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer
        class IsoIgrpContainer; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer> iso_igrp_container;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_ : public ydk::Entity
{
    public:
        Ospf_();
        ~Ospf_();

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
        class Match; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match> match;
                class MetricType;

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal
        class External; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External
        class NssaExternal; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3 : public ydk::Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

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
        class Match; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match> match;
                class MetricType;

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal
        class External; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External
        class NssaExternal; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_ : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_


class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global : public ydk::Entity
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

        class Application; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Application
        class Bgp; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Bgp
        class Connected; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Connected
        class Eigrp; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp
        class Isis; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Isis
        class IsoIgrp; //type: Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp
        class Lisp; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Lisp
        class Mobile; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Mobile
        class Odr; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Odr
        class Ospf_; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_
        class Ospfv3; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3
        class Rip; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Rip
        class Static_; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Static_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Application> > application;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Odr> odr; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3> > ospfv3;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Rip> > rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Static_> static_; // presence node
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global


class Native::Router::Ospf::Redistribute::Vrf::Global::Application : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Application


class Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Bgp : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Bgp


class Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Connected : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Connected


class Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp


class Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Isis : public ydk::Entity
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
        class IsisArea; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea> > isis_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions> redist_options;
                class IsisLevelRoutes;

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Isis


class Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions> redist_options;
                class IsisLevelRoutes;

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea


class Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp : public ydk::Entity
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
        class AreaTagRouteMapContainer; //type: Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer
        class IsoIgrpContainer; //type: Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer> iso_igrp_container;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp


class Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer


class Native::Router::Ospf::Redistribute::Vrf::Global::Lisp : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Lisp


class Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Mobile : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Mobile


class Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Odr : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Odr


class Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_ : public ydk::Entity
{
    public:
        Ospf_();
        ~Ospf_();

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
        class Match; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match> match;
                class MetricType;

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal
        class External; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External
        class NssaExternal; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3 : public ydk::Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

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
        class Match; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match> match;
                class MetricType;

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal
        class External; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External
        class NssaExternal; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External


class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal


class Native::Router::Ospf::Redistribute::Vrf::Global::Rip : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Rip


class Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions


class Native::Router::Ospf::Redistribute::Vrf::Global::Static_ : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Vrf::Global::Static_


class Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions


class Native::Router::Ospf::DistributeList : public ydk::Entity
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

        class Accesslist; //type: Native::Router::Ospf::DistributeList::Accesslist
        class AccesslistIfname; //type: Native::Router::Ospf::DistributeList::AccesslistIfname
        class AccesslistPrefixGateway; //type: Native::Router::Ospf::DistributeList::AccesslistPrefixGateway
        class AccesslistPrefixGatewayIfname; //type: Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::DistributeList::Accesslist> > accesslist;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::DistributeList::AccesslistIfname> > accesslist_ifname;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::DistributeList::AccesslistPrefixGateway> > accesslist_prefix_gateway;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname> > accesslist_prefix_gateway_ifname;
        
}; // Native::Router::Ospf::DistributeList


class Native::Router::Ospf::DistributeList::Accesslist : public ydk::Entity
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

        ydk::YLeaf in_out; //type: AccessListInOutType

}; // Native::Router::Ospf::DistributeList::Accesslist


class Native::Router::Ospf::DistributeList::AccesslistIfname : public ydk::Entity
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

        ydk::YLeaf in_out; //type: AccessListInOutType
        ydk::YLeaf interface; //type: string
        ydk::YLeaf interface_routing_id; //type: uint8
        ydk::YLeaf isis_tag; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Router::Ospf::DistributeList::AccesslistIfname


class Native::Router::Ospf::DistributeList::AccesslistPrefixGateway : public ydk::Entity
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

        ydk::YLeaf in_out; //type: AccessListInOutType
        ydk::YLeaf prefix_gateway; //type: PrefixGateway
        ydk::YLeaf name; //type: string
        class PrefixGateway;

}; // Native::Router::Ospf::DistributeList::AccesslistPrefixGateway


class Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname : public ydk::Entity
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

        ydk::YLeaf in_out; //type: AccessListInOutType
        ydk::YLeaf interface; //type: string
        ydk::YLeaf prefix_gateway; //type: PrefixGateway
        ydk::YLeaf name; //type: string
        ydk::YLeaf interface_routing_id; //type: uint8
        ydk::YLeaf isis_tag; //type: string
        ydk::YLeaf vrf; //type: string
        class PrefixGateway;

}; // Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname


class Native::Router::Ospf::DomainId : public ydk::Entity
{
    public:
        DomainId();
        ~DomainId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_format; //type: string
        ydk::YLeaf null; //type: empty
        class IpFormatSecondary; //type: Native::Router::Ospf::DomainId::IpFormatSecondary
        class Type; //type: Native::Router::Ospf::DomainId::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::DomainId::IpFormatSecondary> ip_format_secondary;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::DomainId::Type> type;
        
}; // Native::Router::Ospf::DomainId


class Native::Router::Ospf::DomainId::IpFormatSecondary : public ydk::Entity
{
    public:
        IpFormatSecondary();
        ~IpFormatSecondary();

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
        ydk::YLeaf secondary; //type: empty

}; // Native::Router::Ospf::DomainId::IpFormatSecondary


class Native::Router::Ospf::DomainId::Type : public ydk::Entity
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

        ydk::YLeaf type_leaf; //type: TypeLeaf
        ydk::YLeaf value_; //type: string
        class TypeLeaf;

}; // Native::Router::Ospf::DomainId::Type


class Native::Router::Ospf::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keep_all_paths; //type: empty
        class PerPrefix; //type: Native::Router::Ospf::FastReroute::PerPrefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix> per_prefix;
        
}; // Native::Router::Ospf::FastReroute


class Native::Router::Ospf::FastReroute::PerPrefix : public ydk::Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Enable; //type: Native::Router::Ospf::FastReroute::PerPrefix::Enable
        class RemoteLfa; //type: Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa
        class TieBreak; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::Enable> enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak> tie_break;
        
}; // Native::Router::Ospf::FastReroute::PerPrefix


class Native::Router::Ospf::FastReroute::PerPrefix::Enable : public ydk::Entity
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

        ydk::YLeaf area; //type: one of string, uint32
        ydk::YLeaf prefix_priority; //type: PrefixPriority
        class PrefixPriority;

}; // Native::Router::Ospf::FastReroute::PerPrefix::Enable


class Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa : public ydk::Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_cost; //type: uint32
        ydk::YLeaf tunnel; //type: Tunnel
        class AreaCost; //type: Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaCost
        class AreaTunnel; //type: Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaCost> area_cost;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel> area_tunnel;
                class Tunnel;

}; // Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa


class Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaCost : public ydk::Entity
{
    public:
        AreaCost();
        ~AreaCost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area; //type: one of string, uint32
        ydk::YLeaf maximum_cost; //type: uint32

}; // Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaCost


class Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel : public ydk::Entity
{
    public:
        AreaTunnel();
        ~AreaTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area; //type: one of string, uint32
        ydk::YLeaf tunnel; //type: Tunnel
        class Tunnel;

}; // Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak : public ydk::Entity
{
    public:
        TieBreak();
        ~TieBreak();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BroadcastInterfaceDisjoint; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint
        class Downstream; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream
        class LinecardDisjoint; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint
        class LowestMetric; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric
        class NodeProtecting; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting
        class PrimaryPath; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath
        class SecondaryPath; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath
        class Srlg; //type: Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint> broadcast_interface_disjoint;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream> downstream;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint> linecard_disjoint;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric> lowest_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting> node_protecting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath> primary_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath> secondary_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg> srlg;
        
}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint : public ydk::Entity
{
    public:
        BroadcastInterfaceDisjoint();
        ~BroadcastInterfaceDisjoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf required; //type: empty
        ydk::YLeaf index_; //type: uint8

}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::BroadcastInterfaceDisjoint


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream : public ydk::Entity
{
    public:
        Downstream();
        ~Downstream();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf required; //type: empty
        ydk::YLeaf index_; //type: uint8

}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Downstream


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint : public ydk::Entity
{
    public:
        LinecardDisjoint();
        ~LinecardDisjoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf required; //type: empty
        ydk::YLeaf index_; //type: uint8

}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LinecardDisjoint


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric : public ydk::Entity
{
    public:
        LowestMetric();
        ~LowestMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf required; //type: empty
        ydk::YLeaf index_; //type: uint8

}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::LowestMetric


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting : public ydk::Entity
{
    public:
        NodeProtecting();
        ~NodeProtecting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf required; //type: empty
        ydk::YLeaf index_; //type: uint8

}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::NodeProtecting


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath : public ydk::Entity
{
    public:
        PrimaryPath();
        ~PrimaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf required; //type: empty
        ydk::YLeaf index_; //type: uint8

}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::PrimaryPath


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath : public ydk::Entity
{
    public:
        SecondaryPath();
        ~SecondaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf required; //type: empty
        ydk::YLeaf index_; //type: uint8

}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::SecondaryPath


class Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg : public ydk::Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf required; //type: empty
        ydk::YLeaf index_; //type: uint8

}; // Native::Router::Ospf::FastReroute::PerPrefix::TieBreak::Srlg


class Native::Router::Ospf::GracefulRestart : public ydk::Entity
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
        class Helper; //type: Native::Router::Ospf::GracefulRestart::Helper

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::GracefulRestart::Helper> helper; // presence node
        
}; // Native::Router::Ospf::GracefulRestart


class Native::Router::Ospf::GracefulRestart::Helper : public ydk::Entity
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

}; // Native::Router::Ospf::GracefulRestart::Helper


class Native::Router::Ospf::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lsa; //type: Native::Router::Ospf::Ignore::Lsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Ignore::Lsa> lsa;
        
}; // Native::Router::Ospf::Ignore


class Native::Router::Ospf::Ignore::Lsa : public ydk::Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mospf; //type: empty

}; // Native::Router::Ospf::Ignore::Lsa


class Native::Router::Ospf::Limit : public ydk::Entity
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

        class Retransmissions; //type: Native::Router::Ospf::Limit::Retransmissions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Limit::Retransmissions> retransmissions;
        
}; // Native::Router::Ospf::Limit


class Native::Router::Ospf::Limit::Retransmissions : public ydk::Entity
{
    public:
        Retransmissions();
        ~Retransmissions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf non_dc; //type: one of uint32, enumeration
        ydk::YLeaf dc; //type: one of uint32, enumeration

}; // Native::Router::Ospf::Limit::Retransmissions


class Native::Router::Ospf::LocalRibCriteria : public ydk::Entity
{
    public:
        LocalRibCriteria();
        ~LocalRibCriteria();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarding_address; //type: empty
        ydk::YLeaf inter_area_summary; //type: empty
        ydk::YLeaf nssa_translation; //type: empty

}; // Native::Router::Ospf::LocalRibCriteria


class Native::Router::Ospf::Microloop : public ydk::Entity
{
    public:
        Microloop();
        ~Microloop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Avoidance; //type: Native::Router::Ospf::Microloop::Avoidance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Microloop::Avoidance> avoidance; // presence node
        
}; // Native::Router::Ospf::Microloop


class Native::Router::Ospf::Microloop::Avoidance : public ydk::Entity
{
    public:
        Avoidance();
        ~Avoidance();

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
        ydk::YLeaf protected_; //type: empty
        ydk::YLeaf rib_update_delay; //type: uint32

}; // Native::Router::Ospf::Microloop::Avoidance


class Native::Router::Ospf::Mpls : public ydk::Entity
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

        class Ldp; //type: Native::Router::Ospf::Mpls::Ldp
        class TrafficEng; //type: Native::Router::Ospf::Mpls::TrafficEng

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::Ldp> ldp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::TrafficEng> traffic_eng;
        
}; // Native::Router::Ospf::Mpls


class Native::Router::Ospf::Mpls::Ldp : public ydk::Entity
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

        class Autoconfig; //type: Native::Router::Ospf::Mpls::Ldp::Autoconfig
        class Sync; //type: Native::Router::Ospf::Mpls::Ldp::Sync

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::Ldp::Autoconfig> autoconfig; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::Ldp::Sync> sync; // presence node
        
}; // Native::Router::Ospf::Mpls::Ldp


class Native::Router::Ospf::Mpls::Ldp::Autoconfig : public ydk::Entity
{
    public:
        Autoconfig();
        ~Autoconfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf area; //type: one of string, uint32

}; // Native::Router::Ospf::Mpls::Ldp::Autoconfig


class Native::Router::Ospf::Mpls::Ldp::Sync : public ydk::Entity
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


}; // Native::Router::Ospf::Mpls::Ldp::Sync


class Native::Router::Ospf::Mpls::TrafficEng : public ydk::Entity
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

        ydk::YLeaf multicast_intact; //type: empty
        class Area; //type: Native::Router::Ospf::Mpls::TrafficEng::Area
        class AutorouteExclude; //type: Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude
        class Interface; //type: Native::Router::Ospf::Mpls::TrafficEng::Interface
        class MeshGroup; //type: Native::Router::Ospf::Mpls::TrafficEng::MeshGroup
        class RouterId; //type: Native::Router::Ospf::Mpls::TrafficEng::RouterId

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::TrafficEng::Area> > area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude> autoroute_exclude;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::TrafficEng::Interface> > interface;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::TrafficEng::MeshGroup> > mesh_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::TrafficEng::RouterId> router_id;
        
}; // Native::Router::Ospf::Mpls::TrafficEng


class Native::Router::Ospf::Mpls::TrafficEng::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of string, uint32

}; // Native::Router::Ospf::Mpls::TrafficEng::Area


class Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude : public ydk::Entity
{
    public:
        AutorouteExclude();
        ~AutorouteExclude();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list; //type: string

}; // Native::Router::Ospf::Mpls::TrafficEng::AutorouteExclude


class Native::Router::Ospf::Mpls::TrafficEng::Interface : public ydk::Entity
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

        ydk::YLeaf name_id; //type: string
        ydk::YLeaf area; //type: uint32

}; // Native::Router::Ospf::Mpls::TrafficEng::Interface


class Native::Router::Ospf::Mpls::TrafficEng::MeshGroup : public ydk::Entity
{
    public:
        MeshGroup();
        ~MeshGroup();

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
        ydk::YLeaf area; //type: one of string, uint32
        ydk::YLeaf interface; //type: string

}; // Native::Router::Ospf::Mpls::TrafficEng::MeshGroup


class Native::Router::Ospf::Mpls::TrafficEng::RouterId : public ydk::Entity
{
    public:
        RouterId();
        ~RouterId();

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
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegigabitethernet; //type: string
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
        class ATMSubinterface; //type: Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Ospf::Mpls::TrafficEng::RouterId


class Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface : public ydk::Entity
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

}; // Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMSubinterface


class Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Router::Ospf::Mpls::TrafficEng::RouterId::ATMACRsubinterface


class Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface : public ydk::Entity
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

}; // Native::Router::Ospf::Mpls::TrafficEng::RouterId::LISPSubinterface


class Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Router::Ospf::Mpls::TrafficEng::RouterId::PortChannelSubinterface


class Native::Router::Ospf::Neighbor : public ydk::Entity
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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf poll_interval; //type: uint32
        ydk::YLeaf priority; //type: uint32
        class DatabaseFilter; //type: Native::Router::Ospf::Neighbor::DatabaseFilter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Router::Ospf::Neighbor


class Native::Router::Ospf::Neighbor::DatabaseFilter : public ydk::Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Router::Ospf::Neighbor::DatabaseFilter::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Neighbor::DatabaseFilter::All> all;
        
}; // Native::Router::Ospf::Neighbor::DatabaseFilter


class Native::Router::Ospf::Neighbor::DatabaseFilter::All : public ydk::Entity
{
    public:
        All();
        ~All();

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

}; // Native::Router::Ospf::Neighbor::DatabaseFilter::All


class Native::Router::Ospf::Network : public ydk::Entity
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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf area; //type: one of string, uint32

}; // Native::Router::Ospf::Network


class Native::Router::Ospf::Nsf : public ydk::Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cisco; //type: Native::Router::Ospf::Nsf::Cisco
        class Ietf; //type: Native::Router::Ospf::Nsf::Ietf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Nsf::Cisco> cisco; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Nsf::Ietf> ietf; // presence node
        
}; // Native::Router::Ospf::Nsf


class Native::Router::Ospf::Nsf::Cisco : public ydk::Entity
{
    public:
        Cisco();
        ~Cisco();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Enforce; //type: Native::Router::Ospf::Nsf::Cisco::Enforce
        class Helper; //type: Native::Router::Ospf::Nsf::Cisco::Helper

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Nsf::Cisco::Enforce> enforce;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Nsf::Cisco::Helper> helper; // presence node
        
}; // Native::Router::Ospf::Nsf::Cisco


class Native::Router::Ospf::Nsf::Cisco::Enforce : public ydk::Entity
{
    public:
        Enforce();
        ~Enforce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf global; //type: empty

}; // Native::Router::Ospf::Nsf::Cisco::Enforce


class Native::Router::Ospf::Nsf::Cisco::Helper : public ydk::Entity
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

}; // Native::Router::Ospf::Nsf::Cisco::Helper


class Native::Router::Ospf::Nsf::Ietf : public ydk::Entity
{
    public:
        Ietf();
        ~Ietf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restart_interval; //type: uint16
        class Helper; //type: Native::Router::Ospf::Nsf::Ietf::Helper

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Nsf::Ietf::Helper> helper; // presence node
        
}; // Native::Router::Ospf::Nsf::Ietf


class Native::Router::Ospf::Nsf::Ietf::Helper : public ydk::Entity
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

}; // Native::Router::Ospf::Nsf::Ietf::Helper


class Native::Router::Ospf::PrefixPriority : public ydk::Entity
{
    public:
        PrefixPriority();
        ~PrefixPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high; //type: empty
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Ospf::PrefixPriority


class Native::Router::Ospf::ProcessMinTime : public ydk::Entity
{
    public:
        ProcessMinTime();
        ~ProcessMinTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf percent; //type: uint32

}; // Native::Router::Ospf::ProcessMinTime


class Native::Router::Ospf::Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Context; //type: Native::Router::Ospf::Snmp::Context

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Snmp::Context> > context;
        
}; // Native::Router::Ospf::Snmp


class Native::Router::Ospf::Snmp::Context : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class Community; //type: Native::Router::Ospf::Snmp::Context::Community
        class User; //type: Native::Router::Ospf::Snmp::Context::User

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Snmp::Context::Community> community;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Snmp::Context::User> user;
        
}; // Native::Router::Ospf::Snmp::Context


class Native::Router::Ospf::Snmp::Context::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community_string; //type: string
        class Access; //type: Native::Router::Ospf::Snmp::Context::Community::Access

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Snmp::Context::Community::Access> access;
        
}; // Native::Router::Ospf::Snmp::Context::Community


class Native::Router::Ospf::Snmp::Context::Community::Access : public ydk::Entity
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

        ydk::YLeaf standard_acl; //type: uint32
        ydk::YLeaf expanded_acl; //type: uint32
        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf ro; //type: empty
        ydk::YLeaf rw; //type: empty

}; // Native::Router::Ospf::Snmp::Context::Community::Access


class Native::Router::Ospf::Snmp::Context::User : public ydk::Entity
{
    public:
        User();
        ~User();

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
        class Permisssion; //type: Native::Router::Ospf::Snmp::Context::User::Permisssion

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Snmp::Context::User::Permisssion> permisssion;
        
}; // Native::Router::Ospf::Snmp::Context::User


class Native::Router::Ospf::Snmp::Context::User::Permisssion : public ydk::Entity
{
    public:
        Permisssion();
        ~Permisssion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf credential; //type: empty
        ydk::YLeaf encrypted; //type: empty
        class Access; //type: Native::Router::Ospf::Snmp::Context::User::Permisssion::Access
        class Auth; //type: Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Snmp::Context::User::Permisssion::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth> auth;
        
}; // Native::Router::Ospf::Snmp::Context::User::Permisssion


class Native::Router::Ospf::Snmp::Context::User::Permisssion::Access : public ydk::Entity
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

        ydk::YLeaf standard_acl; //type: uint32
        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::Ospf::Snmp::Context::User::Permisssion::Access


class Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth : public ydk::Entity
{
    public:
        Auth();
        ~Auth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf md5; //type: string
        ydk::YLeaf sha; //type: string

}; // Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth


class Native::Router::Ospf::SummaryAddress : public ydk::Entity
{
    public:
        SummaryAddress();
        ~SummaryAddress();

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
        ydk::YLeaf wildcard; //type: string
        ydk::YLeaf nssa_only; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf not_advertise; //type: empty

}; // Native::Router::Ospf::SummaryAddress


class Native::Router::Ospfv3 : public ydk::Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

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

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf nsr; //type: empty
        class Area; //type: Native::Router::Ospfv3::Area
        class AutoCost; //type: Native::Router::Ospfv3::AutoCost
        class EventLog; //type: Native::Router::Ospfv3::EventLog
        class Bfd; //type: Native::Router::Ospfv3::Bfd
        class InterfaceId; //type: Native::Router::Ospfv3::InterfaceId
        class LogAdjacencyChanges; //type: Native::Router::Ospfv3::LogAdjacencyChanges
        class MaxLsa; //type: Native::Router::Ospfv3::MaxLsa
        class MaxMetric; //type: Native::Router::Ospfv3::MaxMetric
        class PassiveInterface; //type: Native::Router::Ospfv3::PassiveInterface
        class Disable; //type: Native::Router::Ospfv3::Disable
        class QueueDepth; //type: Native::Router::Ospfv3::QueueDepth
        class Timers; //type: Native::Router::Ospfv3::Timers
        class TrafficShare; //type: Native::Router::Ospfv3::TrafficShare
        class TtlSecurity; //type: Native::Router::Ospfv3::TtlSecurity
        class Authentication; //type: Native::Router::Ospfv3::Authentication
        class GracefulRestart; //type: Native::Router::Ospfv3::GracefulRestart
        class Manet; //type: Native::Router::Ospfv3::Manet
        class AddressFamily; //type: Native::Router::Ospfv3::AddressFamily

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::Area> > area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AutoCost> auto_cost; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::EventLog> event_log; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::InterfaceId> interface_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::LogAdjacencyChanges> log_adjacency_changes; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::MaxLsa> max_lsa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::MaxMetric> max_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::PassiveInterface> passive_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::Disable> disable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::QueueDepth> queue_depth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::TrafficShare> traffic_share;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::TtlSecurity> ttl_security;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::Manet> manet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily> address_family;
        
}; // Native::Router::Ospfv3


class Native::Router::Ospfv3::Area : public ydk::Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: one of string, uint32
        ydk::YLeaf default_cost; //type: uint32
        class Authentication; //type: Native::Router::Ospfv3::Area::Authentication
        class Capability; //type: Native::Router::Ospfv3::Area::Capability
        class FilterList; //type: Native::Router::Ospfv3::Area::FilterList
        class Nssa; //type: Native::Router::Ospfv3::Area::Nssa
        class Ipv4Range; //type: Native::Router::Ospfv3::Area::Ipv4Range
        class Ipv6Range; //type: Native::Router::Ospfv3::Area::Ipv6Range
        class ShamLink; //type: Native::Router::Ospfv3::Area::ShamLink
        class Stub; //type: Native::Router::Ospfv3::Area::Stub
        class VirtualLink; //type: Native::Router::Ospfv3::Area::VirtualLink

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Capability> capability;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::FilterList> > filter_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Nssa> nssa; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Ipv4Range> ipv4_range;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Ipv6Range> ipv6_range;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::ShamLink> > sham_link;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Stub> stub; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink> > virtual_link;
        
}; // Native::Router::Ospfv3::Area

class Native::Router::Ospf::Redistribute::Ospfv3::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Ospfv3::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Rip::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Static_::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospf_::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Ospfv3::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Application::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Bgp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Connected::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Eigrp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Isis::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Lisp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Mobile::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Odr::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Ospf_::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Ospfv3::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Rip::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Vrf::Global::Static_::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospf::DistributeList::AccesslistPrefixGateway::PrefixGateway : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf prefix;
        static const ydk::Enum::YLeaf gateway;
        static const ydk::Enum::YLeaf route_map;

};

class Native::Router::Ospf::DistributeList::AccesslistPrefixGatewayIfname::PrefixGateway : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf prefix;
        static const ydk::Enum::YLeaf gateway;
        static const ydk::Enum::YLeaf route_map;

};

class Native::Router::Ospf::DomainId::Type::TypeLeaf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0005;
        static const ydk::Enum::YLeaf Y_0105;
        static const ydk::Enum::YLeaf Y_0205;
        static const ydk::Enum::YLeaf Y_8005;

};

class Native::Router::Ospf::FastReroute::PerPrefix::Enable::PrefixPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf low;

};

class Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::Tunnel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_ldp;

};

class Native::Router::Ospf::FastReroute::PerPrefix::RemoteLfa::AreaTunnel::Tunnel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls_ldp;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_178_ */

