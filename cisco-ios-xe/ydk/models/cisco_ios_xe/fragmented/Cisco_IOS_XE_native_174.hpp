#ifndef _CISCO_IOS_XE_NATIVE_174_
#define _CISCO_IOS_XE_NATIVE_174_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_173.hpp"
#include "Cisco_IOS_XE_native_95.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf default_; //type: empty
        ydk::YLeaf interface; //type: string

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap
        class Connected; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected
        class Bgp; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp
        class Eigrp; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp
        class Isis; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis
        class IsoIgrp; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp
        class Mobile; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile
        class Odr; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr
        class Ospf; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf
        class Static_; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_
        class Rip_; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf> > ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_> rip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap> rip_metric_route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_> static_; // presence node
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp : public ydk::Entity
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

        ydk::YLeaf as_number; //type: one of uint32, string
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp : public ydk::Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis : public ydk::Entity
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

        class IsisArea; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea
        class RipIsisRedist; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea> > isis_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist> rip_isis_redist;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea : public ydk::Entity
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
        class RipIsisRedist; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist> rip_isis_redist;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist : public ydk::Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutes;

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist : public ydk::Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutes;

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp : public ydk::Entity
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

        class IsoigrpList; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList> > isoigrp_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList : public ydk::Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf process_id; //type: uint16
        class Vrf; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf
        class Match; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap> rip_metric_route_map;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf> > vrf;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External : public ydk::Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal : public ydk::Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_ : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_ : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Basic; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic> basic;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic : public ydk::Entity
{
    public:
        Basic();
        ~Basic();

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

        ydk::YLeaf updates; //type: uint32
        ydk::YLeaf invalid; //type: uint32
        ydk::YLeaf holddown; //type: uint32
        ydk::YLeaf flush; //type: uint32
        ydk::YLeaf sleep; //type: uint32

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Min; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min> min;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf across_interfaces; //type: empty

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min


class Native::Router::Rip::AddressFamily::Ipv4::Vrf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf auto_summary; //type: empty
        ydk::YLeaf maximum_paths; //type: uint8
        ydk::YLeaf validate_update_source; //type: boolean
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf version; //type: uint8
        class Neighbor; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor
        class Network; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network
        class DefaultInformation; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation
        class Distance; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance
        class DistributeList; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList
        class OffsetList; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList
        class Redistribute; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute
        class Timers; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList> distribute_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor> > neighbor;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network> > network;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList> > offset_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers> timers;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation : public ydk::Entity
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

        class Originate; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate> originate; // presence node
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance : public ydk::Entity
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

        ydk::YLeaf distance_leaf; //type: uint8
        class DistanceList; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList> > distance_list;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList : public ydk::Entity
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

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf ip; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList : public ydk::Entity
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

        class Accesslist; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist
        class AccesslistIfname; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname
        class AccesslistPrefixGateway; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway
        class AccesslistPrefixGatewayIfname; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist> > accesslist;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname> > accesslist_ifname;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway> > accesslist_prefix_gateway;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname> > accesslist_prefix_gateway_ifname;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList : public ydk::Entity
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

        ydk::YLeaf in_out; //type: OffsetListInOutType
        ydk::YLeaf offset; //type: uint8

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap
        class Connected; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected
        class Bgp; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp
        class Eigrp; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp
        class Isis; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis
        class IsoIgrp; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp
        class Mobile; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile
        class Odr; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr
        class Ospf; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf
        class Static_; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_
        class Rip_; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf> > ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_> rip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap> rip_metric_route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_> static_; // presence node
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp : public ydk::Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp : public ydk::Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis : public ydk::Entity
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

        class IsisArea; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea
        class RipIsisRedist; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea> > isis_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist> rip_isis_redist;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea : public ydk::Entity
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
        class RipIsisRedist; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist> rip_isis_redist;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist : public ydk::Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutes;

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist : public ydk::Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutes;

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp : public ydk::Entity
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

        class IsoigrpList; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList> > isoigrp_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList : public ydk::Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf : public ydk::Entity
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
        class Vrf_; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_
        class Match; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap> rip_metric_route_map;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_> > vrf;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External : public ydk::Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal : public ydk::Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_ : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_ : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_ : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric : public ydk::Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers : public ydk::Entity
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

        class Basic; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic> basic;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic : public ydk::Entity
{
    public:
        Basic();
        ~Basic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf updates; //type: uint32
        ydk::YLeaf invalid; //type: uint32
        ydk::YLeaf holddown; //type: uint32
        ydk::YLeaf flush; //type: uint32
        ydk::YLeaf sleep; //type: uint32

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic


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


class Native::Router::Rip::Default_ : public ydk::Entity
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

        ydk::YLeaf auto_summary; //type: empty
        ydk::YLeaf maximum_paths; //type: uint8
        ydk::YLeaf validate_update_source; //type: boolean
        ydk::YLeaf default_metric; //type: empty
        ydk::YLeaf flash_update_threshold; //type: empty
        ydk::YLeaf input_queue; //type: empty
        ydk::YLeaf output_delay; //type: empty
        ydk::YLeaf version; //type: empty
        class AddressFamily; //type: Native::Router::Rip::Default_::AddressFamily
        class Neighbor; //type: Native::Router::Rip::Default_::Neighbor
        class Network; //type: Native::Router::Rip::Default_::Network
        class DefaultInformation; //type: Native::Router::Rip::Default_::DefaultInformation
        class Distance; //type: Native::Router::Rip::Default_::Distance
        class DistributeList; //type: Native::Router::Rip::Default_::DistributeList
        class OffsetList; //type: Native::Router::Rip::Default_::OffsetList
        class PassiveInterface; //type: Native::Router::Rip::Default_::PassiveInterface
        class Disable; //type: Native::Router::Rip::Default_::Disable
        class Redistribute; //type: Native::Router::Rip::Default_::Redistribute
        class Timers; //type: Native::Router::Rip::Default_::Timers
        class TrafficShare; //type: Native::Router::Rip::Default_::TrafficShare

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::AddressFamily> address_family;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Disable> disable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::DistributeList> distribute_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Neighbor> > neighbor;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Network> > network;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::OffsetList> > offset_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::PassiveInterface> passive_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::TrafficShare> traffic_share;
        
}; // Native::Router::Rip::Default_


class Native::Router::Rip::Default_::AddressFamily : public ydk::Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

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

        class Ipv4; //type: Native::Router::Rip::Default_::AddressFamily::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::AddressFamily::Ipv4> ipv4; // presence node
        
}; // Native::Router::Rip::Default_::AddressFamily


class Native::Router::Rip::Default_::AddressFamily::Ipv4 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf unicast; //type: empty
        class Vrf; //type: Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf> > vrf;
        
}; // Native::Router::Rip::Default_::AddressFamily::Ipv4


class Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string

}; // Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf


class Native::Router::Rip::Default_::DefaultInformation : public ydk::Entity
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

        ydk::YLeaf originate; //type: empty

}; // Native::Router::Rip::Default_::DefaultInformation


class Native::Router::Rip::Default_::Disable : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class PassiveInterface; //type: Native::Router::Rip::Default_::Disable::PassiveInterface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Disable::PassiveInterface> > passive_interface;
        
}; // Native::Router::Rip::Default_::Disable


class Native::Router::Rip::Default_::Disable::PassiveInterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interface; //type: string

}; // Native::Router::Rip::Default_::Disable::PassiveInterface


class Native::Router::Rip::Default_::Distance : public ydk::Entity
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
        class DistanceList; //type: Native::Router::Rip::Default_::Distance::DistanceList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Distance::DistanceList> > distance_list;
        
}; // Native::Router::Rip::Default_::Distance


class Native::Router::Rip::Default_::Distance::DistanceList : public ydk::Entity
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
        ydk::YLeaf access_list; //type: one of uint8, uint16

}; // Native::Router::Rip::Default_::Distance::DistanceList


class Native::Router::Rip::Default_::DistributeList : public ydk::Entity
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

        class Accesslist; //type: Native::Router::Rip::Default_::DistributeList::Accesslist
        class AccesslistIfname; //type: Native::Router::Rip::Default_::DistributeList::AccesslistIfname
        class AccesslistPrefixGateway; //type: Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway
        class AccesslistPrefixGatewayIfname; //type: Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::DistributeList::Accesslist> > accesslist;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::DistributeList::AccesslistIfname> > accesslist_ifname;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway> > accesslist_prefix_gateway;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname> > accesslist_prefix_gateway_ifname;
        
}; // Native::Router::Rip::Default_::DistributeList


class Native::Router::Rip::Default_::DistributeList::Accesslist : public ydk::Entity
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
        ydk::YLeaf id; //type: uint32

}; // Native::Router::Rip::Default_::DistributeList::Accesslist


class Native::Router::Rip::Default_::DistributeList::AccesslistIfname : public ydk::Entity
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
        ydk::YLeaf id; //type: uint32

}; // Native::Router::Rip::Default_::DistributeList::AccesslistIfname


class Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway : public ydk::Entity
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

}; // Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway


class Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname : public ydk::Entity
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

}; // Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname


class Native::Router::Rip::Default_::Neighbor : public ydk::Entity
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

}; // Native::Router::Rip::Default_::Neighbor


class Native::Router::Rip::Default_::Network : public ydk::Entity
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

}; // Native::Router::Rip::Default_::Network


class Native::Router::Rip::Default_::OffsetList : public ydk::Entity
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
        ydk::YLeaf id; //type: uint32

}; // Native::Router::Rip::Default_::OffsetList


class Native::Router::Rip::Default_::PassiveInterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf default_; //type: empty
        ydk::YLeaf interface; //type: string

}; // Native::Router::Rip::Default_::PassiveInterface


class Native::Router::Rip::Default_::Redistribute : public ydk::Entity
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

        class Connected; //type: Native::Router::Rip::Default_::Redistribute::Connected
        class Bgp; //type: Native::Router::Rip::Default_::Redistribute::Bgp
        class Eigrp; //type: Native::Router::Rip::Default_::Redistribute::Eigrp
        class Isis; //type: Native::Router::Rip::Default_::Redistribute::Isis
        class IsoIgrp; //type: Native::Router::Rip::Default_::Redistribute::IsoIgrp
        class Mobile; //type: Native::Router::Rip::Default_::Redistribute::Mobile
        class Odr; //type: Native::Router::Rip::Default_::Redistribute::Odr
        class Ospf; //type: Native::Router::Rip::Default_::Redistribute::Ospf
        class Static_; //type: Native::Router::Rip::Default_::Redistribute::Static_
        class Rip_; //type: Native::Router::Rip::Default_::Redistribute::Rip_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Bgp> > bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Ospf> > ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Rip_> rip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Static_> static_; // presence node
        
}; // Native::Router::Rip::Default_::Redistribute


class Native::Router::Rip::Default_::Redistribute::Bgp : public ydk::Entity
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

        ydk::YLeaf as_number; //type: one of uint32, string
        class RipMetricRouteMap; //type: Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Default_::Redistribute::Bgp


class Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap : public ydk::Entity
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
        class Metric; //type: Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap

class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway::PrefixGateway : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf prefix;
        static const ydk::Enum::YLeaf gateway;
        static const ydk::Enum::YLeaf route_map;

};

class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname::PrefixGateway : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf prefix;
        static const ydk::Enum::YLeaf gateway;
        static const ydk::Enum::YLeaf route_map;

};

class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway::PrefixGateway : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf prefix;
        static const ydk::Enum::YLeaf gateway;
        static const ydk::Enum::YLeaf route_map;

};

class Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname::PrefixGateway : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf prefix;
        static const ydk::Enum::YLeaf gateway;
        static const ydk::Enum::YLeaf route_map;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_174_ */

