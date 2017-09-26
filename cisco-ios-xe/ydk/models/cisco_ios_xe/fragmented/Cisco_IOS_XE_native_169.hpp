#ifndef _CISCO_IOS_XE_NATIVE_169_
#define _CISCO_IOS_XE_NATIVE_169_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_168.hpp"
#include "Cisco_IOS_XE_native_95.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf : public ydk::Entity
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

        class NonGlobalVrf; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf
        class Global; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global> global;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf> > non_global_vrf;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global : public ydk::Entity
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

        class Application; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application
        class Bgp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp
        class Connected; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected
        class Eigrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp
        class Isis; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis
        class IsoIgrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp
        class Lisp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp
        class Mobile; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile
        class Odr; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr
        class Ospf; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf
        class Ospfv3_; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_
        class Rip; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip
        class Static_; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application> > application;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr> odr; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_> > ospfv3;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip> > rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_> static_; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp : public ydk::Entity
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

        ydk::YLeaf as_number; //type: one of uint32, string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp : public ydk::Entity
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

        ydk::YLeaf as_number; //type: one of uint32, string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis : public ydk::Entity
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
        class IsisArea; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea> > isis_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions> redist_options;
                class IsisLevelRoutes;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions> redist_options;
                class IsisLevelRoutes;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp : public ydk::Entity
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
        class AreaTagRouteMapContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer
        class IsoIgrpContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer> iso_igrp_container;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf : public ydk::Entity
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
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match> match;
                class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_ : public ydk::Entity
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
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match> match;
                class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_ : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf : public ydk::Entity
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
        class Application; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application
        class Bgp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp
        class Connected; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected
        class Eigrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp
        class Isis; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis
        class IsoIgrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp
        class Lisp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp
        class Mobile; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile
        class Odr; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr
        class Ospf; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf
        class Ospfv3_; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_
        class Rip; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip
        class Static_; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application> > application;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr> odr; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_> > ospfv3;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip> > rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_> static_; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp : public ydk::Entity
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

        ydk::YLeaf as_number; //type: one of uint32, string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp : public ydk::Entity
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

        ydk::YLeaf as_number; //type: one of uint32, string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis : public ydk::Entity
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
        class IsisArea; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea> > isis_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions> redist_options;
                class IsisLevelRoutes;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions> redist_options;
                class IsisLevelRoutes;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp : public ydk::Entity
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
        class AreaTagRouteMapContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer
        class IsoIgrpContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer> iso_igrp_container;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf : public ydk::Entity
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
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match> match;
                class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_ : public ydk::Entity
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
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match> match;
                class MetricType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip : public ydk::Entity
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
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_ : public ydk::Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::SummaryPrefix : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::SummaryPrefix


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers : public ydk::Entity
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

        class Lsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa
        class Pacing; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing
        class Throttle; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa> lsa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing> pacing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle> throttle;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa : public ydk::Entity
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

        ydk::YLeaf arrival; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing : public ydk::Entity
{
    public:
        Pacing();
        ~Pacing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flood; //type: uint32
        ydk::YLeaf lsa_group; //type: uint32
        ydk::YLeaf retransmission; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle : public ydk::Entity
{
    public:
        Throttle();
        ~Throttle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa
        class Spf; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa> lsa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf> spf;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa : public ydk::Entity
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

        class All; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All> all;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All : public ydk::Entity
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

        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf min_delay; //type: uint32
        ydk::YLeaf max_delay; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf : public ydk::Entity
{
    public:
        Spf();
        ~Spf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf min_delay; //type: uint32
        ydk::YLeaf max_delay; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare : public ydk::Entity
{
    public:
        TrafficShare();
        ~TrafficShare();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: empty
        ydk::YLeaf across_interfaces; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity : public ydk::Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_interfaces; //type: empty
        ydk::YLeaf hops; //type: uint8

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf : public ydk::Entity
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

        ydk::YLeaf vrf; //type: string
        ydk::YLeaf unicast; //type: empty
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf nsr; //type: empty
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf maximum_paths; //type: uint32
        class Area; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area
        class AutoCost; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost
        class EventLog; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog
        class Bfd; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd
        class InterfaceId; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId
        class LogAdjacencyChanges; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges
        class MaxLsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa
        class MaxMetric; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric
        class PassiveInterface; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::PassiveInterface
        class Disable; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable
        class QueueDepth; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth
        class Timers; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers
        class TrafficShare; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TrafficShare
        class TtlSecurity; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TtlSecurity
        class Capability; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability
        class Compatible; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible
        class DefaultInformation; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation
        class DiscardRoute; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute
        class Distance; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance
        class Redistribute; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute
        class Authentication; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication
        class GracefulRestart; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart
        class Manet; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet
        class SummaryPrefix; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::SummaryPrefix

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area> > area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost> auto_cost; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability> capability;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible> compatible;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable> disable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute> discard_route; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog> event_log; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId> interface_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges> log_adjacency_changes; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet> manet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa> max_lsa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric> max_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::PassiveInterface> passive_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth> queue_depth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute> redistribute;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::SummaryPrefix> > summary_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TrafficShare> traffic_share;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TtlSecurity> ttl_security;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area : public ydk::Entity
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

        ydk::YLeaf id; //type: one of uint32, string
        ydk::YLeaf default_cost; //type: uint32
        class Authentication; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Authentication
        class Capability; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Capability
        class FilterList; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList
        class Nssa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa
        class Ipv4Range; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range
        class Ipv6Range; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range
        class ShamLink; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink
        class Stub; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Stub
        class VirtualLink; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Authentication> authentication; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Capability> capability;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList> > filter_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range> ipv4_range;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range> ipv6_range;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa> nssa; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink> > sham_link;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Stub> stub; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink> > virtual_link;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Authentication : public ydk::Entity
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

        ydk::YLeaf message_digest; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Authentication


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Capability : public ydk::Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_exclusion; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Capability


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList : public ydk::Entity
{
    public:
        FilterList();
        ~FilterList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_out; //type: InOut
        ydk::YLeaf prefix; //type: string
        class InOut;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range : public ydk::Entity
{
    public:
        Ipv4Range();
        ~Ipv4Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::Range> > range;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::Range : public ydk::Entity
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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf advertise; //type: empty
        ydk::YLeaf not_advertise; //type: empty
        ydk::YLeaf cost; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::Range


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range : public ydk::Entity
{
    public:
        Ipv6Range();
        ~Ipv6Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::Range> > range;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::Range : public ydk::Entity
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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf advertise; //type: empty
        ydk::YLeaf not_advertise; //type: empty
        ydk::YLeaf cost; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::Range


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa : public ydk::Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_ext_capability; //type: empty
        ydk::YLeaf no_redistribution; //type: empty
        ydk::YLeaf no_summary; //type: empty
        ydk::YLeaf nssa_only; //type: empty
        class DefaultInformationOriginate; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate
        class Translate; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate> default_information_originate; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate> translate;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate : public ydk::Entity
{
    public:
        DefaultInformationOriginate();
        ~DefaultInformationOriginate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: int32
        ydk::YLeaf metric_type; //type: uint32
        ydk::YLeaf no_ext_capability; //type: empty
        ydk::YLeaf no_redistribution; //type: empty
        ydk::YLeaf no_summary; //type: empty
        ydk::YLeaf nssa_only; //type: empty
        class Translate; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate> translate;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate : public ydk::Entity
{
    public:
        Translate();
        ~Translate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Type7; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7> type7;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7 : public ydk::Entity
{
    public:
        Type7();
        ~Type7();

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
        ydk::YLeaf suppress_fa; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate : public ydk::Entity
{
    public:
        Translate();
        ~Translate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Type7; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Type7

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Type7> type7;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Type7 : public ydk::Entity
{
    public:
        Type7();
        ~Type7();

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
        ydk::YLeaf suppress_fa; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Type7


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink : public ydk::Entity
{
    public:
        ShamLink();
        ~ShamLink();

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
        ydk::YLeaf dest; //type: string
        ydk::YLeaf cost; //type: uint16
        class TtlSecurity; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::TtlSecurity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::TtlSecurity> ttl_security;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::TtlSecurity : public ydk::Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hops; //type: uint8

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::TtlSecurity


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Stub : public ydk::Entity
{
    public:
        Stub();
        ~Stub();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf no_ext_capability; //type: empty
        ydk::YLeaf no_summary; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Stub


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink : public ydk::Entity
{
    public:
        VirtualLink();
        ~VirtualLink();

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
        class Authentication; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication
        class HelloInterval; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval
        class DeadInterval; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval
        class RetransmitInterval; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval
        class TransmitDelay; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay
        class Topology; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology
        class TtlSecurity; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity
        class AuthenticationKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey> authentication_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval> dead_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey> > message_digest_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval> retransmit_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology> topology;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay> transmit_delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity> ttl_security;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication : public ydk::Entity
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

        ydk::YLeaf null; //type: empty
        class AuthenticationKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey
        class KeyChain; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain
        class MessageDigest; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::AuthenticationKey> authentication_key;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain> key_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest> message_digest;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey> > message_digest_key;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::AuthenticationKey : public ydk::Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_type; //type: uint8
        ydk::YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::AuthenticationKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain : public ydk::Entity
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
        class AuthenticationKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey> > message_digest_key;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey : public ydk::Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_type; //type: uint8
        ydk::YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

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
        class Md5; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5 : public ydk::Entity
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

        ydk::YLeaf auth_type; //type: uint8
        ydk::YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest : public ydk::Entity
{
    public:
        MessageDigest();
        ~MessageDigest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AuthenticationKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey> > message_digest_key;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey : public ydk::Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_type; //type: uint8
        ydk::YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

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
        class Md5; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5 : public ydk::Entity
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

        ydk::YLeaf auth_type; //type: uint8
        ydk::YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

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
        class Md5; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5 : public ydk::Entity
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

        ydk::YLeaf auth_type; //type: uint8
        ydk::YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey : public ydk::Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_type; //type: uint8
        ydk::YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval : public ydk::Entity
{
    public:
        DeadInterval();
        ~DeadInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dead_interval_value; //type: uint16

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval : public ydk::Entity
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

        ydk::YLeaf hello_interval_value; //type: int32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey : public ydk::Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

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
        class Md5; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5 : public ydk::Entity
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

        ydk::YLeaf auth_type; //type: uint8
        ydk::YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval : public ydk::Entity
{
    public:
        RetransmitInterval();
        ~RetransmitInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf retransmit_interval_value; //type: uint16

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay : public ydk::Entity
{
    public:
        TransmitDelay();
        ~TransmitDelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transmit_delay_value; //type: uint16

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity : public ydk::Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hops; //type: uint8

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost : public ydk::Entity
{
    public:
        AutoCost();
        ~AutoCost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reference_bandwidth; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd : public ydk::Entity
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

        ydk::YLeaf all_interfaces; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability : public ydk::Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf capability_type; //type: CapabilityType
        class CapabilityType;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible : public ydk::Entity
{
    public:
        Compatible();
        ~Compatible();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rfc1583; //type: empty
        ydk::YLeaf rfc1587; //type: empty
        ydk::YLeaf rfc5243; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation : public ydk::Entity
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

        class Originate; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate> originate; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate : public ydk::Entity
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

        ydk::YLeaf always; //type: empty
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable : public ydk::Entity
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

        class PassiveInterface; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface> > passive_interface;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface : public ydk::Entity
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

        ydk::YLeaf interface; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute : public ydk::Entity
{
    public:
        DiscardRoute();
        ~DiscardRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external; //type: empty
        ydk::YLeaf internal; //type: empty
        ydk::YLeaf metric; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance : public ydk::Entity
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

        class OspfDistance; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance
        class Ospf; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf> ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance> ospf_distance;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf : public ydk::Entity
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

        ydk::YLeaf external; //type: uint32
        ydk::YLeaf inter_area; //type: uint32
        ydk::YLeaf intra_area; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance : public ydk::Entity
{
    public:
        OspfDistance();
        ~OspfDistance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf ip; //type: string
        ydk::YLeaf wildcard; //type: string
        ydk::YLeaf acl_name; //type: one of string, union

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog : public ydk::Entity
{
    public:
        EventLog();
        ~EventLog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf one_shot; //type: empty
        ydk::YLeaf pause; //type: empty
        ydk::YLeaf size; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart : public ydk::Entity
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
        class Helper; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::Helper

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::Helper> helper; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::Helper : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::Helper


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId : public ydk::Entity
{
    public:
        InterfaceId();
        ~InterfaceId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snmp_if_index; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges : public ydk::Entity
{
    public:
        LogAdjacencyChanges();
        ~LogAdjacencyChanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf detail; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet : public ydk::Entity
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
        class Cache; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Cache
        class Peering; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Cache> cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering> peering;
                class Hello;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Cache : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Cache


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering : public ydk::Entity
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

        class Selective; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Selective

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Selective> selective;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Selective : public ydk::Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Selective


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa : public ydk::Entity
{
    public:
        MaxLsa();
        ~MaxLsa();

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
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf ignore_count; //type: uint32
        ydk::YLeaf ignore_time; //type: uint32
        ydk::YLeaf reset_time; //type: uint32
        ydk::YLeaf warning_only; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric : public ydk::Entity
{
    public:
        MaxMetric();
        ~MaxMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouterLsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa> router_lsa; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa : public ydk::Entity
{
    public:
        RouterLsa();
        ~RouterLsa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf include_stub; //type: empty
        class ExternalLsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa
        class OnStartup; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup
        class SummaryLsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa> external_lsa; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup> on_startup; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa> summary_lsa; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa : public ydk::Entity
{
    public:
        ExternalLsa();
        ~ExternalLsa();

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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup : public ydk::Entity
{
    public:
        OnStartup();
        ~OnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time; //type: uint32
        ydk::YLeaf wait_for_bgp; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList::InOut : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deployment;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf strict;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability::CapabilityType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lls;
        static const ydk::Enum::YLeaf opaque;
        static const ydk::Enum::YLeaf transit;
        static const ydk::Enum::YLeaf vrf_lite;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Hello : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_169_ */

