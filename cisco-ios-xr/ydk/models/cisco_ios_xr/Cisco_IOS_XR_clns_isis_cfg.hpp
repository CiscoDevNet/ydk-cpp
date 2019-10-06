#ifndef _CISCO_IOS_XR_CLNS_ISIS_CFG_
#define _CISCO_IOS_XR_CLNS_ISIS_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_cfg {

class Isis : public ydk::Entity
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
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Instances; //type: Isis::Instances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances> instances;
        
}; // Isis


class Isis::Instances : public ydk::Entity
{
    public:
        Instances();
        ~Instances();

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

        class Instance; //type: Isis::Instances::Instance

        ydk::YList instance;
        
}; // Isis::Instances


class Isis::Instances::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

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

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf running; //type: empty
        ydk::YLeaf log_adjacency_changes; //type: empty
        ydk::YLeaf ignore_lsp_errors; //type: boolean
        ydk::YLeaf is_type; //type: IsisConfigurableLevels
        ydk::YLeaf tracing_mode; //type: IsisTracingMode
        ydk::YLeaf vrf_context; //type: string
        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf dynamic_host_name; //type: boolean
        ydk::YLeaf purge_transmit_strict; //type: IsisConfigurableLevel
        ydk::YLeaf nsr; //type: empty
        ydk::YLeaf log_pdu_drops; //type: empty
        class Srgb; //type: Isis::Instances::Instance::Srgb
        class LspGenerationIntervals; //type: Isis::Instances::Instance::LspGenerationIntervals
        class LspArrivalTimes; //type: Isis::Instances::Instance::LspArrivalTimes
        class TraceBufferSize; //type: Isis::Instances::Instance::TraceBufferSize
        class MaxLinkMetrics; //type: Isis::Instances::Instance::MaxLinkMetrics
        class AdjacencyStagger; //type: Isis::Instances::Instance::AdjacencyStagger
        class Afs; //type: Isis::Instances::Instance::Afs
        class LspRefreshIntervals; //type: Isis::Instances::Instance::LspRefreshIntervals
        class Distribute; //type: Isis::Instances::Instance::Distribute
        class FlexAlgos; //type: Isis::Instances::Instance::FlexAlgos
        class AffinityMappings; //type: Isis::Instances::Instance::AffinityMappings
        class LspAcceptPasswords; //type: Isis::Instances::Instance::LspAcceptPasswords
        class LspMtus; //type: Isis::Instances::Instance::LspMtus
        class SrlgTable; //type: Isis::Instances::Instance::SrlgTable
        class Nsf; //type: Isis::Instances::Instance::Nsf
        class LinkGroups; //type: Isis::Instances::Instance::LinkGroups
        class LspCheckIntervals; //type: Isis::Instances::Instance::LspCheckIntervals
        class LspPasswords; //type: Isis::Instances::Instance::LspPasswords
        class Nets; //type: Isis::Instances::Instance::Nets
        class LspLifetimes; //type: Isis::Instances::Instance::LspLifetimes
        class OverloadBits; //type: Isis::Instances::Instance::OverloadBits
        class Interfaces; //type: Isis::Instances::Instance::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Srgb> srgb; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspGenerationIntervals> lsp_generation_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspArrivalTimes> lsp_arrival_times;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::TraceBufferSize> trace_buffer_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::MaxLinkMetrics> max_link_metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::AdjacencyStagger> adjacency_stagger; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs> afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspRefreshIntervals> lsp_refresh_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Distribute> distribute; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::FlexAlgos> flex_algos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::AffinityMappings> affinity_mappings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspAcceptPasswords> lsp_accept_passwords;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspMtus> lsp_mtus;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::SrlgTable> srlg_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Nsf> nsf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LinkGroups> link_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspCheckIntervals> lsp_check_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspPasswords> lsp_passwords;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Nets> nets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspLifetimes> lsp_lifetimes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::OverloadBits> overload_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces> interfaces;
        
}; // Isis::Instances::Instance


class Isis::Instances::Instance::Srgb : public ydk::Entity
{
    public:
        Srgb();
        ~Srgb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lower_bound; //type: uint32
        ydk::YLeaf upper_bound; //type: uint32

}; // Isis::Instances::Instance::Srgb


class Isis::Instances::Instance::LspGenerationIntervals : public ydk::Entity
{
    public:
        LspGenerationIntervals();
        ~LspGenerationIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LspGenerationInterval; //type: Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval

        ydk::YList lsp_generation_interval;
        
}; // Isis::Instances::Instance::LspGenerationIntervals


class Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval : public ydk::Entity
{
    public:
        LspGenerationInterval();
        ~LspGenerationInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf maximum_wait; //type: uint32
        ydk::YLeaf initial_wait; //type: uint32
        ydk::YLeaf secondary_wait; //type: uint32

}; // Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval


class Isis::Instances::Instance::LspArrivalTimes : public ydk::Entity
{
    public:
        LspArrivalTimes();
        ~LspArrivalTimes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LspArrivalTime; //type: Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime

        ydk::YList lsp_arrival_time;
        
}; // Isis::Instances::Instance::LspArrivalTimes


class Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime : public ydk::Entity
{
    public:
        LspArrivalTime();
        ~LspArrivalTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf maximum_wait; //type: uint32
        ydk::YLeaf initial_wait; //type: uint32
        ydk::YLeaf secondary_wait; //type: uint32

}; // Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime


class Isis::Instances::Instance::TraceBufferSize : public ydk::Entity
{
    public:
        TraceBufferSize();
        ~TraceBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf detailed; //type: uint32
        ydk::YLeaf standard; //type: uint32
        ydk::YLeaf severe; //type: uint32
        ydk::YLeaf hello; //type: uint32

}; // Isis::Instances::Instance::TraceBufferSize


class Isis::Instances::Instance::MaxLinkMetrics : public ydk::Entity
{
    public:
        MaxLinkMetrics();
        ~MaxLinkMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MaxLinkMetric; //type: Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric

        ydk::YList max_link_metric;
        
}; // Isis::Instances::Instance::MaxLinkMetrics


class Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric : public ydk::Entity
{
    public:
        MaxLinkMetric();
        ~MaxLinkMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel

}; // Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric


class Isis::Instances::Instance::AdjacencyStagger : public ydk::Entity
{
    public:
        AdjacencyStagger();
        ~AdjacencyStagger();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initial_nbr; //type: uint32
        ydk::YLeaf max_nbr; //type: uint32

}; // Isis::Instances::Instance::AdjacencyStagger


class Isis::Instances::Instance::Afs : public ydk::Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Af; //type: Isis::Instances::Instance::Afs::Af

        ydk::YList af;
        
}; // Isis::Instances::Instance::Afs


class Isis::Instances::Instance::Afs::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAddressFamily
        ydk::YLeaf saf_name; //type: IsisSubAddressFamily
        class AfData; //type: Isis::Instances::Instance::Afs::Af::AfData
        class TopologyName; //type: Isis::Instances::Instance::Afs::Af::TopologyName

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData> af_data; // presence node
        ydk::YList topology_name;
        
}; // Isis::Instances::Instance::Afs::Af


class Isis::Instances::Instance::Afs::Af::AfData : public ydk::Entity
{
    public:
        AfData();
        ~AfData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf single_topology; //type: empty
        ydk::YLeaf adjacency_check; //type: IsisAdjCheck
        ydk::YLeaf advertise_link_attributes; //type: boolean
        ydk::YLeaf apply_weight; //type: IsisApplyWeight
        ydk::YLeaf default_admin_distance; //type: uint32
        ydk::YLeaf advertise_passive_only; //type: empty
        ydk::YLeaf ignore_attached_bit; //type: boolean
        ydk::YLeaf attached_bit; //type: IsisAttachedBit
        ydk::YLeaf route_source_first_hop; //type: boolean
        class SegmentRouting; //type: Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting
        class MetricStyles; //type: Isis::Instances::Instance::Afs::Af::AfData::MetricStyles
        class FrrTable; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable
        class RouterId; //type: Isis::Instances::Instance::Afs::Af::AfData::RouterId
        class SpfPrefixPriorities; //type: Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities
        class SummaryPrefixes; //type: Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes
        class MicroLoopAvoidance; //type: Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance
        class Ucmp; //type: Isis::Instances::Instance::Afs::Af::AfData::Ucmp
        class MaxRedistPrefixes; //type: Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes
        class Propagations; //type: Isis::Instances::Instance::Afs::Af::AfData::Propagations
        class Redistributions; //type: Isis::Instances::Instance::Afs::Af::AfData::Redistributions
        class ApplicationTables; //type: Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables
        class SpfPeriodicIntervals; //type: Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals
        class DistributeListIn; //type: Isis::Instances::Instance::Afs::Af::AfData::DistributeListIn
        class SpfIntervals; //type: Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals
        class MonitorConvergence; //type: Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence
        class DefaultInformation; //type: Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation
        class AdminDistances; //type: Isis::Instances::Instance::Afs::Af::AfData::AdminDistances
        class Ispf; //type: Isis::Instances::Instance::Afs::Af::AfData::Ispf
        class MplsLdpGlobal; //type: Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal
        class Mpls; //type: Isis::Instances::Instance::Afs::Af::AfData::Mpls
        class ManualAdjSids; //type: Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids
        class Metrics; //type: Isis::Instances::Instance::Afs::Af::AfData::Metrics
        class Weights; //type: Isis::Instances::Instance::Afs::Af::AfData::Weights

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MetricStyles> metric_styles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable> frr_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::RouterId> router_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities> spf_prefix_priorities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance> micro_loop_avoidance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ucmp> ucmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes> max_redist_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Propagations> propagations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions> redistributions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables> application_tables;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals> spf_periodic_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::DistributeListIn> distribute_list_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals> spf_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence> monitor_convergence;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::AdminDistances> admin_distances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ispf> ispf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal> mpls_ldp_global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids> manual_adj_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Metrics> metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Weights> weights;
        
}; // Isis::Instances::Instance::Afs::Af::AfData


class Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting : public ydk::Entity
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

        ydk::YLeaf bundle_member_adj_sid; //type: empty
        ydk::YLeaf labeled_only; //type: empty
        ydk::YLeaf mpls; //type: IsisLabelPreference
        ydk::YLeaf srv6; //type: empty
        class PrefixSidMap; //type: Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap> prefix_sid_map;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting


class Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap : public ydk::Entity
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
        ydk::YLeaf receive; //type: boolean

}; // Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap


class Isis::Instances::Instance::Afs::Af::AfData::MetricStyles : public ydk::Entity
{
    public:
        MetricStyles();
        ~MetricStyles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MetricStyle; //type: Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle

        ydk::YList metric_style;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::MetricStyles


class Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle : public ydk::Entity
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

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf style; //type: IsisMetricStyle

}; // Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable : public ydk::Entity
{
    public:
        FrrTable();
        ~FrrTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frr_initial_delay; //type: uint32
        class FrrLoadSharings; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings
        class FrrsrlgProtectionTypes; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes
        class PriorityLimits; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits
        class FrrRemoteLfaPrefixes; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes
        class FrrTiebreakers; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers
        class FrrUseCandOnlies; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings> frr_load_sharings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes> frrsrlg_protection_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits> priority_limits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes> frr_remote_lfa_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers> frr_tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies> frr_use_cand_onlies;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings : public ydk::Entity
{
    public:
        FrrLoadSharings();
        ~FrrLoadSharings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrLoadSharing; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing

        ydk::YList frr_load_sharing;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing : public ydk::Entity
{
    public:
        FrrLoadSharing();
        ~FrrLoadSharing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf load_sharing; //type: IsisfrrLoadSharing

}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes : public ydk::Entity
{
    public:
        FrrsrlgProtectionTypes();
        ~FrrsrlgProtectionTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrsrlgProtectionType; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType

        ydk::YList frrsrlg_protection_type;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType : public ydk::Entity
{
    public:
        FrrsrlgProtectionType();
        ~FrrsrlgProtectionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf protection_type; //type: IsisfrrSrlgProtection

}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits : public ydk::Entity
{
    public:
        PriorityLimits();
        ~PriorityLimits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PriorityLimit; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit

        ydk::YList priority_limit;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit : public ydk::Entity
{
    public:
        PriorityLimit();
        ~PriorityLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        class FrrType; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::FrrType

        ydk::YList frr_type;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::FrrType : public ydk::Entity
{
    public:
        FrrType();
        ~FrrType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frr_type; //type: Isisfrr
        ydk::YLeaf priority; //type: IsisPrefixPriority

}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::FrrType


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes : public ydk::Entity
{
    public:
        FrrRemoteLfaPrefixes();
        ~FrrRemoteLfaPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrRemoteLfaPrefix; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix

        ydk::YList frr_remote_lfa_prefix;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix : public ydk::Entity
{
    public:
        FrrRemoteLfaPrefix();
        ~FrrRemoteLfaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf prefix_list_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers : public ydk::Entity
{
    public:
        FrrTiebreakers();
        ~FrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrTiebreaker; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker

        ydk::YList frr_tiebreaker;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker : public ydk::Entity
{
    public:
        FrrTiebreaker();
        ~FrrTiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf tiebreaker; //type: IsisfrrTiebreaker
        ydk::YLeaf index_; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies : public ydk::Entity
{
    public:
        FrrUseCandOnlies();
        ~FrrUseCandOnlies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrUseCandOnly; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly

        ydk::YList frr_use_cand_only;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly : public ydk::Entity
{
    public:
        FrrUseCandOnly();
        ~FrrUseCandOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf frr_type; //type: Isisfrr

}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly


class Isis::Instances::Instance::Afs::Af::AfData::RouterId : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::RouterId


class Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities : public ydk::Entity
{
    public:
        SpfPrefixPriorities();
        ~SpfPrefixPriorities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfPrefixPriority; //type: Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority

        ydk::YList spf_prefix_priority;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities


class Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority : public ydk::Entity
{
    public:
        SpfPrefixPriority();
        ~SpfPrefixPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf prefix_priority_type; //type: IsisPrefixPriority
        ydk::YLeaf admin_tag; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority


class Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes : public ydk::Entity
{
    public:
        SummaryPrefixes();
        ~SummaryPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryPrefix; //type: Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix

        ydk::YList summary_prefix;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes


class Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix : public ydk::Entity
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

        ydk::YLeaf address_prefix; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf level; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix


class Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance : public ydk::Entity
{
    public:
        MicroLoopAvoidance();
        ~MicroLoopAvoidance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: IsisMicroLoopAvoidance
        ydk::YLeaf rib_update_delay; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance


class Isis::Instances::Instance::Afs::Af::AfData::Ucmp : public ydk::Entity
{
    public:
        Ucmp();
        ~Ucmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay_interval; //type: uint32
        class Enable; //type: Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable
        class ExcludeInterfaces; //type: Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable> enable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces> exclude_interfaces;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Ucmp


class Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf variance; //type: uint32
        ydk::YLeaf prefix_list_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable


class Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces


class Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface


class Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes : public ydk::Entity
{
    public:
        MaxRedistPrefixes();
        ~MaxRedistPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MaxRedistPrefix; //type: Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix

        ydk::YList max_redist_prefix;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes


class Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix : public ydk::Entity
{
    public:
        MaxRedistPrefix();
        ~MaxRedistPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf prefix_limit; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix


class Isis::Instances::Instance::Afs::Af::AfData::Propagations : public ydk::Entity
{
    public:
        Propagations();
        ~Propagations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Propagation; //type: Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation

        ydk::YList propagation;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Propagations


class Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation : public ydk::Entity
{
    public:
        Propagation();
        ~Propagation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_level; //type: IsisInternalLevel
        ydk::YLeaf destination_level; //type: IsisInternalLevel
        ydk::YLeaf route_policy_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions : public ydk::Entity
{
    public:
        Redistributions();
        ~Redistributions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Redistribution; //type: Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution

        ydk::YList redistribution;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution : public ydk::Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: IsisRedistProto
        class ConnectedOrStaticOrRipOrSubscriberOrMobile; //type: Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile
        class OspfOrOspfv3OrIsisOrApplication; //type: Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication
        class Bgp; //type: Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp
        class Eigrp; //type: Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile> connected_or_static_or_rip_or_subscriber_or_mobile; // presence node
        ydk::YList ospf_or_ospfv3_or_isis_or_application;
        ydk::YList bgp;
        ydk::YList eigrp;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile : public ydk::Entity
{
    public:
        ConnectedOrStaticOrRipOrSubscriberOrMobile();
        ~ConnectedOrStaticOrRipOrSubscriberOrMobile();

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
        ydk::YLeaf levels; //type: IsisConfigurableLevels
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf metric_type; //type: IsisMetric
        ydk::YLeaf ospf_route_type; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication : public ydk::Entity
{
    public:
        OspfOrOspfv3OrIsisOrApplication();
        ~OspfOrOspfv3OrIsisOrApplication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf levels; //type: IsisConfigurableLevels
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf metric_type; //type: IsisMetric
        ydk::YLeaf ospf_route_type; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp : public ydk::Entity
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

        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf levels; //type: IsisConfigurableLevels
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf metric_type; //type: IsisMetric
        ydk::YLeaf ospf_route_type; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp : public ydk::Entity
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

        ydk::YLeaf as_zz; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf levels; //type: IsisConfigurableLevels
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf metric_type; //type: IsisMetric
        ydk::YLeaf ospf_route_type; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp


class Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables : public ydk::Entity
{
    public:
        ApplicationTables();
        ~ApplicationTables();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ApplicationTable; //type: Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable

        ydk::YList application_table;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables


class Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable : public ydk::Entity
{
    public:
        ApplicationTable();
        ~ApplicationTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf app_type; //type: IsisApplication
        class AttributeTable; //type: Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::AttributeTable

        ydk::YList attribute_table;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable


class Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::AttributeTable : public ydk::Entity
{
    public:
        AttributeTable();
        ~AttributeTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf app_type; //type: IsisApplicationAttribute
        ydk::YLeaf enable; //type: boolean

}; // Isis::Instances::Instance::Afs::Af::AfData::ApplicationTables::ApplicationTable::AttributeTable


class Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals : public ydk::Entity
{
    public:
        SpfPeriodicIntervals();
        ~SpfPeriodicIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfPeriodicInterval; //type: Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval

        ydk::YList spf_periodic_interval;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals


class Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval : public ydk::Entity
{
    public:
        SpfPeriodicInterval();
        ~SpfPeriodicInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf periodic_interval; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval


class Isis::Instances::Instance::Afs::Af::AfData::DistributeListIn : public ydk::Entity
{
    public:
        DistributeListIn();
        ~DistributeListIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::DistributeListIn


class Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals : public ydk::Entity
{
    public:
        SpfIntervals();
        ~SpfIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfInterval; //type: Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval

        ydk::YList spf_interval;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals


class Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval : public ydk::Entity
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

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf maximum_wait; //type: uint32
        ydk::YLeaf initial_wait; //type: uint32
        ydk::YLeaf secondary_wait; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval


class Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence : public ydk::Entity
{
    public:
        MonitorConvergence();
        ~MonitorConvergence();

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
        ydk::YLeaf track_ip_frr; //type: empty
        ydk::YLeaf prefix_list; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence


class Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation : public ydk::Entity
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

        ydk::YLeaf use_policy; //type: boolean
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf external; //type: empty

}; // Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation


class Isis::Instances::Instance::Afs::Af::AfData::AdminDistances : public ydk::Entity
{
    public:
        AdminDistances();
        ~AdminDistances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdminDistance; //type: Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance

        ydk::YList admin_distance;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::AdminDistances


class Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance : public ydk::Entity
{
    public:
        AdminDistance();
        ~AdminDistance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf prefix_list; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance


class Isis::Instances::Instance::Afs::Af::AfData::Ispf : public ydk::Entity
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

        class States; //type: Isis::Instances::Instance::Afs::Af::AfData::Ispf::States

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ispf::States> states;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Ispf


class Isis::Instances::Instance::Afs::Af::AfData::Ispf::States : public ydk::Entity
{
    public:
        States();
        ~States();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State

        ydk::YList state;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Ispf::States


class Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf state; //type: IsisispfState

}; // Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State


class Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal : public ydk::Entity
{
    public:
        MplsLdpGlobal();
        ~MplsLdpGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_config; //type: boolean

}; // Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal


class Isis::Instances::Instance::Afs::Af::AfData::Mpls : public ydk::Entity
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

        ydk::YLeaf igp_intact; //type: empty
        ydk::YLeaf multicast_intact; //type: empty
        class RouterId; //type: Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId
        class Level; //type: Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId> router_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level> level;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Mpls


class Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId


class Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level : public ydk::Entity
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

        ydk::YLeaf level1; //type: boolean
        ydk::YLeaf level2; //type: boolean

}; // Isis::Instances::Instance::Afs::Af::AfData::Mpls::Level


class Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids : public ydk::Entity
{
    public:
        ManualAdjSids();
        ~ManualAdjSids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ManualAdjSid; //type: Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid

        ydk::YList manual_adj_sid;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids


class Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid : public ydk::Entity
{
    public:
        ManualAdjSid();
        ~ManualAdjSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf sid_type; //type: Isissid1
        ydk::YLeaf sid; //type: uint32
        ydk::YLeaf protected_; //type: IsissidProtected

}; // Isis::Instances::Instance::Afs::Af::AfData::ManualAdjSids::ManualAdjSid


class Isis::Instances::Instance::Afs::Af::AfData::Metrics : public ydk::Entity
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

        class Metric; //type: Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric

        ydk::YList metric;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Metrics


class Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric : public ydk::Entity
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

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf metric; //type: one of uint32, enumeration
        class Metric_;

}; // Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric


class Isis::Instances::Instance::Afs::Af::AfData::Weights : public ydk::Entity
{
    public:
        Weights();
        ~Weights();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Weight; //type: Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight

        ydk::YList weight;
        
}; // Isis::Instances::Instance::Afs::Af::AfData::Weights


class Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight : public ydk::Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf weight; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight


class Isis::Instances::Instance::Afs::Af::TopologyName : public ydk::Entity
{
    public:
        TopologyName();
        ~TopologyName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_name; //type: string
        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf topology_id; //type: uint32
        ydk::YLeaf single_topology; //type: empty
        ydk::YLeaf adjacency_check; //type: IsisAdjCheck
        ydk::YLeaf advertise_link_attributes; //type: boolean
        ydk::YLeaf apply_weight; //type: IsisApplyWeight
        ydk::YLeaf default_admin_distance; //type: uint32
        ydk::YLeaf advertise_passive_only; //type: empty
        ydk::YLeaf ignore_attached_bit; //type: boolean
        ydk::YLeaf attached_bit; //type: IsisAttachedBit
        ydk::YLeaf route_source_first_hop; //type: boolean
        class SegmentRouting; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting
        class MetricStyles; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles
        class FrrTable; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable
        class RouterId; //type: Isis::Instances::Instance::Afs::Af::TopologyName::RouterId
        class SpfPrefixPriorities; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities
        class SummaryPrefixes; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes
        class MicroLoopAvoidance; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance
        class Ucmp; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp
        class MaxRedistPrefixes; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes
        class Propagations; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Propagations
        class Redistributions; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions
        class ApplicationTables; //type: Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables
        class SpfPeriodicIntervals; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals
        class DistributeListIn; //type: Isis::Instances::Instance::Afs::Af::TopologyName::DistributeListIn
        class SpfIntervals; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals
        class MonitorConvergence; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence
        class DefaultInformation; //type: Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation
        class AdminDistances; //type: Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances
        class Ispf; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ispf
        class MplsLdpGlobal; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal
        class Mpls; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Mpls
        class ManualAdjSids; //type: Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids
        class Metrics; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Metrics
        class Weights; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Weights

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles> metric_styles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable> frr_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::RouterId> router_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities> spf_prefix_priorities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance> micro_loop_avoidance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp> ucmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes> max_redist_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Propagations> propagations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions> redistributions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables> application_tables;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals> spf_periodic_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::DistributeListIn> distribute_list_in;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals> spf_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence> monitor_convergence;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances> admin_distances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ispf> ispf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal> mpls_ldp_global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Mpls> mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids> manual_adj_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Metrics> metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Weights> weights;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName


class Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting : public ydk::Entity
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

        ydk::YLeaf bundle_member_adj_sid; //type: empty
        ydk::YLeaf labeled_only; //type: empty
        ydk::YLeaf mpls; //type: IsisLabelPreference
        ydk::YLeaf srv6; //type: empty
        class PrefixSidMap; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap> prefix_sid_map;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting


class Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap : public ydk::Entity
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
        ydk::YLeaf receive; //type: boolean

}; // Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap


class Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles : public ydk::Entity
{
    public:
        MetricStyles();
        ~MetricStyles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MetricStyle; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle

        ydk::YList metric_style;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles


class Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle : public ydk::Entity
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

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf style; //type: IsisMetricStyle

}; // Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable : public ydk::Entity
{
    public:
        FrrTable();
        ~FrrTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frr_initial_delay; //type: uint32
        class FrrLoadSharings; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings
        class FrrsrlgProtectionTypes; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes
        class PriorityLimits; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits
        class FrrRemoteLfaPrefixes; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes
        class FrrTiebreakers; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers
        class FrrUseCandOnlies; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings> frr_load_sharings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes> frrsrlg_protection_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits> priority_limits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes> frr_remote_lfa_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers> frr_tiebreakers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies> frr_use_cand_onlies;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings : public ydk::Entity
{
    public:
        FrrLoadSharings();
        ~FrrLoadSharings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrLoadSharing; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing

        ydk::YList frr_load_sharing;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing : public ydk::Entity
{
    public:
        FrrLoadSharing();
        ~FrrLoadSharing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf load_sharing; //type: IsisfrrLoadSharing

}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes : public ydk::Entity
{
    public:
        FrrsrlgProtectionTypes();
        ~FrrsrlgProtectionTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrsrlgProtectionType; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType

        ydk::YList frrsrlg_protection_type;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType : public ydk::Entity
{
    public:
        FrrsrlgProtectionType();
        ~FrrsrlgProtectionType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf protection_type; //type: IsisfrrSrlgProtection

}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrsrlgProtectionTypes::FrrsrlgProtectionType


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits : public ydk::Entity
{
    public:
        PriorityLimits();
        ~PriorityLimits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PriorityLimit; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit

        ydk::YList priority_limit;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit : public ydk::Entity
{
    public:
        PriorityLimit();
        ~PriorityLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        class FrrType; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::FrrType

        ydk::YList frr_type;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::FrrType : public ydk::Entity
{
    public:
        FrrType();
        ~FrrType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frr_type; //type: Isisfrr
        ydk::YLeaf priority; //type: IsisPrefixPriority

}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::FrrType


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes : public ydk::Entity
{
    public:
        FrrRemoteLfaPrefixes();
        ~FrrRemoteLfaPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrRemoteLfaPrefix; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix

        ydk::YList frr_remote_lfa_prefix;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix : public ydk::Entity
{
    public:
        FrrRemoteLfaPrefix();
        ~FrrRemoteLfaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf prefix_list_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers : public ydk::Entity
{
    public:
        FrrTiebreakers();
        ~FrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrTiebreaker; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker

        ydk::YList frr_tiebreaker;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker : public ydk::Entity
{
    public:
        FrrTiebreaker();
        ~FrrTiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf tiebreaker; //type: IsisfrrTiebreaker
        ydk::YLeaf index_; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies : public ydk::Entity
{
    public:
        FrrUseCandOnlies();
        ~FrrUseCandOnlies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrUseCandOnly; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly

        ydk::YList frr_use_cand_only;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly : public ydk::Entity
{
    public:
        FrrUseCandOnly();
        ~FrrUseCandOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf frr_type; //type: Isisfrr

}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly


class Isis::Instances::Instance::Afs::Af::TopologyName::RouterId : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::RouterId


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities : public ydk::Entity
{
    public:
        SpfPrefixPriorities();
        ~SpfPrefixPriorities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfPrefixPriority; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority

        ydk::YList spf_prefix_priority;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority : public ydk::Entity
{
    public:
        SpfPrefixPriority();
        ~SpfPrefixPriority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf prefix_priority_type; //type: IsisPrefixPriority
        ydk::YLeaf admin_tag; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority


class Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes : public ydk::Entity
{
    public:
        SummaryPrefixes();
        ~SummaryPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SummaryPrefix; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix

        ydk::YList summary_prefix;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes


class Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix : public ydk::Entity
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

        ydk::YLeaf address_prefix; //type: string
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf level; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix


class Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance : public ydk::Entity
{
    public:
        MicroLoopAvoidance();
        ~MicroLoopAvoidance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: IsisMicroLoopAvoidance
        ydk::YLeaf rib_update_delay; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance


class Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp : public ydk::Entity
{
    public:
        Ucmp();
        ~Ucmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay_interval; //type: uint32
        class Enable; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable
        class ExcludeInterfaces; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable> enable;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces> exclude_interfaces;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp


class Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf variance; //type: uint32
        ydk::YLeaf prefix_list_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable


class Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces : public ydk::Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExcludeInterface; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface

        ydk::YList exclude_interface;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces


class Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface : public ydk::Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface


class Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes : public ydk::Entity
{
    public:
        MaxRedistPrefixes();
        ~MaxRedistPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MaxRedistPrefix; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix

        ydk::YList max_redist_prefix;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes


class Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix : public ydk::Entity
{
    public:
        MaxRedistPrefix();
        ~MaxRedistPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf prefix_limit; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix


class Isis::Instances::Instance::Afs::Af::TopologyName::Propagations : public ydk::Entity
{
    public:
        Propagations();
        ~Propagations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Propagation; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation

        ydk::YList propagation;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Propagations


class Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation : public ydk::Entity
{
    public:
        Propagation();
        ~Propagation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_level; //type: IsisInternalLevel
        ydk::YLeaf destination_level; //type: IsisInternalLevel
        ydk::YLeaf route_policy_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions : public ydk::Entity
{
    public:
        Redistributions();
        ~Redistributions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Redistribution; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution

        ydk::YList redistribution;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution : public ydk::Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol_name; //type: IsisRedistProto
        class ConnectedOrStaticOrRipOrSubscriberOrMobile; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile
        class OspfOrOspfv3OrIsisOrApplication; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication
        class Bgp; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp
        class Eigrp; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile> connected_or_static_or_rip_or_subscriber_or_mobile; // presence node
        ydk::YList ospf_or_ospfv3_or_isis_or_application;
        ydk::YList bgp;
        ydk::YList eigrp;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile : public ydk::Entity
{
    public:
        ConnectedOrStaticOrRipOrSubscriberOrMobile();
        ~ConnectedOrStaticOrRipOrSubscriberOrMobile();

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
        ydk::YLeaf levels; //type: IsisConfigurableLevels
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf metric_type; //type: IsisMetric
        ydk::YLeaf ospf_route_type; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication : public ydk::Entity
{
    public:
        OspfOrOspfv3OrIsisOrApplication();
        ~OspfOrOspfv3OrIsisOrApplication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf levels; //type: IsisConfigurableLevels
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf metric_type; //type: IsisMetric
        ydk::YLeaf ospf_route_type; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp : public ydk::Entity
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

        ydk::YLeaf as_xx; //type: uint32
        ydk::YLeaf as_yy; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf levels; //type: IsisConfigurableLevels
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf metric_type; //type: IsisMetric
        ydk::YLeaf ospf_route_type; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp : public ydk::Entity
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

        ydk::YLeaf as_zz; //type: uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf levels; //type: IsisConfigurableLevels
        ydk::YLeaf route_policy_name; //type: string
        ydk::YLeaf metric_type; //type: IsisMetric
        ydk::YLeaf ospf_route_type; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp


class Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables : public ydk::Entity
{
    public:
        ApplicationTables();
        ~ApplicationTables();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ApplicationTable; //type: Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable

        ydk::YList application_table;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables


class Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable : public ydk::Entity
{
    public:
        ApplicationTable();
        ~ApplicationTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf app_type; //type: IsisApplication
        class AttributeTable; //type: Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::AttributeTable

        ydk::YList attribute_table;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable


class Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::AttributeTable : public ydk::Entity
{
    public:
        AttributeTable();
        ~AttributeTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf app_type; //type: IsisApplicationAttribute
        ydk::YLeaf enable; //type: boolean

}; // Isis::Instances::Instance::Afs::Af::TopologyName::ApplicationTables::ApplicationTable::AttributeTable


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals : public ydk::Entity
{
    public:
        SpfPeriodicIntervals();
        ~SpfPeriodicIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfPeriodicInterval; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval

        ydk::YList spf_periodic_interval;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval : public ydk::Entity
{
    public:
        SpfPeriodicInterval();
        ~SpfPeriodicInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf periodic_interval; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval


class Isis::Instances::Instance::Afs::Af::TopologyName::DistributeListIn : public ydk::Entity
{
    public:
        DistributeListIn();
        ~DistributeListIn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list_name; //type: string
        ydk::YLeaf route_policy_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::DistributeListIn


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals : public ydk::Entity
{
    public:
        SpfIntervals();
        ~SpfIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpfInterval; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval

        ydk::YList spf_interval;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval : public ydk::Entity
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

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf maximum_wait; //type: uint32
        ydk::YLeaf initial_wait; //type: uint32
        ydk::YLeaf secondary_wait; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval


class Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence : public ydk::Entity
{
    public:
        MonitorConvergence();
        ~MonitorConvergence();

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
        ydk::YLeaf track_ip_frr; //type: empty
        ydk::YLeaf prefix_list; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence


class Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation : public ydk::Entity
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

        ydk::YLeaf use_policy; //type: boolean
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf external; //type: empty

}; // Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation


class Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances : public ydk::Entity
{
    public:
        AdminDistances();
        ~AdminDistances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdminDistance; //type: Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance

        ydk::YList admin_distance;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances


class Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance : public ydk::Entity
{
    public:
        AdminDistance();
        ~AdminDistance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_prefix; //type: string
        ydk::YLeaf distance; //type: uint32
        ydk::YLeaf prefix_list; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance


class Isis::Instances::Instance::Afs::Af::TopologyName::Ispf : public ydk::Entity
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

        class States; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States> states;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ispf


class Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States : public ydk::Entity
{
    public:
        States();
        ~States();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class State; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State

        ydk::YList state;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States


class Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf state; //type: IsisispfState

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State


class Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal : public ydk::Entity
{
    public:
        MplsLdpGlobal();
        ~MplsLdpGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_config; //type: boolean

}; // Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal


class Isis::Instances::Instance::Afs::Af::TopologyName::Mpls : public ydk::Entity
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

        ydk::YLeaf igp_intact; //type: empty
        ydk::YLeaf multicast_intact; //type: empty
        class RouterId; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId
        class Level; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId> router_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level> level;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Mpls


class Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId


class Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level : public ydk::Entity
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

        ydk::YLeaf level1; //type: boolean
        ydk::YLeaf level2; //type: boolean

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Level


class Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids : public ydk::Entity
{
    public:
        ManualAdjSids();
        ~ManualAdjSids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ManualAdjSid; //type: Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid

        ydk::YList manual_adj_sid;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids


class Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid : public ydk::Entity
{
    public:
        ManualAdjSid();
        ~ManualAdjSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf sid_type; //type: Isissid1
        ydk::YLeaf sid; //type: uint32
        ydk::YLeaf protected_; //type: IsissidProtected

}; // Isis::Instances::Instance::Afs::Af::TopologyName::ManualAdjSids::ManualAdjSid


class Isis::Instances::Instance::Afs::Af::TopologyName::Metrics : public ydk::Entity
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

        class Metric; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric

        ydk::YList metric;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Metrics


class Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric : public ydk::Entity
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

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf metric; //type: one of uint32, enumeration
        class Metric_;

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric


class Isis::Instances::Instance::Afs::Af::TopologyName::Weights : public ydk::Entity
{
    public:
        Weights();
        ~Weights();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Weight; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight

        ydk::YList weight;
        
}; // Isis::Instances::Instance::Afs::Af::TopologyName::Weights


class Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight : public ydk::Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf weight; //type: uint32

}; // Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight


class Isis::Instances::Instance::LspRefreshIntervals : public ydk::Entity
{
    public:
        LspRefreshIntervals();
        ~LspRefreshIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LspRefreshInterval; //type: Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval

        ydk::YList lsp_refresh_interval;
        
}; // Isis::Instances::Instance::LspRefreshIntervals


class Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval : public ydk::Entity
{
    public:
        LspRefreshInterval();
        ~LspRefreshInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf interval; //type: uint32

}; // Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval


class Isis::Instances::Instance::Distribute : public ydk::Entity
{
    public:
        Distribute();
        ~Distribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dist_inst_id; //type: uint32
        ydk::YLeaf level; //type: IsisConfigurableLevels
        ydk::YLeaf dist_throttle; //type: uint32

}; // Isis::Instances::Instance::Distribute


class Isis::Instances::Instance::FlexAlgos : public ydk::Entity
{
    public:
        FlexAlgos();
        ~FlexAlgos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FlexAlgo; //type: Isis::Instances::Instance::FlexAlgos::FlexAlgo

        ydk::YList flex_algo;
        
}; // Isis::Instances::Instance::FlexAlgos


class Isis::Instances::Instance::FlexAlgos::FlexAlgo : public ydk::Entity
{
    public:
        FlexAlgo();
        ~FlexAlgo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flex_algo; //type: uint32
        ydk::YLeaf running; //type: empty
        ydk::YLeaf metric_type; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf advertise_definition; //type: boolean
        class AffinityExcludeAnies; //type: Isis::Instances::Instance::FlexAlgos::FlexAlgo::AffinityExcludeAnies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::FlexAlgos::FlexAlgo::AffinityExcludeAnies> affinity_exclude_anies;
        
}; // Isis::Instances::Instance::FlexAlgos::FlexAlgo


class Isis::Instances::Instance::FlexAlgos::FlexAlgo::AffinityExcludeAnies : public ydk::Entity
{
    public:
        AffinityExcludeAnies();
        ~AffinityExcludeAnies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList affinity_exclude_any; //type: list of  string

}; // Isis::Instances::Instance::FlexAlgos::FlexAlgo::AffinityExcludeAnies


class Isis::Instances::Instance::AffinityMappings : public ydk::Entity
{
    public:
        AffinityMappings();
        ~AffinityMappings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AffinityMapping; //type: Isis::Instances::Instance::AffinityMappings::AffinityMapping

        ydk::YList affinity_mapping;
        
}; // Isis::Instances::Instance::AffinityMappings


class Isis::Instances::Instance::AffinityMappings::AffinityMapping : public ydk::Entity
{
    public:
        AffinityMapping();
        ~AffinityMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity_name; //type: string
        ydk::YLeaf value_; //type: uint32

}; // Isis::Instances::Instance::AffinityMappings::AffinityMapping


class Isis::Instances::Instance::LspAcceptPasswords : public ydk::Entity
{
    public:
        LspAcceptPasswords();
        ~LspAcceptPasswords();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LspAcceptPassword; //type: Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword

        ydk::YList lsp_accept_password;
        
}; // Isis::Instances::Instance::LspAcceptPasswords


class Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword : public ydk::Entity
{
    public:
        LspAcceptPassword();
        ~LspAcceptPassword();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf password; //type: string

}; // Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword


class Isis::Instances::Instance::LspMtus : public ydk::Entity
{
    public:
        LspMtus();
        ~LspMtus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LspMtu; //type: Isis::Instances::Instance::LspMtus::LspMtu

        ydk::YList lsp_mtu;
        
}; // Isis::Instances::Instance::LspMtus


class Isis::Instances::Instance::LspMtus::LspMtu : public ydk::Entity
{
    public:
        LspMtu();
        ~LspMtu();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf mtu; //type: uint32

}; // Isis::Instances::Instance::LspMtus::LspMtu


class Isis::Instances::Instance::SrlgTable : public ydk::Entity
{
    public:
        SrlgTable();
        ~SrlgTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_admin_weight_default; //type: uint32
        class SrlgNames; //type: Isis::Instances::Instance::SrlgTable::SrlgNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::SrlgTable::SrlgNames> srlg_names;
        
}; // Isis::Instances::Instance::SrlgTable


class Isis::Instances::Instance::SrlgTable::SrlgNames : public ydk::Entity
{
    public:
        SrlgNames();
        ~SrlgNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrlgName; //type: Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName

        ydk::YList srlg_name;
        
}; // Isis::Instances::Instance::SrlgTable::SrlgNames


class Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName : public ydk::Entity
{
    public:
        SrlgName();
        ~SrlgName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srlg_name; //type: string
        ydk::YLeaf admin_weight; //type: uint32
        class FromTos; //type: Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos> from_tos;
        
}; // Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName


class Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos : public ydk::Entity
{
    public:
        FromTos();
        ~FromTos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FromTo; //type: Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::FromTo

        ydk::YList from_to;
        
}; // Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos


class Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::FromTo : public ydk::Entity
{
    public:
        FromTo();
        ~FromTo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_ipv4_address; //type: string
        ydk::YLeaf remote_ipv4_address; //type: string

}; // Isis::Instances::Instance::SrlgTable::SrlgNames::SrlgName::FromTos::FromTo


class Isis::Instances::Instance::Nsf : public ydk::Entity
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

        ydk::YLeaf flavor; //type: IsisNsfFlavor
        ydk::YLeaf interface_timer; //type: uint32
        ydk::YLeaf max_interface_timer_expiry; //type: uint32
        ydk::YLeaf lifetime; //type: uint32

}; // Isis::Instances::Instance::Nsf


class Isis::Instances::Instance::LinkGroups : public ydk::Entity
{
    public:
        LinkGroups();
        ~LinkGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkGroup; //type: Isis::Instances::Instance::LinkGroups::LinkGroup

        ydk::YList link_group;
        
}; // Isis::Instances::Instance::LinkGroups


class Isis::Instances::Instance::LinkGroups::LinkGroup : public ydk::Entity
{
    public:
        LinkGroup();
        ~LinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_group_name; //type: string
        ydk::YLeaf metric_offset; //type: uint32
        ydk::YLeaf revert_members; //type: uint32
        ydk::YLeaf minimum_members; //type: uint32

}; // Isis::Instances::Instance::LinkGroups::LinkGroup


class Isis::Instances::Instance::LspCheckIntervals : public ydk::Entity
{
    public:
        LspCheckIntervals();
        ~LspCheckIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LspCheckInterval; //type: Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval

        ydk::YList lsp_check_interval;
        
}; // Isis::Instances::Instance::LspCheckIntervals


class Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval : public ydk::Entity
{
    public:
        LspCheckInterval();
        ~LspCheckInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf interval; //type: uint32

}; // Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval


class Isis::Instances::Instance::LspPasswords : public ydk::Entity
{
    public:
        LspPasswords();
        ~LspPasswords();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LspPassword; //type: Isis::Instances::Instance::LspPasswords::LspPassword

        ydk::YList lsp_password;
        
}; // Isis::Instances::Instance::LspPasswords


class Isis::Instances::Instance::LspPasswords::LspPassword : public ydk::Entity
{
    public:
        LspPassword();
        ~LspPassword();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf algorithm; //type: IsisAuthenticationAlgorithm
        ydk::YLeaf failure_mode; //type: IsisAuthenticationFailureMode
        ydk::YLeaf authentication_type; //type: IsisSnpAuth
        ydk::YLeaf password; //type: string
        ydk::YLeaf enable_poi; //type: IsisEnablePoi

}; // Isis::Instances::Instance::LspPasswords::LspPassword


class Isis::Instances::Instance::Nets : public ydk::Entity
{
    public:
        Nets();
        ~Nets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Net; //type: Isis::Instances::Instance::Nets::Net

        ydk::YList net;
        
}; // Isis::Instances::Instance::Nets


class Isis::Instances::Instance::Nets::Net : public ydk::Entity
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

        ydk::YLeaf net_name; //type: string

}; // Isis::Instances::Instance::Nets::Net


class Isis::Instances::Instance::LspLifetimes : public ydk::Entity
{
    public:
        LspLifetimes();
        ~LspLifetimes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LspLifetime; //type: Isis::Instances::Instance::LspLifetimes::LspLifetime

        ydk::YList lsp_lifetime;
        
}; // Isis::Instances::Instance::LspLifetimes


class Isis::Instances::Instance::LspLifetimes::LspLifetime : public ydk::Entity
{
    public:
        LspLifetime();
        ~LspLifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf lifetime; //type: uint32

}; // Isis::Instances::Instance::LspLifetimes::LspLifetime


class Isis::Instances::Instance::OverloadBits : public ydk::Entity
{
    public:
        OverloadBits();
        ~OverloadBits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OverloadBit; //type: Isis::Instances::Instance::OverloadBits::OverloadBit

        ydk::YList overload_bit;
        
}; // Isis::Instances::Instance::OverloadBits


class Isis::Instances::Instance::OverloadBits::OverloadBit : public ydk::Entity
{
    public:
        OverloadBit();
        ~OverloadBit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf overload_bit_mode; //type: IsisOverloadBitMode
        ydk::YLeaf hippity_period; //type: uint32
        ydk::YLeaf external_adv_type; //type: IsisAdvTypeExternal
        ydk::YLeaf inter_level_adv_type; //type: IsisAdvTypeInterLevel

}; // Isis::Instances::Instance::OverloadBits::OverloadBit


class Isis::Instances::Instance::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Isis::Instances::Instance::Interfaces::Interface

        ydk::YList interface;
        
}; // Isis::Instances::Instance::Interfaces


class Isis::Instances::Instance::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf running; //type: empty
        ydk::YLeaf circuit_type; //type: IsisConfigurableLevels
        ydk::YLeaf point_to_point; //type: empty
        ydk::YLeaf state; //type: IsisInterfaceState
        ydk::YLeaf mesh_group; //type: one of uint32, enumeration
        ydk::YLeaf link_down_fast_detect; //type: empty
        class IntAffinityTable; //type: Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable
        class LspRetransmitThrottleIntervals; //type: Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals
        class LspRetransmitIntervals; //type: Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals
        class Bfd; //type: Isis::Instances::Instance::Interfaces::Interface::Bfd
        class Priorities; //type: Isis::Instances::Instance::Interfaces::Interface::Priorities
        class HelloAcceptPasswords; //type: Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords
        class HelloPasswords; //type: Isis::Instances::Instance::Interfaces::Interface::HelloPasswords
        class HelloPaddings; //type: Isis::Instances::Instance::Interfaces::Interface::HelloPaddings
        class HelloMultipliers; //type: Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers
        class LspFastFloodThresholds; //type: Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds
        class PrefixAttributeNFlagClears; //type: Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears
        class HelloIntervals; //type: Isis::Instances::Instance::Interfaces::Interface::HelloIntervals
        class InterfaceAfs; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs
        class CsnpIntervals; //type: Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals
        class LspIntervals; //type: Isis::Instances::Instance::Interfaces::Interface::LspIntervals

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable> int_affinity_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals> lsp_retransmit_throttle_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals> lsp_retransmit_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::Priorities> priorities;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords> hello_accept_passwords;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloPasswords> hello_passwords;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloPaddings> hello_paddings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers> hello_multipliers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds> lsp_fast_flood_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears> prefix_attribute_n_flag_clears;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloIntervals> hello_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs> interface_afs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals> csnp_intervals;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspIntervals> lsp_intervals;
                class MeshGroup;

}; // Isis::Instances::Instance::Interfaces::Interface


class Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable : public ydk::Entity
{
    public:
        IntAffinityTable();
        ~IntAffinityTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FlexAlgos; //type: Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::FlexAlgos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::FlexAlgos> flex_algos;
        
}; // Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable


class Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::FlexAlgos : public ydk::Entity
{
    public:
        FlexAlgos();
        ~FlexAlgos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList flex_algo; //type: list of  string

}; // Isis::Instances::Instance::Interfaces::Interface::IntAffinityTable::FlexAlgos


class Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals : public ydk::Entity
{
    public:
        LspRetransmitThrottleIntervals();
        ~LspRetransmitThrottleIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LspRetransmitThrottleInterval; //type: Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval

        ydk::YList lsp_retransmit_throttle_interval;
        
}; // Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals


class Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval : public ydk::Entity
{
    public:
        LspRetransmitThrottleInterval();
        ~LspRetransmitThrottleInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf interval; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval


class Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals : public ydk::Entity
{
    public:
        LspRetransmitIntervals();
        ~LspRetransmitIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LspRetransmitInterval; //type: Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval

        ydk::YList lsp_retransmit_interval;
        
}; // Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals


class Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval : public ydk::Entity
{
    public:
        LspRetransmitInterval();
        ~LspRetransmitInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf interval; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval


class Isis::Instances::Instance::Interfaces::Interface::Bfd : public ydk::Entity
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

        ydk::YLeaf enable_ipv6; //type: boolean
        ydk::YLeaf enable_ipv4; //type: boolean
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::Bfd


class Isis::Instances::Instance::Interfaces::Interface::Priorities : public ydk::Entity
{
    public:
        Priorities();
        ~Priorities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Priority; //type: Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority

        ydk::YList priority;
        
}; // Isis::Instances::Instance::Interfaces::Interface::Priorities


class Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority : public ydk::Entity
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

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf priority_value; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority


class Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords : public ydk::Entity
{
    public:
        HelloAcceptPasswords();
        ~HelloAcceptPasswords();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelloAcceptPassword; //type: Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword

        ydk::YList hello_accept_password;
        
}; // Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords


class Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword : public ydk::Entity
{
    public:
        HelloAcceptPassword();
        ~HelloAcceptPassword();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf password; //type: string

}; // Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword


class Isis::Instances::Instance::Interfaces::Interface::HelloPasswords : public ydk::Entity
{
    public:
        HelloPasswords();
        ~HelloPasswords();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelloPassword; //type: Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword

        ydk::YList hello_password;
        
}; // Isis::Instances::Instance::Interfaces::Interface::HelloPasswords


class Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword : public ydk::Entity
{
    public:
        HelloPassword();
        ~HelloPassword();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf algorithm; //type: IsisAuthenticationAlgorithm
        ydk::YLeaf failure_mode; //type: IsisAuthenticationFailureMode
        ydk::YLeaf password; //type: string

}; // Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword


class Isis::Instances::Instance::Interfaces::Interface::HelloPaddings : public ydk::Entity
{
    public:
        HelloPaddings();
        ~HelloPaddings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelloPadding; //type: Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding

        ydk::YList hello_padding;
        
}; // Isis::Instances::Instance::Interfaces::Interface::HelloPaddings


class Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding : public ydk::Entity
{
    public:
        HelloPadding();
        ~HelloPadding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf padding_type; //type: IsisHelloPadding

}; // Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding


class Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers : public ydk::Entity
{
    public:
        HelloMultipliers();
        ~HelloMultipliers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelloMultiplier; //type: Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier

        ydk::YList hello_multiplier;
        
}; // Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers


class Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier : public ydk::Entity
{
    public:
        HelloMultiplier();
        ~HelloMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf multiplier; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier


class Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds : public ydk::Entity
{
    public:
        LspFastFloodThresholds();
        ~LspFastFloodThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LspFastFloodThreshold; //type: Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold

        ydk::YList lsp_fast_flood_threshold;
        
}; // Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds


class Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold : public ydk::Entity
{
    public:
        LspFastFloodThreshold();
        ~LspFastFloodThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf count; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold


class Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears : public ydk::Entity
{
    public:
        PrefixAttributeNFlagClears();
        ~PrefixAttributeNFlagClears();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixAttributeNFlagClear; //type: Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear

        ydk::YList prefix_attribute_n_flag_clear;
        
}; // Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears


class Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear : public ydk::Entity
{
    public:
        PrefixAttributeNFlagClear();
        ~PrefixAttributeNFlagClear();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel

}; // Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear


class Isis::Instances::Instance::Interfaces::Interface::HelloIntervals : public ydk::Entity
{
    public:
        HelloIntervals();
        ~HelloIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelloInterval; //type: Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval

        ydk::YList hello_interval;
        
}; // Isis::Instances::Instance::Interfaces::Interface::HelloIntervals


class Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval : public ydk::Entity
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

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf interval; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs : public ydk::Entity
{
    public:
        InterfaceAfs();
        ~InterfaceAfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceAf; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf

        ydk::YList interface_af;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf : public ydk::Entity
{
    public:
        InterfaceAf();
        ~InterfaceAf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: IsisAddressFamily
        ydk::YLeaf saf_name; //type: IsisSubAddressFamily
        class InterfaceAfData; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData
        class TopologyName; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData> interface_af_data;
        ydk::YList topology_name;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData : public ydk::Entity
{
    public:
        InterfaceAfData();
        ~InterfaceAfData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_af_state; //type: IsisInterfaceAfState
        ydk::YLeaf running; //type: empty
        class PrefixSid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid
        class InterfaceFrrTable; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable
        class MplsLdp; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp
        class PrefixSspfsid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid
        class AlgorithmPrefixSids; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids
        class AutoMetrics; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics
        class AdminTags; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags
        class InterfaceLinkGroup; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup
        class ManualAdjSids; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids
        class Metrics; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics
        class Weights; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid> prefix_sid; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable> interface_frr_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp> mpls_ldp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid> prefix_sspfsid; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids> algorithm_prefix_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics> auto_metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags> admin_tags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup> interface_link_group; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids> manual_adj_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics> metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights> weights;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid : public ydk::Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Isissid1
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf php; //type: IsisphpFlag
        ydk::YLeaf explicit_null; //type: IsisexplicitNullFlag
        ydk::YLeaf nflag_clear; //type: NflagClear

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable : public ydk::Entity
{
    public:
        InterfaceFrrTable();
        ~InterfaceFrrTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrlfaCandidateInterfaces; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces
        class FrrRemoteLfaMaxMetrics; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics
        class FrrTypes; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes
        class FrrRemoteLfaTypes; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes
        class InterfaceFrrTiebreakerDefaults; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults
        class FrrtilfaTypes; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes
        class FrrExcludeInterfaces; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces
        class InterfaceFrrTiebreakers; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces> frrlfa_candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics> frr_remote_lfa_max_metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes> frr_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes> frr_remote_lfa_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults> interface_frr_tiebreaker_defaults;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes> frrtilfa_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces> frr_exclude_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers> interface_frr_tiebreakers;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces : public ydk::Entity
{
    public:
        FrrlfaCandidateInterfaces();
        ~FrrlfaCandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrlfaCandidateInterface; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface

        ydk::YList frrlfa_candidate_interface;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface : public ydk::Entity
{
    public:
        FrrlfaCandidateInterface();
        ~FrrlfaCandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf frr_type; //type: Isisfrr
        ydk::YLeaf level; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics : public ydk::Entity
{
    public:
        FrrRemoteLfaMaxMetrics();
        ~FrrRemoteLfaMaxMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrRemoteLfaMaxMetric; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric

        ydk::YList frr_remote_lfa_max_metric;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric : public ydk::Entity
{
    public:
        FrrRemoteLfaMaxMetric();
        ~FrrRemoteLfaMaxMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf max_metric; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes : public ydk::Entity
{
    public:
        FrrTypes();
        ~FrrTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrType; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType

        ydk::YList frr_type;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType : public ydk::Entity
{
    public:
        FrrType();
        ~FrrType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf type; //type: Isisfrr

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes : public ydk::Entity
{
    public:
        FrrRemoteLfaTypes();
        ~FrrRemoteLfaTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrRemoteLfaType; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType

        ydk::YList frr_remote_lfa_type;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType : public ydk::Entity
{
    public:
        FrrRemoteLfaType();
        ~FrrRemoteLfaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf type; //type: IsisRemoteLfa

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults : public ydk::Entity
{
    public:
        InterfaceFrrTiebreakerDefaults();
        ~InterfaceFrrTiebreakerDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceFrrTiebreakerDefault; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault

        ydk::YList interface_frr_tiebreaker_default;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault : public ydk::Entity
{
    public:
        InterfaceFrrTiebreakerDefault();
        ~InterfaceFrrTiebreakerDefault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes : public ydk::Entity
{
    public:
        FrrtilfaTypes();
        ~FrrtilfaTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrtilfaType; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType

        ydk::YList frrtilfa_type;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType : public ydk::Entity
{
    public:
        FrrtilfaType();
        ~FrrtilfaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces : public ydk::Entity
{
    public:
        FrrExcludeInterfaces();
        ~FrrExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrExcludeInterface; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface

        ydk::YList frr_exclude_interface;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface : public ydk::Entity
{
    public:
        FrrExcludeInterface();
        ~FrrExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf frr_type; //type: Isisfrr
        ydk::YLeaf level; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers : public ydk::Entity
{
    public:
        InterfaceFrrTiebreakers();
        ~InterfaceFrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceFrrTiebreaker; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker

        ydk::YList interface_frr_tiebreaker;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker : public ydk::Entity
{
    public:
        InterfaceFrrTiebreaker();
        ~InterfaceFrrTiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf tiebreaker; //type: IsisInterfaceFrrTiebreaker
        ydk::YLeaf index_; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp : public ydk::Entity
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

        ydk::YLeaf sync_level; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid : public ydk::Entity
{
    public:
        PrefixSspfsid();
        ~PrefixSspfsid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Isissid1
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf php; //type: IsisphpFlag
        ydk::YLeaf explicit_null; //type: IsisexplicitNullFlag
        ydk::YLeaf nflag_clear; //type: NflagClear

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids : public ydk::Entity
{
    public:
        AlgorithmPrefixSids();
        ~AlgorithmPrefixSids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AlgorithmPrefixSid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::AlgorithmPrefixSid

        ydk::YList algorithm_prefix_sid;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::AlgorithmPrefixSid : public ydk::Entity
{
    public:
        AlgorithmPrefixSid();
        ~AlgorithmPrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf algo; //type: uint32
        ydk::YLeaf type; //type: Isissid1
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf php; //type: IsisphpFlag
        ydk::YLeaf explicit_null; //type: IsisexplicitNullFlag
        ydk::YLeaf nflag_clear; //type: NflagClear

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AlgorithmPrefixSids::AlgorithmPrefixSid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics : public ydk::Entity
{
    public:
        AutoMetrics();
        ~AutoMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutoMetric; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric

        ydk::YList auto_metric;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric : public ydk::Entity
{
    public:
        AutoMetric();
        ~AutoMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf proactive_protect; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags : public ydk::Entity
{
    public:
        AdminTags();
        ~AdminTags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdminTag; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag

        ydk::YList admin_tag;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag : public ydk::Entity
{
    public:
        AdminTag();
        ~AdminTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf admin_tag; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup : public ydk::Entity
{
    public:
        InterfaceLinkGroup();
        ~InterfaceLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_group; //type: string
        ydk::YLeaf level; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids : public ydk::Entity
{
    public:
        ManualAdjSids();
        ~ManualAdjSids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ManualAdjSid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid

        ydk::YList manual_adj_sid;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid : public ydk::Entity
{
    public:
        ManualAdjSid();
        ~ManualAdjSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf sid_type; //type: Isissid1
        ydk::YLeaf sid; //type: uint32
        ydk::YLeaf protected_; //type: IsissidProtected

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics : public ydk::Entity
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

        class Metric; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric

        ydk::YList metric;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric : public ydk::Entity
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

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf metric; //type: one of uint32, enumeration
        class Metric_;

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights : public ydk::Entity
{
    public:
        Weights();
        ~Weights();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Weight; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight

        ydk::YList weight;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight : public ydk::Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf weight; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName : public ydk::Entity
{
    public:
        TopologyName();
        ~TopologyName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_name; //type: string
        ydk::YLeaf interface_af_state; //type: IsisInterfaceAfState
        ydk::YLeaf running; //type: empty
        class PrefixSid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid
        class InterfaceFrrTable; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable
        class MplsLdp; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp
        class PrefixSspfsid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid
        class AlgorithmPrefixSids; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids
        class AutoMetrics; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics
        class AdminTags; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags
        class InterfaceLinkGroup; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup
        class ManualAdjSids; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids
        class Metrics; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics
        class Weights; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid> prefix_sid; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable> interface_frr_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp> mpls_ldp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid> prefix_sspfsid; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids> algorithm_prefix_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics> auto_metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags> admin_tags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup> interface_link_group; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids> manual_adj_sids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics> metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights> weights;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid : public ydk::Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Isissid1
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf php; //type: IsisphpFlag
        ydk::YLeaf explicit_null; //type: IsisexplicitNullFlag
        ydk::YLeaf nflag_clear; //type: NflagClear

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable : public ydk::Entity
{
    public:
        InterfaceFrrTable();
        ~InterfaceFrrTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrlfaCandidateInterfaces; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces
        class FrrRemoteLfaMaxMetrics; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics
        class FrrTypes; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes
        class FrrRemoteLfaTypes; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes
        class InterfaceFrrTiebreakerDefaults; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults
        class FrrtilfaTypes; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes
        class FrrExcludeInterfaces; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces
        class InterfaceFrrTiebreakers; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces> frrlfa_candidate_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics> frr_remote_lfa_max_metrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes> frr_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes> frr_remote_lfa_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults> interface_frr_tiebreaker_defaults;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes> frrtilfa_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces> frr_exclude_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers> interface_frr_tiebreakers;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces : public ydk::Entity
{
    public:
        FrrlfaCandidateInterfaces();
        ~FrrlfaCandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrlfaCandidateInterface; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface

        ydk::YList frrlfa_candidate_interface;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface : public ydk::Entity
{
    public:
        FrrlfaCandidateInterface();
        ~FrrlfaCandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf frr_type; //type: Isisfrr
        ydk::YLeaf level; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics : public ydk::Entity
{
    public:
        FrrRemoteLfaMaxMetrics();
        ~FrrRemoteLfaMaxMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrRemoteLfaMaxMetric; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric

        ydk::YList frr_remote_lfa_max_metric;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric : public ydk::Entity
{
    public:
        FrrRemoteLfaMaxMetric();
        ~FrrRemoteLfaMaxMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf max_metric; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes : public ydk::Entity
{
    public:
        FrrTypes();
        ~FrrTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrType; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType

        ydk::YList frr_type;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType : public ydk::Entity
{
    public:
        FrrType();
        ~FrrType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf type; //type: Isisfrr

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes : public ydk::Entity
{
    public:
        FrrRemoteLfaTypes();
        ~FrrRemoteLfaTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrRemoteLfaType; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType

        ydk::YList frr_remote_lfa_type;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType : public ydk::Entity
{
    public:
        FrrRemoteLfaType();
        ~FrrRemoteLfaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf type; //type: IsisRemoteLfa

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults : public ydk::Entity
{
    public:
        InterfaceFrrTiebreakerDefaults();
        ~InterfaceFrrTiebreakerDefaults();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceFrrTiebreakerDefault; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault

        ydk::YList interface_frr_tiebreaker_default;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault : public ydk::Entity
{
    public:
        InterfaceFrrTiebreakerDefault();
        ~InterfaceFrrTiebreakerDefault();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes : public ydk::Entity
{
    public:
        FrrtilfaTypes();
        ~FrrtilfaTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrtilfaType; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType

        ydk::YList frrtilfa_type;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType : public ydk::Entity
{
    public:
        FrrtilfaType();
        ~FrrtilfaType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces : public ydk::Entity
{
    public:
        FrrExcludeInterfaces();
        ~FrrExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FrrExcludeInterface; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface

        ydk::YList frr_exclude_interface;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface : public ydk::Entity
{
    public:
        FrrExcludeInterface();
        ~FrrExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf frr_type; //type: Isisfrr
        ydk::YLeaf level; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers : public ydk::Entity
{
    public:
        InterfaceFrrTiebreakers();
        ~InterfaceFrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceFrrTiebreaker; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker

        ydk::YList interface_frr_tiebreaker;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker : public ydk::Entity
{
    public:
        InterfaceFrrTiebreaker();
        ~InterfaceFrrTiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf tiebreaker; //type: IsisInterfaceFrrTiebreaker
        ydk::YLeaf index_; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp : public ydk::Entity
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

        ydk::YLeaf sync_level; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid : public ydk::Entity
{
    public:
        PrefixSspfsid();
        ~PrefixSspfsid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Isissid1
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf php; //type: IsisphpFlag
        ydk::YLeaf explicit_null; //type: IsisexplicitNullFlag
        ydk::YLeaf nflag_clear; //type: NflagClear

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids : public ydk::Entity
{
    public:
        AlgorithmPrefixSids();
        ~AlgorithmPrefixSids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AlgorithmPrefixSid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::AlgorithmPrefixSid

        ydk::YList algorithm_prefix_sid;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::AlgorithmPrefixSid : public ydk::Entity
{
    public:
        AlgorithmPrefixSid();
        ~AlgorithmPrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf algo; //type: uint32
        ydk::YLeaf type; //type: Isissid1
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf php; //type: IsisphpFlag
        ydk::YLeaf explicit_null; //type: IsisexplicitNullFlag
        ydk::YLeaf nflag_clear; //type: NflagClear

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AlgorithmPrefixSids::AlgorithmPrefixSid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics : public ydk::Entity
{
    public:
        AutoMetrics();
        ~AutoMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutoMetric; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric

        ydk::YList auto_metric;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric : public ydk::Entity
{
    public:
        AutoMetric();
        ~AutoMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf proactive_protect; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags : public ydk::Entity
{
    public:
        AdminTags();
        ~AdminTags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdminTag; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag

        ydk::YList admin_tag;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag : public ydk::Entity
{
    public:
        AdminTag();
        ~AdminTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf admin_tag; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup : public ydk::Entity
{
    public:
        InterfaceLinkGroup();
        ~InterfaceLinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_group; //type: string
        ydk::YLeaf level; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids : public ydk::Entity
{
    public:
        ManualAdjSids();
        ~ManualAdjSids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ManualAdjSid; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid

        ydk::YList manual_adj_sid;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid : public ydk::Entity
{
    public:
        ManualAdjSid();
        ~ManualAdjSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf sid_type; //type: Isissid1
        ydk::YLeaf sid; //type: uint32
        ydk::YLeaf protected_; //type: IsissidProtected

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics : public ydk::Entity
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

        class Metric; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric

        ydk::YList metric;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric : public ydk::Entity
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

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf metric; //type: one of uint32, enumeration
        class Metric_;

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights : public ydk::Entity
{
    public:
        Weights();
        ~Weights();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Weight; //type: Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight

        ydk::YList weight;
        
}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights


class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight : public ydk::Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf weight; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight


class Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals : public ydk::Entity
{
    public:
        CsnpIntervals();
        ~CsnpIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CsnpInterval; //type: Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval

        ydk::YList csnp_interval;
        
}; // Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals


class Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval : public ydk::Entity
{
    public:
        CsnpInterval();
        ~CsnpInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf interval; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval


class Isis::Instances::Instance::Interfaces::Interface::LspIntervals : public ydk::Entity
{
    public:
        LspIntervals();
        ~LspIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LspInterval; //type: Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval

        ydk::YList lsp_interval;
        
}; // Isis::Instances::Instance::Interfaces::Interface::LspIntervals


class Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval : public ydk::Entity
{
    public:
        LspInterval();
        ~LspInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: IsisInternalLevel
        ydk::YLeaf interval; //type: uint32

}; // Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval

class IsisSnpAuth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf send_only;
        static const ydk::Enum::YLeaf full;

        static int get_enum_value(const std::string & name) {
            if (name == "send-only") return 0;
            if (name == "full") return 1;
            return -1;
        }
};

class IsisMibMaxAreaAddressMismatchBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 6;
            return -1;
        }
};

class IsisMibLspTooLargeToPropagateBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 14;
            return -1;
        }
};

class IsisMibSequenceNumberSkipBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 8;
            return -1;
        }
};

class IsisInterfaceFrrTiebreaker : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf node_protecting;
        static const ydk::Enum::YLeaf srlg_disjoint;

        static int get_enum_value(const std::string & name) {
            if (name == "node-protecting") return 3;
            if (name == "srlg-disjoint") return 6;
            return -1;
        }
};

class IsisAuthenticationAlgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cleartext;
        static const ydk::Enum::YLeaf hmac_md5;
        static const ydk::Enum::YLeaf keychain;

        static int get_enum_value(const std::string & name) {
            if (name == "cleartext") return 1;
            if (name == "hmac-md5") return 2;
            if (name == "keychain") return 3;
            return -1;
        }
};

class IsisAdvTypeExternal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;

        static int get_enum_value(const std::string & name) {
            if (name == "external") return 1;
            return -1;
        }
};

class IsisMibRejectedAdjacencyBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 13;
            return -1;
        }
};

class IsisMibCorruptedLspDetectedBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 3;
            return -1;
        }
};

class IsisAdjCheck : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            return -1;
        }
};

class IsisispfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            return -1;
        }
};

class IsisfrrLoadSharing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 1;
            return -1;
        }
};

class IsisMibAuthenticationFailureBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 10;
            return -1;
        }
};

class IsisInterfaceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf shutdown;
        static const ydk::Enum::YLeaf suppressed;
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf enabled_active;

        static int get_enum_value(const std::string & name) {
            if (name == "shutdown") return 0;
            if (name == "suppressed") return 1;
            if (name == "passive") return 2;
            if (name == "enabled-active") return 3;
            return -1;
        }
};

class IsisTracingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf basic;
        static const ydk::Enum::YLeaf enhanced;

        static int get_enum_value(const std::string & name) {
            if (name == "off") return 0;
            if (name == "basic") return 1;
            if (name == "enhanced") return 2;
            return -1;
        }
};

class IsisAdvTypeInterLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inter_level;

        static int get_enum_value(const std::string & name) {
            if (name == "inter-level") return 1;
            return -1;
        }
};

class IsisNsfFlavor : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_proprietary_nsf;
        static const ydk::Enum::YLeaf ietf_standard_nsf;

        static int get_enum_value(const std::string & name) {
            if (name == "cisco-proprietary-nsf") return 1;
            if (name == "ietf-standard-nsf") return 2;
            return -1;
        }
};

class IsisInterfaceAfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            return -1;
        }
};

class IsissidProtected : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class IsisMetricStyle : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf old_metric_style;
        static const ydk::Enum::YLeaf new_metric_style;
        static const ydk::Enum::YLeaf both_metric_style;
        static const ydk::Enum::YLeaf old_metric_style_transition;
        static const ydk::Enum::YLeaf new_metric_style_transition;

        static int get_enum_value(const std::string & name) {
            if (name == "old-metric-style") return 0;
            if (name == "new-metric-style") return 1;
            if (name == "both-metric-style") return 2;
            if (name == "old-metric-style-transition") return 3;
            if (name == "new-metric-style-transition") return 4;
            return -1;
        }
};

class IsisApplyWeight : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ecmp_only;
        static const ydk::Enum::YLeaf ucmp_only;
        static const ydk::Enum::YLeaf ecmp_only_bandwidth;

        static int get_enum_value(const std::string & name) {
            if (name == "ecmp-only") return 1;
            if (name == "ucmp-only") return 2;
            if (name == "ecmp-only-bandwidth") return 3;
            return -1;
        }
};

class IsisfrrSrlgProtection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf weighted_global;

        static int get_enum_value(const std::string & name) {
            if (name == "local") return 0;
            if (name == "weighted-global") return 1;
            return -1;
        }
};

class IsisOverloadBitMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf permanently_set;
        static const ydk::Enum::YLeaf startup_period;
        static const ydk::Enum::YLeaf wait_for_bgp;

        static int get_enum_value(const std::string & name) {
            if (name == "permanently-set") return 1;
            if (name == "startup-period") return 2;
            if (name == "wait-for-bgp") return 3;
            return -1;
        }
};

class IsisMibAuthenticationTypeFailureBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 9;
            return -1;
        }
};

class IsisMicroLoopAvoidance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf micro_loop_avoidance_all;
        static const ydk::Enum::YLeaf micro_loop_avoidance_protected;
        static const ydk::Enum::YLeaf micro_loop_avoidance_segement_routing;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "micro-loop-avoidance-all") return 1;
            if (name == "micro-loop-avoidance-protected") return 2;
            if (name == "micro-loop-avoidance-segement-routing") return 3;
            return -1;
        }
};

class IsisApplication : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lfa;

        static int get_enum_value(const std::string & name) {
            if (name == "lfa") return 0;
            return -1;
        }
};

class IsisRemoteLfa : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf remote_lfa_none;
        static const ydk::Enum::YLeaf remote_lfa_tunnel_ldp;

        static int get_enum_value(const std::string & name) {
            if (name == "remote-lfa-none") return 0;
            if (name == "remote-lfa-tunnel-ldp") return 1;
            return -1;
        }
};

class IsisMibAreaMismatchBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 12;
            return -1;
        }
};

class IsisMibAttemptToExceedMaxSequenceBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 4;
            return -1;
        }
};

class IsisPrefixPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical_priority;
        static const ydk::Enum::YLeaf high_priority;
        static const ydk::Enum::YLeaf medium_priority;

        static int get_enum_value(const std::string & name) {
            if (name == "critical-priority") return 0;
            if (name == "high-priority") return 1;
            if (name == "medium-priority") return 2;
            return -1;
        }
};

class IsisConfigurableLevels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;
        static const ydk::Enum::YLeaf level1_and2;

        static int get_enum_value(const std::string & name) {
            if (name == "level1") return 1;
            if (name == "level2") return 2;
            if (name == "level1-and2") return 3;
            return -1;
        }
};

class IsisfrrTiebreaker : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf downstream;
        static const ydk::Enum::YLeaf lc_disjoint;
        static const ydk::Enum::YLeaf lowest_backup_metric;
        static const ydk::Enum::YLeaf node_protecting;
        static const ydk::Enum::YLeaf primary_path;
        static const ydk::Enum::YLeaf secondary_path;
        static const ydk::Enum::YLeaf srlg_disjoint;

        static int get_enum_value(const std::string & name) {
            if (name == "downstream") return 0;
            if (name == "lc-disjoint") return 1;
            if (name == "lowest-backup-metric") return 2;
            if (name == "node-protecting") return 3;
            if (name == "primary-path") return 4;
            if (name == "secondary-path") return 5;
            if (name == "srlg-disjoint") return 6;
            return -1;
        }
};

class IsisMibManualAddressDropsBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 2;
            return -1;
        }
};

class IsisexplicitNullFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class IsisEnablePoi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable_poi_off;
        static const ydk::Enum::YLeaf enable_poi_on;

        static int get_enum_value(const std::string & name) {
            if (name == "enable-poi-off") return 0;
            if (name == "enable-poi-on") return 1;
            return -1;
        }
};

class IsisMetric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf rib_internal;
        static const ydk::Enum::YLeaf rib_external;

        static int get_enum_value(const std::string & name) {
            if (name == "internal") return 0;
            if (name == "external") return 1;
            if (name == "rib-internal") return 2;
            if (name == "rib-external") return 3;
            return -1;
        }
};

class IsisHelloPadding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf sometimes;

        static int get_enum_value(const std::string & name) {
            if (name == "never") return 0;
            if (name == "sometimes") return 1;
            return -1;
        }
};

class IsisMibDatabaseOverFlowBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 1;
            return -1;
        }
};

class IsisConfigurableLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_12;
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

        static int get_enum_value(const std::string & name) {
            if (name == "level-12") return 0;
            if (name == "level-1") return 1;
            if (name == "level-2") return 2;
            return -1;
        }
};

class IsisApplicationAttribute : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf srlg;

        static int get_enum_value(const std::string & name) {
            if (name == "srlg") return 0;
            return -1;
        }
};

class IsisAuthenticationFailureMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf send_only;

        static int get_enum_value(const std::string & name) {
            if (name == "drop") return 0;
            if (name == "send-only") return 1;
            return -1;
        }
};

class IsisMibProtocolsSupportedMismatchBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 16;
            return -1;
        }
};

class IsisRedistProto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf ospfv3;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf subscriber;
        static const ydk::Enum::YLeaf application;
        static const ydk::Enum::YLeaf mobile;

        static int get_enum_value(const std::string & name) {
            if (name == "connected") return 0;
            if (name == "static") return 1;
            if (name == "ospf") return 2;
            if (name == "bgp") return 3;
            if (name == "isis") return 4;
            if (name == "ospfv3") return 5;
            if (name == "rip") return 6;
            if (name == "eigrp") return 7;
            if (name == "subscriber") return 8;
            if (name == "application") return 9;
            if (name == "mobile") return 10;
            return -1;
        }
};

class Isissid1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf index_;
        static const ydk::Enum::YLeaf absolute;

        static int get_enum_value(const std::string & name) {
            if (name == "index") return 1;
            if (name == "absolute") return 2;
            return -1;
        }
};

class IsisphpFlag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 0;
            if (name == "disable") return 1;
            return -1;
        }
};

class IsisMibIdLengthMismatchBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 5;
            return -1;
        }
};

class IsisMibAllBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 19;
            return -1;
        }
};

class IsisMibOriginatedLspBufferSizeMismatchBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 15;
            return -1;
        }
};

class Isisfrr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf per_link;
        static const ydk::Enum::YLeaf per_prefix;

        static int get_enum_value(const std::string & name) {
            if (name == "per-link") return 1;
            if (name == "per-prefix") return 2;
            return -1;
        }
};

class IsisAttachedBit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf area;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;

        static int get_enum_value(const std::string & name) {
            if (name == "area") return 0;
            if (name == "on") return 1;
            if (name == "off") return 2;
            return -1;
        }
};

class NflagClear : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class IsisLabelPreference : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf segment_routing;

        static int get_enum_value(const std::string & name) {
            if (name == "ldp") return 0;
            if (name == "segment-routing") return 1;
            return -1;
        }
};

class IsisMibAdjacencyChangeBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 17;
            return -1;
        }
};

class IsisMibLspErrorDetectedBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 18;
            return -1;
        }
};

class IsisMibOwnLspPurgeBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 7;
            return -1;
        }
};

class IsisMibVersionSkewBoolean : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 11;
            return -1;
        }
};

class Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::Metric_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

        static int get_enum_value(const std::string & name) {
            if (name == "maximum") return 16777215;
            return -1;
        }
};

class Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::Metric_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

        static int get_enum_value(const std::string & name) {
            if (name == "maximum") return 16777215;
            return -1;
        }
};

class Isis::Instances::Instance::Interfaces::Interface::MeshGroup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf blocked;

        static int get_enum_value(const std::string & name) {
            if (name == "blocked") return 0;
            return -1;
        }
};

class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::Metric_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

        static int get_enum_value(const std::string & name) {
            if (name == "maximum") return 16777215;
            return -1;
        }
};

class Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::Metric_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

        static int get_enum_value(const std::string & name) {
            if (name == "maximum") return 16777215;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_CFG_ */

