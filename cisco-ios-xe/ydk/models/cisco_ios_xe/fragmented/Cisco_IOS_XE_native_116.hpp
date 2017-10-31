#ifndef _CISCO_IOS_XE_NATIVE_116_
#define _CISCO_IOS_XE_NATIVE_116_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_113.hpp"
#include "Cisco_IOS_XE_native_115.hpp"
#include "Cisco_IOS_XE_native_87.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Isis::FastReroute::PerPrefix::Level2 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf all; //type: empty
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Isis::FastReroute::PerPrefix::Level2


class Native::Router::Isis::FastReroute::RemoteLfa : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Level1; //type: Native::Router::Isis::FastReroute::RemoteLfa::Level1
        class Level2; //type: Native::Router::Isis::FastReroute::RemoteLfa::Level2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::RemoteLfa::Level1> level_1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::RemoteLfa::Level2> level_2;
        
}; // Native::Router::Isis::FastReroute::RemoteLfa


class Native::Router::Isis::FastReroute::RemoteLfa::Level1 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class MplsLdp; //type: Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp> mpls_ldp; // presence node
        
}; // Native::Router::Isis::FastReroute::RemoteLfa::Level1


class Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class MaximumMetric; //type: Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric> maximum_metric; // presence node
        
}; // Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp


class Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf max_met; //type: uint32

}; // Native::Router::Isis::FastReroute::RemoteLfa::Level1::MplsLdp::MaximumMetric


class Native::Router::Isis::FastReroute::RemoteLfa::Level2 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class MplsLdp; //type: Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp> mpls_ldp; // presence node
        
}; // Native::Router::Isis::FastReroute::RemoteLfa::Level2


class Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class MaximumMetric; //type: Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric> maximum_metric; // presence node
        
}; // Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp


class Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf max_met; //type: uint32

}; // Native::Router::Isis::FastReroute::RemoteLfa::Level2::MplsLdp::MaximumMetric


class Native::Router::Isis::FastReroute::TieBreak : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Level1; //type: Native::Router::Isis::FastReroute::TieBreak::Level1
        class Level2; //type: Native::Router::Isis::FastReroute::TieBreak::Level2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::TieBreak::Level1> level_1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::FastReroute::TieBreak::Level2> level_2;
        
}; // Native::Router::Isis::FastReroute::TieBreak


class Native::Router::Isis::FastReroute::TieBreak::Level1 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf downstream; //type: uint8
        ydk::YLeaf linecard_disjoint; //type: uint8
        ydk::YLeaf lowest_backup_path_metric; //type: uint8
        ydk::YLeaf node_protecting; //type: uint8
        ydk::YLeaf primary_path; //type: uint8
        ydk::YLeaf secondary_path; //type: uint8
        ydk::YLeaf srlg_disjoint; //type: uint8

}; // Native::Router::Isis::FastReroute::TieBreak::Level1


class Native::Router::Isis::FastReroute::TieBreak::Level2 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf downstream; //type: uint8
        ydk::YLeaf linecard_disjoint; //type: uint8
        ydk::YLeaf lowest_backup_path_metric; //type: uint8
        ydk::YLeaf node_protecting; //type: uint8
        ydk::YLeaf primary_path; //type: uint8
        ydk::YLeaf secondary_path; //type: uint8
        ydk::YLeaf srlg_disjoint; //type: uint8

}; // Native::Router::Isis::FastReroute::TieBreak::Level2


class Native::Router::Isis::TiLfa : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Level1; //type: Native::Router::Isis::TiLfa::Level1
        class Level2; //type: Native::Router::Isis::TiLfa::Level2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::TiLfa::Level1> level_1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::TiLfa::Level2> level_2; // presence node
        
}; // Native::Router::Isis::TiLfa


class Native::Router::Isis::TiLfa::Level1 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class MaximumMetric; //type: Native::Router::Isis::TiLfa::Level1::MaximumMetric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::TiLfa::Level1::MaximumMetric> maximum_metric;
        
}; // Native::Router::Isis::TiLfa::Level1


class Native::Router::Isis::TiLfa::Level1::MaximumMetric : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf max_met; //type: uint32

}; // Native::Router::Isis::TiLfa::Level1::MaximumMetric


class Native::Router::Isis::TiLfa::Level2 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class MaximumMetric; //type: Native::Router::Isis::TiLfa::Level2::MaximumMetric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::TiLfa::Level2::MaximumMetric> maximum_metric;
        
}; // Native::Router::Isis::TiLfa::Level2


class Native::Router::Isis::TiLfa::Level2::MaximumMetric : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf max_met; //type: uint32

}; // Native::Router::Isis::TiLfa::Level2::MaximumMetric


class Native::Router::Isis::Hello : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Padding; //type: Native::Router::Isis::Hello::Padding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Router::Isis::Hello


class Native::Router::Isis::Hello::Padding : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf pad_type; //type: PadType
        class PadType;

}; // Native::Router::Isis::Hello::Padding


class Native::Router::Isis::Hostname : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf dynamic; //type: empty

}; // Native::Router::Isis::Hostname


class Native::Router::Isis::Ispf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf level; //type: Level
        ydk::YLeaf number; //type: uint32
        class Level;

}; // Native::Router::Isis::Ispf


class Native::Router::Isis::LogAdjacencyChanges : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf all; //type: empty

}; // Native::Router::Isis::LogAdjacencyChanges


class Native::Router::Isis::LspFull : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Suppress; //type: Native::Router::Isis::LspFull::Suppress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::LspFull::Suppress> suppress;
        
}; // Native::Router::Isis::LspFull


class Native::Router::Isis::LspFull::Suppress : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf none; //type: empty
        class ExternalInterlevelContainer; //type: Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer> external_interlevel_container;
        
}; // Native::Router::Isis::LspFull::Suppress


class Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf external; //type: empty
        ydk::YLeaf interlevel; //type: empty

}; // Native::Router::Isis::LspFull::Suppress::ExternalInterlevelContainer


class Native::Router::Isis::LspGenInterval : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Intervals; //type: Native::Router::Isis::LspGenInterval::Intervals
        class IntervalsLevels; //type: Native::Router::Isis::LspGenInterval::IntervalsLevels

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::LspGenInterval::Intervals> intervals;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::LspGenInterval::IntervalsLevels> intervals_levels;
        
}; // Native::Router::Isis::LspGenInterval


class Native::Router::Isis::LspGenInterval::Intervals : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf initial_wait; //type: uint32
        ydk::YLeaf wait; //type: uint32

}; // Native::Router::Isis::LspGenInterval::Intervals


class Native::Router::Isis::LspGenInterval::IntervalsLevels : public ydk::Entity
{
    public:
        IntervalsLevels();
        ~IntervalsLevels();

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

        class IntervalsLevel1; //type: Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1
        class IntervalsLevel2; //type: Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1> intervals_level_1;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2> intervals_level_2;
        
}; // Native::Router::Isis::LspGenInterval::IntervalsLevels


class Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1 : public ydk::Entity
{
    public:
        IntervalsLevel1();
        ~IntervalsLevel1();

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

        ydk::YLeaf level_1; //type: empty
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf initial_wait; //type: uint32
        ydk::YLeaf wait; //type: uint32

}; // Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel1


class Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2 : public ydk::Entity
{
    public:
        IntervalsLevel2();
        ~IntervalsLevel2();

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

        ydk::YLeaf level_2; //type: empty
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf initial_wait; //type: uint32
        ydk::YLeaf wait; //type: uint32

}; // Native::Router::Isis::LspGenInterval::IntervalsLevels::IntervalsLevel2


class Native::Router::Isis::Microloop : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Avoidance; //type: Native::Router::Isis::Microloop::Avoidance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Microloop::Avoidance> avoidance; // presence node
        
}; // Native::Router::Isis::Microloop


class Native::Router::Isis::Microloop::Avoidance : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf disable; //type: empty
        ydk::YLeaf protected_; //type: empty
        ydk::YLeaf rib_update_delay; //type: uint32

}; // Native::Router::Isis::Microloop::Avoidance


class Native::Router::Isis::Mpls : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Ldp; //type: Native::Router::Isis::Mpls::Ldp
        class TrafficEng; //type: Native::Router::Isis::Mpls::TrafficEng

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Mpls::Ldp> ldp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Mpls::TrafficEng> traffic_eng;
        
}; // Native::Router::Isis::Mpls


class Native::Router::Isis::Mpls::Ldp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf sync; //type: empty
        ydk::YLeaf sync_igp_shortcuts; //type: empty
        class Autoconfig; //type: Native::Router::Isis::Mpls::Ldp::Autoconfig

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Mpls::Ldp::Autoconfig> autoconfig; // presence node
        
}; // Native::Router::Isis::Mpls::Ldp


class Native::Router::Isis::Mpls::Ldp::Autoconfig : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf level_1; //type: empty
        ydk::YLeaf level_2; //type: empty

}; // Native::Router::Isis::Mpls::Ldp::Autoconfig


class Native::Router::Isis::Mpls::TrafficEng : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf level_1; //type: empty
        ydk::YLeaf level_2; //type: empty
        ydk::YLeaf multicast_intact; //type: empty
        class RouterId; //type: Native::Router::Isis::Mpls::TrafficEng::RouterId
        class Scanner; //type: Native::Router::Isis::Mpls::TrafficEng::Scanner

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Mpls::TrafficEng::RouterId> router_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Mpls::TrafficEng::Scanner> scanner;
        
}; // Native::Router::Isis::Mpls::TrafficEng


class Native::Router::Isis::Mpls::TrafficEng::RouterId : public ydk::Entity
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
        std::string get_absolute_path() const override;

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
        class ATMSubinterface; //type: Native::Router::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Router::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Router::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Isis::Mpls::TrafficEng::RouterId


class Native::Router::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf atm; //type: string

}; // Native::Router::Isis::Mpls::TrafficEng::RouterId::ATMSubinterface


class Native::Router::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Router::Isis::Mpls::TrafficEng::RouterId::ATMACRsubinterface


class Native::Router::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Router::Isis::Mpls::TrafficEng::RouterId::LISPSubinterface


class Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Router::Isis::Mpls::TrafficEng::RouterId::PortChannelSubinterface


class Native::Router::Isis::Mpls::TrafficEng::Scanner : public ydk::Entity
{
    public:
        Scanner();
        ~Scanner();

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

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf max_flash; //type: uint32

}; // Native::Router::Isis::Mpls::TrafficEng::Scanner


class Native::Router::Isis::Net : public ydk::Entity
{
    public:
        Net();
        ~Net();

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

        ydk::YLeaf tag; //type: string

}; // Native::Router::Isis::Net


class Native::Router::Isis::Nsf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf cisco; //type: empty
        ydk::YLeaf ietf; //type: empty
        ydk::YLeaf interval; //type: uint16
        class Interface; //type: Native::Router::Isis::Nsf::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Nsf::Interface> interface;
        
}; // Native::Router::Isis::Nsf


class Native::Router::Isis::Nsf::Interface : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf wait; //type: uint8

}; // Native::Router::Isis::Nsf::Interface


class Native::Router::Isis::Partition : public ydk::Entity
{
    public:
        Partition();
        ~Partition();

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

        ydk::YLeaf avoidance; //type: empty

}; // Native::Router::Isis::Partition


class Native::Router::Isis::PassiveInterface : public ydk::Entity
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

}; // Native::Router::Isis::PassiveInterface


class Native::Router::Isis::Disable : public ydk::Entity
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

        class PassiveInterface; //type: Native::Router::Isis::Disable::PassiveInterface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Disable::PassiveInterface> > passive_interface;
        
}; // Native::Router::Isis::Disable


class Native::Router::Isis::Disable::PassiveInterface : public ydk::Entity
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

}; // Native::Router::Isis::Disable::PassiveInterface


class Native::Router::Isis::Protocol : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf shutdown; //type: empty

}; // Native::Router::Isis::Protocol


class Native::Router::Isis::SegmentRouting : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf mpls; //type: empty
        class PrefixSidMap; //type: Native::Router::Isis::SegmentRouting::PrefixSidMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::SegmentRouting::PrefixSidMap> prefix_sid_map;
        
}; // Native::Router::Isis::SegmentRouting


class Native::Router::Isis::SegmentRouting::PrefixSidMap : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf advertise_local; //type: empty
        class Receive; //type: Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive> receive; // presence node
        
}; // Native::Router::Isis::SegmentRouting::PrefixSidMap


class Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Router::Isis::SegmentRouting::PrefixSidMap::Receive


class Native::Router::Isis::Skeptical : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: uint16

}; // Native::Router::Isis::Skeptical


class Native::Router::Isis::Use : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf external_metrics; //type: empty

}; // Native::Router::Isis::Use


class Native::Router::Isis::Bfd : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf all_interfaces; //type: empty
        ydk::YLeaf check_ctrl_plane_failure; //type: empty

}; // Native::Router::Isis::Bfd


class Native::Router::IsisContainer : public ydk::Entity
{
    public:
        IsisContainer();
        ~IsisContainer();

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

        class Isis; //type: Native::Router::IsisContainer::Isis

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis> > isis;
        
}; // Native::Router::IsisContainer


class Native::Router::IsisContainer::Isis : public ydk::Entity
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

        ydk::YLeaf area_tag; //type: string
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf help; //type: empty
        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf ignore_lsp_errors; //type: empty
        ydk::YLeaf is_type; //type: IsType
        ydk::YLeaf lsp_mtu; //type: uint32
        ydk::YLeaf lsp_refresh_interval; //type: uint32
        ydk::YLeaf max_area_addresses; //type: uint32
        ydk::YLeaf max_lsp_lifetime; //type: uint32
        ydk::YLeaf update_queue_depth; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf adjacency_check; //type: empty
        ydk::YLeaf router_id; //type: string
        class MetricStyle; //type: Native::Router::IsisContainer::Isis::MetricStyle
        class AddressFamily; //type: Native::Router::IsisContainer::Isis::AddressFamily
        class Distance; //type: Native::Router::IsisContainer::Isis::Distance
        class Ip; //type: Native::Router::IsisContainer::Isis::Ip
        class Redistribute; //type: Native::Router::IsisContainer::Isis::Redistribute
        class SetAttachedBit; //type: Native::Router::IsisContainer::Isis::SetAttachedBit
        class Snmp; //type: Native::Router::IsisContainer::Isis::Snmp
        class SummaryAddress; //type: Native::Router::IsisContainer::Isis::SummaryAddress
        class TrafficShare; //type: Native::Router::IsisContainer::Isis::TrafficShare
        class Advertise; //type: Native::Router::IsisContainer::Isis::Advertise
        class DefaultInformation; //type: Native::Router::IsisContainer::Isis::DefaultInformation
        class Metric; //type: Native::Router::IsisContainer::Isis::Metric
        class PrcInterval; //type: Native::Router::IsisContainer::Isis::PrcInterval
        class SetOverloadBit; //type: Native::Router::IsisContainer::Isis::SetOverloadBit
        class SpfInterval; //type: Native::Router::IsisContainer::Isis::SpfInterval
        class AreaPassword; //type: Native::Router::IsisContainer::Isis::AreaPassword
        class Authentication; //type: Native::Router::IsisContainer::Isis::Authentication
        class DistributeList; //type: Native::Router::IsisContainer::Isis::DistributeList
        class DomainPassword; //type: Native::Router::IsisContainer::Isis::DomainPassword
        class FastFlood; //type: Native::Router::IsisContainer::Isis::FastFlood
        class FastReroute; //type: Native::Router::IsisContainer::Isis::FastReroute
        class TiLfa; //type: Native::Router::IsisContainer::Isis::TiLfa
        class Hello; //type: Native::Router::IsisContainer::Isis::Hello
        class Hostname; //type: Native::Router::IsisContainer::Isis::Hostname
        class Ispf; //type: Native::Router::IsisContainer::Isis::Ispf
        class LogAdjacencyChanges; //type: Native::Router::IsisContainer::Isis::LogAdjacencyChanges
        class LspFull; //type: Native::Router::IsisContainer::Isis::LspFull
        class LspGenInterval; //type: Native::Router::IsisContainer::Isis::LspGenInterval
        class Microloop; //type: Native::Router::IsisContainer::Isis::Microloop
        class Mpls; //type: Native::Router::IsisContainer::Isis::Mpls
        class Net; //type: Native::Router::IsisContainer::Isis::Net
        class Nsf; //type: Native::Router::IsisContainer::Isis::Nsf
        class Partition; //type: Native::Router::IsisContainer::Isis::Partition
        class PassiveInterface; //type: Native::Router::IsisContainer::Isis::PassiveInterface
        class Disable; //type: Native::Router::IsisContainer::Isis::Disable
        class Protocol; //type: Native::Router::IsisContainer::Isis::Protocol
        class SegmentRouting; //type: Native::Router::IsisContainer::Isis::SegmentRouting
        class Skeptical; //type: Native::Router::IsisContainer::Isis::Skeptical
        class Use; //type: Native::Router::IsisContainer::Isis::Use
        class Bfd; //type: Native::Router::IsisContainer::Isis::Bfd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::MetricStyle> metric_style;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily> address_family;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Distance> > distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SetAttachedBit> set_attached_bit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Snmp> snmp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SummaryAddress> > summary_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::TrafficShare> traffic_share;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Advertise> advertise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::PrcInterval> prc_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SetOverloadBit> set_overload_bit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SpfInterval> spf_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AreaPassword> area_password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::DomainPassword> domain_password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastFlood> fast_flood; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::TiLfa> ti_lfa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Hello> hello;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Hostname> hostname;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Ispf> ispf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LogAdjacencyChanges> log_adjacency_changes; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LspFull> lsp_full;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::LspGenInterval> lsp_gen_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Microloop> microloop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Mpls> mpls;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Net> > net;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Nsf> nsf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Partition> partition;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::PassiveInterface> passive_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Disable> disable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Protocol> protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Skeptical> skeptical;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Use> use;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::Bfd> bfd;
                class IsType;

}; // Native::Router::IsisContainer::Isis


class Native::Router::IsisContainer::Isis::MetricStyle : public ydk::Entity
{
    public:
        MetricStyle();
        ~MetricStyle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Narrow; //type: Native::Router::IsisContainer::Isis::MetricStyle::Narrow
        class Transition; //type: Native::Router::IsisContainer::Isis::MetricStyle::Transition
        class Wide; //type: Native::Router::IsisContainer::Isis::MetricStyle::Wide

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::MetricStyle::Narrow> narrow; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::MetricStyle::Transition> transition; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::MetricStyle::Wide> wide; // presence node
        
}; // Native::Router::IsisContainer::Isis::MetricStyle


class Native::Router::IsisContainer::Isis::MetricStyle::Narrow : public ydk::Entity
{
    public:
        Narrow();
        ~Narrow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf narrow_wide; //type: IsisLevelType
        ydk::YLeaf transition; //type: IsisLevelType

}; // Native::Router::IsisContainer::Isis::MetricStyle::Narrow


class Native::Router::IsisContainer::Isis::MetricStyle::Transition : public ydk::Entity
{
    public:
        Transition();
        ~Transition();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transition; //type: IsisLevelType

}; // Native::Router::IsisContainer::Isis::MetricStyle::Transition


class Native::Router::IsisContainer::Isis::MetricStyle::Wide : public ydk::Entity
{
    public:
        Wide();
        ~Wide();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf narrow_wide; //type: IsisLevelType
        ydk::YLeaf transition; //type: IsisLevelType

}; // Native::Router::IsisContainer::Isis::MetricStyle::Wide


class Native::Router::IsisContainer::Isis::AddressFamily : public ydk::Entity
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

        class Ipv4; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4
        class Ipv6; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv6> ipv6;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4 : public ydk::Entity
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

        ydk::YLeaf unicast_multicast; //type: UnicastMulticast
        ydk::YLeaf help; //type: empty
        class Snmp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp
        class Topology; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp> snmp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology> > topology;
                class UnicastMulticast;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp : public ydk::Entity
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

        class Context; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context> > context;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context : public ydk::Entity
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
        class Community; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community
        class User; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community> community;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User> user;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community : public ydk::Entity
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
        class Access; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access> access;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User : public ydk::Entity
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
        class Permisssion; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion> permisssion;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion : public ydk::Entity
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
        class Access; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access
        class Auth; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth> auth;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf tid; //type: uint32
        ydk::YLeaf ignore_attached_bit; //type: empty
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf help; //type: empty
        ydk::YLeaf maximum_paths; //type: uint32
        class Distance; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip
        class Redistribute; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute
        class SetAttachedBit; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit
        class Snmp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp
        class SummaryAddress; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress
        class TrafficShare; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::TrafficShare
        class Advertise; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Advertise
        class DefaultInformation; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::DefaultInformation
        class Metric; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Metric
        class PrcInterval; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::PrcInterval
        class SetOverloadBit; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit
        class SpfInterval; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SpfInterval

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance> > distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit> set_attached_bit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Snmp> snmp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SummaryAddress> > summary_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::TrafficShare> traffic_share;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Advertise> advertise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::PrcInterval> prc_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit> set_overload_bit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::SpfInterval> spf_interval;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance : public ydk::Entity
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

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf clns; //type: empty
        ydk::YLeaf ip; //type: empty
        class IpList; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList> > ip_list;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

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
        class WildcardBits; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits> > wildcard_bits;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits : public ydk::Entity
{
    public:
        WildcardBits();
        ~WildcardBits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf w_bits; //type: string
        ydk::YLeaf access_list; //type: one of uint16, uint8

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip : public ydk::Entity
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

        class Route; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route> route;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Priority; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority> priority;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class High; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High> high;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: uint32

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute : public ydk::Entity
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

        class Application; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application
        class Bgp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp
        class Connected; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected
        class Eigrp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp
        class Isis_; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_
        class IsoIgrp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp
        class Lisp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp
        class MaximumPrefix; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix
        class Mobile; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile
        class Odr; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr
        class Ospf; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf
        class Ospfv3; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3
        class Rip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip
        class Static_; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_
        class Vrf; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application> > application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp> lisp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3> > ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip> rip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_> static_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf> vrf;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application : public ydk::Entity
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
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class MetricType;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp : public ydk::Entity
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
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class Clns; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns> clns; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip> ip; // presence node
                class MetricType;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_ : public ydk::Entity
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

        class IsisRedistribute; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute> > isis_redistribute;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip> > ip;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute : public ydk::Entity
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
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip> ip; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp : public ydk::Entity
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
        class AreaTagRouteMapContainer; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
                class MetricType;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf : public ydk::Entity
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
        class Match; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match> match;
                class MetricType;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3 : public ydk::Entity
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
        class Match; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match> match;
                class MetricType;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match : public ydk::Entity
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

        class Internal; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal
        class External; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External
        class NssaExternal; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_ : public ydk::Entity
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

        class Clns; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns> clns; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip> ip; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf : public ydk::Entity
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

        class VrfNm; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm
        class Global; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm> > vrf_nm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global> global;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm : public ydk::Entity
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
        class Application; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application
        class Bgp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp
        class Connected; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected
        class Eigrp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp
        class Isis_; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_
        class IsoIgrp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp
        class Lisp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp
        class Mobile; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile
        class Ospfv3; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3
        class Rip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip
        class Static_; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected> connected; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp> lisp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3> ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip> rip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_> static_; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application : public ydk::Entity
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

        class Appname; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname> > appname;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp : public ydk::Entity
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
        class BpAsNum; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum> > bp_as_num;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum : public ydk::Entity
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

        ydk::YLeaf bp_as_num; //type: one of string, uint32
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class Clns; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns> clns; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip> ip; // presence node
                class MetricType;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp : public ydk::Entity
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

        class EigrpAs; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs> > eigrp_as;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_ : public ydk::Entity
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

        class IsisAtag; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag> > isis_atag;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip> ip; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag : public ydk::Entity
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
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip> ip;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp : public ydk::Entity
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

        class IsoAtag; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag
        class RouteMap; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag> > iso_atag;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap> route_map; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3 : public ydk::Entity
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

        class Os3Id; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id> > os3_id;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_ : public ydk::Entity
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
        class Clns; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns> clns; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip> ip; // presence node
                class MetricType;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global : public ydk::Entity
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
        class Application; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application
        class Bgp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp
        class Connected; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected
        class Eigrp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp
        class Isis_; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_
        class IsoIgrp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp
        class Lisp; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp
        class Mobile; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile
        class Ospfv3; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3
        class Rip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip
        class Static_; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected> connected; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp> lisp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3> ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip> rip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_> static_; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application : public ydk::Entity
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

        class Appname; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname> > appname;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp : public ydk::Entity
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
        class BpAsNum; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum> > bp_as_num;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum : public ydk::Entity
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

        ydk::YLeaf bp_as_num; //type: one of string, uint32
        ydk::YLeaf levels; //type: IsisRoutesLevelType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf metric_type; //type: MetricType
        ydk::YLeaf route_map; //type: string
        class Clns; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns> clns; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip> ip; // presence node
                class MetricType;

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp : public ydk::Entity
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

        class EigrpAs; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs> > eigrp_as;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_ : public ydk::Entity
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

        class IsisAtag; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag> > isis_atag;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip> ip; // presence node
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag : public ydk::Entity
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
        class Ip; //type: Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip> ip;
        
}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip


class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip : public ydk::Entity
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

}; // Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip

class Native::Router::Isis::Hello::Padding::PadType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf multi_point;
        static const ydk::Enum::YLeaf point_to_point;

};

class Native::Router::Isis::Ispf::Level : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_1_2;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::IsType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_1_2;
        static const ydk::Enum::YLeaf level_2_only;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::UnicastMulticast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels2 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};

class Native::Router::IsisContainer::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::MetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf rib_metric_as_external;
        static const ydk::Enum::YLeaf rib_metric_as_internal;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_116_ */

