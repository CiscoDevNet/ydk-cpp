#ifndef _CISCO_IOS_XR_LPTS_PRE_IFIB_OPER_
#define _CISCO_IOS_XR_LPTS_PRE_IFIB_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lpts_pre_ifib_oper {

class LptsPifib_ : public ydk::Entity
{
    public:
        LptsPifib_();
        ~LptsPifib_();

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

        class Nodes; //type: LptsPifib_::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes> nodes;
        
}; // LptsPifib_


class LptsPifib_::Nodes : public ydk::Entity
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

        class Node; //type: LptsPifib_::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node> > node;
        
}; // LptsPifib_::Nodes


class LptsPifib_::Nodes::Node : public ydk::Entity
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
        class TypeValues; //type: LptsPifib_::Nodes::Node::TypeValues
        class DynamicFlowsStats; //type: LptsPifib_::Nodes::Node::DynamicFlowsStats
        class Hardware; //type: LptsPifib_::Nodes::Node::Hardware

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::DynamicFlowsStats> dynamic_flows_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::Hardware> hardware;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::TypeValues> type_values;
        
}; // LptsPifib_::Nodes::Node


class LptsPifib_::Nodes::Node::DynamicFlowsStats : public ydk::Entity
{
    public:
        DynamicFlowsStats();
        ~DynamicFlowsStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic_flows_enabled; //type: boolean
        ydk::YLeaf platform_supported_max; //type: uint32
        ydk::YLeaf platform_configured_max; //type: uint32
        ydk::YLeaf platform_total_configured; //type: uint32
        ydk::YLeaf total_hw_entries; //type: uint32
        ydk::YLeaf total_sw_entries; //type: uint32
        class Flow; //type: LptsPifib_::Nodes::Node::DynamicFlowsStats::Flow

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::DynamicFlowsStats::Flow> > flow;
        
}; // LptsPifib_::Nodes::Node::DynamicFlowsStats


class LptsPifib_::Nodes::Node::DynamicFlowsStats::Flow : public ydk::Entity
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

        ydk::YLeaf flow_name; //type: string
        ydk::YLeaf configurable; //type: boolean
        ydk::YLeaf configured; //type: boolean
        ydk::YLeaf default_max; //type: uint32
        ydk::YLeaf configured_max; //type: string
        ydk::YLeaf active_max; //type: uint32
        ydk::YLeaf hardware_count; //type: uint32
        ydk::YLeaf software_count; //type: uint32
        ydk::YLeaf pending_software_entries; //type: boolean

}; // LptsPifib_::Nodes::Node::DynamicFlowsStats::Flow


class LptsPifib_::Nodes::Node::Hardware : public ydk::Entity
{
    public:
        Hardware();
        ~Hardware();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UsageEntries; //type: LptsPifib_::Nodes::Node::Hardware::UsageEntries
        class Police; //type: LptsPifib_::Nodes::Node::Hardware::Police
        class StaticPolice; //type: LptsPifib_::Nodes::Node::Hardware::StaticPolice
        class Bfd; //type: LptsPifib_::Nodes::Node::Hardware::Bfd
        class Statistics; //type: LptsPifib_::Nodes::Node::Hardware::Statistics
        class IndexEntries; //type: LptsPifib_::Nodes::Node::Hardware::IndexEntries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::Hardware::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::Hardware::IndexEntries> index_entries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::Hardware::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::Hardware::StaticPolice> static_police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::Hardware::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::Hardware::UsageEntries> usage_entries;
        
}; // LptsPifib_::Nodes::Node::Hardware


class LptsPifib_::Nodes::Node::Hardware::Bfd : public ydk::Entity
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

        class BfdEntryInfo; //type: LptsPifib_::Nodes::Node::Hardware::Bfd::BfdEntryInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::Hardware::Bfd::BfdEntryInfo> > bfd_entry_info;
        
}; // LptsPifib_::Nodes::Node::Hardware::Bfd


class LptsPifib_::Nodes::Node::Hardware::Bfd::BfdEntryInfo : public ydk::Entity
{
    public:
        BfdEntryInfo();
        ~BfdEntryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint8
        ydk::YLeaf is_mcast; //type: uint8
        ydk::YLeaf fgid_or_vqi; //type: uint32
        ydk::YLeaf is_valid; //type: uint8
        ydk::YLeaf policer_id; //type: uint32

}; // LptsPifib_::Nodes::Node::Hardware::Bfd::BfdEntryInfo


class LptsPifib_::Nodes::Node::Hardware::IndexEntries : public ydk::Entity
{
    public:
        IndexEntries();
        ~IndexEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IndexEntry; //type: LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry> > index_entry;
        
}; // LptsPifib_::Nodes::Node::Hardware::IndexEntries


class LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry : public ydk::Entity
{
    public:
        IndexEntry();
        ~IndexEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: int32
        ydk::YLeaf l3protocol; //type: uint32
        ydk::YLeaf l4protocol; //type: uint32
        ydk::YLeaf intf_handle; //type: uint32
        ydk::YLeaf intf_name; //type: string
        ydk::YLeaf uidb_index; //type: uint32
        ydk::YLeaf local_addr; //type: string
        ydk::YLeaf local_prefix_len; //type: uint32
        ydk::YLeaf remote_addr; //type: string
        ydk::YLeaf remote_prefix_len; //type: uint32
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf u_value; //type: uint32
        ydk::YLeaf u_len; //type: uint32
        ydk::YLeaf local_port; //type: uint32
        ydk::YLeaf is_frag; //type: uint8
        ydk::YLeaf is_syn; //type: uint8
        ydk::YLeaf action; //type: uint8
        ydk::YLeaf action_string; //type: string
        ydk::YLeaf listener_tag; //type: uint8
        ydk::YLeaf is_fgid; //type: uint8
        ydk::YLeaf is_vrf; //type: uint8
        ydk::YLeaf is_optimized; //type: uint8
        ydk::YLeaf is_uidb_opt_bit; //type: uint8
        ydk::YLeaf fgid_or_sfp; //type: uint32
        ydk::YLeaf remote_rack; //type: uint8
        ydk::YLeaf rack_id; //type: uint32
        ydk::YLeaf rslot; //type: uint32
        ydk::YLeaf cir; //type: uint64
        ydk::YLeaf flow_type; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf sid; //type: uint32
        ydk::YLeaf policer_avgrate; //type: uint32
        ydk::YLeaf policer_burst; //type: uint32
        ydk::YLeaf lookup_priority; //type: int32
        ydk::YLeaf storage_priority; //type: int32
        ydk::YLeaf num_tm_entries; //type: int32
        ydk::YLeaf entry_ptr; //type: uint32
        ydk::YLeaf entry_shadow_ptr; //type: uint32
        ydk::YLeaf list_node_ptr; //type: uint32
        ydk::YLeaf state; //type: uint8
        ydk::YLeaf retry_fail_cause; //type: uint8
        ydk::YLeaf num_retries; //type: uint8
        ydk::YLeaf min_ttl; //type: uint8
        ydk::YLeaf u_type; //type: uint8
        ydk::YLeaf remote_fgid; //type: uint32
        ydk::YLeaf acl_str; //type: string
        ydk::YLeaf no_stats; //type: uint8
        class HwInfo; //type: LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo> > hw_info;
        
}; // LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry


class LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo : public ydk::Entity
{
    public:
        HwInfo();
        ~HwInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policer; //type: uint32
        ydk::YLeaf stats_ptr; //type: uint32
        ydk::YLeaf accepted; //type: uint64
        ydk::YLeaf dropped; //type: uint64
        ydk::YLeaf sort_start_offset; //type: int32
        ydk::YLeaf tm_start_offset; //type: int32

}; // LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo


class LptsPifib_::Nodes::Node::Hardware::Police : public ydk::Entity
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

        class PoliceInfo; //type: LptsPifib_::Nodes::Node::Hardware::Police::PoliceInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::Hardware::Police::PoliceInfo> > police_info;
        
}; // LptsPifib_::Nodes::Node::Hardware::Police


class LptsPifib_::Nodes::Node::Hardware::Police::PoliceInfo : public ydk::Entity
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
        ydk::YLeaf avgrate_type; //type: uint32
        ydk::YLeaf accepted_stats; //type: uint64
        ydk::YLeaf dropped_stats; //type: uint64
        ydk::YLeaf policer; //type: uint32
        ydk::YLeaf iptos_value; //type: uint8
        ydk::YLeaf change_type; //type: uint8
        ydk::YLeaf acl_config; //type: uint8
        ydk::YLeaf acl_str; //type: string

}; // LptsPifib_::Nodes::Node::Hardware::Police::PoliceInfo


class LptsPifib_::Nodes::Node::Hardware::StaticPolice : public ydk::Entity
{
    public:
        StaticPolice();
        ~StaticPolice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticInfo; //type: LptsPifib_::Nodes::Node::Hardware::StaticPolice::StaticInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::Hardware::StaticPolice::StaticInfo> > static_info;
        
}; // LptsPifib_::Nodes::Node::Hardware::StaticPolice


class LptsPifib_::Nodes::Node::Hardware::StaticPolice::StaticInfo : public ydk::Entity
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

}; // LptsPifib_::Nodes::Node::Hardware::StaticPolice::StaticInfo


class LptsPifib_::Nodes::Node::Hardware::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

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

}; // LptsPifib_::Nodes::Node::Hardware::Statistics


class LptsPifib_::Nodes::Node::Hardware::UsageEntries : public ydk::Entity
{
    public:
        UsageEntries();
        ~UsageEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UsageEntry; //type: LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry> > usage_entry;
        
}; // LptsPifib_::Nodes::Node::Hardware::UsageEntries


class LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry : public ydk::Entity
{
    public:
        UsageEntry();
        ~UsageEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf region_id; //type: UsageAddressFamily
        class UsageInfo; //type: LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo> > usage_info;
        
}; // LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry


class LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo : public ydk::Entity
{
    public:
        UsageInfo();
        ~UsageInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pipe_id; //type: uint8
        ydk::YLeaf region; //type: uint8
        ydk::YLeaf region_id; //type: uint8
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf used; //type: uint32

}; // LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo


class LptsPifib_::Nodes::Node::TypeValues : public ydk::Entity
{
    public:
        TypeValues();
        ~TypeValues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TypeValue; //type: LptsPifib_::Nodes::Node::TypeValues::TypeValue

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::TypeValues::TypeValue> > type_value;
        
}; // LptsPifib_::Nodes::Node::TypeValues


class LptsPifib_::Nodes::Node::TypeValues::TypeValue : public ydk::Entity
{
    public:
        TypeValue();
        ~TypeValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pifib_type; //type: LptsPifib
        class Entry; //type: LptsPifib_::Nodes::Node::TypeValues::TypeValue::Entry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib_::Nodes::Node::TypeValues::TypeValue::Entry> > entry;
        
}; // LptsPifib_::Nodes::Node::TypeValues::TypeValue


class LptsPifib_::Nodes::Node::TypeValues::TypeValue::Entry : public ydk::Entity
{
    public:
        Entry();
        ~Entry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vid; //type: uint32
        ydk::YLeaf l3protocol; //type: uint32
        ydk::YLeaf l4protocol; //type: uint32
        ydk::YLeaf intf_name; //type: string
        ydk::YLeaf intf_handle; //type: uint32
        ydk::YLeaf destination_addr; //type: string
        ydk::YLeaf source_addr; //type: string
        ydk::YLeaf destination_type; //type: string
        ydk::YLeaf destination_value; //type: string
        ydk::YLeaf source_port; //type: string
        ydk::YLeaf is_frag; //type: uint8
        ydk::YLeaf is_syn; //type: uint8
        ydk::YLeaf opcode; //type: string
        ydk::YLeaf flow_type; //type: string
        ydk::YLeaf listener_tag; //type: string
        ydk::YLeaf local_flag; //type: uint8
        ydk::YLeaf is_fgid; //type: uint8
        ydk::YLeaf deliver_list_short; //type: string
        ydk::YLeaf deliver_list_long; //type: string
        ydk::YLeaf min_ttl; //type: uint8
        ydk::YLeaf accepts; //type: uint64
        ydk::YLeaf drops; //type: uint64
        ydk::YLeaf stale; //type: uint8
        ydk::YLeaf pifib_type; //type: uint8
        ydk::YLeaf pifib_program_time; //type: string

}; // LptsPifib_::Nodes::Node::TypeValues::TypeValue::Entry

class LptsPifib : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ipv4_frag;
        static const ydk::Enum::YLeaf ipv4_echo;
        static const ydk::Enum::YLeaf ipv4_any;
        static const ydk::Enum::YLeaf ipv6_frag;
        static const ydk::Enum::YLeaf ipv6_echo;
        static const ydk::Enum::YLeaf ipv6_nd;
        static const ydk::Enum::YLeaf ipv6_any;
        static const ydk::Enum::YLeaf bfd_any;
        static const ydk::Enum::YLeaf all;

};


}
}

#endif /* _CISCO_IOS_XR_LPTS_PRE_IFIB_OPER_ */

