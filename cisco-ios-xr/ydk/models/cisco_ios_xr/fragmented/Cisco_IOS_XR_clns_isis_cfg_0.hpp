#ifndef _CISCO_IOS_XR_CLNS_ISIS_CFG_0_
#define _CISCO_IOS_XR_CLNS_ISIS_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_clns_isis_cfg {

class Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Instances; //type: Isis::Instances

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances> instances;


}; // Isis


class Isis::Instances : public Entity
{
    public:
        Instances();
        ~Instances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Instance; //type: Isis::Instances::Instance

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance> > instance;


}; // Isis::Instances


class Isis::Instances::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_name; //type: string
        YLeaf running; //type: empty
        YLeaf log_adjacency_changes; //type: empty
        YLeaf ignore_lsp_errors; //type: boolean
        YLeaf is_type; //type: IsisConfigurableLevelsEnum
        YLeaf tracing_mode; //type: IsisTracingModeEnum
        YLeaf instance_id; //type: uint32
        YLeaf dynamic_host_name; //type: boolean
        YLeaf nsr; //type: empty
        YLeaf log_pdu_drops; //type: empty

        class Srgb; //type: Isis::Instances::Instance::Srgb
        class LspGenerationIntervals; //type: Isis::Instances::Instance::LspGenerationIntervals
        class LspArrivalTimes; //type: Isis::Instances::Instance::LspArrivalTimes
        class TraceBufferSize; //type: Isis::Instances::Instance::TraceBufferSize
        class MaxLinkMetrics; //type: Isis::Instances::Instance::MaxLinkMetrics
        class AdjacencyStagger; //type: Isis::Instances::Instance::AdjacencyStagger
        class Afs; //type: Isis::Instances::Instance::Afs
        class LspRefreshIntervals; //type: Isis::Instances::Instance::LspRefreshIntervals
        class Distribute; //type: Isis::Instances::Instance::Distribute
        class LspAcceptPasswords; //type: Isis::Instances::Instance::LspAcceptPasswords
        class LspMtus; //type: Isis::Instances::Instance::LspMtus
        class Nsf; //type: Isis::Instances::Instance::Nsf
        class LinkGroups; //type: Isis::Instances::Instance::LinkGroups
        class LspCheckIntervals; //type: Isis::Instances::Instance::LspCheckIntervals
        class LspPasswords; //type: Isis::Instances::Instance::LspPasswords
        class Nets; //type: Isis::Instances::Instance::Nets
        class LspLifetimes; //type: Isis::Instances::Instance::LspLifetimes
        class OverloadBits; //type: Isis::Instances::Instance::OverloadBits
        class Interfaces; //type: Isis::Instances::Instance::Interfaces

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::AdjacencyStagger> adjacency_stagger; // presence node
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs> afs;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Distribute> distribute; // presence node
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LinkGroups> link_groups;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspAcceptPasswords> lsp_accept_passwords;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspArrivalTimes> lsp_arrival_times;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspCheckIntervals> lsp_check_intervals;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspGenerationIntervals> lsp_generation_intervals;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspLifetimes> lsp_lifetimes;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspMtus> lsp_mtus;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspPasswords> lsp_passwords;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspRefreshIntervals> lsp_refresh_intervals;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::MaxLinkMetrics> max_link_metrics;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Nets> nets;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Nsf> nsf;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::OverloadBits> overload_bits;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Srgb> srgb; // presence node
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::TraceBufferSize> trace_buffer_size;


}; // Isis::Instances::Instance


class Isis::Instances::Instance::Srgb : public Entity
{
    public:
        Srgb();
        ~Srgb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lower_bound; //type: uint32
        YLeaf upper_bound; //type: uint32



}; // Isis::Instances::Instance::Srgb


class Isis::Instances::Instance::LspGenerationIntervals : public Entity
{
    public:
        LspGenerationIntervals();
        ~LspGenerationIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspGenerationInterval; //type: Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval> > lsp_generation_interval;


}; // Isis::Instances::Instance::LspGenerationIntervals


class Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval : public Entity
{
    public:
        LspGenerationInterval();
        ~LspGenerationInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf maximum_wait; //type: uint32
        YLeaf initial_wait; //type: uint32
        YLeaf secondary_wait; //type: uint32



}; // Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval


class Isis::Instances::Instance::LspArrivalTimes : public Entity
{
    public:
        LspArrivalTimes();
        ~LspArrivalTimes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspArrivalTime; //type: Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime> > lsp_arrival_time;


}; // Isis::Instances::Instance::LspArrivalTimes


class Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime : public Entity
{
    public:
        LspArrivalTime();
        ~LspArrivalTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf maximum_wait; //type: uint32
        YLeaf initial_wait; //type: uint32
        YLeaf secondary_wait; //type: uint32



}; // Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime


class Isis::Instances::Instance::TraceBufferSize : public Entity
{
    public:
        TraceBufferSize();
        ~TraceBufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf detailed; //type: uint32
        YLeaf standard; //type: uint32
        YLeaf severe; //type: uint32
        YLeaf hello; //type: uint32



}; // Isis::Instances::Instance::TraceBufferSize


class Isis::Instances::Instance::MaxLinkMetrics : public Entity
{
    public:
        MaxLinkMetrics();
        ~MaxLinkMetrics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MaxLinkMetric; //type: Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric> > max_link_metric;


}; // Isis::Instances::Instance::MaxLinkMetrics


class Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric : public Entity
{
    public:
        MaxLinkMetric();
        ~MaxLinkMetric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum



}; // Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric


class Isis::Instances::Instance::AdjacencyStagger : public Entity
{
    public:
        AdjacencyStagger();
        ~AdjacencyStagger();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initial_nbr; //type: uint32
        YLeaf max_nbr; //type: uint32



}; // Isis::Instances::Instance::AdjacencyStagger


class Isis::Instances::Instance::Afs : public Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Af; //type: Isis::Instances::Instance::Afs::Af

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af> > af;


}; // Isis::Instances::Instance::Afs


class Isis::Instances::Instance::Afs::Af : public Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: IsisAddressFamilyEnum
        YLeaf saf_name; //type: IsisSubAddressFamilyEnum

        class AfData; //type: Isis::Instances::Instance::Afs::Af::AfData
        class TopologyName; //type: Isis::Instances::Instance::Afs::Af::TopologyName

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData> af_data; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName> > topology_name;


}; // Isis::Instances::Instance::Afs::Af


class Isis::Instances::Instance::Afs::Af::AfData : public Entity
{
    public:
        AfData();
        ~AfData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_paths; //type: uint32
        YLeaf topology_id; //type: uint32
        YLeaf single_topology; //type: empty
        YLeaf adjacency_check; //type: IsisAdjCheckEnum
        YLeaf advertise_link_attributes; //type: boolean
        YLeaf apply_weight; //type: IsisApplyWeightEnum
        YLeaf default_admin_distance; //type: uint32
        YLeaf advertise_passive_only; //type: empty
        YLeaf ignore_attached_bit; //type: boolean
        YLeaf attached_bit; //type: IsisAttachedBitEnum
        YLeaf route_source_first_hop; //type: boolean

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
        class SpfPeriodicIntervals; //type: Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals
        class SpfIntervals; //type: Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals
        class MonitorConvergence; //type: Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence
        class DefaultInformation; //type: Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation
        class AdminDistances; //type: Isis::Instances::Instance::Afs::Af::AfData::AdminDistances
        class Ispf; //type: Isis::Instances::Instance::Afs::Af::AfData::Ispf
        class MplsLdpGlobal; //type: Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal
        class Mpls; //type: Isis::Instances::Instance::Afs::Af::AfData::Mpls
        class Metrics; //type: Isis::Instances::Instance::Afs::Af::AfData::Metrics
        class Weights; //type: Isis::Instances::Instance::Afs::Af::AfData::Weights

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::AdminDistances> admin_distances;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable> frr_table;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ispf> ispf;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes> max_redist_prefixes;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MetricStyles> metric_styles;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Metrics> metrics;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance> micro_loop_avoidance;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence> monitor_convergence;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal> mpls_ldp_global;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Propagations> propagations;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions> redistributions;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::RouterId> router_id;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting> segment_routing;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals> spf_intervals;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals> spf_periodic_intervals;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities> spf_prefix_priorities;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ucmp> ucmp;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Weights> weights;


}; // Isis::Instances::Instance::Afs::Af::AfData


class Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting : public Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mpls; //type: IsisLabelPreferenceEnum

        class PrefixSidMap; //type: Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap> prefix_sid_map;


}; // Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting


class Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap : public Entity
{
    public:
        PrefixSidMap();
        ~PrefixSidMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf advertise_local; //type: empty
        YLeaf receive; //type: boolean



}; // Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap


class Isis::Instances::Instance::Afs::Af::AfData::MetricStyles : public Entity
{
    public:
        MetricStyles();
        ~MetricStyles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MetricStyle; //type: Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle> > metric_style;


}; // Isis::Instances::Instance::Afs::Af::AfData::MetricStyles


class Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle : public Entity
{
    public:
        MetricStyle();
        ~MetricStyle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf style; //type: IsisMetricStyleEnum
        YLeaf transition_state; //type: IsisMetricStyleTransitionEnum



}; // Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable : public Entity
{
    public:
        FrrTable();
        ~FrrTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrLoadSharings; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings
        class PriorityLimits; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits
        class FrrRemoteLfaPrefixes; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes
        class FrrTiebreakers; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers
        class FrrUseCandOnlies; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings> frr_load_sharings;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes> frr_remote_lfa_prefixes;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers> frr_tiebreakers;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies> frr_use_cand_onlies;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits> priority_limits;


}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings : public Entity
{
    public:
        FrrLoadSharings();
        ~FrrLoadSharings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrLoadSharing; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing> > frr_load_sharing;


}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing : public Entity
{
    public:
        FrrLoadSharing();
        ~FrrLoadSharing();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf load_sharing; //type: IsisfrrLoadSharingEnum



}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits : public Entity
{
    public:
        PriorityLimits();
        ~PriorityLimits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PriorityLimit; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit> > priority_limit;


}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit : public Entity
{
    public:
        PriorityLimit();
        ~PriorityLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf frr_type; //type: IsisfrrEnum
        YLeaf priority; //type: IsisPrefixPriorityEnum



}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes : public Entity
{
    public:
        FrrRemoteLfaPrefixes();
        ~FrrRemoteLfaPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrRemoteLfaPrefix; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix> > frr_remote_lfa_prefix;


}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix : public Entity
{
    public:
        FrrRemoteLfaPrefix();
        ~FrrRemoteLfaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf prefix_list_name; //type: string



}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers : public Entity
{
    public:
        FrrTiebreakers();
        ~FrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrTiebreaker; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker> > frr_tiebreaker;


}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker : public Entity
{
    public:
        FrrTiebreaker();
        ~FrrTiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf tiebreaker; //type: IsisfrrTiebreakerEnum
        YLeaf index_; //type: uint32



}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies : public Entity
{
    public:
        FrrUseCandOnlies();
        ~FrrUseCandOnlies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrUseCandOnly; //type: Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly> > frr_use_cand_only;


}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies


class Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly : public Entity
{
    public:
        FrrUseCandOnly();
        ~FrrUseCandOnly();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf frr_type; //type: IsisfrrEnum



}; // Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly


class Isis::Instances::Instance::Afs::Af::AfData::RouterId : public Entity
{
    public:
        RouterId();
        ~RouterId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf interface_name; //type: string



}; // Isis::Instances::Instance::Afs::Af::AfData::RouterId


class Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities : public Entity
{
    public:
        SpfPrefixPriorities();
        ~SpfPrefixPriorities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpfPrefixPriority; //type: Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority> > spf_prefix_priority;


}; // Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities


class Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority : public Entity
{
    public:
        SpfPrefixPriority();
        ~SpfPrefixPriority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf prefix_priority_type; //type: IsisPrefixPriorityEnum
        YLeaf admin_tag; //type: uint32
        YLeaf access_list_name; //type: string



}; // Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority


class Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes : public Entity
{
    public:
        SummaryPrefixes();
        ~SummaryPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SummaryPrefix; //type: Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix> > summary_prefix;


}; // Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes


class Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix : public Entity
{
    public:
        SummaryPrefix();
        ~SummaryPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string
        YLeaf tag; //type: uint32
        YLeaf level; //type: uint32



}; // Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix


class Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance : public Entity
{
    public:
        MicroLoopAvoidance();
        ~MicroLoopAvoidance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: IsisMicroLoopAvoidanceEnum
        YLeaf rib_update_delay; //type: uint32



}; // Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance


class Isis::Instances::Instance::Afs::Af::AfData::Ucmp : public Entity
{
    public:
        Ucmp();
        ~Ucmp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf delay_interval; //type: uint32

        class Enable; //type: Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable
        class ExcludeInterfaces; //type: Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable> enable;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces> exclude_interfaces;


}; // Isis::Instances::Instance::Afs::Af::AfData::Ucmp


class Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable : public Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf variance; //type: uint32
        YLeaf prefix_list_name; //type: string



}; // Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable


class Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ExcludeInterface; //type: Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


}; // Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces


class Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface


class Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes : public Entity
{
    public:
        MaxRedistPrefixes();
        ~MaxRedistPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MaxRedistPrefix; //type: Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix> > max_redist_prefix;


}; // Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes


class Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix : public Entity
{
    public:
        MaxRedistPrefix();
        ~MaxRedistPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf prefix_limit; //type: uint32



}; // Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix


class Isis::Instances::Instance::Afs::Af::AfData::Propagations : public Entity
{
    public:
        Propagations();
        ~Propagations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Propagation; //type: Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation> > propagation;


}; // Isis::Instances::Instance::Afs::Af::AfData::Propagations


class Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation : public Entity
{
    public:
        Propagation();
        ~Propagation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_level; //type: IsisInternalLevelEnum
        YLeaf destination_level; //type: IsisInternalLevelEnum
        YLeaf route_policy_name; //type: string



}; // Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions : public Entity
{
    public:
        Redistributions();
        ~Redistributions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Redistribution; //type: Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution> > redistribution;


}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution : public Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol_name; //type: IsisRedistProtoEnum

        class ConnectedOrStaticOrRipOrSubscriberOrMobile; //type: Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile
        class OspfOrOspfv3OrIsisOrApplication; //type: Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication
        class Bgp; //type: Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp
        class Eigrp; //type: Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile> connected_or_static_or_rip_or_subscriber_or_mobile; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp> > eigrp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication> > ospf_or_ospfv3_or_isis_or_application;


}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile : public Entity
{
    public:
        ConnectedOrStaticOrRipOrSubscriberOrMobile();
        ~ConnectedOrStaticOrRipOrSubscriberOrMobile();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf metric; //type: uint32
        YLeaf levels; //type: IsisConfigurableLevelsEnum
        YLeaf route_policy_name; //type: string
        YLeaf metric_type; //type: IsisMetricEnum
        YLeaf ospf_route_type; //type: int32



}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication : public Entity
{
    public:
        OspfOrOspfv3OrIsisOrApplication();
        ~OspfOrOspfv3OrIsisOrApplication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_name; //type: string
        YLeaf metric; //type: uint32
        YLeaf levels; //type: IsisConfigurableLevelsEnum
        YLeaf route_policy_name; //type: string
        YLeaf metric_type; //type: IsisMetricEnum
        YLeaf ospf_route_type; //type: int32



}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf levels; //type: IsisConfigurableLevelsEnum
        YLeaf route_policy_name; //type: string
        YLeaf metric_type; //type: IsisMetricEnum
        YLeaf ospf_route_type; //type: int32



}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp


class Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp : public Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_zz; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf levels; //type: IsisConfigurableLevelsEnum
        YLeaf route_policy_name; //type: string
        YLeaf metric_type; //type: IsisMetricEnum
        YLeaf ospf_route_type; //type: int32



}; // Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp


class Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals : public Entity
{
    public:
        SpfPeriodicIntervals();
        ~SpfPeriodicIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpfPeriodicInterval; //type: Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval> > spf_periodic_interval;


}; // Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals


class Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval : public Entity
{
    public:
        SpfPeriodicInterval();
        ~SpfPeriodicInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf periodic_interval; //type: uint32



}; // Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval


class Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals : public Entity
{
    public:
        SpfIntervals();
        ~SpfIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpfInterval; //type: Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval> > spf_interval;


}; // Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals


class Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval : public Entity
{
    public:
        SpfInterval();
        ~SpfInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf maximum_wait; //type: uint32
        YLeaf initial_wait; //type: uint32
        YLeaf secondary_wait; //type: uint32



}; // Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval


class Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence : public Entity
{
    public:
        MonitorConvergence();
        ~MonitorConvergence();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf track_ip_frr; //type: empty
        YLeaf prefix_list; //type: string



}; // Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence


class Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation : public Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf use_policy; //type: boolean
        YLeaf policy_name; //type: string
        YLeaf external; //type: empty



}; // Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation


class Isis::Instances::Instance::Afs::Af::AfData::AdminDistances : public Entity
{
    public:
        AdminDistances();
        ~AdminDistances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AdminDistance; //type: Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance> > admin_distance;


}; // Isis::Instances::Instance::Afs::Af::AfData::AdminDistances


class Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance : public Entity
{
    public:
        AdminDistance();
        ~AdminDistance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string
        YLeaf distance; //type: uint32
        YLeaf prefix_list; //type: string



}; // Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance


class Isis::Instances::Instance::Afs::Af::AfData::Ispf : public Entity
{
    public:
        Ispf();
        ~Ispf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class States; //type: Isis::Instances::Instance::Afs::Af::AfData::Ispf::States

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ispf::States> states;


}; // Isis::Instances::Instance::Afs::Af::AfData::Ispf


class Isis::Instances::Instance::Afs::Af::AfData::Ispf::States : public Entity
{
    public:
        States();
        ~States();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class State; //type: Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State> > state;


}; // Isis::Instances::Instance::Afs::Af::AfData::Ispf::States


class Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf state; //type: IsisispfStateEnum



}; // Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State


class Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal : public Entity
{
    public:
        MplsLdpGlobal();
        ~MplsLdpGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf auto_config; //type: boolean



}; // Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal


class Isis::Instances::Instance::Afs::Af::AfData::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_intact; //type: empty
        YLeaf level; //type: IsisConfigurableLevelsEnum
        YLeaf multicast_intact; //type: empty

        class RouterId; //type: Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId> router_id;


}; // Isis::Instances::Instance::Afs::Af::AfData::Mpls


class Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId : public Entity
{
    public:
        RouterId();
        ~RouterId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf interface_name; //type: string



}; // Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId


class Isis::Instances::Instance::Afs::Af::AfData::Metrics : public Entity
{
    public:
        Metrics();
        ~Metrics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Metric; //type: Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric> > metric;


}; // Isis::Instances::Instance::Afs::Af::AfData::Metrics


class Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf metric; //type: one of uint32, enumeration

        class MetricEnum;


}; // Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric


class Isis::Instances::Instance::Afs::Af::AfData::Weights : public Entity
{
    public:
        Weights();
        ~Weights();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Weight; //type: Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight> > weight;


}; // Isis::Instances::Instance::Afs::Af::AfData::Weights


class Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight : public Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf weight; //type: uint32



}; // Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight


class Isis::Instances::Instance::Afs::Af::TopologyName : public Entity
{
    public:
        TopologyName();
        ~TopologyName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf topology_name; //type: string
        YLeaf maximum_paths; //type: uint32
        YLeaf topology_id; //type: uint32
        YLeaf single_topology; //type: empty
        YLeaf adjacency_check; //type: IsisAdjCheckEnum
        YLeaf advertise_link_attributes; //type: boolean
        YLeaf apply_weight; //type: IsisApplyWeightEnum
        YLeaf default_admin_distance; //type: uint32
        YLeaf advertise_passive_only; //type: empty
        YLeaf ignore_attached_bit; //type: boolean
        YLeaf attached_bit; //type: IsisAttachedBitEnum
        YLeaf route_source_first_hop; //type: boolean

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
        class SpfPeriodicIntervals; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals
        class SpfIntervals; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals
        class MonitorConvergence; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence
        class DefaultInformation; //type: Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation
        class AdminDistances; //type: Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances
        class Ispf; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ispf
        class MplsLdpGlobal; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal
        class Mpls; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Mpls
        class Metrics; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Metrics
        class Weights; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Weights

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances> admin_distances;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable> frr_table;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ispf> ispf;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes> max_redist_prefixes;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles> metric_styles;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Metrics> metrics;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance> micro_loop_avoidance;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence> monitor_convergence;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal> mpls_ldp_global;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Propagations> propagations;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions> redistributions;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::RouterId> router_id;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting> segment_routing;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals> spf_intervals;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals> spf_periodic_intervals;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities> spf_prefix_priorities;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp> ucmp;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Weights> weights;


}; // Isis::Instances::Instance::Afs::Af::TopologyName


class Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting : public Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mpls; //type: IsisLabelPreferenceEnum

        class PrefixSidMap; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap> prefix_sid_map;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting


class Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap : public Entity
{
    public:
        PrefixSidMap();
        ~PrefixSidMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf advertise_local; //type: empty
        YLeaf receive; //type: boolean



}; // Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap


class Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles : public Entity
{
    public:
        MetricStyles();
        ~MetricStyles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MetricStyle; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle> > metric_style;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles


class Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle : public Entity
{
    public:
        MetricStyle();
        ~MetricStyle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf style; //type: IsisMetricStyleEnum
        YLeaf transition_state; //type: IsisMetricStyleTransitionEnum



}; // Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable : public Entity
{
    public:
        FrrTable();
        ~FrrTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrLoadSharings; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings
        class PriorityLimits; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits
        class FrrRemoteLfaPrefixes; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes
        class FrrTiebreakers; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers
        class FrrUseCandOnlies; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings> frr_load_sharings;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes> frr_remote_lfa_prefixes;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers> frr_tiebreakers;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies> frr_use_cand_onlies;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits> priority_limits;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings : public Entity
{
    public:
        FrrLoadSharings();
        ~FrrLoadSharings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrLoadSharing; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing> > frr_load_sharing;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing : public Entity
{
    public:
        FrrLoadSharing();
        ~FrrLoadSharing();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf load_sharing; //type: IsisfrrLoadSharingEnum



}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits : public Entity
{
    public:
        PriorityLimits();
        ~PriorityLimits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PriorityLimit; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit> > priority_limit;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit : public Entity
{
    public:
        PriorityLimit();
        ~PriorityLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf frr_type; //type: IsisfrrEnum
        YLeaf priority; //type: IsisPrefixPriorityEnum



}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes : public Entity
{
    public:
        FrrRemoteLfaPrefixes();
        ~FrrRemoteLfaPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrRemoteLfaPrefix; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix> > frr_remote_lfa_prefix;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix : public Entity
{
    public:
        FrrRemoteLfaPrefix();
        ~FrrRemoteLfaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf prefix_list_name; //type: string



}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers : public Entity
{
    public:
        FrrTiebreakers();
        ~FrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrTiebreaker; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker> > frr_tiebreaker;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker : public Entity
{
    public:
        FrrTiebreaker();
        ~FrrTiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf tiebreaker; //type: IsisfrrTiebreakerEnum
        YLeaf index_; //type: uint32



}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies : public Entity
{
    public:
        FrrUseCandOnlies();
        ~FrrUseCandOnlies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FrrUseCandOnly; //type: Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly> > frr_use_cand_only;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies


class Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly : public Entity
{
    public:
        FrrUseCandOnly();
        ~FrrUseCandOnly();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf frr_type; //type: IsisfrrEnum



}; // Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly


class Isis::Instances::Instance::Afs::Af::TopologyName::RouterId : public Entity
{
    public:
        RouterId();
        ~RouterId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf interface_name; //type: string



}; // Isis::Instances::Instance::Afs::Af::TopologyName::RouterId


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities : public Entity
{
    public:
        SpfPrefixPriorities();
        ~SpfPrefixPriorities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpfPrefixPriority; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority> > spf_prefix_priority;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority : public Entity
{
    public:
        SpfPrefixPriority();
        ~SpfPrefixPriority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf prefix_priority_type; //type: IsisPrefixPriorityEnum
        YLeaf admin_tag; //type: uint32
        YLeaf access_list_name; //type: string



}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority


class Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes : public Entity
{
    public:
        SummaryPrefixes();
        ~SummaryPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SummaryPrefix; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix> > summary_prefix;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes


class Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix : public Entity
{
    public:
        SummaryPrefix();
        ~SummaryPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string
        YLeaf tag; //type: uint32
        YLeaf level; //type: uint32



}; // Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix


class Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance : public Entity
{
    public:
        MicroLoopAvoidance();
        ~MicroLoopAvoidance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: IsisMicroLoopAvoidanceEnum
        YLeaf rib_update_delay; //type: uint32



}; // Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance


class Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp : public Entity
{
    public:
        Ucmp();
        ~Ucmp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf delay_interval; //type: uint32

        class Enable; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable
        class ExcludeInterfaces; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable> enable;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces> exclude_interfaces;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp


class Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable : public Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf variance; //type: uint32
        YLeaf prefix_list_name; //type: string



}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable


class Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ExcludeInterface; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface> > exclude_interface;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces


class Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface


class Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes : public Entity
{
    public:
        MaxRedistPrefixes();
        ~MaxRedistPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MaxRedistPrefix; //type: Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix> > max_redist_prefix;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes


class Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix : public Entity
{
    public:
        MaxRedistPrefix();
        ~MaxRedistPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf prefix_limit; //type: uint32



}; // Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix


class Isis::Instances::Instance::Afs::Af::TopologyName::Propagations : public Entity
{
    public:
        Propagations();
        ~Propagations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Propagation; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation> > propagation;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::Propagations


class Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation : public Entity
{
    public:
        Propagation();
        ~Propagation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_level; //type: IsisInternalLevelEnum
        YLeaf destination_level; //type: IsisInternalLevelEnum
        YLeaf route_policy_name; //type: string



}; // Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions : public Entity
{
    public:
        Redistributions();
        ~Redistributions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Redistribution; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution> > redistribution;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution : public Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol_name; //type: IsisRedistProtoEnum

        class ConnectedOrStaticOrRipOrSubscriberOrMobile; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile
        class OspfOrOspfv3OrIsisOrApplication; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication
        class Bgp; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp
        class Eigrp; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile> connected_or_static_or_rip_or_subscriber_or_mobile; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp> > eigrp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication> > ospf_or_ospfv3_or_isis_or_application;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile : public Entity
{
    public:
        ConnectedOrStaticOrRipOrSubscriberOrMobile();
        ~ConnectedOrStaticOrRipOrSubscriberOrMobile();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf metric; //type: uint32
        YLeaf levels; //type: IsisConfigurableLevelsEnum
        YLeaf route_policy_name; //type: string
        YLeaf metric_type; //type: IsisMetricEnum
        YLeaf ospf_route_type; //type: int32



}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication : public Entity
{
    public:
        OspfOrOspfv3OrIsisOrApplication();
        ~OspfOrOspfv3OrIsisOrApplication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf instance_name; //type: string
        YLeaf metric; //type: uint32
        YLeaf levels; //type: IsisConfigurableLevelsEnum
        YLeaf route_policy_name; //type: string
        YLeaf metric_type; //type: IsisMetricEnum
        YLeaf ospf_route_type; //type: int32



}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf levels; //type: IsisConfigurableLevelsEnum
        YLeaf route_policy_name; //type: string
        YLeaf metric_type; //type: IsisMetricEnum
        YLeaf ospf_route_type; //type: int32



}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp


class Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp : public Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_zz; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf levels; //type: IsisConfigurableLevelsEnum
        YLeaf route_policy_name; //type: string
        YLeaf metric_type; //type: IsisMetricEnum
        YLeaf ospf_route_type; //type: int32



}; // Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals : public Entity
{
    public:
        SpfPeriodicIntervals();
        ~SpfPeriodicIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpfPeriodicInterval; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval> > spf_periodic_interval;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval : public Entity
{
    public:
        SpfPeriodicInterval();
        ~SpfPeriodicInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf periodic_interval; //type: uint32



}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals : public Entity
{
    public:
        SpfIntervals();
        ~SpfIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpfInterval; //type: Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval> > spf_interval;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals


class Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval : public Entity
{
    public:
        SpfInterval();
        ~SpfInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf maximum_wait; //type: uint32
        YLeaf initial_wait; //type: uint32
        YLeaf secondary_wait; //type: uint32



}; // Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval


class Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence : public Entity
{
    public:
        MonitorConvergence();
        ~MonitorConvergence();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty
        YLeaf track_ip_frr; //type: empty
        YLeaf prefix_list; //type: string



}; // Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence


class Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation : public Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf use_policy; //type: boolean
        YLeaf policy_name; //type: string
        YLeaf external; //type: empty



}; // Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation


class Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances : public Entity
{
    public:
        AdminDistances();
        ~AdminDistances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AdminDistance; //type: Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance> > admin_distance;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances


class Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance : public Entity
{
    public:
        AdminDistance();
        ~AdminDistance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string
        YLeaf distance; //type: uint32
        YLeaf prefix_list; //type: string



}; // Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance


class Isis::Instances::Instance::Afs::Af::TopologyName::Ispf : public Entity
{
    public:
        Ispf();
        ~Ispf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class States; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States> states;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ispf


class Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States : public Entity
{
    public:
        States();
        ~States();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class State; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State> > state;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States


class Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State : public Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf state; //type: IsisispfStateEnum



}; // Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State


class Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal : public Entity
{
    public:
        MplsLdpGlobal();
        ~MplsLdpGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf auto_config; //type: boolean



}; // Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal


class Isis::Instances::Instance::Afs::Af::TopologyName::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf igp_intact; //type: empty
        YLeaf level; //type: IsisConfigurableLevelsEnum
        YLeaf multicast_intact; //type: empty

        class RouterId; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId> router_id;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::Mpls


class Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId : public Entity
{
    public:
        RouterId();
        ~RouterId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf interface_name; //type: string



}; // Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId


class Isis::Instances::Instance::Afs::Af::TopologyName::Metrics : public Entity
{
    public:
        Metrics();
        ~Metrics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Metric; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric> > metric;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::Metrics


class Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf metric; //type: one of uint32, enumeration

        class MetricEnum;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric


class Isis::Instances::Instance::Afs::Af::TopologyName::Weights : public Entity
{
    public:
        Weights();
        ~Weights();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Weight; //type: Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight> > weight;


}; // Isis::Instances::Instance::Afs::Af::TopologyName::Weights


class Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight : public Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf weight; //type: uint32



}; // Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight


class Isis::Instances::Instance::LspRefreshIntervals : public Entity
{
    public:
        LspRefreshIntervals();
        ~LspRefreshIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspRefreshInterval; //type: Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval> > lsp_refresh_interval;


}; // Isis::Instances::Instance::LspRefreshIntervals


class Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval : public Entity
{
    public:
        LspRefreshInterval();
        ~LspRefreshInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf interval; //type: uint32



}; // Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval


class Isis::Instances::Instance::Distribute : public Entity
{
    public:
        Distribute();
        ~Distribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dist_inst_id; //type: uint32
        YLeaf level; //type: IsisConfigurableLevelsEnum
        YLeaf dist_throttle; //type: uint32



}; // Isis::Instances::Instance::Distribute


class Isis::Instances::Instance::LspAcceptPasswords : public Entity
{
    public:
        LspAcceptPasswords();
        ~LspAcceptPasswords();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspAcceptPassword; //type: Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword> > lsp_accept_password;


}; // Isis::Instances::Instance::LspAcceptPasswords


class Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword : public Entity
{
    public:
        LspAcceptPassword();
        ~LspAcceptPassword();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf password; //type: string



}; // Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword


class Isis::Instances::Instance::LspMtus : public Entity
{
    public:
        LspMtus();
        ~LspMtus();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspMtu; //type: Isis::Instances::Instance::LspMtus::LspMtu

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspMtus::LspMtu> > lsp_mtu;


}; // Isis::Instances::Instance::LspMtus


class Isis::Instances::Instance::LspMtus::LspMtu : public Entity
{
    public:
        LspMtu();
        ~LspMtu();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf mtu; //type: uint32



}; // Isis::Instances::Instance::LspMtus::LspMtu


class Isis::Instances::Instance::Nsf : public Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flavor; //type: IsisNsfFlavorEnum
        YLeaf interface_timer; //type: uint32
        YLeaf max_interface_timer_expiry; //type: uint32
        YLeaf lifetime; //type: uint32



}; // Isis::Instances::Instance::Nsf


class Isis::Instances::Instance::LinkGroups : public Entity
{
    public:
        LinkGroups();
        ~LinkGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LinkGroup; //type: Isis::Instances::Instance::LinkGroups::LinkGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LinkGroups::LinkGroup> > link_group;


}; // Isis::Instances::Instance::LinkGroups


class Isis::Instances::Instance::LinkGroups::LinkGroup : public Entity
{
    public:
        LinkGroup();
        ~LinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_group_name; //type: string
        YLeaf enable; //type: empty
        YLeaf metric_offset; //type: uint32
        YLeaf revert_members; //type: uint32
        YLeaf minimum_members; //type: uint32



}; // Isis::Instances::Instance::LinkGroups::LinkGroup


class Isis::Instances::Instance::LspCheckIntervals : public Entity
{
    public:
        LspCheckIntervals();
        ~LspCheckIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspCheckInterval; //type: Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval> > lsp_check_interval;


}; // Isis::Instances::Instance::LspCheckIntervals


class Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval : public Entity
{
    public:
        LspCheckInterval();
        ~LspCheckInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf interval; //type: uint32



}; // Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval


class Isis::Instances::Instance::LspPasswords : public Entity
{
    public:
        LspPasswords();
        ~LspPasswords();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspPassword; //type: Isis::Instances::Instance::LspPasswords::LspPassword

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspPasswords::LspPassword> > lsp_password;


}; // Isis::Instances::Instance::LspPasswords


class Isis::Instances::Instance::LspPasswords::LspPassword : public Entity
{
    public:
        LspPassword();
        ~LspPassword();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf algorithm; //type: IsisAuthenticationAlgorithmEnum
        YLeaf failure_mode; //type: IsisAuthenticationFailureModeEnum
        YLeaf authentication_type; //type: IsisSnpAuthEnum
        YLeaf password; //type: string



}; // Isis::Instances::Instance::LspPasswords::LspPassword


class Isis::Instances::Instance::Nets : public Entity
{
    public:
        Nets();
        ~Nets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Net; //type: Isis::Instances::Instance::Nets::Net

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Nets::Net> > net;


}; // Isis::Instances::Instance::Nets


class Isis::Instances::Instance::Nets::Net : public Entity
{
    public:
        Net();
        ~Net();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf net_name; //type: string



}; // Isis::Instances::Instance::Nets::Net


class Isis::Instances::Instance::LspLifetimes : public Entity
{
    public:
        LspLifetimes();
        ~LspLifetimes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspLifetime; //type: Isis::Instances::Instance::LspLifetimes::LspLifetime

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::LspLifetimes::LspLifetime> > lsp_lifetime;


}; // Isis::Instances::Instance::LspLifetimes


class Isis::Instances::Instance::LspLifetimes::LspLifetime : public Entity
{
    public:
        LspLifetime();
        ~LspLifetime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf lifetime; //type: uint32



}; // Isis::Instances::Instance::LspLifetimes::LspLifetime


class Isis::Instances::Instance::OverloadBits : public Entity
{
    public:
        OverloadBits();
        ~OverloadBits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OverloadBit; //type: Isis::Instances::Instance::OverloadBits::OverloadBit

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::OverloadBits::OverloadBit> > overload_bit;


}; // Isis::Instances::Instance::OverloadBits


class Isis::Instances::Instance::OverloadBits::OverloadBit : public Entity
{
    public:
        OverloadBit();
        ~OverloadBit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf overload_bit_mode; //type: IsisOverloadBitModeEnum
        YLeaf hippity_period; //type: uint32
        YLeaf external_adv_type; //type: IsisAdvTypeExternalEnum
        YLeaf inter_level_adv_type; //type: IsisAdvTypeInterLevelEnum



}; // Isis::Instances::Instance::OverloadBits::OverloadBit


class Isis::Instances::Instance::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Isis::Instances::Instance::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface> > interface;


}; // Isis::Instances::Instance::Interfaces


class Isis::Instances::Instance::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf running; //type: empty
        YLeaf circuit_type; //type: IsisConfigurableLevelsEnum
        YLeaf point_to_point; //type: empty
        YLeaf state; //type: IsisInterfaceStateEnum
        YLeaf mesh_group; //type: one of uint32, enumeration
        YLeaf link_down_fast_detect; //type: empty

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

        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals> csnp_intervals;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords> hello_accept_passwords;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloIntervals> hello_intervals;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers> hello_multipliers;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloPaddings> hello_paddings;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::HelloPasswords> hello_passwords;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs> interface_afs;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds> lsp_fast_flood_thresholds;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspIntervals> lsp_intervals;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals> lsp_retransmit_intervals;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals> lsp_retransmit_throttle_intervals;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears> prefix_attribute_n_flag_clears;
        std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::Priorities> priorities;
        class MeshGroupEnum;


}; // Isis::Instances::Instance::Interfaces::Interface


class Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals : public Entity
{
    public:
        LspRetransmitThrottleIntervals();
        ~LspRetransmitThrottleIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspRetransmitThrottleInterval; //type: Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval> > lsp_retransmit_throttle_interval;


}; // Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals


class Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval : public Entity
{
    public:
        LspRetransmitThrottleInterval();
        ~LspRetransmitThrottleInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf interval; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval


class Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals : public Entity
{
    public:
        LspRetransmitIntervals();
        ~LspRetransmitIntervals();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspRetransmitInterval; //type: Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval> > lsp_retransmit_interval;


}; // Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals


class Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval : public Entity
{
    public:
        LspRetransmitInterval();
        ~LspRetransmitInterval();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: IsisInternalLevelEnum
        YLeaf interval; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval


class Isis::Instances::Instance::Interfaces::Interface::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable_ipv6; //type: boolean
        YLeaf enable_ipv4; //type: boolean
        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32



}; // Isis::Instances::Instance::Interfaces::Interface::Bfd


class Isis::Instances::Instance::Interfaces::Interface::Priorities : public Entity
{
    public:
        Priorities();
        ~Priorities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Priority; //type: Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority

        std::vector<std::shared_ptr<Cisco_IOS_XR_clns_isis_cfg::Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority> > priority;


}; // Isis::Instances::Instance::Interfaces::Interface::Priorities

class IsisSnpAuthEnum : public Enum
{
    public:
        static const Enum::YLeaf send_only;
        static const Enum::YLeaf full;

};

class IsisMibMaxAreaAddressMismatchBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisMibLspTooLargeToPropagateBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisMibSequenceNumberSkipBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisInterfaceFrrTiebreakerEnum : public Enum
{
    public:
        static const Enum::YLeaf node_protecting;
        static const Enum::YLeaf srlg_disjoint;

};

class IsisAuthenticationAlgorithmEnum : public Enum
{
    public:
        static const Enum::YLeaf cleartext;
        static const Enum::YLeaf hmac_md5;
        static const Enum::YLeaf keychain;

};

class IsisOverloadBitModeEnum : public Enum
{
    public:
        static const Enum::YLeaf permanently_set;
        static const Enum::YLeaf startup_period;
        static const Enum::YLeaf wait_for_bgp;

};

class IsisMibRejectedAdjacencyBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisMibCorruptedLspDetectedBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisAdjCheckEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;

};

class IsisispfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;

};

class IsisfrrLoadSharingEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;

};

class IsisMibAuthenticationFailureBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisInterfaceStateEnum : public Enum
{
    public:
        static const Enum::YLeaf shutdown;
        static const Enum::YLeaf suppressed;
        static const Enum::YLeaf passive;

};

class IsisTracingModeEnum : public Enum
{
    public:
        static const Enum::YLeaf off;
        static const Enum::YLeaf basic;
        static const Enum::YLeaf enhanced;

};

class IsisMetricStyleEnum : public Enum
{
    public:
        static const Enum::YLeaf old_metric_style;
        static const Enum::YLeaf new_metric_style;
        static const Enum::YLeaf both_metric_style;

};

class IsisNsfFlavorEnum : public Enum
{
    public:
        static const Enum::YLeaf cisco_proprietary_nsf;
        static const Enum::YLeaf ietf_standard_nsf;

};

class IsisInterfaceAfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;

};

class IsisApplyWeightEnum : public Enum
{
    public:
        static const Enum::YLeaf ecmp_only;
        static const Enum::YLeaf ucmp_only;

};

class IsisPrefixPriorityEnum : public Enum
{
    public:
        static const Enum::YLeaf critical_priority;
        static const Enum::YLeaf high_priority;
        static const Enum::YLeaf medium_priority;

};

class IsisMibAuthenticationTypeFailureBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisMicroLoopAvoidanceEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf micro_loop_avoidance_all;
        static const Enum::YLeaf micro_loop_avoidance_protected;
        static const Enum::YLeaf micro_loop_avoidance_segement_routing;

};

class IsisAdvTypeExternalEnum : public Enum
{
    public:
        static const Enum::YLeaf external;

};

class IsisRemoteLfaEnum : public Enum
{
    public:
        static const Enum::YLeaf remote_lfa_none;
        static const Enum::YLeaf remote_lfa_tunnel_ldp;

};

class IsisMibAreaMismatchBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisMibAttemptToExceedMaxSequenceBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisConfigurableLevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level1;
        static const Enum::YLeaf level2;
        static const Enum::YLeaf level1_and2;

};

class IsisfrrTiebreakerEnum : public Enum
{
    public:
        static const Enum::YLeaf downstream;
        static const Enum::YLeaf lc_disjoint;
        static const Enum::YLeaf lowest_backup_metric;
        static const Enum::YLeaf node_protecting;
        static const Enum::YLeaf primary_path;
        static const Enum::YLeaf secondary_path;
        static const Enum::YLeaf srlg_disjoint;

};

class IsisMibManualAddressDropsBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisMetricStyleTransitionEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf enabled;

};

class IsisexplicitNullFlagEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf enable;

};

class IsisMetricEnum : public Enum
{
    public:
        static const Enum::YLeaf internal;
        static const Enum::YLeaf external;

};

class IsisHelloPaddingEnum : public Enum
{
    public:
        static const Enum::YLeaf never;
        static const Enum::YLeaf sometimes;

};

class IsisMibDatabaseOverFlowBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisAdvTypeInterLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf inter_level;

};

class IsisAuthenticationFailureModeEnum : public Enum
{
    public:
        static const Enum::YLeaf drop;
        static const Enum::YLeaf send_only;

};

class IsisMibProtocolsSupportedMismatchBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisRedistProtoEnum : public Enum
{
    public:
        static const Enum::YLeaf connected;
        static const Enum::YLeaf static_;
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf isis;
        static const Enum::YLeaf ospfv3;
        static const Enum::YLeaf rip;
        static const Enum::YLeaf eigrp;
        static const Enum::YLeaf subscriber;
        static const Enum::YLeaf application;
        static const Enum::YLeaf mobile;

};

class IsisphpFlagEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;

};

class IsisMibIdLengthMismatchBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisMibAllBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisMibOriginatedLspBufferSizeMismatchBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsissidEnum : public Enum
{
    public:
        static const Enum::YLeaf index_;
        static const Enum::YLeaf absolute;

};

class IsisfrrEnum : public Enum
{
    public:
        static const Enum::YLeaf per_link;
        static const Enum::YLeaf per_prefix;

};

class IsisAttachedBitEnum : public Enum
{
    public:
        static const Enum::YLeaf area;
        static const Enum::YLeaf on;
        static const Enum::YLeaf off;

};

class NflagClearEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf enable;

};

class IsisLabelPreferenceEnum : public Enum
{
    public:
        static const Enum::YLeaf ldp;
        static const Enum::YLeaf segment_routing;

};

class IsisMibAdjacencyChangeBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisMibLspErrorDetectedBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisMibOwnLspPurgeBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class IsisMibVersionSkewBooleanEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::MetricEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::MetricEnum : public Enum
{
    public:
        static const Enum::YLeaf maximum;

};

class Isis::Instances::Instance::Interfaces::Interface::MeshGroupEnum : public Enum
{
    public:
        static const Enum::YLeaf blocked;

};


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_CFG_0_ */

