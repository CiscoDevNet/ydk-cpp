#ifndef _CISCO_IOS_XE_NATIVE_128_
#define _CISCO_IOS_XE_NATIVE_128_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_126.hpp"
#include "Cisco_IOS_XE_native_127.hpp"
#include "Cisco_IOS_XE_native_95.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global : public ydk::Entity
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

        ydk::YLeaf ospf; //type: uint16
        class Application; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application
        class Bgp; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp
        class Connected; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected
        class Eigrp; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp
        class Isis_; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_
        class IsoIgrp; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp
        class Lisp; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp
        class Mobile; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile
        class Ospfv3; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3
        class Rip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip
        class Static_; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected> connected; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp> lisp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3> ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip> rip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_> static_; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application : public ydk::Entity
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

        class Appname; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname> > appname;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname : public ydk::Entity
{
    public:
        Appname();
        ~Appname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appname; //type: string
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp : public ydk::Entity
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

        ydk::YLeaf a_lesser_1_period_0_xx_period_yy_greater_; //type: empty
        class BpAsNum; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum> > bp_as_num;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum : public ydk::Entity
{
    public:
        BpAsNum();
        ~BpAsNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bp_as_num; //type: one of uint32, string
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class Clns; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns> clns; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip> ip; // presence node
                class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns : public ydk::Entity
{
    public:
        Clns();
        ~Clns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp : public ydk::Entity
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

        class EigrpAs; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs> > eigrp_as;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs : public ydk::Entity
{
    public:
        EigrpAs();
        ~EigrpAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp_as; //type: uint16
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_ : public ydk::Entity
{
    public:
        Isis_();
        ~Isis_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IsisAtag; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip> ip; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag> > isis_atag;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag : public ydk::Entity
{
    public:
        IsisAtag();
        ~IsisAtag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isis_atag; //type: string
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip> ip;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp : public ydk::Entity
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

        class IsoAtag; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag
        class RouteMap; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag> > iso_atag;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap> route_map; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag : public ydk::Entity
{
    public:
        IsoAtag();
        ~IsoAtag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iso_atag; //type: string
        ydk::YLeaf route_map; //type: empty

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rm_point; //type: string

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3 : public ydk::Entity
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

        class Os3Id; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id> > os3_id;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id : public ydk::Entity
{
    public:
        Os3Id();
        ~Os3Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf os3_id; //type: uint16
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_ : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class Clns; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns> clns; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip> ip; // presence node
                class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns : public ydk::Entity
{
    public:
        Clns();
        ~Clns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm : public ydk::Entity
{
    public:
        VrfNm();
        ~VrfNm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_nm; //type: string
        ydk::YLeaf ospf; //type: uint16
        class Application; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application
        class Bgp; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp
        class Connected; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected
        class Eigrp; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp
        class Isis_; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_
        class IsoIgrp; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp
        class Lisp; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp
        class Mobile; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile
        class Ospfv3; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3
        class Rip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip
        class Static_; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected> connected; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp> lisp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3> ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip> rip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_> static_; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application : public ydk::Entity
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

        class Appname; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname> > appname;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname : public ydk::Entity
{
    public:
        Appname();
        ~Appname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appname; //type: string
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp : public ydk::Entity
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

        ydk::YLeaf a_lesser_1_period_0_xx_period_yy_greater_; //type: empty
        class BpAsNum; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum> > bp_as_num;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum : public ydk::Entity
{
    public:
        BpAsNum();
        ~BpAsNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bp_as_num; //type: one of uint32, string
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class Clns; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns> clns; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip> ip; // presence node
                class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns : public ydk::Entity
{
    public:
        Clns();
        ~Clns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp : public ydk::Entity
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

        class EigrpAs; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs> > eigrp_as;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs : public ydk::Entity
{
    public:
        EigrpAs();
        ~EigrpAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eigrp_as; //type: uint16
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_ : public ydk::Entity
{
    public:
        Isis_();
        ~Isis_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IsisAtag; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip> ip; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag> > isis_atag;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag : public ydk::Entity
{
    public:
        IsisAtag();
        ~IsisAtag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isis_atag; //type: string
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip> ip;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp : public ydk::Entity
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

        class IsoAtag; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag
        class RouteMap; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag> > iso_atag;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap> route_map; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag : public ydk::Entity
{
    public:
        IsoAtag();
        ~IsoAtag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iso_atag; //type: string
        ydk::YLeaf route_map; //type: empty

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap : public ydk::Entity
{
    public:
        RouteMap();
        ~RouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rm_point; //type: string

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3 : public ydk::Entity
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

        class Os3Id; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id> > os3_id;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id : public ydk::Entity
{
    public:
        Os3Id();
        ~Os3Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf os3_id; //type: uint16
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_ : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class Clns; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns> clns; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip> ip; // presence node
                class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns : public ydk::Entity
{
    public:
        Clns();
        ~Clns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip


class Native::Router::IsisContainer::Isis::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpls; //type: empty
        class PrefixSidMap; //type: Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap> prefix_sid_map;
        
}; // Native::Router::IsisContainer::Isis::SegmentRouting


class Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap : public ydk::Entity
{
    public:
        PrefixSidMap();
        ~PrefixSidMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf advertise_local; //type: empty
        class Receive; //type: Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive> receive; // presence node
        
}; // Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap


class Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty

}; // Native::Router::IsisContainer::Isis::SegmentRouting::PrefixSidMap::Receive


class Native::Router::IsisContainer::Isis::SetAttachedBit : public ydk::Entity
{
    public:
        SetAttachedBit();
        ~SetAttachedBit();

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

}; // Native::Router::IsisContainer::Isis::SetAttachedBit


class Native::Router::IsisContainer::Isis::SetOverloadBit : public ydk::Entity
{
    public:
        SetOverloadBit();
        ~SetOverloadBit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OnStartup; //type: Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup
        class Suppress; //type: Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup> on_startup;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress> suppress;
        
}; // Native::Router::IsisContainer::Isis::SetOverloadBit


class Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup : public ydk::Entity
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

        class Time; //type: Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time
        class WaitForBgp; //type: Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time> time;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp> wait_for_bgp; // presence node
        
}; // Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup


class Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time : public ydk::Entity
{
    public:
        Time();
        ~Time();

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
        ydk::YLeaf suppress; //type: empty
        ydk::YLeaf external; //type: empty
        ydk::YLeaf interlevel; //type: empty

}; // Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time


class Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp : public ydk::Entity
{
    public:
        WaitForBgp();
        ~WaitForBgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Suppress; //type: Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress> suppress;
        
}; // Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp


class Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress : public ydk::Entity
{
    public:
        Suppress();
        ~Suppress();

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
        ydk::YLeaf interlevel; //type: empty

}; // Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress


class Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress : public ydk::Entity
{
    public:
        Suppress();
        ~Suppress();

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
        ydk::YLeaf interlevel; //type: empty

}; // Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress


class Native::Router::IsisContainer::Isis::Skeptical : public ydk::Entity
{
    public:
        Skeptical();
        ~Skeptical();

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

}; // Native::Router::IsisContainer::Isis::Skeptical


class Native::Router::IsisContainer::Isis::Snmp : public ydk::Entity
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

        class Context; //type: Native::Router::IsisContainer::Isis::Snmp::Context

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Snmp::Context> > context;
        
}; // Native::Router::IsisContainer::Isis::Snmp


class Native::Router::IsisContainer::Isis::Snmp::Context : public ydk::Entity
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
        class Community; //type: Native::Router::IsisContainer::Isis::Snmp::Context::Community
        class User; //type: Native::Router::IsisContainer::Isis::Snmp::Context::User

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Snmp::Context::Community> community;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Snmp::Context::User> user;
        
}; // Native::Router::IsisContainer::Isis::Snmp::Context


class Native::Router::IsisContainer::Isis::Snmp::Context::Community : public ydk::Entity
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
        class Access; //type: Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access> access;
        
}; // Native::Router::IsisContainer::Isis::Snmp::Context::Community


class Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access


class Native::Router::IsisContainer::Isis::Snmp::Context::User : public ydk::Entity
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
        class Permisssion; //type: Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion> permisssion;
        
}; // Native::Router::IsisContainer::Isis::Snmp::Context::User


class Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion : public ydk::Entity
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
        class Access; //type: Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access
        class Auth; //type: Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth> auth;
        
}; // Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion


class Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access


class Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth


class Native::Router::IsisContainer::Isis::SpfInterval : public ydk::Entity
{
    public:
        SpfInterval();
        ~SpfInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level12; //type: Native::Router::IsisContainer::Isis::SpfInterval::Level12
        class Intervals; //type: Native::Router::IsisContainer::Isis::SpfInterval::Intervals

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SpfInterval::Intervals> intervals;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SpfInterval::Level12> > level_1_2;
        
}; // Native::Router::IsisContainer::Isis::SpfInterval


class Native::Router::IsisContainer::Isis::SpfInterval::Intervals : public ydk::Entity
{
    public:
        Intervals();
        ~Intervals();

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
        ydk::YLeaf initial_wait; //type: uint32
        ydk::YLeaf minimum_wait; //type: uint32

}; // Native::Router::IsisContainer::Isis::SpfInterval::Intervals


class Native::Router::IsisContainer::Isis::SpfInterval::Level12 : public ydk::Entity
{
    public:
        Level12();
        ~Level12();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: Level
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf initial_wait; //type: uint32
        ydk::YLeaf minimum_wait; //type: uint32
        class Level;

}; // Native::Router::IsisContainer::Isis::SpfInterval::Level12


class Native::Router::IsisContainer::Isis::SummaryAddress : public ydk::Entity
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
        ydk::YLeaf mask; //type: string
        class Level1; //type: Native::Router::IsisContainer::Isis::SummaryAddress::Level1
        class Level12; //type: Native::Router::IsisContainer::Isis::SummaryAddress::Level12
        class Level2; //type: Native::Router::IsisContainer::Isis::SummaryAddress::Level2
        class MetricTagContainer; //type: Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SummaryAddress::Level1> level_1; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SummaryAddress::Level12> level_1_2; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SummaryAddress::Level2> level_2; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer> metric_tag_container;
        
}; // Native::Router::IsisContainer::Isis::SummaryAddress


class Native::Router::IsisContainer::Isis::SummaryAddress::Level1 : public ydk::Entity
{
    public:
        Level1();
        ~Level1();

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
        ydk::YLeaf tag; //type: uint32

}; // Native::Router::IsisContainer::Isis::SummaryAddress::Level1


class Native::Router::IsisContainer::Isis::SummaryAddress::Level12 : public ydk::Entity
{
    public:
        Level12();
        ~Level12();

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
        ydk::YLeaf tag; //type: uint32

}; // Native::Router::IsisContainer::Isis::SummaryAddress::Level12


class Native::Router::IsisContainer::Isis::SummaryAddress::Level2 : public ydk::Entity
{
    public:
        Level2();
        ~Level2();

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
        ydk::YLeaf tag; //type: uint32

}; // Native::Router::IsisContainer::Isis::SummaryAddress::Level2


class Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer : public ydk::Entity
{
    public:
        MetricTagContainer();
        ~MetricTagContainer();

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
        ydk::YLeaf tag; //type: uint32

}; // Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer


class Native::Router::IsisContainer::Isis::TiLfa : public ydk::Entity
{
    public:
        TiLfa();
        ~TiLfa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Level1; //type: Native::Router::IsisContainer::Isis::TiLfa::Level1
        class Level2; //type: Native::Router::IsisContainer::Isis::TiLfa::Level2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::TiLfa::Level1> level_1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::TiLfa::Level2> level_2; // presence node
        
}; // Native::Router::IsisContainer::Isis::TiLfa


class Native::Router::IsisContainer::Isis::TiLfa::Level1 : public ydk::Entity
{
    public:
        Level1();
        ~Level1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MaximumMetric; //type: Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric> maximum_metric;
        
}; // Native::Router::IsisContainer::Isis::TiLfa::Level1


class Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric : public ydk::Entity
{
    public:
        MaximumMetric();
        ~MaximumMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_met; //type: uint32

}; // Native::Router::IsisContainer::Isis::TiLfa::Level1::MaximumMetric


class Native::Router::IsisContainer::Isis::TiLfa::Level2 : public ydk::Entity
{
    public:
        Level2();
        ~Level2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MaximumMetric; //type: Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric> maximum_metric;
        
}; // Native::Router::IsisContainer::Isis::TiLfa::Level2


class Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric : public ydk::Entity
{
    public:
        MaximumMetric();
        ~MaximumMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_met; //type: uint32

}; // Native::Router::IsisContainer::Isis::TiLfa::Level2::MaximumMetric


class Native::Router::IsisContainer::Isis::TrafficShare : public ydk::Entity
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

        class Min; //type: Native::Router::IsisContainer::Isis::TrafficShare::Min

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::TrafficShare::Min> min;
        
}; // Native::Router::IsisContainer::Isis::TrafficShare


class Native::Router::IsisContainer::Isis::TrafficShare::Min : public ydk::Entity
{
    public:
        Min();
        ~Min();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf across_interfaces; //type: empty

}; // Native::Router::IsisContainer::Isis::TrafficShare::Min


class Native::Router::IsisContainer::Isis::Use : public ydk::Entity
{
    public:
        Use();
        ~Use();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_metrics; //type: empty

}; // Native::Router::IsisContainer::Isis::Use


class Native::Router::Lisp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf disable_ttl_propagate; //type: empty
        ydk::YLeaf site_id; //type: uint32
        class Default_; //type: Native::Router::Lisp::Default_
        class Service; //type: Native::Router::Lisp::Service
        class Encapsulation; //type: Native::Router::Lisp::Encapsulation
        class LocatorSet; //type: Native::Router::Lisp::LocatorSet
        class Locator; //type: Native::Router::Lisp::Locator
        class LocatorScope; //type: Native::Router::Lisp::LocatorScope
        class InstanceContainer; //type: Native::Router::Lisp::InstanceContainer
        class Alt; //type: Native::Router::Lisp::Alt
        class ControlPacket; //type: Native::Router::Lisp::ControlPacket
        class Ddt; //type: Native::Router::Lisp::Ddt
        class Decapsulation; //type: Native::Router::Lisp::Decapsulation
        class Etr; //type: Native::Router::Lisp::Etr
        class Ipv4; //type: Native::Router::Lisp::Ipv4
        class Ipv6; //type: Native::Router::Lisp::Ipv6
        class LocReachAlgorithm; //type: Native::Router::Lisp::LocReachAlgorithm
        class LocatorDown; //type: Native::Router::Lisp::LocatorDown
        class LocatorTable; //type: Native::Router::Lisp::LocatorTable
        class MapRequest; //type: Native::Router::Lisp::MapRequest
        class MapServer; //type: Native::Router::Lisp::MapServer
        class OtherXtrProbe; //type: Native::Router::Lisp::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::Lisp::RemoteRlocProbe
        class EidTable; //type: Native::Router::Lisp::EidTable
        class Security; //type: Native::Router::Lisp::Security
        class Site; //type: Native::Router::Lisp::Site
        class Syslog; //type: Native::Router::Lisp::Syslog

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Alt> alt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::ControlPacket> control_packet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ddt> ddt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Decapsulation> decapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::EidTable> eid_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::InstanceContainer> instance_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Locator> locator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::LocatorDown> locator_down;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::LocatorScope> > locator_scope;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::LocatorSet> > locator_set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::LocatorTable> locator_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::MapRequest> map_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::MapServer> map_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Security> security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Service> service; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Site> > site;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Syslog> syslog;
        
}; // Native::Router::Lisp


class Native::Router::Lisp::Alt : public ydk::Entity
{
    public:
        Alt();
        ~Alt();

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

        class SummaryRoute; //type: Native::Router::Lisp::Alt::SummaryRoute

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Alt::SummaryRoute> > summary_route;
        
}; // Native::Router::Lisp::Alt


class Native::Router::Lisp::Alt::SummaryRoute : public ydk::Entity
{
    public:
        SummaryRoute();
        ~SummaryRoute();

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

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Alt::SummaryRoute


class Native::Router::Lisp::ControlPacket : public ydk::Entity
{
    public:
        ControlPacket();
        ~ControlPacket();

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

        ydk::YLeaf mtu; //type: uint32

}; // Native::Router::Lisp::ControlPacket


class Native::Router::Lisp::Ddt : public ydk::Entity
{
    public:
        Ddt();
        ~Ddt();

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

        ydk::YLeaf cache_limit; //type: uint32
        ydk::YLeaf root; //type: string
        class Authoritative; //type: Native::Router::Lisp::Ddt::Authoritative

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ddt::Authoritative> authoritative;
        
}; // Native::Router::Lisp::Ddt


class Native::Router::Lisp::Ddt::Authoritative : public ydk::Entity
{
    public:
        Authoritative();
        ~Authoritative();

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

        class InstanceIdEidPrefixList; //type: Native::Router::Lisp::Ddt::Authoritative::InstanceIdEidPrefixList
        class InstanceIdList; //type: Native::Router::Lisp::Ddt::Authoritative::InstanceIdList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ddt::Authoritative::InstanceIdEidPrefixList> > instance_id_eid_prefix_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ddt::Authoritative::InstanceIdList> > instance_id_list;
        
}; // Native::Router::Lisp::Ddt::Authoritative


class Native::Router::Lisp::Ddt::Authoritative::InstanceIdEidPrefixList : public ydk::Entity
{
    public:
        InstanceIdEidPrefixList();
        ~InstanceIdEidPrefixList();

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

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf map_server_peer; //type: string
        class Delegate; //type: Native::Router::Lisp::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate> delegate;
        
}; // Native::Router::Lisp::Ddt::Authoritative::InstanceIdEidPrefixList


class Native::Router::Lisp::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate : public ydk::Entity
{
    public:
        Delegate();
        ~Delegate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf to; //type: empty
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf map_server; //type: empty

}; // Native::Router::Lisp::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate


class Native::Router::Lisp::Ddt::Authoritative::InstanceIdList : public ydk::Entity
{
    public:
        InstanceIdList();
        ~InstanceIdList();

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

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf map_server_peer; //type: string
        class Delegate; //type: Native::Router::Lisp::Ddt::Authoritative::InstanceIdList::Delegate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Ddt::Authoritative::InstanceIdList::Delegate> delegate;
        
}; // Native::Router::Lisp::Ddt::Authoritative::InstanceIdList


class Native::Router::Lisp::Ddt::Authoritative::InstanceIdList::Delegate : public ydk::Entity
{
    public:
        Delegate();
        ~Delegate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf to; //type: empty
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf map_server; //type: empty

}; // Native::Router::Lisp::Ddt::Authoritative::InstanceIdList::Delegate


class Native::Router::Lisp::Decapsulation : public ydk::Entity
{
    public:
        Decapsulation();
        ~Decapsulation();

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

        class Filter; //type: Native::Router::Lisp::Decapsulation::Filter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Decapsulation::Filter> filter;
        
}; // Native::Router::Lisp::Decapsulation


class Native::Router::Lisp::Decapsulation::Filter : public ydk::Entity
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

        class Rloc; //type: Native::Router::Lisp::Decapsulation::Filter::Rloc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Decapsulation::Filter::Rloc> rloc;
        
}; // Native::Router::Lisp::Decapsulation::Filter


class Native::Router::Lisp::Decapsulation::Filter::Rloc : public ydk::Entity
{
    public:
        Rloc();
        ~Rloc();

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

        class Source; //type: Native::Router::Lisp::Decapsulation::Filter::Rloc::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Decapsulation::Filter::Rloc::Source> source;
        
}; // Native::Router::Lisp::Decapsulation::Filter::Rloc


class Native::Router::Lisp::Decapsulation::Filter::Rloc::Source : public ydk::Entity
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

        ydk::YLeaf locator_set; //type: string
        ydk::YLeaf member; //type: empty

}; // Native::Router::Lisp::Decapsulation::Filter::Rloc::Source


class Native::Router::Lisp::Default_ : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf disable_ttl_propagate; //type: empty
        ydk::YLeaf site_id; //type: uint32
        class Service; //type: Native::Router::Lisp::Default_::Service
        class Encapsulation; //type: Native::Router::Lisp::Default_::Encapsulation
        class LocatorSet; //type: Native::Router::Lisp::Default_::LocatorSet
        class Locator; //type: Native::Router::Lisp::Default_::Locator
        class LocatorScope; //type: Native::Router::Lisp::Default_::LocatorScope
        class InstanceContainer; //type: Native::Router::Lisp::Default_::InstanceContainer
        class Alt; //type: Native::Router::Lisp::Default_::Alt
        class ControlPacket; //type: Native::Router::Lisp::Default_::ControlPacket
        class Ddt; //type: Native::Router::Lisp::Default_::Ddt
        class Decapsulation; //type: Native::Router::Lisp::Default_::Decapsulation
        class Etr; //type: Native::Router::Lisp::Default_::Etr
        class Ipv4; //type: Native::Router::Lisp::Default_::Ipv4
        class Ipv6; //type: Native::Router::Lisp::Default_::Ipv6
        class LocReachAlgorithm; //type: Native::Router::Lisp::Default_::LocReachAlgorithm
        class LocatorDown; //type: Native::Router::Lisp::Default_::LocatorDown
        class LocatorTable; //type: Native::Router::Lisp::Default_::LocatorTable
        class MapRequest; //type: Native::Router::Lisp::Default_::MapRequest
        class MapServer; //type: Native::Router::Lisp::Default_::MapServer
        class OtherXtrProbe; //type: Native::Router::Lisp::Default_::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::Lisp::Default_::RemoteRlocProbe
        class EidTable; //type: Native::Router::Lisp::Default_::EidTable
        class Security; //type: Native::Router::Lisp::Default_::Security
        class Site; //type: Native::Router::Lisp::Default_::Site
        class Syslog; //type: Native::Router::Lisp::Default_::Syslog

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Alt> alt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::ControlPacket> control_packet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Ddt> ddt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Decapsulation> decapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable> eid_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::InstanceContainer> instance_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Locator> locator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::LocatorDown> locator_down;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::LocatorScope> > locator_scope;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::LocatorSet> > locator_set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::LocatorTable> locator_table;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::MapRequest> map_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::MapServer> map_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Security> security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Service> service; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Site> > site;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Syslog> syslog;
        
}; // Native::Router::Lisp::Default_


class Native::Router::Lisp::Default_::Alt : public ydk::Entity
{
    public:
        Alt();
        ~Alt();

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

        class SummaryRoute; //type: Native::Router::Lisp::Default_::Alt::SummaryRoute

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Alt::SummaryRoute> > summary_route;
        
}; // Native::Router::Lisp::Default_::Alt


class Native::Router::Lisp::Default_::Alt::SummaryRoute : public ydk::Entity
{
    public:
        SummaryRoute();
        ~SummaryRoute();

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

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Default_::Alt::SummaryRoute


class Native::Router::Lisp::Default_::ControlPacket : public ydk::Entity
{
    public:
        ControlPacket();
        ~ControlPacket();

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

        ydk::YLeaf mtu; //type: uint32

}; // Native::Router::Lisp::Default_::ControlPacket


class Native::Router::Lisp::Default_::Ddt : public ydk::Entity
{
    public:
        Ddt();
        ~Ddt();

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

        ydk::YLeaf cache_limit; //type: uint32
        ydk::YLeaf root; //type: string
        class Authoritative; //type: Native::Router::Lisp::Default_::Ddt::Authoritative

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Ddt::Authoritative> authoritative;
        
}; // Native::Router::Lisp::Default_::Ddt


class Native::Router::Lisp::Default_::Ddt::Authoritative : public ydk::Entity
{
    public:
        Authoritative();
        ~Authoritative();

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

        class InstanceIdEidPrefixList; //type: Native::Router::Lisp::Default_::Ddt::Authoritative::InstanceIdEidPrefixList
        class InstanceIdList; //type: Native::Router::Lisp::Default_::Ddt::Authoritative::InstanceIdList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Ddt::Authoritative::InstanceIdEidPrefixList> > instance_id_eid_prefix_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Ddt::Authoritative::InstanceIdList> > instance_id_list;
        
}; // Native::Router::Lisp::Default_::Ddt::Authoritative


class Native::Router::Lisp::Default_::Ddt::Authoritative::InstanceIdEidPrefixList : public ydk::Entity
{
    public:
        InstanceIdEidPrefixList();
        ~InstanceIdEidPrefixList();

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

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf map_server_peer; //type: string
        class Delegate; //type: Native::Router::Lisp::Default_::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate> delegate;
        
}; // Native::Router::Lisp::Default_::Ddt::Authoritative::InstanceIdEidPrefixList


class Native::Router::Lisp::Default_::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate : public ydk::Entity
{
    public:
        Delegate();
        ~Delegate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf to; //type: empty
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf map_server; //type: empty

}; // Native::Router::Lisp::Default_::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate


class Native::Router::Lisp::Default_::Ddt::Authoritative::InstanceIdList : public ydk::Entity
{
    public:
        InstanceIdList();
        ~InstanceIdList();

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

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf map_server_peer; //type: string
        class Delegate; //type: Native::Router::Lisp::Default_::Ddt::Authoritative::InstanceIdList::Delegate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Ddt::Authoritative::InstanceIdList::Delegate> delegate;
        
}; // Native::Router::Lisp::Default_::Ddt::Authoritative::InstanceIdList


class Native::Router::Lisp::Default_::Ddt::Authoritative::InstanceIdList::Delegate : public ydk::Entity
{
    public:
        Delegate();
        ~Delegate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf to; //type: empty
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf map_server; //type: empty

}; // Native::Router::Lisp::Default_::Ddt::Authoritative::InstanceIdList::Delegate


class Native::Router::Lisp::Default_::Decapsulation : public ydk::Entity
{
    public:
        Decapsulation();
        ~Decapsulation();

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

        class Filter; //type: Native::Router::Lisp::Default_::Decapsulation::Filter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Decapsulation::Filter> filter;
        
}; // Native::Router::Lisp::Default_::Decapsulation


class Native::Router::Lisp::Default_::Decapsulation::Filter : public ydk::Entity
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

        class Rloc; //type: Native::Router::Lisp::Default_::Decapsulation::Filter::Rloc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Decapsulation::Filter::Rloc> rloc;
        
}; // Native::Router::Lisp::Default_::Decapsulation::Filter


class Native::Router::Lisp::Default_::Decapsulation::Filter::Rloc : public ydk::Entity
{
    public:
        Rloc();
        ~Rloc();

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

        class Source; //type: Native::Router::Lisp::Default_::Decapsulation::Filter::Rloc::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::Decapsulation::Filter::Rloc::Source> source;
        
}; // Native::Router::Lisp::Default_::Decapsulation::Filter::Rloc


class Native::Router::Lisp::Default_::Decapsulation::Filter::Rloc::Source : public ydk::Entity
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

        ydk::YLeaf locator_set; //type: string
        ydk::YLeaf member; //type: empty

}; // Native::Router::Lisp::Default_::Decapsulation::Filter::Rloc::Source


class Native::Router::Lisp::Default_::EidTable : public ydk::Entity
{
    public:
        EidTable();
        ~EidTable();

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

        class InstanceList; //type: Native::Router::Lisp::Default_::EidTable::InstanceList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList> > instance_list;
        
}; // Native::Router::Lisp::Default_::EidTable


class Native::Router::Lisp::Default_::EidTable::InstanceList : public ydk::Entity
{
    public:
        InstanceList();
        ~InstanceList();

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

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf default_; //type: empty
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf disable_ttl_propagate; //type: empty
        class DatabaseMapping; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::DatabaseMapping
        class DynamicEid; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid
        class Alt; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Alt
        class ControlPacket; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::ControlPacket
        class Ddt; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt
        class Decapsulation; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Decapsulation
        class Etr; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Etr
        class Ipv4; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4
        class Ipv6; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv6
        class LocReachAlgorithm; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::LocReachAlgorithm
        class LocatorDown; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::LocatorDown
        class LocatorTable; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::LocatorTable
        class MapRequest; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::MapRequest
        class MapServer; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::MapServer
        class OtherXtrProbe; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::RemoteRlocProbe
        class MapCache; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::MapCache

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Alt> alt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::ControlPacket> control_packet;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::DatabaseMapping> > database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt> ddt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Decapsulation> decapsulation;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid> > dynamic_eid;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::LocatorDown> locator_down;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::LocatorTable> locator_table;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::MapCache> > map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::MapRequest> map_request;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::MapServer> map_server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::RemoteRlocProbe> remote_rloc_probe;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList


class Native::Router::Lisp::Default_::EidTable::InstanceList::Alt : public ydk::Entity
{
    public:
        Alt();
        ~Alt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryRoute; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Alt::SummaryRoute

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Alt::SummaryRoute> > summary_route;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Alt


class Native::Router::Lisp::Default_::EidTable::InstanceList::Alt::SummaryRoute : public ydk::Entity
{
    public:
        SummaryRoute();
        ~SummaryRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Alt::SummaryRoute


class Native::Router::Lisp::Default_::EidTable::InstanceList::ControlPacket : public ydk::Entity
{
    public:
        ControlPacket();
        ~ControlPacket();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32

}; // Native::Router::Lisp::Default_::EidTable::InstanceList::ControlPacket


class Native::Router::Lisp::Default_::EidTable::InstanceList::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::Default_::EidTable::InstanceList::DatabaseMapping


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt : public ydk::Entity
{
    public:
        Ddt();
        ~Ddt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cache_limit; //type: uint32
        ydk::YLeaf root; //type: string
        class Authoritative; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative> authoritative;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative : public ydk::Entity
{
    public:
        Authoritative();
        ~Authoritative();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InstanceIdEidPrefixList; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList
        class InstanceIdList; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList> > instance_id_eid_prefix_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList> > instance_id_list;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList : public ydk::Entity
{
    public:
        InstanceIdEidPrefixList();
        ~InstanceIdEidPrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf map_server_peer; //type: string
        class Delegate; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate> delegate;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate : public ydk::Entity
{
    public:
        Delegate();
        ~Delegate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf to; //type: empty
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf map_server; //type: empty

}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdEidPrefixList::Delegate


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList : public ydk::Entity
{
    public:
        InstanceIdList();
        ~InstanceIdList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf map_server_peer; //type: string
        class Delegate; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList::Delegate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList::Delegate> delegate;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList::Delegate : public ydk::Entity
{
    public:
        Delegate();
        ~Delegate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf to; //type: empty
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf map_server; //type: empty

}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ddt::Authoritative::InstanceIdList::Delegate


class Native::Router::Lisp::Default_::EidTable::InstanceList::Decapsulation : public ydk::Entity
{
    public:
        Decapsulation();
        ~Decapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Filter; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Decapsulation::Filter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Decapsulation::Filter> filter;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Decapsulation


class Native::Router::Lisp::Default_::EidTable::InstanceList::Decapsulation::Filter : public ydk::Entity
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

        class Rloc; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Decapsulation::Filter::Rloc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Decapsulation::Filter::Rloc> rloc;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Decapsulation::Filter


class Native::Router::Lisp::Default_::EidTable::InstanceList::Decapsulation::Filter::Rloc : public ydk::Entity
{
    public:
        Rloc();
        ~Rloc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Source; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Decapsulation::Filter::Rloc::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Decapsulation::Filter::Rloc::Source> source;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Decapsulation::Filter::Rloc


class Native::Router::Lisp::Default_::EidTable::InstanceList::Decapsulation::Filter::Rloc::Source : public ydk::Entity
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

        ydk::YLeaf locator_set; //type: string
        ydk::YLeaf member; //type: empty

}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Decapsulation::Filter::Rloc::Source


class Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid : public ydk::Entity
{
    public:
        DynamicEid();
        ~DynamicEid();

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
        ydk::YLeaf map_notify_group; //type: string
        class DatabaseMapping; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::DatabaseMapping
        class EidNotify; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::EidNotify
        class MapServer; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::MapServer

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::DatabaseMapping> > database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::EidNotify> eid_notify;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::MapServer> > map_server;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid


class Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eid_prefix; //type: string
        ydk::YLeaf locator_set; //type: string

}; // Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::DatabaseMapping


class Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::EidNotify : public ydk::Entity
{
    public:
        EidNotify();
        ~EidNotify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AuthenticationKey; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::EidNotify::AuthenticationKey
        class GatewayKey; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::EidNotify::GatewayKey

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::EidNotify::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::EidNotify::GatewayKey> > gateway_key;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::EidNotify


class Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::EidNotify::AuthenticationKey : public ydk::Entity
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

        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf unc_pwd; //type: string

}; // Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::EidNotify::AuthenticationKey


class Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::EidNotify::GatewayKey : public ydk::Entity
{
    public:
        GatewayKey();
        ~GatewayKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gateway_ip; //type: string
        ydk::YLeaf ak_0; //type: string
        ydk::YLeaf ak_6; //type: string
        ydk::YLeaf unc_pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::EidNotify::GatewayKey


class Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

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
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::MapServer::Key> key;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::MapServer


class Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::MapServer::Key : public ydk::Entity
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

        ydk::YLeaf key_0; //type: string
        ydk::YLeaf key_6; //type: string
        ydk::YLeaf key_7; //type: string
        ydk::YLeaf pwd; //type: string
        ydk::YLeaf hash_function; //type: HashFunction
        class HashFunction;

}; // Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::MapServer::Key


class Native::Router::Lisp::Default_::EidTable::InstanceList::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapServer; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Etr::MapServer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Etr::MapServer> map_server;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Etr


class Native::Router::Lisp::Default_::EidTable::InstanceList::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string

}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Etr::MapServer


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4 : public ydk::Entity
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

        ydk::YLeaf alt_vrf; //type: string
        ydk::YLeaf map_request_source; //type: string
        ydk::YLeaf proxy_etr; //type: empty
        ydk::YLeaf sgt; //type: empty
        ydk::YLeafList proxy_itr; //type: list of  string
        class DatabaseMapping; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::DatabaseMapping
        class Distance; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Distance
        class Itr; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Itr
        class ItrEnable; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::ItrEnable
        class Etr; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Etr
        class EtrEnable; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::EtrEnable
        class Locator; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Locator
        class MapCache; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::MapCache
        class MapCacheLimit; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::MapCacheLimit
        class MapCachePersistent; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::MapCachePersistent
        class MapResolver; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::MapResolver
        class MapServer; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::MapServer
        class PathMtuDiscovery; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::PathMtuDiscovery
        class RouteExport; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::RouteExport
        class RouteImport; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::RouteImport
        class SiteRegistration; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::SolicitMapRequest
        class UsePetr; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::UsePetr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::DatabaseMapping> database_mapping;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Etr> etr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::EtrEnable> etr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Itr> itr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::ItrEnable> itr_enable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Locator> locator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::MapCache> map_cache;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::MapCacheLimit> map_cache_limit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::MapResolver> map_resolver; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::MapServer> map_server; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::PathMtuDiscovery> path_mtu_discovery; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::RouteExport> route_export;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::RouteImport> route_import;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::SiteRegistration> site_registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::UsePetr> > use_petr;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::DatabaseMapping : public ydk::Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Limit; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::DatabaseMapping::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::DatabaseMapping::Limit> limit;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::DatabaseMapping


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::DatabaseMapping::Limit : public ydk::Entity
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

        ydk::YLeaf dynamic; //type: uint32
        ydk::YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::DatabaseMapping::Limit


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Distance : public ydk::Entity
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

        ydk::YLeaf alt; //type: uint8
        ydk::YLeaf dyn_eid; //type: uint8
        ydk::YLeaf site_registrations; //type: uint8

}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Distance


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Etr : public ydk::Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapServer; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Etr::MapServer

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Etr::MapServer> > map_server;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Etr


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Etr::MapServer : public ydk::Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Etr::MapServer::Key

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Etr::MapServer::Key> key;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Etr::MapServer


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Etr::MapServer::Key : public ydk::Entity
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

        ydk::YLeaf key_0; //type: string
        ydk::YLeaf key_6; //type: string
        ydk::YLeaf key_7; //type: string
        ydk::YLeaf pwd; //type: string

}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Etr::MapServer::Key


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::EtrEnable : public ydk::Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf etr; //type: empty

}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::EtrEnable


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Itr : public ydk::Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MapResolver; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Itr::MapResolver

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Itr


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Itr::MapResolver : public ydk::Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string

}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Itr::MapResolver


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::ItrEnable : public ydk::Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf itr; //type: empty

}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::ItrEnable


class Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Locator : public ydk::Entity
{
    public:
        Locator();
        ~Locator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reachability; //type: Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Locator::Reachability

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Locator::Reachability> reachability;
        
}; // Native::Router::Lisp::Default_::EidTable::InstanceList::Ipv4::Locator

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::SpfInterval::Level12::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::EidNotify::GatewayKey::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};

class Native::Router::Lisp::Default_::EidTable::InstanceList::DynamicEid::MapServer::Key::HashFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha1;
        static const ydk::Enum::YLeaf sha2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_128_ */

