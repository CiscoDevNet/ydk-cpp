#ifndef _CISCO_IOS_XE_NATIVE_154_
#define _CISCO_IOS_XE_NATIVE_154_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_122.hpp"
#include "Cisco_IOS_XE_native_152.hpp"
#include "Cisco_IOS_XE_native_153.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::IsisContainer::Isis::Redistribute::Connected : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Redistribute::Connected


class Native::Router::IsisContainer::Isis::Redistribute::Eigrp : public ydk::Entity
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

        ydk::YLeaf as_number; //type: uint32
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Eigrp


class Native::Router::IsisContainer::Isis::Redistribute::Isis_ : public ydk::Entity
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

        class IsisRedistribute; //type: Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute> > isis_redistribute;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip> > ip;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Isis_


class Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute : public ydk::Entity
{
    public:
        IsisRedistribute();
        ~IsisRedistribute();

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
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip> ip; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute


class Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip : public ydk::Entity
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

        ydk::YLeaf isis_redist_levels1; //type: IsisRedistLevels1
        ydk::YLeaf isis_redist_levels2; //type: IsisRedistLevels2
        ydk::YLeaf into; //type: empty
        ydk::YLeaf distribute_list; //type: uint32
        ydk::YLeaf route_map; //type: string
        class IsisRedistLevels1;
        class IsisRedistLevels2;

}; // Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip


class Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp : public ydk::Entity
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
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        class AreaTagRouteMapContainer; //type: Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
                class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp


class Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::IsisContainer::Isis::Redistribute::Lisp : public ydk::Entity
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
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Lisp


class Native::Router::IsisContainer::Isis::Redistribute::MaximumPrefix : public ydk::Entity
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
        ydk::YLeaf threshold_value; //type: uint32
        ydk::YLeaf warning_only; //type: empty
        ydk::YLeaf withdraw; //type: empty

}; // Native::Router::IsisContainer::Isis::Redistribute::MaximumPrefix


class Native::Router::IsisContainer::Isis::Redistribute::Mobile : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Redistribute::Mobile


class Native::Router::IsisContainer::Isis::Redistribute::Odr : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Odr


class Native::Router::IsisContainer::Isis::Redistribute::Ospf : public ydk::Entity
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

        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf vrf; //type: string
        class Match; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match> match;
                class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Ospf


class Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match


class Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal


class Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External : public ydk::Entity
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
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External


class Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal : public ydk::Entity
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
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal


class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3 : public ydk::Entity
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

        ydk::YLeaf process_id; //type: uint32
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf vrf; //type: string
        class Match; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match> match;
                class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Ospfv3


class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal
        class External; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External
        class NssaExternal; //type: Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match


class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal : public ydk::Entity
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

        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal


class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External : public ydk::Entity
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
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External


class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal : public ydk::Entity
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
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal


class Native::Router::IsisContainer::Isis::Redistribute::Rip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Redistribute::Rip


class Native::Router::IsisContainer::Isis::Redistribute::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Clns; //type: Native::Router::IsisContainer::Isis::Redistribute::Static::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Static::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Static::Clns> clns; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Static::Ip> ip; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Static


class Native::Router::IsisContainer::Isis::Redistribute::Static::Clns : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Redistribute::Static::Clns


class Native::Router::IsisContainer::Isis::Redistribute::Static::Ip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Redistribute::Static::Ip


class Native::Router::IsisContainer::Isis::Redistribute::Vrf : public ydk::Entity
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

        class VrfNm; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm
        class Global; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm> > vrf_nm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global> global;
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf


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
        class Static; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static

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
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static> static_; // presence node
        
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag> > isis_atag;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip> ip; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_


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


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

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
        class Clns; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static::Clns> clns; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static::Ip> ip; // presence node
                class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static::Clns : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static::Clns


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static::Ip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static::Ip


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
        class Static; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static

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
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static> static_; // presence node
        
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag> > isis_atag;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip> ip; // presence node
        
}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_


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


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

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
        class Clns; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns> clns; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip> ip; // presence node
                class MetricType;

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns


class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip


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


class Native::Router::IsisContainer::Isis::Advertise : public ydk::Entity
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

        ydk::YLeaf passive_only; //type: empty

}; // Native::Router::IsisContainer::Isis::Advertise


class Native::Router::IsisContainer::Isis::DefaultInformation : public ydk::Entity
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

        class Originate; //type: Native::Router::IsisContainer::Isis::DefaultInformation::Originate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::DefaultInformation::Originate> originate; // presence node
        
}; // Native::Router::IsisContainer::Isis::DefaultInformation


class Native::Router::IsisContainer::Isis::DefaultInformation::Originate : public ydk::Entity
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

        ydk::YLeaf route_map; //type: string

}; // Native::Router::IsisContainer::Isis::DefaultInformation::Originate


class Native::Router::IsisContainer::Isis::Metric : public ydk::Entity
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

        ydk::YLeaf metric; //type: uint32
        class Metrics; //type: Native::Router::IsisContainer::Isis::Metric::Metrics

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Metric::Metrics> > metrics;
        
}; // Native::Router::IsisContainer::Isis::Metric


class Native::Router::IsisContainer::Isis::Metric::Metrics : public ydk::Entity
{
    public:
        Metrics();
        ~Metrics();

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
        ydk::YLeaf metric; //type: uint32
        class Level;

}; // Native::Router::IsisContainer::Isis::Metric::Metrics


class Native::Router::IsisContainer::Isis::PrcInterval : public ydk::Entity
{
    public:
        PrcInterval();
        ~PrcInterval();

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

}; // Native::Router::IsisContainer::Isis::PrcInterval


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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SpfInterval::Level12> > level_1_2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SpfInterval::Intervals> intervals;
        
}; // Native::Router::IsisContainer::Isis::SpfInterval


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


class Native::Router::IsisContainer::Isis::AreaPassword : public ydk::Entity
{
    public:
        AreaPassword();
        ~AreaPassword();

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
        ydk::YLeaf authenticate; //type: empty
        ydk::YLeaf snp; //type: Snp
        class Snp;

}; // Native::Router::IsisContainer::Isis::AreaPassword


class Native::Router::IsisContainer::Isis::Authentication : public ydk::Entity
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

        class Mode; //type: Native::Router::IsisContainer::Isis::Authentication::Mode
        class KeyChain; //type: Native::Router::IsisContainer::Isis::Authentication::KeyChain
        class SendOnly; //type: Native::Router::IsisContainer::Isis::Authentication::SendOnly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Authentication::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Authentication::KeyChain> key_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Authentication::SendOnly> send_only; // presence node
        
}; // Native::Router::IsisContainer::Isis::Authentication


class Native::Router::IsisContainer::Isis::Authentication::Mode : public ydk::Entity
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

        class Md5; //type: Native::Router::IsisContainer::Isis::Authentication::Mode::Md5
        class Text; //type: Native::Router::IsisContainer::Isis::Authentication::Mode::Text

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Authentication::Mode::Md5> md5; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Authentication::Mode::Text> text; // presence node
        
}; // Native::Router::IsisContainer::Isis::Authentication::Mode


class Native::Router::IsisContainer::Isis::Authentication::Mode::Md5 : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Authentication::Mode::Md5


class Native::Router::IsisContainer::Isis::Authentication::Mode::Text : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Authentication::Mode::Text


class Native::Router::IsisContainer::Isis::Authentication::KeyChain : public ydk::Entity
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
        class KeyChainList; //type: Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList> > key_chain_list;
        
}; // Native::Router::IsisContainer::Isis::Authentication::KeyChain


class Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Authentication::KeyChain::KeyChainList


class Native::Router::IsisContainer::Isis::Authentication::SendOnly : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::Authentication::SendOnly


class Native::Router::IsisContainer::Isis::DistributeList : public ydk::Entity
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

        ydk::YLeaf acl_name; //type: one of string, union
        ydk::YLeaf in; //type: string
        ydk::YLeaf gateway; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf gateway_prefix_in; //type: string
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf route_map_in; //type: empty

}; // Native::Router::IsisContainer::Isis::DistributeList


class Native::Router::IsisContainer::Isis::DomainPassword : public ydk::Entity
{
    public:
        DomainPassword();
        ~DomainPassword();

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
        ydk::YLeaf authenticate; //type: empty
        ydk::YLeaf snp; //type: Snp
        class Snp;

}; // Native::Router::IsisContainer::Isis::DomainPassword


class Native::Router::IsisContainer::Isis::FastFlood : public ydk::Entity
{
    public:
        FastFlood();
        ~FastFlood();

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

}; // Native::Router::IsisContainer::Isis::FastFlood


class Native::Router::IsisContainer::Isis::FastReroute : public ydk::Entity
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

        class LoadSharing; //type: Native::Router::IsisContainer::Isis::FastReroute::LoadSharing
        class PerPrefix; //type: Native::Router::IsisContainer::Isis::FastReroute::PerPrefix
        class RemoteLfa; //type: Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa
        class TieBreak; //type: Native::Router::IsisContainer::Isis::FastReroute::TieBreak

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::LoadSharing> load_sharing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::PerPrefix> per_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa> remote_lfa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::TieBreak> tie_break;
        
}; // Native::Router::IsisContainer::Isis::FastReroute


class Native::Router::IsisContainer::Isis::FastReroute::LoadSharing : public ydk::Entity
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

        class Level1; //type: Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1
        class Level2; //type: Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1> level_1; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2> level_2; // presence node
        
}; // Native::Router::IsisContainer::Isis::FastReroute::LoadSharing


class Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1 : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty

}; // Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level1


class Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2 : public ydk::Entity
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

        ydk::YLeaf disable; //type: empty

}; // Native::Router::IsisContainer::Isis::FastReroute::LoadSharing::Level2


class Native::Router::IsisContainer::Isis::FastReroute::PerPrefix : public ydk::Entity
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

        class Level1; //type: Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1
        class Level2; //type: Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1> level_1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2> level_2;
        
}; // Native::Router::IsisContainer::Isis::FastReroute::PerPrefix


class Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1 : public ydk::Entity
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

        ydk::YLeaf all; //type: empty
        ydk::YLeaf route_map; //type: string

}; // Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level1


class Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2 : public ydk::Entity
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

        ydk::YLeaf all; //type: empty
        ydk::YLeaf route_map; //type: string

}; // Native::Router::IsisContainer::Isis::FastReroute::PerPrefix::Level2


class Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa : public ydk::Entity
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

        class Level1; //type: Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1
        class Level2; //type: Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1> level_1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2> level_2;
        
}; // Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa


class Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1 : public ydk::Entity
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

        class MplsLdp; //type: Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp> mpls_ldp; // presence node
        
}; // Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1


class Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp : public ydk::Entity
{
    public:
        MplsLdp();
        ~MplsLdp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MaximumMetric; //type: Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric> maximum_metric; // presence node
        
}; // Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp


class Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric


class Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2 : public ydk::Entity
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

        class MplsLdp; //type: Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp> mpls_ldp; // presence node
        
}; // Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2


class Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp : public ydk::Entity
{
    public:
        MplsLdp();
        ~MplsLdp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MaximumMetric; //type: Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric> maximum_metric; // presence node
        
}; // Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp


class Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric


class Native::Router::IsisContainer::Isis::FastReroute::TieBreak : public ydk::Entity
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

        class Level1; //type: Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1
        class Level2; //type: Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1> level_1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2> level_2;
        
}; // Native::Router::IsisContainer::Isis::FastReroute::TieBreak


class Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1 : public ydk::Entity
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

        ydk::YLeaf downstream; //type: uint8
        ydk::YLeaf linecard_disjoint; //type: uint8
        ydk::YLeaf lowest_backup_path_metric; //type: uint8
        ydk::YLeaf node_protecting; //type: uint8
        ydk::YLeaf primary_path; //type: uint8
        ydk::YLeaf secondary_path; //type: uint8
        ydk::YLeaf srlg_disjoint; //type: uint8

}; // Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level1


class Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2 : public ydk::Entity
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

        ydk::YLeaf downstream; //type: uint8
        ydk::YLeaf linecard_disjoint; //type: uint8
        ydk::YLeaf lowest_backup_path_metric; //type: uint8
        ydk::YLeaf node_protecting; //type: uint8
        ydk::YLeaf primary_path; //type: uint8
        ydk::YLeaf secondary_path; //type: uint8
        ydk::YLeaf srlg_disjoint; //type: uint8

}; // Native::Router::IsisContainer::Isis::FastReroute::TieBreak::Level2


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


class Native::Router::IsisContainer::Isis::Hello : public ydk::Entity
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

        class Padding; //type: Native::Router::IsisContainer::Isis::Hello::Padding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Router::IsisContainer::Isis::Hello


class Native::Router::IsisContainer::Isis::Hello::Padding : public ydk::Entity
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

        ydk::YLeaf pad_type; //type: PadType
        class PadType;

}; // Native::Router::IsisContainer::Isis::Hello::Padding


class Native::Router::IsisContainer::Isis::Hostname : public ydk::Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: empty

}; // Native::Router::IsisContainer::Isis::Hostname


class Native::Router::IsisContainer::Isis::Ispf : public ydk::Entity
{
    public:
        Ispf();
        ~Ispf();

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
        ydk::YLeaf number; //type: uint32
        class Level;

}; // Native::Router::IsisContainer::Isis::Ispf


class Native::Router::IsisContainer::Isis::LogAdjacencyChanges : public ydk::Entity
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

        ydk::YLeaf all; //type: empty

}; // Native::Router::IsisContainer::Isis::LogAdjacencyChanges


class Native::Router::IsisContainer::Isis::LspFull : public ydk::Entity
{
    public:
        LspFull();
        ~LspFull();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Suppress; //type: Native::Router::IsisContainer::Isis::LspFull::Suppress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LspFull::Suppress> suppress;
        
}; // Native::Router::IsisContainer::Isis::LspFull


class Native::Router::IsisContainer::Isis::LspFull::Suppress : public ydk::Entity
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

        ydk::YLeaf none; //type: empty
        class ExternalInterlevelContainer; //type: Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer> external_interlevel_container;
        
}; // Native::Router::IsisContainer::Isis::LspFull::Suppress


class Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer : public ydk::Entity
{
    public:
        ExternalInterlevelContainer();
        ~ExternalInterlevelContainer();

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

}; // Native::Router::IsisContainer::Isis::LspFull::Suppress::ExternalInterlevelContainer


class Native::Router::IsisContainer::Isis::LspGenInterval : public ydk::Entity
{
    public:
        LspGenInterval();
        ~LspGenInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Intervals; //type: Native::Router::IsisContainer::Isis::LspGenInterval::Intervals
        class IntervalsLevels; //type: Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LspGenInterval::Intervals> intervals;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LspGenInterval::IntervalsLevels> intervals_levels;
        
}; // Native::Router::IsisContainer::Isis::LspGenInterval

class Native::Router::IsisContainer::Isis::Redistribute::Connected::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Eigrp::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip::IsisRedistLevels1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip::IsisRedistLevels2 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Lisp::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Mobile::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Odr::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Ospf::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Rip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Static::Clns::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Static::Ip::MetricType : public ydk::Enum
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

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType : public ydk::Enum
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

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static::Clns::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

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

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType : public ydk::Enum
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

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Clns::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::Metric::Metrics::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::SpfInterval::Level12::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::AreaPassword::Snp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send_only;
        static const ydk::Enum::YLeaf validate;

};

class Native::Router::IsisContainer::Isis::DomainPassword::Snp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send_only;
        static const ydk::Enum::YLeaf validate;

};

class Native::Router::IsisContainer::Isis::Hello::Padding::PadType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf multi_point;
        static const ydk::Enum::YLeaf point_to_point;

};

class Native::Router::IsisContainer::Isis::Ispf::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_1_2;
        static const ydk::Enum::YLeaf level_2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_154_ */

