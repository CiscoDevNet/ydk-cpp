#ifndef _CISCO_IOS_XE_NATIVE_95_
#define _CISCO_IOS_XE_NATIVE_95_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_94.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


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

        ydk::YLeafList values; //type: list of  string

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
        ydk::YLeaf metric; //type: string
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
        class Default_; //type: Native::RouteMap::RouteMapSeq::Set::Default_
        class ExtcommList; //type: Native::RouteMap::RouteMapSeq::Set::ExtcommList
        class Extcommunity; //type: Native::RouteMap::RouteMapSeq::Set::Extcommunity
        class Interface; //type: Native::RouteMap::RouteMapSeq::Set::Interface
        class Ip; //type: Native::RouteMap::RouteMapSeq::Set::Ip
        class Ipv6; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6
        class Level; //type: Native::RouteMap::RouteMapSeq::Set::Level
        class Lisp; //type: Native::RouteMap::RouteMapSeq::Set::Lisp
        class Origin; //type: Native::RouteMap::RouteMapSeq::Set::Origin
        class Tag; //type: Native::RouteMap::RouteMapSeq::Set::Tag

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::AigpMetric> aigp_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::AsPath> as_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Clns> clns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::CommList> comm_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Community> community;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Dampening> dampening;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::ExtcommList> extcomm_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity> extcommunity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Level> level;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Lisp> lisp;
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Dampening::DampeningList> > dampening_list;
        
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


class Native::RouteMap::RouteMapSeq::Set::Default_ : public ydk::Entity
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

        class Interface; //type: Native::RouteMap::RouteMapSeq::Set::Default_::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default_::Interface> interface;
        
}; // Native::RouteMap::RouteMapSeq::Set::Default_


class Native::RouteMap::RouteMapSeq::Set::Default_::Interface : public ydk::Entity
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
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
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
        class ATMSubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::RouteMap::RouteMapSeq::Set::Default_::Interface


class Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMACRsubinterface


class Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMSubinterface : public ydk::Entity
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

}; // Native::RouteMap::RouteMapSeq::Set::Default_::Interface::ATMSubinterface


class Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LISPSubinterface : public ydk::Entity
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

}; // Native::RouteMap::RouteMapSeq::Set::Default_::Interface::LISPSubinterface


class Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::RouteMap::RouteMapSeq::Set::Default_::Interface::PortChannelSubinterface


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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExcommListName> > excomm_list_name;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::ExtcommList::ExtRange> > ext_range;
        
}; // Native::RouteMap::RouteMapSeq::Set::ExtcommList


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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::CommunityId> > community_id;
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::Igp::CommunityId> > community_id;
        
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Extcommunity::Cost::PreBestpath::CommunityId> > community_id;
        
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
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::RouteMap::RouteMapSeq::Set::Interface


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
        class Default_; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default_
        class Global; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Global
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ip::NextHop
        class Precedence; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Precedence
        class QosGroup; //type: Native::RouteMap::RouteMapSeq::Set::Ip::QosGroup
        class Tos; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Tos
        class Vrf; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default_> default_;
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


class Native::RouteMap::RouteMapSeq::Set::Ip::Default_ : public ydk::Entity
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

        class Global; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop
        class Vrf; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global> global;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf> vrf;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default_


class Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global : public ydk::Entity
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

        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global


class Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop : public ydk::Entity
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

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Global::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop : public ydk::Entity
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

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default_::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf : public ydk::Entity
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

        class Vrfs; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs> > vrfs;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf


class Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs : public ydk::Entity
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
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs


class Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop : public ydk::Entity
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

}; // Native::RouteMap::RouteMapSeq::Set::Ip::Default_::Vrf::Vrfs::NextHop


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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::Recursive::Vrf::Vrfs> > vrfs;
        
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::NextHop::VerifyAvailability::Ipv4> > ipv4;
        
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ip::Vrf::Vrfs> > vrfs;
        
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
        class Default_; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_
        class Global; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Global
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop
        class Bvrf; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Address> address;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf> > bvrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Global> global;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop> next_hop;
        
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Bvrf::Bvrf0> > bvrf0;
        
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


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_ : public ydk::Entity
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

        class Global; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global
        class NextHop; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop
        class Dvrf; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf> > dvrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global> global;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop> next_hop;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf : public ydk::Entity
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
        class Dvrf0; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0> > dvrf0;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0 : public ydk::Entity
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

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Dvrf::Dvrf0


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global : public ydk::Entity
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

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::Global


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop : public ydk::Entity
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
        class Ipv6S; //type: Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S> > ipv6s;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop


class Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S : public ydk::Entity
{
    public:
        Ipv6S();
        ~Ipv6S();

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

}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::Default_::NextHop::Ipv6S


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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::Global::NextHop::NhIpv6> > nh_ipv6;
        
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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::Encapsulate> encapsulate;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6> > nha_ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability> verify_availability;
        
}; // Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop


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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::NhaIpv6::NhaIpv60> > nha_ipv60;
        
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

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapSeq::Set::Ipv6::NextHop::VerifyAvailability::VaIpv6> > va_ipv6;
        
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


class Native::RouteTag : public ydk::Entity
{
    public:
        RouteTag();
        ~RouteTag();

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

        class List; //type: Native::RouteTag::List
        class Notation; //type: Native::RouteTag::Notation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteTag::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteTag::Notation> notation;
        
}; // Native::RouteTag


class Native::RouteTag::List : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class RtName; //type: Native::RouteTag::List::RtName

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteTag::List::RtName> > rt_name;
        
}; // Native::RouteTag::List


class Native::RouteTag::List::RtName : public ydk::Entity
{
    public:
        RtName();
        ~RtName();

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

        ydk::YLeaf rt_name; //type: string
        class Deny; //type: Native::RouteTag::List::RtName::Deny
        class Permit; //type: Native::RouteTag::List::RtName::Permit
        class Seq; //type: Native::RouteTag::List::RtName::Seq

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Permit> permit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Seq> seq;
        
}; // Native::RouteTag::List::RtName


class Native::RouteTag::List::RtName::Deny : public ydk::Entity
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

        class Ipv4; //type: Native::RouteTag::List::RtName::Deny::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Deny::Ipv4> > ipv4;
        
}; // Native::RouteTag::List::RtName::Deny


class Native::RouteTag::List::RtName::Deny::Ipv4 : public ydk::Entity
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
        ydk::YLeaf mask; //type: string

}; // Native::RouteTag::List::RtName::Deny::Ipv4


class Native::RouteTag::List::RtName::Permit : public ydk::Entity
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

        class Ipv4; //type: Native::RouteTag::List::RtName::Permit::Ipv4

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Permit::Ipv4> > ipv4;
        
}; // Native::RouteTag::List::RtName::Permit


class Native::RouteTag::List::RtName::Permit::Ipv4 : public ydk::Entity
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
        ydk::YLeaf mask; //type: string

}; // Native::RouteTag::List::RtName::Permit::Ipv4


class Native::RouteTag::List::RtName::Seq : public ydk::Entity
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

        class SeqNum; //type: Native::RouteTag::List::RtName::Seq::SeqNum

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Seq::SeqNum> > seq_num;
        
}; // Native::RouteTag::List::RtName::Seq


class Native::RouteTag::List::RtName::Seq::SeqNum : public ydk::Entity
{
    public:
        SeqNum();
        ~SeqNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seq_num; //type: uint32
        class Deny; //type: Native::RouteTag::List::RtName::Seq::SeqNum::Deny
        class Permit; //type: Native::RouteTag::List::RtName::Seq::SeqNum::Permit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Seq::SeqNum::Deny> deny;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteTag::List::RtName::Seq::SeqNum::Permit> permit;
        
}; // Native::RouteTag::List::RtName::Seq::SeqNum


class Native::RouteTag::List::RtName::Seq::SeqNum::Deny : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::RouteTag::List::RtName::Seq::SeqNum::Deny


class Native::RouteTag::List::RtName::Seq::SeqNum::Permit : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::RouteTag::List::RtName::Seq::SeqNum::Permit


class Native::RouteTag::Notation : public ydk::Entity
{
    public:
        Notation();
        ~Notation();

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

        ydk::YLeaf dotted_decimal; //type: empty

}; // Native::RouteTag::Notation


class Native::Router : public ydk::Entity
{
    public:
        Router();
        ~Router();

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

        class Isis; //type: Native::Router::Isis
        class IsisContainer; //type: Native::Router::IsisContainer
        class Lisp; //type: Native::Router::Lisp
        class LispList; //type: Native::Router::LispList
        class Eigrp; //type: Native::Router::Eigrp
        class Ospf; //type: Native::Router::Ospf
        class Ospfv3; //type: Native::Router::Ospfv3
        class Bgp; //type: Native::Router::Bgp
        class Rip; //type: Native::Router::Rip

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp> > bgp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer> isis_container;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Lisp> lisp; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::LispList> > lisp_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Ospfv3> > ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Rip> rip; // presence node
        
}; // Native::Router


class Native::Router::Bgp : public ydk::Entity
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

        ydk::YLeaf id; //type: one of uint32, string
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf synchronization; //type: empty
        ydk::YLeaf auto_summary; //type: boolean
        class Import; //type: Native::Router::Bgp::Import
        class Bgp_; //type: Native::Router::Bgp::Bgp_
        class DefaultInformation; //type: Native::Router::Bgp::DefaultInformation
        class Distance; //type: Native::Router::Bgp::Distance
        class DistributeList; //type: Native::Router::Bgp::DistributeList
        class MaximumPaths; //type: Native::Router::Bgp::MaximumPaths
        class Neighbor; //type: Native::Router::Bgp::Neighbor
        class Network; //type: Native::Router::Bgp::Network
        class Redistribute; //type: Native::Router::Bgp::Redistribute
        class TableMap; //type: Native::Router::Bgp::TableMap
        class Snmp; //type: Native::Router::Bgp::Snmp
        class AddressFamily; //type: Native::Router::Bgp::AddressFamily
        class Template_; //type: Native::Router::Bgp::Template_
        class Timers; //type: Native::Router::Bgp::Timers
        class Scope; //type: Native::Router::Bgp::Scope

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily> address_family;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Bgp_> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Distance> distance;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::DistributeList> > distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Import> import;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::MaximumPaths> maximum_paths;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Neighbor> > neighbor;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Network> > network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope> scope;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Snmp> snmp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::TableMap> table_map; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Template_> template_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Timers> timers;
        
}; // Native::Router::Bgp


class Native::Router::Bgp::AddressFamily : public ydk::Entity
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

        class WithVrf; //type: Native::Router::Bgp::AddressFamily::WithVrf
        class NoVrf; //type: Native::Router::Bgp::AddressFamily::NoVrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf> no_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::WithVrf> with_vrf;
        
}; // Native::Router::Bgp::AddressFamily


class Native::Router::Bgp::AddressFamily::NoVrf : public ydk::Entity
{
    public:
        NoVrf();
        ~NoVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4
        class Ipv6; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv6
        class Vpnv4; //type: Native::Router::Bgp::AddressFamily::NoVrf::Vpnv4
        class Vpnv6; //type: Native::Router::Bgp::AddressFamily::NoVrf::Vpnv6
        class Nsap; //type: Native::Router::Bgp::AddressFamily::NoVrf::Nsap
        class L2Vpn; //type: Native::Router::Bgp::AddressFamily::NoVrf::L2Vpn
        class Rtfilter; //type: Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4> > ipv4;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv6> > ipv6;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::L2Vpn> > l2vpn;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Nsap> > nsap;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Rtfilter> > rtfilter;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Vpnv4> > vpnv4;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Vpnv6> > vpnv6;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4 : public ydk::Entity
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

        ydk::YLeaf af_name; //type: BgpIpv4AfType
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf synchronization; //type: empty
        ydk::YLeaf auto_summary; //type: boolean
        class AggregateAddress; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::AggregateAddress
        class Import; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Import
        class Bgp_; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_
        class DefaultInformation; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DefaultInformation
        class Distance; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance
        class DistributeList; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList
        class MaximumPaths; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths
        class Neighbor; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor
        class Network; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Network
        class Redistribute; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute
        class TableMap; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::TableMap
        class Snmp; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::AggregateAddress> aggregate_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Distance> distance;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::DistributeList> > distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Import> import;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::MaximumPaths> maximum_paths;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Neighbor> > neighbor;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Network> > network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp> snmp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::TableMap> table_map; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::AggregateAddress : public ydk::Entity
{
    public:
        AggregateAddress();
        ~AggregateAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mask; //type: string
        ydk::YLeaf advertise_map; //type: string
        ydk::YLeaf as_set; //type: empty
        ydk::YLeaf attribute_map; //type: string
        ydk::YLeaf as_override; //type: empty
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf summary_only; //type: empty
        ydk::YLeaf suppress_map; //type: string

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::AggregateAddress


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_ : public ydk::Entity
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

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf always_compare_med; //type: empty
        ydk::YLeaf aggregate_timer; //type: uint8
        ydk::YLeaf advertise_best_external; //type: empty
        ydk::YLeaf cluster_id; //type: one of uint32, string
        ydk::YLeaf deterministic_med; //type: empty
        ydk::YLeaf dmzlink_bw; //type: empty
        ydk::YLeaf enforce_first_as; //type: empty
        ydk::YLeaf enhanced_error; //type: empty
        ydk::YLeaf fast_external_fallover; //type: boolean
        ydk::YLeaf log_neighbor_changes; //type: empty
        ydk::YLeaf maxas_limit; //type: uint16
        ydk::YLeaf maxcommunity_limit; //type: uint16
        ydk::YLeaf redistribute_internal; //type: empty
        ydk::YLeaf scan_time; //type: uint8
        ydk::YLeaf soft_reconfig_backup; //type: empty
        ydk::YLeaf suppress_inactive; //type: empty
        ydk::YLeaf update_delay; //type: uint16
        class Asnotation; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Asnotation
        class NopeerupDelay; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::NopeerupDelay
        class Recursion; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Recursion
        class AdditionalPaths; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths
        class Bestpath; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath
        class ClientToClient; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient
        class Confederation; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation
        class ConsistencyChecker; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker
        class Dampening; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening
        class Default_; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_
        class GracefulRestart; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart
        class HaMode; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode
        class InjectMap; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::InjectMap
        class RouteMap; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::RouteMap
        class SlowPeer; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer
        class UpdateGroup; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup
        class Nexthop; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop
        class Regexp; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Regexp
        class Transport; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Asnotation> asnotation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath> bestpath;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient> client_to_client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation> confederation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker> consistency_checker;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening> dampening; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode> ha_mode;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::InjectMap> > inject_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Nexthop> nexthop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::NopeerupDelay> nopeerup_delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Recursion> recursion;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Regexp> regexp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::RouteMap> route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::SlowPeer> slow_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::UpdateGroup> update_group;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths : public ydk::Entity
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

        ydk::YLeaf install; //type: empty
        ydk::YLeaf receive; //type: empty
        class Select; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select
        class Send; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select> select;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send> send; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select : public ydk::Entity
{
    public:
        Select();
        ~Select();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class All; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All
        class Backup; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup
        class Best; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best
        class BestExternal; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup> backup; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal> best_external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All : public ydk::Entity
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

        class Best; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best : public ydk::Entity
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

        class Range; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range> > range;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range : public ydk::Entity
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

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf group_best; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::Best::Range


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest : public ydk::Entity
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

        ydk::YLeaf best; //type: uint8

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::All::GroupBest


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup : public ydk::Entity
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

        ydk::YLeaf best_external; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Backup


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best : public ydk::Entity
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

        class Range; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range> > range;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range : public ydk::Entity
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

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf all; //type: empty
        class GroupBest; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest : public ydk::Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal : public ydk::Entity
{
    public:
        BestExternal();
        ~BestExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backup; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::BestExternal


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest : public ydk::Entity
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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Select::GroupBest


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send : public ydk::Entity
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

        ydk::YLeaf receive; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::AdditionalPaths::Send


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Asnotation : public ydk::Entity
{
    public:
        Asnotation();
        ~Asnotation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Asnotation


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath : public ydk::Entity
{
    public:
        Bestpath();
        ~Bestpath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf compare_routerid; //type: empty
        class CostCommunity; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity
        class IgpMetric; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric
        class Med; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity> cost_community;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric> igp_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med> med;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity : public ydk::Entity
{
    public:
        CostCommunity();
        ~CostCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::CostCommunity


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric : public ydk::Entity
{
    public:
        IgpMetric();
        ~IgpMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::IgpMetric


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med : public ydk::Entity
{
    public:
        Med();
        ~Med();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf missing_at_worst; //type: empty
        class Confed; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed> confed; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed : public ydk::Entity
{
    public:
        Confed();
        ~Confed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf missing_at_worst; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Bestpath::Med::Confed


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient : public ydk::Entity
{
    public:
        ClientToClient();
        ~ClientToClient();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reflection; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ClientToClient


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation : public ydk::Entity
{
    public:
        Confederation();
        ~Confederation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identifier; //type: uint32
        class Peers; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers> peers;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList peers_as; //type: list of  uint32

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Confederation::Peers


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker : public ydk::Entity
{
    public:
        ConsistencyChecker();
        ~ConsistencyChecker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutoRepair; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair
        class ErrorMessage; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair> auto_repair; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage> error_message; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair : public ydk::Entity
{
    public:
        AutoRepair();
        ~AutoRepair();

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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::AutoRepair


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage : public ydk::Entity
{
    public:
        ErrorMessage();
        ~ErrorMessage();

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

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::ConsistencyChecker::ErrorMessage


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening : public ydk::Entity
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

        ydk::YLeaf route_map; //type: string
        class Dampen; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen> dampen;
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen : public ydk::Entity
{
    public:
        Dampen();
        ~Dampen();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf half_life_time; //type: uint8
        ydk::YLeaf reuse_time; //type: uint16
        ydk::YLeaf suppress_time; //type: uint16
        ydk::YLeaf max_suppress_time; //type: uint8

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Dampening::Dampen


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_ : public ydk::Entity
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

        ydk::YLeaf ipv4_unicast; //type: boolean
        ydk::YLeaf ipv6_nexthop; //type: empty
        ydk::YLeaf local_preference; //type: uint32
        ydk::YLeaf route_target; //type: RouteTarget
        class RouteTarget;

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart : public ydk::Entity
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

        ydk::YLeaf extended; //type: empty
        ydk::YLeaf restart_time; //type: uint16
        ydk::YLeaf stalepath_time; //type: uint16

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::GracefulRestart


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode : public ydk::Entity
{
    public:
        HaMode();
        ~HaMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sso; //type: Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso> sso; // presence node
        
}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode


class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso : public ydk::Entity
{
    public:
        Sso();
        ~Sso();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefer; //type: empty

}; // Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::HaMode::Sso

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

class Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Bgp_::Default_::RouteTarget : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf filter;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_95_ */

