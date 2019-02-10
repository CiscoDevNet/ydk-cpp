#ifndef _CISCO_IOS_XE_NATIVE_115_
#define _CISCO_IOS_XE_NATIVE_115_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_113.hpp"
#include "Cisco_IOS_XE_native_19.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::Vasiright::Umbrella : public ydk::Entity
{
    public:
        Umbrella();
        ~Umbrella();

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
        ydk::YLeaf in; //type: string

}; // Native::Interface::Vasiright::Umbrella


class Native::Interface::Vasiright::ZoneMember : public ydk::Entity
{
    public:
        ZoneMember();
        ~ZoneMember();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf security; //type: string

}; // Native::Interface::Vasiright::ZoneMember


class Native::Interface::Vasiright::Utd : public ydk::Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::Interface::Vasiright::Utd


class Native::RouteMap : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class RouteMapSeq; //type: Native::RouteMap::RouteMapSeq
        class RouteMapWithoutOrderSeq; //type: Native::RouteMap::RouteMapWithoutOrderSeq

        ydk::YList route_map_seq;
        ydk::YList route_map_without_order_seq;
        
}; // Native::RouteMap


class Native::RouteMap::RouteMapSeq : public ydk::Entity
{
    public:
        RouteMapSeq();
        ~RouteMapSeq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ordering_seq; //type: string
        ydk::YLeaf operation_; //type: Operation_
        ydk::YLeaf sequence; //type: uint16
        ydk::YLeaf description; //type: string
        class Set; //type: Native::RouteMap::RouteMapSeq::Set
        class Match; //type: Native::RouteMap::RouteMapSeq::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set> set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match> match;
                class Operation_;

}; // Native::RouteMap::RouteMapSeq


class Native::RouteMap::RouteMapSeq::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf automatic_tag; //type: empty
        ydk::YLeaf global; //type: empty
        ydk::YLeaf local_preference; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf mpls_label; //type: empty
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf vrf; //type: string
        class AigpMetric; //type: Native::RouteMap::RouteMapSeq::Set::AigpMetric
        class AsPath; //type: Native::RouteMap::RouteMapSeq::Set::AsPath
        class Clns; //type: Native::RouteMap::RouteMapSeq::Set::Clns
        class Community; //type: Native::RouteMap::RouteMapSeq::Set::Community
        class CommList; //type: Native::RouteMap::RouteMapSeq::Set::CommList
        class Dampening; //type: Native::RouteMap::RouteMapSeq::Set::Dampening
        class Default; //type: Native::RouteMap::RouteMapSeq::Set::Default
        class ExtcommList; //type: Native::RouteMap::RouteMapSeq::Set::ExtcommList
        class Extcommunity; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity
        class Interface; //type: Native::RouteMap::RouteMapSeq::Set::Interface
        class Ip; //type: Native::RouteMap::RouteMapSeq::Set::Ip
        class Ipv6; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6
        class Level; //type: Native::RouteMap::RouteMapSeq::Set::Level
        class Lisp; //type: Native::RouteMap::RouteMapSeq::Set::Lisp
        class Metric; //type: Native::RouteMap::RouteMapSeq::Set::Metric
        class Origin; //type: Native::RouteMap::RouteMapSeq::Set::Origin
        class Tag; //type: Native::RouteMap::RouteMapSeq::Set::Tag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::AigpMetric> aigp_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::AsPath> as_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Clns> clns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Community> community;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::CommList> comm_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Dampening> dampening;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::ExtcommList> extcomm_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity> extcommunity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Level> level;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Origin> origin;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Tag> tag;
                class MetricType;

}; // Native::RouteMap::RouteMapSeq::Set


class Native::RouteMap::RouteMapSeq::Set::AigpMetric : public ydk::Entity
{
    public:
        AigpMetric();
        ~AigpMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf igp_metric; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::AigpMetric


class Native::RouteMap::RouteMapSeq::Set::AsPath : public ydk::Entity
{
    public:
        AsPath();
        ~AsPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prepend; //type: Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend
        class Tag; //type: Native::RouteMap::RouteMapSeq::Set::AsPath::Tag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend> prepend;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::AsPath::Tag> tag; // presence node
        
}; // Native::RouteMap::RouteMapSeq::Set::AsPath


class Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend : public ydk::Entity
{
    public:
        Prepend();
        ~Prepend();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsContainer; //type: Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer
        class LastAsCont; //type: Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer> as_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont> last_as_cont;
        
}; // Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend


class Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer : public ydk::Entity
{
    public:
        AsContainer();
        ~AsContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::AsContainer


class Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont : public ydk::Entity
{
    public:
        LastAsCont();
        ~LastAsCont();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_as; //type: uint16

}; // Native::RouteMap::RouteMapSeq::Set::AsPath::Prepend::LastAsCont


class Native::RouteMap::RouteMapSeq::Set::AsPath::Tag : public ydk::Entity
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


}; // Native::RouteMap::RouteMapSeq::Set::AsPath::Tag


class Native::RouteMap::RouteMapSeq::Set::Clns : public ydk::Entity
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

        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Clns::NextHop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Clns::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Clns


class Native::RouteMap::RouteMapSeq::Set::Clns::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

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

}; // Native::RouteMap::RouteMapSeq::Set::Clns::NextHop


class Native::RouteMap::RouteMapSeq::Set::Community : public ydk::Entity
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

        ydk::YLeaf none; //type: empty
        class CommunityWellKnown; //type: Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown> community_well_known;
        
}; // Native::RouteMap::RouteMapSeq::Set::Community


class Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown : public ydk::Entity
{
    public:
        CommunityWellKnown();
        ~CommunityWellKnown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList community_list; //type: list of  one of union, enumeration

}; // Native::RouteMap::RouteMapSeq::Set::Community::CommunityWellKnown


class Native::RouteMap::RouteMapSeq::Set::CommList : public ydk::Entity
{
    public:
        CommList();
        ~CommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf comm_list_standard; //type: uint16
        ydk::YLeaf comm_list_expanded; //type: uint16
        ydk::YLeaf comm_list_name; //type: string
        ydk::YLeaf delete_; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::CommList


class Native::RouteMap::RouteMapSeq::Set::Dampening : public ydk::Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DampeningList; //type: Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList

        ydk::YList dampening_list;
        
}; // Native::RouteMap::RouteMapSeq::Set::Dampening


class Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList : public ydk::Entity
{
    public:
        DampeningList();
        ~DampeningList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf half_life_penalty; //type: uint8
        ydk::YLeaf restart_penalty; //type: uint16
        ydk::YLeaf suppress_penalty; //type: uint16
        ydk::YLeaf max_suppress_penalty; //type: uint8

}; // Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList


class Native::RouteMap::RouteMapSeq::Set::Default : public ydk::Entity
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

        class Interface; //type: Native::RouteMap::RouteMapSeq::Set::Default::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default::Interface> interface;
        
}; // Native::RouteMap::RouteMapSeq::Set::Default


class Native::RouteMap::RouteMapSeq::Set::Default::Interface : public ydk::Entity
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
        class ATMSubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Default::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Default::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::RouteMap::RouteMapSeq::Set::Default::Interface


class Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMSubinterface : public ydk::Entity
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

}; // Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMSubinterface


class Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::RouteMap::RouteMapSeq::Set::Default::Interface::ATMACRsubinterface


class Native::RouteMap::RouteMapSeq::Set::Default::Interface::LISPSubinterface : public ydk::Entity
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

}; // Native::RouteMap::RouteMapSeq::Set::Default::Interface::LISPSubinterface


class Native::RouteMap::RouteMapSeq::Set::Default::Interface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::RouteMap::RouteMapSeq::Set::Default::Interface::PortChannelSubinterface


class Native::RouteMap::RouteMapSeq::Set::ExtcommList : public ydk::Entity
{
    public:
        ExtcommList();
        ~ExtcommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtRange; //type: Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange
        class ExcommListName; //type: Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName

        ydk::YList ext_range;
        ydk::YList excomm_list_name;
        
}; // Native::RouteMap::RouteMapSeq::Set::ExtcommList


class Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange : public ydk::Entity
{
    public:
        ExtRange();
        ~ExtRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf comm_list_num; //type: uint16
        ydk::YLeaf delete_; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange


class Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName : public ydk::Entity
{
    public:
        ExcommListName();
        ~ExcommListName();

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
        ydk::YLeaf delete_; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName


class Native::RouteMap::RouteMapSeq::Set::Extcommunity : public ydk::Entity
{
    public:
        Extcommunity();
        ~Extcommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cost; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost
        class Rt; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt
        class Soo; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo
        class VpnDistinguisher; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost> cost;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt> rt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo> soo;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher> vpn_distinguisher;
        
}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost : public ydk::Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommunityId; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId
        class Igp; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp
        class PreBestpath; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath

        ydk::YList community_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp> igp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath> pre_bestpath;
        
}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId : public ydk::Entity
{
    public:
        CommunityId();
        ~CommunityId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community_id; //type: uint8
        ydk::YLeaf cost_value; //type: uint32

}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp : public ydk::Entity
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

        class CommunityId; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId

        ydk::YList community_id;
        
}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId : public ydk::Entity
{
    public:
        CommunityId();
        ~CommunityId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community_id; //type: uint8
        ydk::YLeaf cost_value; //type: uint32

}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath : public ydk::Entity
{
    public:
        PreBestpath();
        ~PreBestpath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommunityId; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId

        ydk::YList community_id;
        
}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId : public ydk::Entity
{
    public:
        CommunityId();
        ~CommunityId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community_id; //type: uint8
        ydk::YLeaf cost_value; //type: uint32

}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt : public ydk::Entity
{
    public:
        Rt();
        ~Rt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList asn_nn; //type: list of  one of string, enumeration
        class Range; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range> range;
                class AsnNn;

}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range : public ydk::Entity
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

        ydk::YLeaf lower_limit; //type: string
        ydk::YLeaf high_limit; //type: string
        ydk::YLeaf additive; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::Range


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo : public ydk::Entity
{
    public:
        Soo();
        ~Soo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn_nn; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::Soo


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher : public ydk::Entity
{
    public:
        VpnDistinguisher();
        ~VpnDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn_nn; //type: string
        class Range; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range> range;
        
}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher


class Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range : public ydk::Entity
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

        ydk::YLeaf lower_limit; //type: string
        ydk::YLeaf high_limit; //type: string
        ydk::YLeaf additive; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::Extcommunity::VpnDistinguisher::Range


class Native::RouteMap::RouteMapSeq::Set::Interface : public ydk::Entity
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
        class ATMSubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::RouteMap::RouteMapSeq::Set::Interface


class Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface : public ydk::Entity
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

}; // Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface


class Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface


class Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface : public ydk::Entity
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

}; // Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface


class Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface


class Native::RouteMap::RouteMapSeq::Set::Ip : public ydk::Entity
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

        ydk::YLeaf df; //type: uint8
        class Address; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Address
        class Default; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default
        class Global; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Global
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ip::NextHop
        class Precedence; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Precedence
        class QosGroup; //type: Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup
        class Tos; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Tos
        class Vrf; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Global> global;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Precedence> precedence; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup> qos_group; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Tos> tos; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Vrf> vrf;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip


class Native::RouteMap::RouteMapSeq::Set::Ip::Address : public ydk::Entity
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

        ydk::YLeaf prefix_list; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Address


class Native::RouteMap::RouteMapSeq::Set::Ip::Default : public ydk::Entity
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

        class Global; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default::NextHop
        class Vrf; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global> global;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf> vrf;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default


class Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global : public ydk::Entity
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

        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::NextHop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global


class Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

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

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default::Global::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ip::Default::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

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

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf : public ydk::Entity
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

        class Vrfs; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs

        ydk::YList vrfs;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf


class Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

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
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::NextHop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs


class Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

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

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default::Vrf::Vrfs::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ip::Global : public ydk::Entity
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

        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Global


class Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

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

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Global::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ip::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

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
        ydk::YLeaf peer_address; //type: empty
        ydk::YLeaf self; //type: empty
        class Dynamic; //type: Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic
        class Encapsulate; //type: Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate
        class Recursive; //type: Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive
        class VerifyAvailability; //type: Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic> dynamic;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate> encapsulate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive> recursive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability> verify_availability; // presence node
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

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

}; // Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Dynamic


class Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate : public ydk::Entity
{
    public:
        Encapsulate();
        ~Encapsulate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l3vpn; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Encapsulate


class Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive : public ydk::Entity
{
    public:
        Recursive();
        ~Recursive();

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
        ydk::YLeaf global; //type: string
        class Vrf; //type: Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf> vrf;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive


class Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf : public ydk::Entity
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

        class Vrfs; //type: Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs

        ydk::YList vrfs;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf


class Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

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
        ydk::YLeaf ipv4; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs


class Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability : public ydk::Entity
{
    public:
        VerifyAvailability();
        ~VerifyAvailability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4

        ydk::YList ipv4;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability


class Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4 : public ydk::Entity
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
        ydk::YLeaf range; //type: uint16
        ydk::YLeaf track; //type: uint16

}; // Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4


class Native::RouteMap::RouteMapSeq::Set::Ip::Precedence : public ydk::Entity
{
    public:
        Precedence();
        ~Precedence();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf precedence_value; //type: uint8
        ydk::YLeaf precedence_fields; //type: PrecedenceFields
        class PrecedenceFields;

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Precedence


class Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup : public ydk::Entity
{
    public:
        QosGroup();
        ~QosGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qos_id; //type: uint8

}; // Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup


class Native::RouteMap::RouteMapSeq::Set::Ip::Tos : public ydk::Entity
{
    public:
        Tos();
        ~Tos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_value; //type: uint8
        ydk::YLeaf tos_fields; //type: TosFields
        class TosFields;

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Tos


class Native::RouteMap::RouteMapSeq::Set::Ip::Vrf : public ydk::Entity
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

        class Vrfs; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs

        ydk::YList vrfs;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Vrf


class Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

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
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs


class Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

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

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ipv6 : public ydk::Entity
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

        ydk::YLeaf precedence; //type: uint8
        class Address; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Address
        class Default; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default
        class Global; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Global
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop
        class Bvrf; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Global> global;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop> next_hop;
        ydk::YList bvrf;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Address : public ydk::Entity
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

        ydk::YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Address


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default : public ydk::Entity
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

        class Global; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Global
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop
        class Dvrf; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Global> global;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop> next_hop;
        ydk::YList dvrf;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Global : public ydk::Entity
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

        ydk::YLeaf next_hop; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Global


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_address; //type: string
        class Ipv6s; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::Ipv6s

        ydk::YList ipv6s;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::Ipv6s : public ydk::Entity
{
    public:
        Ipv6s();
        ~Ipv6s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::NextHop::Ipv6s


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf : public ydk::Entity
{
    public:
        Dvrf();
        ~Dvrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dvrf; //type: string
        class Dvrf0; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::Dvrf0

        ydk::YList dvrf0;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::Dvrf0 : public ydk::Entity
{
    public:
        Dvrf0();
        ~Dvrf0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dvrf0; //type: string
        ydk::YLeaf next_hop; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default::Dvrf::Dvrf0


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Global : public ydk::Entity
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

        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Global


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf verify_availability; //type: string
        class NhIpv6; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6

        ydk::YList nh_ipv6;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6 : public ydk::Entity
{
    public:
        NhIpv6();
        ~NhIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nh_ipv6; //type: string
        ydk::YLeaf nh_ipv60; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6


class Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_address; //type: empty
        ydk::YLeaf recursive; //type: string
        class NhaIpv6; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6
        class Encapsulate; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate
        class VerifyAvailability; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability

        ydk::YList nha_ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate> encapsulate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability> verify_availability;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6 : public ydk::Entity
{
    public:
        NhaIpv6();
        ~NhaIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nha_ipv6; //type: string
        class NhaIpv60; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60

        ydk::YList nha_ipv60;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6


class Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60 : public ydk::Entity
{
    public:
        NhaIpv60();
        ~NhaIpv60();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nha_ipv60; //type: string
        ydk::YLeaf nh_ipv6; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60


class Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate : public ydk::Entity
{
    public:
        Encapsulate();
        ~Encapsulate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l3vpn; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate


class Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability : public ydk::Entity
{
    public:
        VerifyAvailability();
        ~VerifyAvailability();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VaIpv6; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6

        ydk::YList va_ipv6;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability


class Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6 : public ydk::Entity
{
    public:
        VaIpv6();
        ~VaIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf va_ipv6; //type: string
        ydk::YLeaf seq_nh; //type: uint16

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf : public ydk::Entity
{
    public:
        Bvrf();
        ~Bvrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bvrf; //type: string
        class Bvrf0; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0

        ydk::YList bvrf0;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0 : public ydk::Entity
{
    public:
        Bvrf0();
        ~Bvrf0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bvrf0; //type: string
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bipv6; //type: string
        ydk::YLeaf verify_availability; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0::NextHop


class Native::RouteMap::RouteMapSeq::Set::Level : public ydk::Entity
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

        ydk::YLeaf level_1; //type: empty
        ydk::YLeaf level_1_2; //type: empty
        ydk::YLeaf level_2; //type: empty
        ydk::YLeaf nssa_only; //type: empty

}; // Native::RouteMap::RouteMapSeq::Set::Level


class Native::RouteMap::RouteMapSeq::Set::Lisp : public ydk::Entity
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

        ydk::YLeaf locator_set; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Lisp


class Native::RouteMap::RouteMapSeq::Set::Metric : public ydk::Entity
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

        ydk::YLeaf metric_change; //type: string
        class Values; //type: Native::RouteMap::RouteMapSeq::Set::Metric::Values

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Metric::Values> values;
        
}; // Native::RouteMap::RouteMapSeq::Set::Metric


class Native::RouteMap::RouteMapSeq::Set::Metric::Values : public ydk::Entity
{
    public:
        Values();
        ~Values();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf delay; //type: string
        ydk::YLeaf reliability; //type: uint8
        ydk::YLeaf loading; //type: uint8
        ydk::YLeaf mtu; //type: uint32

}; // Native::RouteMap::RouteMapSeq::Set::Metric::Values


class Native::RouteMap::RouteMapSeq::Set::Origin : public ydk::Entity
{
    public:
        Origin();
        ~Origin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf origin_value; //type: OriginValue
        ydk::YLeaf egp; //type: uint32
        class OriginValue;

}; // Native::RouteMap::RouteMapSeq::Set::Origin


class Native::RouteMap::RouteMapSeq::Set::Tag : public ydk::Entity
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

        ydk::YLeaf tag_val; //type: uint32
        ydk::YLeaf tag_ipv4; //type: string

}; // Native::RouteMap::RouteMapSeq::Set::Tag


class Native::RouteMap::RouteMapSeq::Match : public ydk::Entity
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

        ydk::YLeaf mpls_label; //type: empty
        ydk::YLeaf track; //type: uint16
        class AdditionalPaths; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths
        class AsPath; //type: Native::RouteMap::RouteMapSeq::Match::AsPath
        class Clns; //type: Native::RouteMap::RouteMapSeq::Match::Clns
        class Community; //type: Native::RouteMap::RouteMapSeq::Match::Community
        class Extcommunity; //type: Native::RouteMap::RouteMapSeq::Match::Extcommunity
        class Interface; //type: Native::RouteMap::RouteMapSeq::Match::Interface
        class Ip; //type: Native::RouteMap::RouteMapSeq::Match::Ip
        class Ipv6; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6
        class Length; //type: Native::RouteMap::RouteMapSeq::Match::Length
        class LocalPreference; //type: Native::RouteMap::RouteMapSeq::Match::LocalPreference
        class MdtGroup; //type: Native::RouteMap::RouteMapSeq::Match::MdtGroup
        class Metric; //type: Native::RouteMap::RouteMapSeq::Match::Metric
        class PolicyList; //type: Native::RouteMap::RouteMapSeq::Match::PolicyList
        class RouteType; //type: Native::RouteMap::RouteMapSeq::Match::RouteType
        class Rpki; //type: Native::RouteMap::RouteMapSeq::Match::Rpki
        class SourceProtocol; //type: Native::RouteMap::RouteMapSeq::Match::SourceProtocol
        class Tag; //type: Native::RouteMap::RouteMapSeq::Match::Tag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AsPath> as_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Clns> clns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Community> community;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Extcommunity> extcommunity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Length> length;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::LocalPreference> local_preference;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::MdtGroup> mdt_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::PolicyList> policy_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::RouteType> route_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Rpki> rpki;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::SourceProtocol> source_protocol; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Tag> tag;
        
}; // Native::RouteMap::RouteMapSeq::Match


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths : public ydk::Entity
{
    public:
        AdditionalPaths();
        ~AdditionalPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdvertiseSet; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet> advertise_set;
        
}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet : public ydk::Entity
{
    public:
        AdvertiseSet();
        ~AdvertiseSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All
        class Best; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best
        class BestRange; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange
        class GroupBest; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange> best_range;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest> group_best; // presence node
        
}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All : public ydk::Entity
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

        ydk::YLeaf best; //type: uint8
        ydk::YLeaf best_range; //type: uint8
        class GroupBest; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest> group_best; // presence node
        
}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf best; //type: empty
        ydk::YLeaf best_range; //type: empty

}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::All::GroupBest


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best : public ydk::Entity
{
    public:
        Best();
        ~Best();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BestRange; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange

        ydk::YList best_range;
        
}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange : public ydk::Entity
{
    public:
        BestRange();
        ~BestRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf best_range; //type: uint8
        ydk::YLeaf all; //type: empty
        ydk::YLeaf group_best; //type: empty

}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::Best::BestRange


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange : public ydk::Entity
{
    public:
        BestRange();
        ~BestRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdvPath; //type: Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath

        ydk::YList adv_path;
        
}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath : public ydk::Entity
{
    public:
        AdvPath();
        ~AdvPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adv_path; //type: uint8
        ydk::YLeaf adv_path0; //type: uint8

}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::BestRange::AdvPath


class Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest : public ydk::Entity
{
    public:
        GroupBest();
        ~GroupBest();

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
        ydk::YLeaf best; //type: uint8
        ydk::YLeaf best_range; //type: uint8

}; // Native::RouteMap::RouteMapSeq::Match::AdditionalPaths::AdvertiseSet::GroupBest


class Native::RouteMap::RouteMapSeq::Match::AsPath : public ydk::Entity
{
    public:
        AsPath();
        ~AsPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList access_list; //type: list of  uint16

}; // Native::RouteMap::RouteMapSeq::Match::AsPath


class Native::RouteMap::RouteMapSeq::Match::Clns : public ydk::Entity
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

        ydk::YLeafList name; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Clns


class Native::RouteMap::RouteMapSeq::Match::Community : public ydk::Entity
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

        ydk::YLeafList name; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Community


class Native::RouteMap::RouteMapSeq::Match::Extcommunity : public ydk::Entity
{
    public:
        Extcommunity();
        ~Extcommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList name; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Extcommunity


class Native::RouteMap::RouteMapSeq::Match::Interface : public ydk::Entity
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

        ydk::YLeafList interface; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Interface


class Native::RouteMap::RouteMapSeq::Match::Ip : public ydk::Entity
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

        class Address; //type: Native::RouteMap::RouteMapSeq::Match::Ip::Address
        class Flowspec; //type: Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Match::Ip::NextHop
        class RedistributionSource; //type: Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource
        class RouteSource; //type: Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec> flowspec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource> redistribution_source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource> route_source;
        
}; // Native::RouteMap::RouteMapSeq::Match::Ip


class Native::RouteMap::RouteMapSeq::Match::Ip::Address : public ydk::Entity
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

        ydk::YLeafList access_list; //type: list of  one of uint16, string
        ydk::YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::Address


class Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec : public ydk::Entity
{
    public:
        Flowspec();
        ~Flowspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestPfx; //type: Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx
        class SrcPfx; //type: Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx> dest_pfx;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx> src_pfx;
        
}; // Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec


class Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx : public ydk::Entity
{
    public:
        DestPfx();
        ~DestPfx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList access_list; //type: list of  one of uint16, string
        ydk::YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::DestPfx


class Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx : public ydk::Entity
{
    public:
        SrcPfx();
        ~SrcPfx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList access_list; //type: list of  one of uint16, string
        ydk::YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::Flowspec::SrcPfx


class Native::RouteMap::RouteMapSeq::Match::Ip::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList access_list; //type: list of  one of uint16, string
        ydk::YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::NextHop


class Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource : public ydk::Entity
{
    public:
        RedistributionSource();
        ~RedistributionSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList access_list; //type: list of  one of uint16, string
        ydk::YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::RedistributionSource


class Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource : public ydk::Entity
{
    public:
        RouteSource();
        ~RouteSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList access_list; //type: list of  one of uint16, string
        ydk::YLeafList prefix_list; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Ip::RouteSource


class Native::RouteMap::RouteMapSeq::Match::Ipv6 : public ydk::Entity
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

        class Address; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::Address
        class Flowspec; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop
        class RouteSource; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec> flowspec;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource> route_source;
        
}; // Native::RouteMap::RouteMapSeq::Match::Ipv6


class Native::RouteMap::RouteMapSeq::Match::Ipv6::Address : public ydk::Entity
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

        ydk::YLeaf access_list; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::Address


class Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec : public ydk::Entity
{
    public:
        Flowspec();
        ~Flowspec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestPfx; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx
        class SrcPfx; //type: Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx> dest_pfx;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx> src_pfx;
        
}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec


class Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx : public ydk::Entity
{
    public:
        DestPfx();
        ~DestPfx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::DestPfx


class Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx : public ydk::Entity
{
    public:
        SrcPfx();
        ~SrcPfx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::Flowspec::SrcPfx


class Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::NextHop


class Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource : public ydk::Entity
{
    public:
        RouteSource();
        ~RouteSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list; //type: string
        ydk::YLeaf prefix_list; //type: string

}; // Native::RouteMap::RouteMapSeq::Match::Ipv6::RouteSource


class Native::RouteMap::RouteMapSeq::Match::Length : public ydk::Entity
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

        class Lengths; //type: Native::RouteMap::RouteMapSeq::Match::Length::Lengths

        ydk::YList lengths;
        
}; // Native::RouteMap::RouteMapSeq::Match::Length


class Native::RouteMap::RouteMapSeq::Match::Length::Lengths : public ydk::Entity
{
    public:
        Lengths();
        ~Lengths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_len; //type: uint32
        ydk::YLeaf max_len; //type: uint32

}; // Native::RouteMap::RouteMapSeq::Match::Length::Lengths


class Native::RouteMap::RouteMapSeq::Match::LocalPreference : public ydk::Entity
{
    public:
        LocalPreference();
        ~LocalPreference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList values; //type: list of  uint32

}; // Native::RouteMap::RouteMapSeq::Match::LocalPreference


class Native::RouteMap::RouteMapSeq::Match::MdtGroup : public ydk::Entity
{
    public:
        MdtGroup();
        ~MdtGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList name; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::MdtGroup


class Native::RouteMap::RouteMapSeq::Match::Metric : public ydk::Entity
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

        ydk::YLeaf metric_value; //type: string
        ydk::YLeaf external; //type: string

}; // Native::RouteMap::RouteMapSeq::Match::Metric


class Native::RouteMap::RouteMapSeq::Match::PolicyList : public ydk::Entity
{
    public:
        PolicyList();
        ~PolicyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList policy_map_names; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::PolicyList


class Native::RouteMap::RouteMapSeq::Match::RouteType : public ydk::Entity
{
    public:
        RouteType();
        ~RouteType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf internal; //type: empty
        ydk::YLeaf level_1; //type: empty
        ydk::YLeaf level_2; //type: empty
        ydk::YLeaf local; //type: empty
        class External; //type: Native::RouteMap::RouteMapSeq::Match::RouteType::External
        class NssaExternal; //type: Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::RouteType::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal> nssa_external; // presence node
        
}; // Native::RouteMap::RouteMapSeq::Match::RouteType


class Native::RouteMap::RouteMapSeq::Match::RouteType::External : public ydk::Entity
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

        ydk::YLeaf type_1; //type: empty
        ydk::YLeaf type_2; //type: empty

}; // Native::RouteMap::RouteMapSeq::Match::RouteType::External


class Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal : public ydk::Entity
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

        ydk::YLeaf type_1; //type: empty
        ydk::YLeaf type_2; //type: empty

}; // Native::RouteMap::RouteMapSeq::Match::RouteType::NssaExternal


class Native::RouteMap::RouteMapSeq::Match::Rpki : public ydk::Entity
{
    public:
        Rpki();
        ~Rpki();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf invalid; //type: empty
        ydk::YLeaf not_found; //type: empty
        ydk::YLeaf valid; //type: empty

}; // Native::RouteMap::RouteMapSeq::Match::Rpki


class Native::RouteMap::RouteMapSeq::Match::SourceProtocol : public ydk::Entity
{
    public:
        SourceProtocol();
        ~SourceProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connected; //type: empty
        ydk::YLeaf isis; //type: empty
        ydk::YLeaf lisp; //type: empty
        ydk::YLeaf mobile; //type: empty
        ydk::YLeaf rip; //type: empty
        ydk::YLeaf static_; //type: empty
        ydk::YLeafList bgp; //type: list of  one of uint32, string
        ydk::YLeafList eigrp; //type: list of  string
        ydk::YLeafList ospf; //type: list of  string
        ydk::YLeafList ospfv3; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::SourceProtocol


class Native::RouteMap::RouteMapSeq::Match::Tag : public ydk::Entity
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

        ydk::YLeafList tag_value; //type: list of  uint32
        ydk::YLeafList ipv4_address; //type: list of  string
        class List; //type: Native::RouteMap::RouteMapSeq::Match::Tag::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Match::Tag::List> list;
        
}; // Native::RouteMap::RouteMapSeq::Match::Tag


class Native::RouteMap::RouteMapSeq::Match::Tag::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList tag_names; //type: list of  string

}; // Native::RouteMap::RouteMapSeq::Match::Tag::List


class Native::RouteMap::RouteMapWithoutOrderSeq : public ydk::Entity
{
    public:
        RouteMapWithoutOrderSeq();
        ~RouteMapWithoutOrderSeq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seq_no; //type: uint16
        ydk::YLeaf operation_; //type: Operation_
        ydk::YLeaf description; //type: string
        class Set; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set
        class Match; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set> set;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Match> match;
                class Operation_;

}; // Native::RouteMap::RouteMapWithoutOrderSeq


class Native::RouteMap::RouteMapWithoutOrderSeq::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf automatic_tag; //type: empty
        ydk::YLeaf global; //type: empty
        ydk::YLeaf local_preference; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf mpls_label; //type: empty
        ydk::YLeaf weight; //type: uint32
        ydk::YLeaf traffic_index; //type: uint8
        ydk::YLeaf vrf; //type: string
        class AigpMetric; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::AigpMetric
        class AsPath; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath
        class Clns; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::Clns
        class Community; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::Community
        class CommList; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::CommList
        class Dampening; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening
        class Default; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default
        class ExtcommList; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList
        class Extcommunity; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity
        class Interface; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface
        class Ip; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip
        class Ipv6; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6
        class Level; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::Level
        class Lisp; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::Lisp
        class Metric; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric
        class Origin; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::Origin
        class Tag; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::Tag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::AigpMetric> aigp_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath> as_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::Clns> clns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::Community> community;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::CommList> comm_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::Dampening> dampening;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::ExtcommList> extcomm_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::Extcommunity> extcommunity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::Level> level;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::Origin> origin;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::Tag> tag;
                class MetricType;

}; // Native::RouteMap::RouteMapWithoutOrderSeq::Set


class Native::RouteMap::RouteMapWithoutOrderSeq::Set::AigpMetric : public ydk::Entity
{
    public:
        AigpMetric();
        ~AigpMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf igp_metric; //type: empty

}; // Native::RouteMap::RouteMapWithoutOrderSeq::Set::AigpMetric


class Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath : public ydk::Entity
{
    public:
        AsPath();
        ~AsPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prepend; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath::Prepend
        class Tag; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath::Tag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath::Prepend> prepend;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath::Tag> tag; // presence node
        
}; // Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath


class Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath::Prepend : public ydk::Entity
{
    public:
        Prepend();
        ~Prepend();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsContainer; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath::Prepend::AsContainer
        class LastAsCont; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath::Prepend::LastAsCont

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath::Prepend::AsContainer> as_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath::Prepend::LastAsCont> last_as_cont;
        
}; // Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath::Prepend


class Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath::Prepend::AsContainer : public ydk::Entity
{
    public:
        AsContainer();
        ~AsContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: string

}; // Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath::Prepend::AsContainer


class Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath::Prepend::LastAsCont : public ydk::Entity
{
    public:
        LastAsCont();
        ~LastAsCont();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_as; //type: uint16

}; // Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath::Prepend::LastAsCont


class Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath::Tag : public ydk::Entity
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


}; // Native::RouteMap::RouteMapWithoutOrderSeq::Set::AsPath::Tag


class Native::RouteMap::RouteMapWithoutOrderSeq::Set::Clns : public ydk::Entity
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

        class NextHop; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::Clns::NextHop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::Clns::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapWithoutOrderSeq::Set::Clns


class Native::RouteMap::RouteMapWithoutOrderSeq::Set::Clns::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

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

}; // Native::RouteMap::RouteMapWithoutOrderSeq::Set::Clns::NextHop


class Native::RouteMap::RouteMapWithoutOrderSeq::Set::Community : public ydk::Entity
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

        ydk::YLeaf none; //type: empty
        class CommunityWellKnown; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Set::Community::CommunityWellKnown

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Set::Community::CommunityWellKnown> community_well_known;
        
}; // Native::RouteMap::RouteMapWithoutOrderSeq::Set::Community

class Native::RouteMap::RouteMapSeq::Operation_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::RouteMap::RouteMapSeq::Set::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf type_1;
        static const ydk::Enum::YLeaf type_2;

};

class Native::RouteMap::RouteMapSeq::Set::Extcommunity::Rt::AsnNn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf additive;

};

class Native::RouteMap::RouteMapSeq::Set::Ip::Precedence::PrecedenceFields : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf routine;

};

class Native::RouteMap::RouteMapSeq::Set::Ip::Tos::TosFields : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max_reliability;
        static const ydk::Enum::YLeaf max_throughput;
        static const ydk::Enum::YLeaf min_delay;
        static const ydk::Enum::YLeaf min_monetary_cost;
        static const ydk::Enum::YLeaf normal;

};

class Native::RouteMap::RouteMapSeq::Set::Origin::OriginValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf incomplete;

};

class Native::RouteMap::RouteMapWithoutOrderSeq::Operation_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

};

class Native::RouteMap::RouteMapWithoutOrderSeq::Set::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf type_1;
        static const ydk::Enum::YLeaf type_2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_115_ */

