#ifndef _CISCO_IOS_XR_ASR9K_LPTS_OPER_
#define _CISCO_IOS_XR_ASR9K_LPTS_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_lpts_oper {

class PlatformLptspIfibStatic : public ydk::Entity
{
    public:
        PlatformLptspIfibStatic();
        ~PlatformLptspIfibStatic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class NodeStatics; //type: PlatformLptspIfibStatic::NodeStatics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfibStatic::NodeStatics> node_statics;
        
}; // PlatformLptspIfibStatic


class PlatformLptspIfibStatic::NodeStatics : public ydk::Entity
{
    public:
        NodeStatics();
        ~NodeStatics();

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

        class NodeStatic; //type: PlatformLptspIfibStatic::NodeStatics::NodeStatic

        ydk::YList node_static;
        
}; // PlatformLptspIfibStatic::NodeStatics


class PlatformLptspIfibStatic::NodeStatics::NodeStatic : public ydk::Entity
{
    public:
        NodeStatic();
        ~NodeStatic();

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

        ydk::YLeaf node_name; //type: string
        class Police; //type: PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police
        class Stats; //type: PlatformLptspIfibStatic::NodeStatics::NodeStatic::Stats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfibStatic::NodeStatics::NodeStatic::Stats> stats;
        
}; // PlatformLptspIfibStatic::NodeStatics::NodeStatic


class PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police : public ydk::Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticInfo; //type: PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::StaticInfo

        ydk::YList static_info;
        
}; // PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police


class PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::StaticInfo : public ydk::Entity
{
    public:
        StaticInfo();
        ~StaticInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf punt_reason; //type: uint32
        ydk::YLeaf sid; //type: uint32
        ydk::YLeaf flow_rate; //type: uint32
        ydk::YLeaf burst_rate; //type: uint32
        ydk::YLeaf accepted; //type: uint64
        ydk::YLeaf dropped; //type: uint64
        ydk::YLeaf punt_reason_string; //type: string
        ydk::YLeaf change_type; //type: uint8

}; // PlatformLptspIfibStatic::NodeStatics::NodeStatic::Police::StaticInfo


class PlatformLptspIfibStatic::NodeStatics::NodeStatic::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accepted; //type: uint64
        ydk::YLeaf dropped; //type: uint64
        ydk::YLeaf clear_ts; //type: uint64
        ydk::YLeaf no_stats_mem_err; //type: uint64

}; // PlatformLptspIfibStatic::NodeStatics::NodeStatic::Stats

class PlatformLptspIfib : public ydk::Entity
{
    public:
        PlatformLptspIfib();
        ~PlatformLptspIfib();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Nodes; //type: PlatformLptspIfib::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfib::Nodes> nodes;
        
}; // PlatformLptspIfib


class PlatformLptspIfib::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: PlatformLptspIfib::Nodes::Node

        ydk::YList node;
        
}; // PlatformLptspIfib::Nodes


class PlatformLptspIfib::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_name; //type: string
        class Police; //type: PlatformLptspIfib::Nodes::Node::Police
        class Stats; //type: PlatformLptspIfib::Nodes::Node::Stats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfib::Nodes::Node::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfib::Nodes::Node::Stats> stats;
        
}; // PlatformLptspIfib::Nodes::Node


class PlatformLptspIfib::Nodes::Node::Police : public ydk::Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PoliceInfo; //type: PlatformLptspIfib::Nodes::Node::Police::PoliceInfo

        ydk::YList police_info;
        
}; // PlatformLptspIfib::Nodes::Node::Police


class PlatformLptspIfib::Nodes::Node::Police::PoliceInfo : public ydk::Entity
{
    public:
        PoliceInfo();
        ~PoliceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf avgrate; //type: uint32
        ydk::YLeaf burst; //type: uint32
        ydk::YLeaf static_avgrate; //type: uint32
        ydk::YLeaf avgrate_type; //type: string
        ydk::YLeaf flow_type; //type: string
        ydk::YLeaf accepted_stats; //type: uint64
        ydk::YLeaf dropped_stats; //type: uint64
        ydk::YLeaf policer; //type: uint32
        ydk::YLeaf str_iptos_val; //type: string
        ydk::YLeaf change_type; //type: uint8
        ydk::YLeaf acl_config; //type: uint8
        ydk::YLeaf acl_str; //type: string

}; // PlatformLptspIfib::Nodes::Node::Police::PoliceInfo


class PlatformLptspIfib::Nodes::Node::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accepted; //type: uint64
        ydk::YLeaf dropped; //type: uint64
        ydk::YLeaf clear_ts; //type: uint64
        ydk::YLeaf no_stats_mem_err; //type: uint64

}; // PlatformLptspIfib::Nodes::Node::Stats

class PlatformLptspIfibNpStats : public ydk::Entity
{
    public:
        PlatformLptspIfibNpStats();
        ~PlatformLptspIfibNpStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class NodeNpStats; //type: PlatformLptspIfibNpStats::NodeNpStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfibNpStats::NodeNpStats> node_np_stats;
        
}; // PlatformLptspIfibNpStats


class PlatformLptspIfibNpStats::NodeNpStats : public ydk::Entity
{
    public:
        NodeNpStats();
        ~NodeNpStats();

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

        class NodeNpStat; //type: PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat

        ydk::YList node_np_stat;
        
}; // PlatformLptspIfibNpStats::NodeNpStats


class PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat : public ydk::Entity
{
    public:
        NodeNpStat();
        ~NodeNpStat();

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

        ydk::YLeaf node_name; //type: string
        class Nps; //type: PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps> nps;
        
}; // PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat


class PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps : public ydk::Entity
{
    public:
        Nps();
        ~Nps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Np; //type: PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np

        ydk::YList np;
        
}; // PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps


class PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np : public ydk::Entity
{
    public:
        Np();
        ~Np();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf np_name; //type: string
        class NpPolice; //type: PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice> np_police;
        
}; // PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np


class PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice : public ydk::Entity
{
    public:
        NpPolice();
        ~NpPolice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PoliceInfo; //type: PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::PoliceInfo

        ydk::YList police_info;
        
}; // PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice


class PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::PoliceInfo : public ydk::Entity
{
    public:
        PoliceInfo();
        ~PoliceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf avgrate; //type: uint32
        ydk::YLeaf burst; //type: uint32
        ydk::YLeaf static_avgrate; //type: uint32
        ydk::YLeaf avgrate_type; //type: string
        ydk::YLeaf flow_type; //type: string
        ydk::YLeaf accepted_stats; //type: uint64
        ydk::YLeaf dropped_stats; //type: uint64
        ydk::YLeaf policer; //type: uint32
        ydk::YLeaf str_iptos_val; //type: string
        ydk::YLeaf change_type; //type: uint8
        ydk::YLeaf acl_config; //type: uint8
        ydk::YLeaf acl_str; //type: string

}; // PlatformLptspIfibNpStats::NodeNpStats::NodeNpStat::Nps::Np::NpPolice::PoliceInfo


}
}

#endif /* _CISCO_IOS_XR_ASR9K_LPTS_OPER_ */

