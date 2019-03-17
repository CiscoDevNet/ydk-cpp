#ifndef _CISCO_IOS_XE_NATIVE_117_
#define _CISCO_IOS_XE_NATIVE_117_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_115.hpp"
#include "Cisco_IOS_XE_native_116.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference : public ydk::Entity
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

}; // Native::RouteMap::RouteMapWithoutOrderSeq::Match::LocalPreference


class Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup : public ydk::Entity
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

}; // Native::RouteMap::RouteMapWithoutOrderSeq::Match::MdtGroup


class Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric : public ydk::Entity
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

}; // Native::RouteMap::RouteMapWithoutOrderSeq::Match::Metric


class Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList : public ydk::Entity
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

}; // Native::RouteMap::RouteMapWithoutOrderSeq::Match::PolicyList


class Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType : public ydk::Entity
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
        class External; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External
        class NssaExternal; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal> nssa_external; // presence node
        
}; // Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType


class Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External : public ydk::Entity
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

}; // Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::External


class Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal : public ydk::Entity
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

}; // Native::RouteMap::RouteMapWithoutOrderSeq::Match::RouteType::NssaExternal


class Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki : public ydk::Entity
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

}; // Native::RouteMap::RouteMapWithoutOrderSeq::Match::Rpki


class Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol : public ydk::Entity
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

}; // Native::RouteMap::RouteMapWithoutOrderSeq::Match::SourceProtocol


class Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag : public ydk::Entity
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
        class List; //type: Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List> list;
        
}; // Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag


class Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List : public ydk::Entity
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

}; // Native::RouteMap::RouteMapWithoutOrderSeq::Match::Tag::List


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

        ydk::YList rt_name;
        
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

        ydk::YList ipv4;
        
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

        ydk::YList ipv4;
        
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

        ydk::YList seq_num;
        
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


class Native::TableMap : public ydk::Entity
{
    public:
        TableMap();
        ~TableMap();

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
        ydk::YLeaf default_; //type: one of uint8, enumeration
        class Map; //type: Native::TableMap::Map

        ydk::YList map;
                class Default_;

}; // Native::TableMap


class Native::TableMap::Map : public ydk::Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf from; //type: uint8
        ydk::YLeaf to; //type: uint8

}; // Native::TableMap::Map


class Native::Sdm : public ydk::Entity
{
    public:
        Sdm();
        ~Sdm();

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

        class Prefer; //type: Native::Sdm::Prefer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Sdm::Prefer> prefer; // presence node
        
}; // Native::Sdm


class Native::Sdm::Prefer : public ydk::Entity
{
    public:
        Prefer();
        ~Prefer();

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
        ydk::YLeaf qos; //type: empty

}; // Native::Sdm::Prefer


class Native::Mls : public ydk::Entity
{
    public:
        Mls();
        ~Mls();

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


}; // Native::Mls


class Native::ObjectGroup : public ydk::Entity
{
    public:
        ObjectGroup();
        ~ObjectGroup();

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

        class Network; //type: Native::ObjectGroup::Network
        class Security; //type: Native::ObjectGroup::Security
        class Service; //type: Native::ObjectGroup::Service

        ydk::YList network;
        ydk::YList security;
        ydk::YList service;
        
}; // Native::ObjectGroup


class Native::ObjectGroup::Network : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class ObjModeConfigNetworkGroup; //type: Native::ObjectGroup::Network::ObjModeConfigNetworkGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ObjectGroup::Network::ObjModeConfigNetworkGroup> obj_mode_config_network_group;
        
}; // Native::ObjectGroup::Network


class Native::ObjectGroup::Network::ObjModeConfigNetworkGroup : public ydk::Entity
{
    public:
        ObjModeConfigNetworkGroup();
        ~ObjModeConfigNetworkGroup();

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
        ydk::YLeaf group_object; //type: string
        class NetworkAddress; //type: Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress
        class Host; //type: Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host
        class Range; //type: Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range

        ydk::YList network_address;
        ydk::YList host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range> range;
        
}; // Native::ObjectGroup::Network::ObjModeConfigNetworkGroup


class Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress : public ydk::Entity
{
    public:
        NetworkAddress();
        ~NetworkAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_addr; //type: string
        ydk::YLeaf ipv4_mask; //type: string

}; // Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::NetworkAddress


class Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_host; //type: one of union, string

}; // Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Host


class Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range : public ydk::Entity
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

        ydk::YLeaf ip_addr_min; //type: string
        ydk::YLeaf ip_addr_max; //type: string

}; // Native::ObjectGroup::Network::ObjModeConfigNetworkGroup::Range


class Native::ObjectGroup::Security : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class SecurityGroup; //type: Native::ObjectGroup::Security::SecurityGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ObjectGroup::Security::SecurityGroup> security_group;
        
}; // Native::ObjectGroup::Security


class Native::ObjectGroup::Security::SecurityGroup : public ydk::Entity
{
    public:
        SecurityGroup();
        ~SecurityGroup();

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
        ydk::YLeaf group_object; //type: string
        class SecurityGroup_; //type: Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_> security_group;
        
}; // Native::ObjectGroup::Security::SecurityGroup


class Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_ : public ydk::Entity
{
    public:
        SecurityGroup_();
        ~SecurityGroup_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: uint16

}; // Native::ObjectGroup::Security::SecurityGroup::SecurityGroup_


class Native::ObjectGroup::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

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
        ydk::YLeaf group_object; //type: string
        ydk::YLeaf protocal_number; //type: uint8
        ydk::YLeaf ahp; //type: empty
        ydk::YLeaf eigrp; //type: empty
        ydk::YLeaf esp; //type: empty
        ydk::YLeaf gre; //type: empty
        ydk::YLeaf igmp; //type: empty
        ydk::YLeaf ip; //type: empty
        ydk::YLeaf ipinip; //type: empty
        ydk::YLeaf nos; //type: empty
        ydk::YLeaf ospf; //type: empty
        ydk::YLeaf pcp; //type: empty
        ydk::YLeaf pim; //type: empty
        class Icmp; //type: Native::ObjectGroup::Service::Icmp
        class Tcp; //type: Native::ObjectGroup::Service::Tcp
        class TcpUdp; //type: Native::ObjectGroup::Service::TcpUdp
        class Udp; //type: Native::ObjectGroup::Service::Udp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ObjectGroup::Service::Icmp> icmp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ObjectGroup::Service::Tcp> tcp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ObjectGroup::Service::TcpUdp> tcp_udp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ObjectGroup::Service::Udp> udp; // presence node
        
}; // Native::ObjectGroup::Service


class Native::ObjectGroup::Service::Icmp : public ydk::Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_number; //type: uint8
        ydk::YLeaf alternate_address; //type: empty
        ydk::YLeaf conversion_error; //type: empty
        ydk::YLeaf echo; //type: empty
        ydk::YLeaf echo_reply; //type: empty
        ydk::YLeaf information_reply; //type: empty
        ydk::YLeaf information_request; //type: empty
        ydk::YLeaf mask_reply; //type: empty
        ydk::YLeaf mask_request; //type: empty
        ydk::YLeaf mobile_redirect; //type: empty
        ydk::YLeaf parameter_problem; //type: empty
        ydk::YLeaf redirect; //type: empty
        ydk::YLeaf router_advertisement; //type: empty
        ydk::YLeaf router_solicitation; //type: empty
        ydk::YLeaf source_quench; //type: empty
        ydk::YLeaf time_exceeded; //type: empty
        ydk::YLeaf timestamp_reply; //type: empty
        ydk::YLeaf timestamp_request; //type: empty
        ydk::YLeaf traceroute; //type: empty
        ydk::YLeaf unreachable; //type: empty

}; // Native::ObjectGroup::Service::Icmp


class Native::ObjectGroup::Service::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TcpPortList; //type: Native::ObjectGroup::Service::Tcp::TcpPortList

        ydk::YList tcp_port_list;
        
}; // Native::ObjectGroup::Service::Tcp


class Native::ObjectGroup::Service::Tcp::TcpPortList : public ydk::Entity
{
    public:
        TcpPortList();
        ~TcpPortList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcp_port; //type: one of uint16, enumeration
        ydk::YLeaf operator_; //type: Operator_
        ydk::YLeaf max_tcp_port; //type: one of uint16, enumeration
        class Operator_;

}; // Native::ObjectGroup::Service::Tcp::TcpPortList


class Native::ObjectGroup::Service::TcpUdp : public ydk::Entity
{
    public:
        TcpUdp();
        ~TcpUdp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UdpPortList; //type: Native::ObjectGroup::Service::TcpUdp::UdpPortList

        ydk::YList udp_port_list;
        
}; // Native::ObjectGroup::Service::TcpUdp


class Native::ObjectGroup::Service::TcpUdp::UdpPortList : public ydk::Entity
{
    public:
        UdpPortList();
        ~UdpPortList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf udp_port; //type: one of uint16, enumeration
        ydk::YLeaf operator_; //type: Operator_
        ydk::YLeaf max_udp_port; //type: one of uint16, enumeration
        class Operator_;

}; // Native::ObjectGroup::Service::TcpUdp::UdpPortList


class Native::ObjectGroup::Service::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UdpPortList; //type: Native::ObjectGroup::Service::Udp::UdpPortList

        ydk::YList udp_port_list;
        
}; // Native::ObjectGroup::Service::Udp


class Native::ObjectGroup::Service::Udp::UdpPortList : public ydk::Entity
{
    public:
        UdpPortList();
        ~UdpPortList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf udp_port; //type: one of uint16, enumeration
        ydk::YLeaf operator_; //type: Operator_
        ydk::YLeaf max_udp_port; //type: one of uint16, enumeration
        class Operator_;

}; // Native::ObjectGroup::Service::Udp::UdpPortList


class Native::PseudowireClass : public ydk::Entity
{
    public:
        PseudowireClass();
        ~PseudowireClass();

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
        ydk::YLeaf encapsulation; //type: Encapsulation
        ydk::YLeaf control_word; //type: empty
        ydk::YLeaf interworking; //type: Interworking
        ydk::YLeaf sequencing; //type: Sequencing
        class Ip; //type: Native::PseudowireClass::Ip
        class LoadBalance; //type: Native::PseudowireClass::LoadBalance
        class Monitor; //type: Native::PseudowireClass::Monitor
        class PreferredPath; //type: Native::PseudowireClass::PreferredPath
        class ProtocolMpls; //type: Native::PseudowireClass::ProtocolMpls
        class ProtocolL2tpv2; //type: Native::PseudowireClass::ProtocolL2tpv2
        class ProtocolL2tpv3; //type: Native::PseudowireClass::ProtocolL2tpv3
        class Status; //type: Native::PseudowireClass::Status
        class Switching; //type: Native::PseudowireClass::Switching

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::LoadBalance> load_balance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor> monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::PreferredPath> preferred_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::ProtocolMpls> protocol_mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::ProtocolL2tpv2> protocol_l2tpv2;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::ProtocolL2tpv3> protocol_l2tpv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Status> status; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Switching> switching;
                class Encapsulation;
        class Interworking;
        class Sequencing;

}; // Native::PseudowireClass


class Native::PseudowireClass::Ip : public ydk::Entity
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

        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf ttl; //type: uint8
        class Dfbit; //type: Native::PseudowireClass::Ip::Dfbit
        class Local; //type: Native::PseudowireClass::Ip::Local
        class Pmtu; //type: Native::PseudowireClass::Ip::Pmtu
        class Tos; //type: Native::PseudowireClass::Ip::Tos

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Dfbit> dfbit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local> local;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Pmtu> pmtu; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Tos> tos;
                class Protocol;

}; // Native::PseudowireClass::Ip


class Native::PseudowireClass::Ip::Dfbit : public ydk::Entity
{
    public:
        Dfbit();
        ~Dfbit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set; //type: empty

}; // Native::PseudowireClass::Ip::Dfbit


class Native::PseudowireClass::Ip::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::PseudowireClass::Ip::Local::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface> interface;
        
}; // Native::PseudowireClass::Ip::Local


class Native::PseudowireClass::Ip::Local::Interface : public ydk::Entity
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
        class ATMSubinterface; //type: Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::PseudowireClass::Ip::Local::Interface


class Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface : public ydk::Entity
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

}; // Native::PseudowireClass::Ip::Local::Interface::ATMSubinterface


class Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::PseudowireClass::Ip::Local::Interface::ATMACRsubinterface


class Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface : public ydk::Entity
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

}; // Native::PseudowireClass::Ip::Local::Interface::LISPSubinterface


class Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::PseudowireClass::Ip::Local::Interface::PortChannelSubinterface


class Native::PseudowireClass::Ip::Pmtu : public ydk::Entity
{
    public:
        Pmtu();
        ~Pmtu();

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

}; // Native::PseudowireClass::Ip::Pmtu


class Native::PseudowireClass::Ip::Tos : public ydk::Entity
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

        ydk::YLeaf reflect; //type: empty
        ydk::YLeaf value_; //type: uint8

}; // Native::PseudowireClass::Ip::Tos


class Native::PseudowireClass::LoadBalance : public ydk::Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flow; //type: Native::PseudowireClass::LoadBalance::Flow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::LoadBalance::Flow> flow; // presence node
        
}; // Native::PseudowireClass::LoadBalance


class Native::PseudowireClass::LoadBalance::Flow : public ydk::Entity
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

        ydk::YLeaf ethernet; //type: Ethernet
        class Ethernet;

}; // Native::PseudowireClass::LoadBalance::Flow


class Native::PseudowireClass::Monitor : public ydk::Entity
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

        class Peer; //type: Native::PseudowireClass::Monitor::Peer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer> peer;
        
}; // Native::PseudowireClass::Monitor


class Native::PseudowireClass::Monitor::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bfd; //type: Native::PseudowireClass::Monitor::Peer::Bfd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd> bfd; // presence node
        
}; // Native::PseudowireClass::Monitor::Peer


class Native::PseudowireClass::Monitor::Peer::Bfd : public ydk::Entity
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

        class Local; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local> local;
        
}; // Native::PseudowireClass::Monitor::Peer::Bfd


class Native::PseudowireClass::Monitor::Peer::Bfd::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface> interface;
        
}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface : public ydk::Entity
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
        class ATMSubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface : public ydk::Entity
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

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMSubinterface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::ATMACRsubinterface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface : public ydk::Entity
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

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::LISPSubinterface


class Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::PseudowireClass::Monitor::Peer::Bfd::Local::Interface::PortChannelSubinterface


class Native::PseudowireClass::PreferredPath : public ydk::Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::PseudowireClass::PreferredPath::Interface
        class PeerContainer; //type: Native::PseudowireClass::PreferredPath::PeerContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::PreferredPath::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::PreferredPath::PeerContainer> peer_container;
        
}; // Native::PseudowireClass::PreferredPath


class Native::PseudowireClass::PreferredPath::Interface : public ydk::Entity
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

        ydk::YLeaf tunnel; //type: uint64
        ydk::YLeaf tunnel_tp; //type: uint16
        ydk::YLeaf disable_fallback; //type: empty

}; // Native::PseudowireClass::PreferredPath::Interface


class Native::PseudowireClass::PreferredPath::PeerContainer : public ydk::Entity
{
    public:
        PeerContainer();
        ~PeerContainer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf disable_fallback; //type: empty

}; // Native::PseudowireClass::PreferredPath::PeerContainer


class Native::PseudowireClass::ProtocolMpls : public ydk::Entity
{
    public:
        ProtocolMpls();
        ~ProtocolMpls();

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

}; // Native::PseudowireClass::ProtocolMpls


class Native::PseudowireClass::ProtocolL2tpv2 : public ydk::Entity
{
    public:
        ProtocolL2tpv2();
        ~ProtocolL2tpv2();

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

}; // Native::PseudowireClass::ProtocolL2tpv2


class Native::PseudowireClass::ProtocolL2tpv3 : public ydk::Entity
{
    public:
        ProtocolL2tpv3();
        ~ProtocolL2tpv3();

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

}; // Native::PseudowireClass::ProtocolL2tpv3


class Native::PseudowireClass::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf decoupled; //type: empty
        class AdminDown; //type: Native::PseudowireClass::Status::AdminDown
        class ControlPlane; //type: Native::PseudowireClass::Status::ControlPlane
        class Peer; //type: Native::PseudowireClass::Status::Peer
        class Redundancy; //type: Native::PseudowireClass::Status::Redundancy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Status::AdminDown> admin_down;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Status::ControlPlane> control_plane;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Status::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Status::Redundancy> redundancy;
        
}; // Native::PseudowireClass::Status


class Native::PseudowireClass::Status::AdminDown : public ydk::Entity
{
    public:
        AdminDown();
        ~AdminDown();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disconnect; //type: empty

}; // Native::PseudowireClass::Status::AdminDown


class Native::PseudowireClass::Status::ControlPlane : public ydk::Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_watch; //type: empty

}; // Native::PseudowireClass::Status::ControlPlane


class Native::PseudowireClass::Status::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Topology; //type: Native::PseudowireClass::Status::Peer::Topology

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PseudowireClass::Status::Peer::Topology> topology;
        
}; // Native::PseudowireClass::Status::Peer


class Native::PseudowireClass::Status::Peer::Topology : public ydk::Entity
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

        ydk::YLeaf dual_homed; //type: empty

}; // Native::PseudowireClass::Status::Peer::Topology


class Native::PseudowireClass::Status::Redundancy : public ydk::Entity
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

        ydk::YLeaf master; //type: empty

}; // Native::PseudowireClass::Status::Redundancy


class Native::PseudowireClass::Switching : public ydk::Entity
{
    public:
        Switching();
        ~Switching();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlv; //type: empty

}; // Native::PseudowireClass::Switching


class Native::ControlPlane : public ydk::Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

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

        class ServicePolicy; //type: Native::ControlPlane::ServicePolicy

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlane::ServicePolicy> service_policy;
        
}; // Native::ControlPlane


class Native::ControlPlane::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

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

        ydk::YLeaf input; //type: string
        ydk::YLeaf output; //type: string

}; // Native::ControlPlane::ServicePolicy


class Native::ControlPlaneHost : public ydk::Entity
{
    public:
        ControlPlaneHost();
        ~ControlPlaneHost();

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

        class ControlPlane; //type: Native::ControlPlaneHost::ControlPlane

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlaneHost::ControlPlane> control_plane;
        
}; // Native::ControlPlaneHost


class Native::ControlPlaneHost::ControlPlane : public ydk::Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

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

        class Host; //type: Native::ControlPlaneHost::ControlPlane::Host

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlaneHost::ControlPlane::Host> host; // presence node
        
}; // Native::ControlPlaneHost::ControlPlane


class Native::ControlPlaneHost::ControlPlane::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

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

        class ManagementInterface; //type: Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface

        ydk::YList management_interface;
        
}; // Native::ControlPlaneHost::ControlPlane::Host


class Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface : public ydk::Entity
{
    public:
        ManagementInterface();
        ~ManagementInterface();

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

        ydk::YLeaf interface_name; //type: string
        class Allow; //type: Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow> allow;
        
}; // Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface


class Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow : public ydk::Entity
{
    public:
        Allow();
        ~Allow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf beep; //type: empty
        ydk::YLeaf ftp; //type: empty
        ydk::YLeaf http; //type: empty
        ydk::YLeaf https; //type: empty
        ydk::YLeaf snmp; //type: empty
        ydk::YLeaf ssh; //type: empty
        ydk::YLeaf telnet; //type: empty
        ydk::YLeaf tftp; //type: empty
        ydk::YLeaf tl1; //type: empty

}; // Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow


class Native::Clock : public ydk::Entity
{
    public:
        Clock();
        ~Clock();

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

        class CalendarValid; //type: Native::Clock::CalendarValid
        class SummerTime; //type: Native::Clock::SummerTime
        class Timezone; //type: Native::Clock::Timezone

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Clock::CalendarValid> calendar_valid; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Clock::SummerTime> summer_time;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Clock::Timezone> timezone;
        
}; // Native::Clock


class Native::Clock::CalendarValid : public ydk::Entity
{
    public:
        CalendarValid();
        ~CalendarValid();

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


}; // Native::Clock::CalendarValid


class Native::Clock::SummerTime : public ydk::Entity
{
    public:
        SummerTime();
        ~SummerTime();

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

        ydk::YLeaf zone; //type: string
        ydk::YLeaf date; //type: empty
        ydk::YLeaf start_day; //type: uint8
        ydk::YLeaf start_month; //type: MonthType
        ydk::YLeaf start_year; //type: uint32
        ydk::YLeaf start_time; //type: string
        ydk::YLeaf date_end_day; //type: uint8
        ydk::YLeaf date_end_month; //type: MonthType
        ydk::YLeaf date_end_year; //type: uint32
        ydk::YLeaf date_end_time; //type: string
        ydk::YLeaf offset; //type: uint16
        ydk::YLeaf recurring; //type: empty
        ydk::YLeaf recurring_start; //type: one of uint8, enumeration
        ydk::YLeaf recurring_start_day; //type: WeekdayType
        ydk::YLeaf recurring_start_month; //type: MonthType
        ydk::YLeaf recurring_start_time; //type: string
        ydk::YLeaf recurring_end; //type: one of uint8, enumeration
        ydk::YLeaf recurring_end_day; //type: WeekdayType
        ydk::YLeaf recurring_end_month; //type: MonthType
        ydk::YLeaf recurring_end_time; //type: string
        ydk::YLeaf recurring_offset; //type: uint16
        class RecurringStart;
        class RecurringEnd;

}; // Native::Clock::SummerTime


class Native::Clock::Timezone : public ydk::Entity
{
    public:
        Timezone();
        ~Timezone();

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

        ydk::YLeaf zone; //type: string
        ydk::YLeaf offset; //type: Offset
        ydk::YLeaf hours; //type: int8
        ydk::YLeaf minutes; //type: int8
        class Offset;

}; // Native::Clock::Timezone


class Native::Logging : public ydk::Entity
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

        ydk::YLeaf alarm; //type: one of uint8, enumeration
        ydk::YLeaf facility; //type: Facility
        ydk::YLeaf hostip; //type: one of union, string
        ydk::YLeaf snmp_authfail; //type: empty
        ydk::YLeaf buginf; //type: empty
        ydk::YLeaf userinfo; //type: empty
        class Discriminator; //type: Native::Logging::Discriminator
        class Persistent; //type: Native::Logging::Persistent
        class MonitorConf; //type: Native::Logging::MonitorConf
        class Monitor; //type: Native::Logging::Monitor
        class Buffered; //type: Native::Logging::Buffered
        class ConsoleConf; //type: Native::Logging::ConsoleConf
        class Console; //type: Native::Logging::Console
        class Event; //type: Native::Logging::Event
        class Esm; //type: Native::Logging::Esm
        class History; //type: Native::Logging::History
        class Host; //type: Native::Logging::Host
        class OriginId; //type: Native::Logging::OriginId
        class RateLimitConf; //type: Native::Logging::RateLimitConf
        class RateLimit; //type: Native::Logging::RateLimit
        class SourceInterface; //type: Native::Logging::SourceInterface
        class SnmpTrap; //type: Native::Logging::SnmpTrap
        class Trap; //type: Native::Logging::Trap
        class File; //type: Native::Logging::File

        ydk::YList discriminator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Persistent> persistent; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::MonitorConf> monitor_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Monitor> monitor; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Buffered> buffered; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::ConsoleConf> console_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Console> console; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Event> event;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Esm> esm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::History> history;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host> host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::OriginId> origin_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimitConf> rate_limit_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit> rate_limit; // presence node
        ydk::YList source_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::SnmpTrap> snmp_trap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Trap> trap; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::File> file;
                class Alarm;
        class Facility;

}; // Native::Logging


class Native::Logging::Discriminator : public ydk::Entity
{
    public:
        Discriminator();
        ~Discriminator();

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
        ydk::YLeaf rate_limit; //type: uint16
        class Severity; //type: Native::Logging::Discriminator::Severity
        class Facility; //type: Native::Logging::Discriminator::Facility
        class Mnemonics; //type: Native::Logging::Discriminator::Mnemonics
        class MsgBody; //type: Native::Logging::Discriminator::MsgBody

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Discriminator::Severity> severity;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Discriminator::Facility> facility;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Discriminator::Mnemonics> mnemonics;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Discriminator::MsgBody> msg_body;
        
}; // Native::Logging::Discriminator


class Native::Logging::Discriminator::Severity : public ydk::Entity
{
    public:
        Severity();
        ~Severity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drops; //type: string
        ydk::YLeaf includes; //type: string

}; // Native::Logging::Discriminator::Severity


class Native::Logging::Discriminator::Facility : public ydk::Entity
{
    public:
        Facility();
        ~Facility();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drops; //type: string
        ydk::YLeaf includes; //type: string

}; // Native::Logging::Discriminator::Facility


class Native::Logging::Discriminator::Mnemonics : public ydk::Entity
{
    public:
        Mnemonics();
        ~Mnemonics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drops; //type: string
        ydk::YLeaf includes; //type: string

}; // Native::Logging::Discriminator::Mnemonics


class Native::Logging::Discriminator::MsgBody : public ydk::Entity
{
    public:
        MsgBody();
        ~MsgBody();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drops; //type: string
        ydk::YLeaf includes; //type: string

}; // Native::Logging::Discriminator::MsgBody


class Native::Logging::Persistent : public ydk::Entity
{
    public:
        Persistent();
        ~Persistent();

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

        ydk::YLeaf url; //type: string
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf filesize; //type: uint32
        ydk::YLeaf batch; //type: uint32
        ydk::YLeaf threshold; //type: uint8
        ydk::YLeaf immediate; //type: empty
        ydk::YLeaf notify; //type: empty
        ydk::YLeaf protected_; //type: empty

}; // Native::Logging::Persistent


class Native::Logging::MonitorConf : public ydk::Entity
{
    public:
        MonitorConf();
        ~MonitorConf();

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

        ydk::YLeaf monitor; //type: boolean

}; // Native::Logging::MonitorConf


class Native::Logging::Monitor : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf severity; //type: one of uint16, enumeration
        class Discriminator; //type: Native::Logging::Monitor::Discriminator

        ydk::YList discriminator;
        
}; // Native::Logging::Monitor


class Native::Logging::Monitor::Discriminator : public ydk::Entity
{
    public:
        Discriminator();
        ~Discriminator();

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
        ydk::YLeaf severity; //type: one of uint16, enumeration

}; // Native::Logging::Monitor::Discriminator


class Native::Logging::Buffered : public ydk::Entity
{
    public:
        Buffered();
        ~Buffered();

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

        ydk::YLeaf severity; //type: one of uint16, enumeration
        ydk::YLeaf xxml; //type: uint32
        class Discriminator; //type: Native::Logging::Buffered::Discriminator
        class Size; //type: Native::Logging::Buffered::Size

        ydk::YList discriminator;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Buffered::Size> size;
        
}; // Native::Logging::Buffered


class Native::Logging::Buffered::Discriminator : public ydk::Entity
{
    public:
        Discriminator();
        ~Discriminator();

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
        ydk::YLeaf size_value; //type: uint32
        ydk::YLeaf severity; //type: one of uint16, enumeration

}; // Native::Logging::Buffered::Discriminator


class Native::Logging::Buffered::Size : public ydk::Entity
{
    public:
        Size();
        ~Size();

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

        ydk::YLeaf size_value; //type: uint32
        ydk::YLeaf severity; //type: one of uint16, enumeration

}; // Native::Logging::Buffered::Size


class Native::Logging::ConsoleConf : public ydk::Entity
{
    public:
        ConsoleConf();
        ~ConsoleConf();

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

        ydk::YLeaf console; //type: boolean

}; // Native::Logging::ConsoleConf


class Native::Logging::Console : public ydk::Entity
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

        ydk::YLeaf filtered; //type: empty
        ydk::YLeaf guaranteed; //type: empty
        ydk::YLeaf xxml; //type: one of uint16, enumeration
        ydk::YLeaf severity; //type: one of uint16, enumeration
        class Discriminator; //type: Native::Logging::Console::Discriminator

        ydk::YList discriminator;
        
}; // Native::Logging::Console


class Native::Logging::Console::Discriminator : public ydk::Entity
{
    public:
        Discriminator();
        ~Discriminator();

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
        ydk::YLeaf severity; //type: one of uint16, enumeration

}; // Native::Logging::Console::Discriminator


class Native::Logging::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

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

        class LinkStatus; //type: Native::Logging::Event::LinkStatus

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Event::LinkStatus> link_status;
        
}; // Native::Logging::Event


class Native::Logging::Event::LinkStatus : public ydk::Entity
{
    public:
        LinkStatus();
        ~LinkStatus();

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

        ydk::YLeaf boot; //type: empty
        ydk::YLeaf global; //type: empty
        ydk::YLeaf default_; //type: empty

}; // Native::Logging::Event::LinkStatus


class Native::Logging::Esm : public ydk::Entity
{
    public:
        Esm();
        ~Esm();

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

        ydk::YLeaf config; //type: empty

}; // Native::Logging::Esm


class Native::Logging::History : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf size; //type: uint16
        ydk::YLeaf severity_level; //type: one of uint8, enumeration
        class SeverityLevel;

}; // Native::Logging::History


class Native::Logging::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

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

        class Ipv4HostList; //type: Native::Logging::Host::Ipv4HostList
        class Ipv4HostTransportList; //type: Native::Logging::Host::Ipv4HostTransportList
        class Ipv4HostVrfList; //type: Native::Logging::Host::Ipv4HostVrfList
        class Ipv4HostVrfTransportList; //type: Native::Logging::Host::Ipv4HostVrfTransportList
        class Ipv6; //type: Native::Logging::Host::Ipv6

        ydk::YList ipv4_host_list;
        ydk::YList ipv4_host_transport_list;
        ydk::YList ipv4_host_vrf_list;
        ydk::YList ipv4_host_vrf_transport_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6> ipv6;
        
}; // Native::Logging::Host


class Native::Logging::Host::Ipv4HostList : public ydk::Entity
{
    public:
        Ipv4HostList();
        ~Ipv4HostList();

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

        ydk::YLeaf ipv4_host; //type: one of union, string

}; // Native::Logging::Host::Ipv4HostList


class Native::Logging::Host::Ipv4HostTransportList : public ydk::Entity
{
    public:
        Ipv4HostTransportList();
        ~Ipv4HostTransportList();

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

        ydk::YLeaf ipv4_host; //type: one of union, string
        ydk::YLeaf discriminator; //type: string
        class Transport; //type: Native::Logging::Host::Ipv4HostTransportList::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostTransportList::Transport> transport;
        
}; // Native::Logging::Host::Ipv4HostTransportList


class Native::Logging::Host::Ipv4HostTransportList::Transport : public ydk::Entity
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

        class Udp; //type: Native::Logging::Host::Ipv4HostTransportList::Transport::Udp
        class Tcp; //type: Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostTransportList::Transport::Udp> udp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp> tcp;
        
}; // Native::Logging::Host::Ipv4HostTransportList::Transport


class Native::Logging::Host::Ipv4HostTransportList::Transport::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv4HostTransportList::Transport::Udp


class Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv4HostTransportList::Transport::Tcp


class Native::Logging::Host::Ipv4HostVrfList : public ydk::Entity
{
    public:
        Ipv4HostVrfList();
        ~Ipv4HostVrfList();

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

        ydk::YLeaf ipv4_host; //type: one of union, string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf discriminator; //type: string

}; // Native::Logging::Host::Ipv4HostVrfList


class Native::Logging::Host::Ipv4HostVrfTransportList : public ydk::Entity
{
    public:
        Ipv4HostVrfTransportList();
        ~Ipv4HostVrfTransportList();

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

        ydk::YLeaf ipv4_host; //type: one of union, string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf discriminator; //type: string
        class Transport; //type: Native::Logging::Host::Ipv4HostVrfTransportList::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfTransportList::Transport> transport;
        
}; // Native::Logging::Host::Ipv4HostVrfTransportList


class Native::Logging::Host::Ipv4HostVrfTransportList::Transport : public ydk::Entity
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

        class Udp; //type: Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp
        class Tcp; //type: Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp> udp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp> tcp;
        
}; // Native::Logging::Host::Ipv4HostVrfTransportList::Transport


class Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Udp


class Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv4HostVrfTransportList::Transport::Tcp


class Native::Logging::Host::Ipv6 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Ipv6HostList; //type: Native::Logging::Host::Ipv6::Ipv6HostList
        class Ipv6HostTransportList; //type: Native::Logging::Host::Ipv6::Ipv6HostTransportList
        class Ipv6HostVrfList; //type: Native::Logging::Host::Ipv6::Ipv6HostVrfList
        class Ipv6HostVrfTransportList; //type: Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList

        ydk::YList ipv6_host_list;
        ydk::YList ipv6_host_transport_list;
        ydk::YList ipv6_host_vrf_list;
        ydk::YList ipv6_host_vrf_transport_list;
        
}; // Native::Logging::Host::Ipv6


class Native::Logging::Host::Ipv6::Ipv6HostList : public ydk::Entity
{
    public:
        Ipv6HostList();
        ~Ipv6HostList();

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

        ydk::YLeaf ipv6_host; //type: string

}; // Native::Logging::Host::Ipv6::Ipv6HostList


class Native::Logging::Host::Ipv6::Ipv6HostTransportList : public ydk::Entity
{
    public:
        Ipv6HostTransportList();
        ~Ipv6HostTransportList();

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

        ydk::YLeaf ipv6_host; //type: string
        ydk::YLeaf discriminator; //type: string
        class Transport; //type: Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport> transport;
        
}; // Native::Logging::Host::Ipv6::Ipv6HostTransportList


class Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport : public ydk::Entity
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

        class Udp; //type: Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp
        class Tcp; //type: Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp> udp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp> tcp;
        
}; // Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport


class Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp


class Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Tcp


class Native::Logging::Host::Ipv6::Ipv6HostVrfList : public ydk::Entity
{
    public:
        Ipv6HostVrfList();
        ~Ipv6HostVrfList();

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

        ydk::YLeaf ipv6_host; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf discriminator; //type: string

}; // Native::Logging::Host::Ipv6::Ipv6HostVrfList


class Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList : public ydk::Entity
{
    public:
        Ipv6HostVrfTransportList();
        ~Ipv6HostVrfTransportList();

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

        ydk::YLeaf ipv6_host; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf discriminator; //type: string
        class Transport; //type: Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport> transport;
        
}; // Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList


class Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport : public ydk::Entity
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

        class Udp; //type: Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp
        class Tcp; //type: Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp> udp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp> tcp;
        
}; // Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport


class Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp


class Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList port; //type: list of  uint16

}; // Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp


class Native::Logging::OriginId : public ydk::Entity
{
    public:
        OriginId();
        ~OriginId();

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

        ydk::YLeaf type_value; //type: TypeValue
        ydk::YLeaf string; //type: string
        class TypeValue;

}; // Native::Logging::OriginId


class Native::Logging::RateLimitConf : public ydk::Entity
{
    public:
        RateLimitConf();
        ~RateLimitConf();

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

        ydk::YLeaf rate_limit; //type: boolean

}; // Native::Logging::RateLimitConf


class Native::Logging::RateLimit : public ydk::Entity
{
    public:
        RateLimit();
        ~RateLimit();

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

        class Ranges; //type: Native::Logging::RateLimit::Ranges
        class Console; //type: Native::Logging::RateLimit::Console
        class All; //type: Native::Logging::RateLimit::All

        ydk::YList ranges;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::Console> console;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::All> all;
        
}; // Native::Logging::RateLimit


class Native::Logging::RateLimit::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

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

        ydk::YLeaf range; //type: uint16
        class Except; //type: Native::Logging::RateLimit::Ranges::Except

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::Ranges::Except> except; // presence node
        
}; // Native::Logging::RateLimit::Ranges


class Native::Logging::RateLimit::Ranges::Except : public ydk::Entity
{
    public:
        Except();
        ~Except();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: one of uint16, enumeration

}; // Native::Logging::RateLimit::Ranges::Except


class Native::Logging::RateLimit::Console : public ydk::Entity
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

        class Ranges; //type: Native::Logging::RateLimit::Console::Ranges
        class All; //type: Native::Logging::RateLimit::Console::All

        ydk::YList ranges;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::All> all;
        
}; // Native::Logging::RateLimit::Console


class Native::Logging::RateLimit::Console::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

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

        ydk::YLeaf range; //type: uint16
        class Except; //type: Native::Logging::RateLimit::Console::Ranges::Except

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::Ranges::Except> except; // presence node
        
}; // Native::Logging::RateLimit::Console::Ranges


class Native::Logging::RateLimit::Console::Ranges::Except : public ydk::Entity
{
    public:
        Except();
        ~Except();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: one of uint16, enumeration

}; // Native::Logging::RateLimit::Console::Ranges::Except


class Native::Logging::RateLimit::Console::All : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Ranges; //type: Native::Logging::RateLimit::Console::All::Ranges

        ydk::YList ranges;
        
}; // Native::Logging::RateLimit::Console::All


class Native::Logging::RateLimit::Console::All::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

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

        ydk::YLeaf range; //type: uint16
        class Except; //type: Native::Logging::RateLimit::Console::All::Ranges::Except

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::Console::All::Ranges::Except> except; // presence node
        
}; // Native::Logging::RateLimit::Console::All::Ranges


class Native::Logging::RateLimit::Console::All::Ranges::Except : public ydk::Entity
{
    public:
        Except();
        ~Except();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: one of uint16, enumeration

}; // Native::Logging::RateLimit::Console::All::Ranges::Except


class Native::Logging::RateLimit::All : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Ranges; //type: Native::Logging::RateLimit::All::Ranges

        ydk::YList ranges;
        
}; // Native::Logging::RateLimit::All


class Native::Logging::RateLimit::All::Ranges : public ydk::Entity
{
    public:
        Ranges();
        ~Ranges();

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

        ydk::YLeaf range; //type: uint16
        class Except; //type: Native::Logging::RateLimit::All::Ranges::Except

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Logging::RateLimit::All::Ranges::Except> except; // presence node
        
}; // Native::Logging::RateLimit::All::Ranges


class Native::Logging::RateLimit::All::Ranges::Except : public ydk::Entity
{
    public:
        Except();
        ~Except();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: one of uint16, enumeration

}; // Native::Logging::RateLimit::All::Ranges::Except


class Native::Logging::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf vrf; //type: string

}; // Native::Logging::SourceInterface


class Native::Logging::SnmpTrap : public ydk::Entity
{
    public:
        SnmpTrap();
        ~SnmpTrap();

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

        ydk::YLeaf alerts; //type: empty
        ydk::YLeaf critical; //type: empty
        ydk::YLeaf debugging; //type: empty
        ydk::YLeaf emergencies; //type: empty
        ydk::YLeaf errors; //type: empty
        ydk::YLeaf informational; //type: empty
        ydk::YLeaf notifications; //type: empty
        ydk::YLeaf warnings; //type: empty

}; // Native::Logging::SnmpTrap


class Native::Logging::Trap : public ydk::Entity
{
    public:
        Trap();
        ~Trap();

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

        ydk::YLeaf trap_default; //type: empty
        ydk::YLeaf severity; //type: one of uint8, enumeration
        class Severity;

}; // Native::Logging::Trap

class Native::TableMap::Default_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf ignore;

};

class Native::ObjectGroup::Service::Tcp::TcpPortList::Operator_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf eq;
        static const ydk::Enum::YLeaf gt;
        static const ydk::Enum::YLeaf lt;
        static const ydk::Enum::YLeaf range;

};

class Native::ObjectGroup::Service::TcpUdp::UdpPortList::Operator_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf eq;
        static const ydk::Enum::YLeaf gt;
        static const ydk::Enum::YLeaf lt;
        static const ydk::Enum::YLeaf range;

};

class Native::ObjectGroup::Service::Udp::UdpPortList::Operator_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf eq;
        static const ydk::Enum::YLeaf gt;
        static const ydk::Enum::YLeaf lt;
        static const ydk::Enum::YLeaf range;

};

class Native::PseudowireClass::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tpv2;
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf udp;

};

class Native::PseudowireClass::Interworking : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf vlan;

};

class Native::PseudowireClass::Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf resync;
        static const ydk::Enum::YLeaf transmit;

};

class Native::PseudowireClass::Ip::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tp;
        static const ydk::Enum::YLeaf uti;

};

class Native::PseudowireClass::LoadBalance::Flow::Ethernet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dst_mac;
        static const ydk::Enum::YLeaf src_dst_mac;
        static const ydk::Enum::YLeaf src_mac;

};

class Native::PseudowireClass::ProtocolMpls::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf none;

};

class Native::PseudowireClass::ProtocolL2tpv2::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tpv2;
        static const ydk::Enum::YLeaf none;

};

class Native::PseudowireClass::ProtocolL2tpv3::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf l2tpv3ietf;
        static const ydk::Enum::YLeaf none;

};

class Native::Clock::SummerTime::RecurringStart : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf first;
        static const ydk::Enum::YLeaf last;

};

class Native::Clock::SummerTime::RecurringEnd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf first;
        static const ydk::Enum::YLeaf last;

};

class Native::Clock::Timezone::Offset : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y__PLUS__;
        static const ydk::Enum::YLeaf Y_;

};

class Native::Logging::Alarm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf major_;
        static const ydk::Enum::YLeaf minor;

};

class Native::Logging::Facility : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auth;
        static const ydk::Enum::YLeaf cron;
        static const ydk::Enum::YLeaf daemon;
        static const ydk::Enum::YLeaf kern;
        static const ydk::Enum::YLeaf local0;
        static const ydk::Enum::YLeaf local1;
        static const ydk::Enum::YLeaf local2;
        static const ydk::Enum::YLeaf local3;
        static const ydk::Enum::YLeaf local4;
        static const ydk::Enum::YLeaf local5;
        static const ydk::Enum::YLeaf local6;
        static const ydk::Enum::YLeaf local7;
        static const ydk::Enum::YLeaf lpr;
        static const ydk::Enum::YLeaf mail;
        static const ydk::Enum::YLeaf news;
        static const ydk::Enum::YLeaf sys10;
        static const ydk::Enum::YLeaf sys11;
        static const ydk::Enum::YLeaf sys12;
        static const ydk::Enum::YLeaf sys13;
        static const ydk::Enum::YLeaf sys14;
        static const ydk::Enum::YLeaf sys9;
        static const ydk::Enum::YLeaf syslog;
        static const ydk::Enum::YLeaf user;
        static const ydk::Enum::YLeaf uucp;

};

class Native::Logging::History::SeverityLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emergencies;
        static const ydk::Enum::YLeaf alerts;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf errors;
        static const ydk::Enum::YLeaf warnings;
        static const ydk::Enum::YLeaf notifications;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf debugging;

};

class Native::Logging::OriginId::TypeValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hostname;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipv6;

};

class Native::Logging::Trap::Severity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alerts;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf debugging;
        static const ydk::Enum::YLeaf emergencies;
        static const ydk::Enum::YLeaf errors;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf notifications;
        static const ydk::Enum::YLeaf warnings;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_117_ */

