#ifndef _CISCO_IOS_XR_INFRA_RCMD_OPER_
#define _CISCO_IOS_XR_INFRA_RCMD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_infra_rcmd_oper {

class Rcmd : public Entity
{
    public:
        Rcmd();
        ~Rcmd();

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



        class Ospf; //type: Rcmd::Ospf
        class Server; //type: Rcmd::Server
        class Node; //type: Rcmd::Node
        class Isis; //type: Rcmd::Isis
        class Memory; //type: Rcmd::Memory
        class Ldp; //type: Rcmd::Ldp
        class Intf; //type: Rcmd::Intf
        class Process; //type: Rcmd::Process

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Intf> intf;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp> ldp;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Memory> memory;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Node> node;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf> ospf;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process> process;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server> server;


}; // Rcmd


class Rcmd::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Instances; //type: Rcmd::Ospf::Instances

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances> instances;


}; // Rcmd::Ospf


class Rcmd::Ospf::Instances : public Entity
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



        class Instance; //type: Rcmd::Ospf::Instances::Instance

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance> > instance;


}; // Rcmd::Ospf::Instances


class Rcmd::Ospf::Instances::Instance : public Entity
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

        class IpfrrEventSummaries; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries
        class PrefixEventStatistics; //type: Rcmd::Ospf::Instances::Instance::PrefixEventStatistics
        class SpfRunSummaries; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries
        class IpfrrEventOfflines; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines
        class SpfRunOfflines; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines
        class SummaryExternalEventSummaries; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries
        class PrefixEventSummaries; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries
        class SummaryExternalEventOfflines; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines
        class PrefixEventOfflines; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines
        class SummaryExternalEventStatistics; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines> ipfrr_event_offlines;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries> ipfrr_event_summaries;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines> prefix_event_offlines;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventStatistics> prefix_event_statistics;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries> prefix_event_summaries;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines> spf_run_offlines;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries> spf_run_summaries;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines> summary_external_event_offlines;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics> summary_external_event_statistics;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries> summary_external_event_summaries;


}; // Rcmd::Ospf::Instances::Instance


class Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries : public Entity
{
    public:
        IpfrrEventSummaries();
        ~IpfrrEventSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IpfrrEventSummary; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary> > ipfrr_event_summary;


}; // Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries


class Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary : public Entity
{
    public:
        IpfrrEventSummary();
        ~IpfrrEventSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_id; //type: int32
        YLeaf event_id_xr; //type: uint32
        YLeaf trigger_time; //type: string
        YLeaf trigger_spf_run; //type: uint32
        YLeaf wait_time; //type: uint32
        YLeaf start_time_offset; //type: string
        YLeaf duration; //type: string
        YLeaf completed_spf_run; //type: uint32
        YLeaf total_routes; //type: uint32
        YLeaf fully_protected_routes; //type: uint32
        YLeaf partially_protected_routes; //type: uint32
        YLeaf coverage; //type: string

        class IpfrrStatistic; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic
        class RemoteNode; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic> > ipfrr_statistic;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode> > remote_node;


}; // Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary


class Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic : public Entity
{
    public:
        IpfrrStatistic();
        ~IpfrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf priority; //type: RcmdPriorityLevelEnum
        YLeaf total_routes; //type: uint32
        YLeaf fully_protected_routes; //type: uint32
        YLeaf partially_protected_routes; //type: uint32
        YLeaf coverage; //type: string
        YLeaf local_lfa_coverage; //type: string
        YLeaf remote_lfa_coverage; //type: string
        YLeaf below_threshold; //type: boolean



}; // Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic


class Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode : public Entity
{
    public:
        RemoteNode();
        ~RemoteNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf remote_node_id; //type: string
        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string
        YLeaf path_count; //type: uint32
        YLeaf in_use_time; //type: string

        class PrimaryPath; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath> > primary_path;


}; // Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode


class Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath : public Entity
{
    public:
        PrimaryPath();
        ~PrimaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string



}; // Rcmd::Ospf::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath


class Rcmd::Ospf::Instances::Instance::PrefixEventStatistics : public Entity
{
    public:
        PrefixEventStatistics();
        ~PrefixEventStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixEventStatistic; //type: Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic> > prefix_event_statistic;


}; // Rcmd::Ospf::Instances::Instance::PrefixEventStatistics


class Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic : public Entity
{
    public:
        PrefixEventStatistic();
        ~PrefixEventStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_info; //type: string
        YLeaf prefix; //type: string
        YLeaf prefix_lenth; //type: uint32
        YLeaf last_event_time; //type: string
        YLeaf last_priority; //type: RcmdPriorityLevelEnum
        YLeaf last_route_type; //type: RcmdShowRouteEnum
        YLeaf last_change_type; //type: RcmdChangeEnum
        YLeaf last_cost; //type: uint32
        YLeaf critical_priority; //type: uint32
        YLeaf high_priority; //type: uint32
        YLeaf medium_priority; //type: uint32
        YLeaf low_priority; //type: uint32
        YLeaf add_count; //type: uint32
        YLeaf modify_count; //type: uint32
        YLeaf delete_count; //type: uint32
        YLeaf threshold_exceed_count; //type: uint32



}; // Rcmd::Ospf::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries : public Entity
{
    public:
        SpfRunSummaries();
        ~SpfRunSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpfRunSummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary> > spf_run_summary;


}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary : public Entity
{
    public:
        SpfRunSummary();
        ~SpfRunSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf spf_run_number; //type: int32

        class SpfSummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary
        class DijkstraRun; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun
        class InterAreaAndExternal; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun> > dijkstra_run;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal> > inter_area_and_external;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary> spf_summary;


}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary : public Entity
{
    public:
        SpfSummary();
        ~SpfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state; //type: RcmdSpfStateEnum
        YLeaf is_data_complete; //type: boolean
        YLeaf threshold_exceeded; //type: boolean
        YLeaf trigger_time; //type: string
        YLeaf start_time; //type: string
        YLeaf duration; //type: string
        YLeaf total_dijkstra_runs; //type: uint16
        YLeaf total_inter_area_and_external_batches; //type: uint16
        YLeaf total_type12lsa_changes; //type: uint16
        YLeaf total_type357lsa_changes; //type: uint16

        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary> > priority_summary;


}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary : public Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: RcmdPriorityLevelEnum
        YLeaf threshold_exceeded; //type: boolean

        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic> > frr_statistic;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics> route_statistics;


}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics : public Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adds; //type: uint32
        YLeaf deletes; //type: uint32
        YLeaf modifies; //type: uint32
        YLeaf reachables; //type: uint32
        YLeaf unreachables; //type: uint32
        YLeaf touches; //type: uint32



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime : public Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime : public Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic : public Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_routes; //type: uint32
        YLeaf fully_protected_routes; //type: uint32
        YLeaf partially_protected_routes; //type: uint32
        YLeaf coverage; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun : public Entity
{
    public:
        DijkstraRun();
        ~DijkstraRun();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dijkstra_run_number; //type: uint32
        YLeaf area_id; //type: string
        YLeaf threshold_exceeded; //type: boolean
        YLeaf trigger_time; //type: string
        YLeaf start_time; //type: string
        YLeaf wait_time; //type: uint32
        YLeaf duration; //type: string

        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa
        class Priority; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed> > lsa_processed;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority> > priority;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa> > trigger_lsa;


}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa : public Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_id; //type: string
        YLeaf sequence_number; //type: string
        YLeaf lsa_type; //type: RcmdLsaEnum
        YLeaf origin_router_id; //type: string
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::TriggerLsa


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline> > convergence_timeline;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded> > leaf_networks_added;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary> priority_summary;


}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary : public Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: RcmdPriorityLevelEnum
        YLeaf threshold_exceeded; //type: boolean

        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic> > frr_statistic;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics> route_statistics;


}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics : public Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adds; //type: uint32
        YLeaf deletes; //type: uint32
        YLeaf modifies; //type: uint32
        YLeaf reachables; //type: uint32
        YLeaf unreachables; //type: uint32
        YLeaf touches; //type: uint32



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime : public Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime : public Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic : public Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_routes; //type: uint32
        YLeaf fully_protected_routes; //type: uint32
        YLeaf partially_protected_routes; //type: uint32
        YLeaf coverage; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::PrioritySummary::FrrStatistic


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline : public Entity
{
    public:
        ConvergenceTimeline();
        ~ConvergenceTimeline();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RouteOrigin; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin
        class RiBv4Enter; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter
        class RiBv4Exit; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit
        class RiBv4Redistribute; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute
        class LdpEnter; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter
        class LdpExit; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit
        class LsdEnter; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter
        class LsdExit; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit
        class LcIp; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp> > lc_ip;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin> route_origin;


}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin : public Entity
{
    public:
        RouteOrigin();
        ~RouteOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter : public Entity
{
    public:
        RiBv4Enter();
        ~RiBv4Enter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit : public Entity
{
    public:
        RiBv4Exit();
        ~RiBv4Exit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute : public Entity
{
    public:
        RiBv4Redistribute();
        ~RiBv4Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter : public Entity
{
    public:
        LdpEnter();
        ~LdpEnter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit : public Entity
{
    public:
        LdpExit();
        ~LdpExit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter : public Entity
{
    public:
        LsdEnter();
        ~LsdEnter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit : public Entity
{
    public:
        LsdExit();
        ~LsdExit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp : public Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum

        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;


}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete : public Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls : public Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum

        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;


}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete : public Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded : public Entity
{
    public:
        LeafNetworksAdded();
        ~LeafNetworksAdded();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf net_mask; //type: uint8



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksAdded


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted : public Entity
{
    public:
        LeafNetworksDeleted();
        ~LeafNetworksDeleted();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf net_mask; //type: uint8



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::Priority::LeafNetworksDeleted


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed : public Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_id; //type: string
        YLeaf sequence_number; //type: string
        YLeaf lsa_type; //type: RcmdLsaEnum
        YLeaf origin_router_id; //type: string
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::DijkstraRun::LsaProcessed


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal : public Entity
{
    public:
        InterAreaAndExternal();
        ~InterAreaAndExternal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Priority; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority> > priority;


}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline> > convergence_timeline;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded> > leaf_networks_added;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary> priority_summary;


}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary : public Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: RcmdPriorityLevelEnum
        YLeaf threshold_exceeded; //type: boolean
        YLeaf type3ls_as; //type: uint32
        YLeaf type4ls_as; //type: uint32
        YLeaf type57ls_as; //type: uint32

        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics> route_statistics;


}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics : public Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adds; //type: uint32
        YLeaf deletes; //type: uint32
        YLeaf modifies; //type: uint32
        YLeaf reachables; //type: uint32
        YLeaf unreachables; //type: uint32
        YLeaf touches; //type: uint32



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime : public Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime : public Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline : public Entity
{
    public:
        ConvergenceTimeline();
        ~ConvergenceTimeline();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RouteOrigin; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin
        class RiBv4Enter; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter
        class RiBv4Exit; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit
        class RiBv4Redistribute; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute
        class LdpEnter; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter
        class LdpExit; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit
        class LsdEnter; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter
        class LsdExit; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit
        class LcIp; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp> > lc_ip;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin> route_origin;


}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin : public Entity
{
    public:
        RouteOrigin();
        ~RouteOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter : public Entity
{
    public:
        RiBv4Enter();
        ~RiBv4Enter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit : public Entity
{
    public:
        RiBv4Exit();
        ~RiBv4Exit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute : public Entity
{
    public:
        RiBv4Redistribute();
        ~RiBv4Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter : public Entity
{
    public:
        LdpEnter();
        ~LdpEnter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit : public Entity
{
    public:
        LdpExit();
        ~LdpExit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter : public Entity
{
    public:
        LsdEnter();
        ~LsdEnter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit : public Entity
{
    public:
        LsdExit();
        ~LsdExit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp : public Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum

        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;


}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete : public Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls : public Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum

        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;


}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete : public Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded : public Entity
{
    public:
        LeafNetworksAdded();
        ~LeafNetworksAdded();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf net_mask; //type: uint8



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksAdded


class Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted : public Entity
{
    public:
        LeafNetworksDeleted();
        ~LeafNetworksDeleted();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf net_mask; //type: uint8



}; // Rcmd::Ospf::Instances::Instance::SpfRunSummaries::SpfRunSummary::InterAreaAndExternal::Priority::LeafNetworksDeleted


class Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines : public Entity
{
    public:
        IpfrrEventOfflines();
        ~IpfrrEventOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IpfrrEventOffline; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline> > ipfrr_event_offline;


}; // Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines


class Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline : public Entity
{
    public:
        IpfrrEventOffline();
        ~IpfrrEventOffline();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_id; //type: int32
        YLeaf event_id_xr; //type: uint32
        YLeaf trigger_time; //type: string
        YLeaf trigger_spf_run; //type: uint32
        YLeaf wait_time; //type: uint32
        YLeaf start_time_offset; //type: string
        YLeaf duration; //type: string
        YLeaf completed_spf_run; //type: uint32
        YLeaf total_routes; //type: uint32
        YLeaf fully_protected_routes; //type: uint32
        YLeaf partially_protected_routes; //type: uint32
        YLeaf coverage; //type: string

        class IpfrrStatistic; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic
        class RemoteNode; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic> > ipfrr_statistic;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode> > remote_node;


}; // Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline


class Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic : public Entity
{
    public:
        IpfrrStatistic();
        ~IpfrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf priority; //type: RcmdPriorityLevelEnum
        YLeaf total_routes; //type: uint32
        YLeaf fully_protected_routes; //type: uint32
        YLeaf partially_protected_routes; //type: uint32
        YLeaf coverage; //type: string
        YLeaf local_lfa_coverage; //type: string
        YLeaf remote_lfa_coverage; //type: string
        YLeaf below_threshold; //type: boolean



}; // Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic


class Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode : public Entity
{
    public:
        RemoteNode();
        ~RemoteNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf remote_node_id; //type: string
        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string
        YLeaf path_count; //type: uint32
        YLeaf in_use_time; //type: string

        class PrimaryPath; //type: Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath> > primary_path;


}; // Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode


class Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath : public Entity
{
    public:
        PrimaryPath();
        ~PrimaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string



}; // Rcmd::Ospf::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines : public Entity
{
    public:
        SpfRunOfflines();
        ~SpfRunOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpfRunOffline; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline> > spf_run_offline;


}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline : public Entity
{
    public:
        SpfRunOffline();
        ~SpfRunOffline();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf spf_run_number; //type: int32

        class SpfSummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary
        class DijkstraRun; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun
        class InterAreaAndExternal; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun> > dijkstra_run;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal> > inter_area_and_external;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary> spf_summary;


}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary : public Entity
{
    public:
        SpfSummary();
        ~SpfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state; //type: RcmdSpfStateEnum
        YLeaf is_data_complete; //type: boolean
        YLeaf threshold_exceeded; //type: boolean
        YLeaf trigger_time; //type: string
        YLeaf start_time; //type: string
        YLeaf duration; //type: string
        YLeaf total_dijkstra_runs; //type: uint16
        YLeaf total_inter_area_and_external_batches; //type: uint16
        YLeaf total_type12lsa_changes; //type: uint16
        YLeaf total_type357lsa_changes; //type: uint16

        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary> > priority_summary;


}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary : public Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: RcmdPriorityLevelEnum
        YLeaf threshold_exceeded; //type: boolean

        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic> > frr_statistic;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics> route_statistics;


}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics : public Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adds; //type: uint32
        YLeaf deletes; //type: uint32
        YLeaf modifies; //type: uint32
        YLeaf reachables; //type: uint32
        YLeaf unreachables; //type: uint32
        YLeaf touches; //type: uint32



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime : public Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime : public Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic : public Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_routes; //type: uint32
        YLeaf fully_protected_routes; //type: uint32
        YLeaf partially_protected_routes; //type: uint32
        YLeaf coverage; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun : public Entity
{
    public:
        DijkstraRun();
        ~DijkstraRun();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf dijkstra_run_number; //type: uint32
        YLeaf area_id; //type: string
        YLeaf threshold_exceeded; //type: boolean
        YLeaf trigger_time; //type: string
        YLeaf start_time; //type: string
        YLeaf wait_time; //type: uint32
        YLeaf duration; //type: string

        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa
        class Priority; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed> > lsa_processed;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority> > priority;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa> > trigger_lsa;


}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa : public Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_id; //type: string
        YLeaf sequence_number; //type: string
        YLeaf lsa_type; //type: RcmdLsaEnum
        YLeaf origin_router_id; //type: string
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::TriggerLsa


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline> > convergence_timeline;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded> > leaf_networks_added;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary> priority_summary;


}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary : public Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: RcmdPriorityLevelEnum
        YLeaf threshold_exceeded; //type: boolean

        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic> > frr_statistic;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics> route_statistics;


}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics : public Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adds; //type: uint32
        YLeaf deletes; //type: uint32
        YLeaf modifies; //type: uint32
        YLeaf reachables; //type: uint32
        YLeaf unreachables; //type: uint32
        YLeaf touches; //type: uint32



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime : public Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime : public Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic : public Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_routes; //type: uint32
        YLeaf fully_protected_routes; //type: uint32
        YLeaf partially_protected_routes; //type: uint32
        YLeaf coverage; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::PrioritySummary::FrrStatistic


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline : public Entity
{
    public:
        ConvergenceTimeline();
        ~ConvergenceTimeline();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RouteOrigin; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin
        class RiBv4Enter; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter
        class RiBv4Exit; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit
        class RiBv4Redistribute; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute
        class LdpEnter; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter
        class LdpExit; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit
        class LsdEnter; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter
        class LsdExit; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit
        class LcIp; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp> > lc_ip;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin> route_origin;


}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin : public Entity
{
    public:
        RouteOrigin();
        ~RouteOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter : public Entity
{
    public:
        RiBv4Enter();
        ~RiBv4Enter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit : public Entity
{
    public:
        RiBv4Exit();
        ~RiBv4Exit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute : public Entity
{
    public:
        RiBv4Redistribute();
        ~RiBv4Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter : public Entity
{
    public:
        LdpEnter();
        ~LdpEnter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit : public Entity
{
    public:
        LdpExit();
        ~LdpExit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter : public Entity
{
    public:
        LsdEnter();
        ~LsdEnter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit : public Entity
{
    public:
        LsdExit();
        ~LsdExit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp : public Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum

        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;


}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete : public Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls : public Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum

        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;


}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete : public Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded : public Entity
{
    public:
        LeafNetworksAdded();
        ~LeafNetworksAdded();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf net_mask; //type: uint8



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksAdded


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted : public Entity
{
    public:
        LeafNetworksDeleted();
        ~LeafNetworksDeleted();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf net_mask; //type: uint8



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::Priority::LeafNetworksDeleted


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed : public Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_id; //type: string
        YLeaf sequence_number; //type: string
        YLeaf lsa_type; //type: RcmdLsaEnum
        YLeaf origin_router_id; //type: string
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::DijkstraRun::LsaProcessed


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal : public Entity
{
    public:
        InterAreaAndExternal();
        ~InterAreaAndExternal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Priority; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority> > priority;


}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrioritySummary; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline> > convergence_timeline;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded> > leaf_networks_added;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary> priority_summary;


}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary : public Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: RcmdPriorityLevelEnum
        YLeaf threshold_exceeded; //type: boolean
        YLeaf type3ls_as; //type: uint32
        YLeaf type4ls_as; //type: uint32
        YLeaf type57ls_as; //type: uint32

        class RouteStatistics; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics> route_statistics;


}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics : public Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adds; //type: uint32
        YLeaf deletes; //type: uint32
        YLeaf modifies; //type: uint32
        YLeaf reachables; //type: uint32
        YLeaf unreachables; //type: uint32
        YLeaf touches; //type: uint32



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::RouteStatistics


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime : public Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime : public Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline : public Entity
{
    public:
        ConvergenceTimeline();
        ~ConvergenceTimeline();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RouteOrigin; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin
        class RiBv4Enter; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter
        class RiBv4Exit; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit
        class RiBv4Redistribute; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute
        class LdpEnter; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter
        class LdpExit; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit
        class LsdEnter; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter
        class LsdExit; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit
        class LcIp; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp> > lc_ip;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin> route_origin;


}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin : public Entity
{
    public:
        RouteOrigin();
        ~RouteOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter : public Entity
{
    public:
        RiBv4Enter();
        ~RiBv4Enter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit : public Entity
{
    public:
        RiBv4Exit();
        ~RiBv4Exit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute : public Entity
{
    public:
        RiBv4Redistribute();
        ~RiBv4Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter : public Entity
{
    public:
        LdpEnter();
        ~LdpEnter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit : public Entity
{
    public:
        LdpExit();
        ~LdpExit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter : public Entity
{
    public:
        LsdEnter();
        ~LsdEnter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit : public Entity
{
    public:
        LsdExit();
        ~LsdExit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp : public Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum

        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;


}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete : public Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls : public Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum

        class FibComplete; //type: Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;


}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete : public Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded : public Entity
{
    public:
        LeafNetworksAdded();
        ~LeafNetworksAdded();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf net_mask; //type: uint8



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksAdded


class Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted : public Entity
{
    public:
        LeafNetworksDeleted();
        ~LeafNetworksDeleted();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf net_mask; //type: uint8



}; // Rcmd::Ospf::Instances::Instance::SpfRunOfflines::SpfRunOffline::InterAreaAndExternal::Priority::LeafNetworksDeleted


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries : public Entity
{
    public:
        SummaryExternalEventSummaries();
        ~SummaryExternalEventSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SummaryExternalEventSummary; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary> > summary_external_event_summary;


}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary : public Entity
{
    public:
        SummaryExternalEventSummary();
        ~SummaryExternalEventSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_id; //type: int32
        YLeaf prefix; //type: string
        YLeaf prefix_lenth; //type: uint32
        YLeaf spf_run_no; //type: uint32
        YLeaf ipfrr_event_id; //type: uint32
        YLeaf threshold_exceeded; //type: boolean
        YLeaf priority; //type: RcmdPriorityLevelEnum
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf route_type; //type: RcmdShowRouteEnum
        YLeaf route_path_change_type; //type: RcmdShowRoutePathChangeEnum
        YLeaf cost; //type: uint32
        YLeaf trigger_time; //type: string

        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime
        class Path; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path
        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa
        class TimeLine; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime> ip_convergence_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed> > lsa_processed;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime> mpls_convergence_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path> > path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine> > time_line;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa> > trigger_lsa;


}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime : public Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime : public Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf path_metric; //type: uint32

        class LfaPath; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath> > lfa_path;


}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath : public Entity
{
    public:
        LfaPath();
        ~LfaPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lfa_type; //type: RcmdShowIpfrrLfaEnum
        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf path_metric; //type: uint32
        YLeaf remote_node_id; //type: string



}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::Path::LfaPath


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa : public Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_id; //type: string
        YLeaf sequence_number; //type: string
        YLeaf lsa_type; //type: RcmdLsaEnum
        YLeaf origin_router_id; //type: string
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TriggerLsa


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine : public Entity
{
    public:
        TimeLine();
        ~TimeLine();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_origin; //type: string
        YLeaf ri_bv4_enter; //type: string
        YLeaf ri_bv4_exit; //type: string
        YLeaf ri_bv4_redistribute; //type: string
        YLeaf ldp_enter; //type: string
        YLeaf ldp_exit; //type: string
        YLeaf lsd_enter; //type: string
        YLeaf lsd_exit; //type: string

        class LcIp; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp> > lc_ip;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls> > lc_mpls;


}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp : public Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum
        YLeaf fib_complete; //type: string



}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcIp


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls : public Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum
        YLeaf fib_complete; //type: string



}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::TimeLine::LcMpls


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed : public Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_id; //type: string
        YLeaf sequence_number; //type: string
        YLeaf lsa_type; //type: RcmdLsaEnum
        YLeaf origin_router_id; //type: string
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventSummaries::SummaryExternalEventSummary::LsaProcessed


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries : public Entity
{
    public:
        PrefixEventSummaries();
        ~PrefixEventSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixEventSummary; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary> > prefix_event_summary;


}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary : public Entity
{
    public:
        PrefixEventSummary();
        ~PrefixEventSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_id; //type: int32
        YLeaf prefix; //type: string
        YLeaf prefix_lenth; //type: uint32
        YLeaf spf_run_no; //type: uint32
        YLeaf ipfrr_event_id; //type: uint32
        YLeaf threshold_exceeded; //type: boolean
        YLeaf priority; //type: RcmdPriorityLevelEnum
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf route_type; //type: RcmdShowRouteEnum
        YLeaf route_path_change_type; //type: RcmdShowRoutePathChangeEnum
        YLeaf cost; //type: uint32
        YLeaf trigger_time; //type: string

        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime
        class Path; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path
        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa
        class TimeLine; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime> ip_convergence_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed> > lsa_processed;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime> mpls_convergence_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path> > path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine> > time_line;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa> > trigger_lsa;


}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime : public Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime : public Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf path_metric; //type: uint32

        class LfaPath; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath> > lfa_path;


}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath : public Entity
{
    public:
        LfaPath();
        ~LfaPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lfa_type; //type: RcmdShowIpfrrLfaEnum
        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf path_metric; //type: uint32
        YLeaf remote_node_id; //type: string



}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa : public Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_id; //type: string
        YLeaf sequence_number; //type: string
        YLeaf lsa_type; //type: RcmdLsaEnum
        YLeaf origin_router_id; //type: string
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine : public Entity
{
    public:
        TimeLine();
        ~TimeLine();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_origin; //type: string
        YLeaf ri_bv4_enter; //type: string
        YLeaf ri_bv4_exit; //type: string
        YLeaf ri_bv4_redistribute; //type: string
        YLeaf ldp_enter; //type: string
        YLeaf ldp_exit; //type: string
        YLeaf lsd_enter; //type: string
        YLeaf lsd_exit; //type: string

        class LcIp; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp> > lc_ip;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls> > lc_mpls;


}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp : public Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum
        YLeaf fib_complete; //type: string



}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls : public Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum
        YLeaf fib_complete; //type: string



}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls


class Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed : public Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_id; //type: string
        YLeaf sequence_number; //type: string
        YLeaf lsa_type; //type: RcmdLsaEnum
        YLeaf origin_router_id; //type: string
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Ospf::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines : public Entity
{
    public:
        SummaryExternalEventOfflines();
        ~SummaryExternalEventOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SummaryExternalEventOffline; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline> > summary_external_event_offline;


}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline : public Entity
{
    public:
        SummaryExternalEventOffline();
        ~SummaryExternalEventOffline();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_id; //type: int32
        YLeaf prefix; //type: string
        YLeaf prefix_lenth; //type: uint32
        YLeaf spf_run_no; //type: uint32
        YLeaf ipfrr_event_id; //type: uint32
        YLeaf threshold_exceeded; //type: boolean
        YLeaf priority; //type: RcmdPriorityLevelEnum
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf route_type; //type: RcmdShowRouteEnum
        YLeaf route_path_change_type; //type: RcmdShowRoutePathChangeEnum
        YLeaf cost; //type: uint32
        YLeaf trigger_time; //type: string

        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime
        class Path; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path
        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa
        class TimeLine; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime> ip_convergence_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed> > lsa_processed;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime> mpls_convergence_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path> > path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine> > time_line;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa> > trigger_lsa;


}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime : public Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime : public Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf path_metric; //type: uint32

        class LfaPath; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath> > lfa_path;


}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath : public Entity
{
    public:
        LfaPath();
        ~LfaPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lfa_type; //type: RcmdShowIpfrrLfaEnum
        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf path_metric; //type: uint32
        YLeaf remote_node_id; //type: string



}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::Path::LfaPath


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa : public Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_id; //type: string
        YLeaf sequence_number; //type: string
        YLeaf lsa_type; //type: RcmdLsaEnum
        YLeaf origin_router_id; //type: string
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine : public Entity
{
    public:
        TimeLine();
        ~TimeLine();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_origin; //type: string
        YLeaf ri_bv4_enter; //type: string
        YLeaf ri_bv4_exit; //type: string
        YLeaf ri_bv4_redistribute; //type: string
        YLeaf ldp_enter; //type: string
        YLeaf ldp_exit; //type: string
        YLeaf lsd_enter; //type: string
        YLeaf lsd_exit; //type: string

        class LcIp; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp> > lc_ip;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls> > lc_mpls;


}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp : public Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum
        YLeaf fib_complete; //type: string



}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls : public Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum
        YLeaf fib_complete; //type: string



}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed : public Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_id; //type: string
        YLeaf sequence_number; //type: string
        YLeaf lsa_type; //type: RcmdLsaEnum
        YLeaf origin_router_id; //type: string
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines : public Entity
{
    public:
        PrefixEventOfflines();
        ~PrefixEventOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixEventOffline; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline> > prefix_event_offline;


}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline : public Entity
{
    public:
        PrefixEventOffline();
        ~PrefixEventOffline();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_id; //type: int32
        YLeaf prefix; //type: string
        YLeaf prefix_lenth; //type: uint32
        YLeaf spf_run_no; //type: uint32
        YLeaf ipfrr_event_id; //type: uint32
        YLeaf threshold_exceeded; //type: boolean
        YLeaf priority; //type: RcmdPriorityLevelEnum
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf route_type; //type: RcmdShowRouteEnum
        YLeaf route_path_change_type; //type: RcmdShowRoutePathChangeEnum
        YLeaf cost; //type: uint32
        YLeaf trigger_time; //type: string

        class IpConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime
        class Path; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path
        class TriggerLsa; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa
        class TimeLine; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine
        class LsaProcessed; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime> ip_convergence_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed> > lsa_processed;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime> mpls_convergence_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path> > path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine> > time_line;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa> > trigger_lsa;


}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime : public Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime : public Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf path_metric; //type: uint32

        class LfaPath; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath> > lfa_path;


}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath : public Entity
{
    public:
        LfaPath();
        ~LfaPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lfa_type; //type: RcmdShowIpfrrLfaEnum
        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf path_metric; //type: uint32
        YLeaf remote_node_id; //type: string



}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa : public Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_id; //type: string
        YLeaf sequence_number; //type: string
        YLeaf lsa_type; //type: RcmdLsaEnum
        YLeaf origin_router_id; //type: string
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine : public Entity
{
    public:
        TimeLine();
        ~TimeLine();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_origin; //type: string
        YLeaf ri_bv4_enter; //type: string
        YLeaf ri_bv4_exit; //type: string
        YLeaf ri_bv4_redistribute; //type: string
        YLeaf ldp_enter; //type: string
        YLeaf ldp_exit; //type: string
        YLeaf lsd_enter; //type: string
        YLeaf lsd_exit; //type: string

        class LcIp; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp> > lc_ip;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls> > lc_mpls;


}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp : public Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum
        YLeaf fib_complete; //type: string



}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls : public Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum
        YLeaf fib_complete; //type: string



}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls


class Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed : public Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_id; //type: string
        YLeaf sequence_number; //type: string
        YLeaf lsa_type; //type: RcmdLsaEnum
        YLeaf origin_router_id; //type: string
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed


class Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics : public Entity
{
    public:
        SummaryExternalEventStatistics();
        ~SummaryExternalEventStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf inter_area_routes; //type: uint32
        YLeaf inter_area_added; //type: uint32
        YLeaf inter_area_modified; //type: uint32
        YLeaf inter_area_deleted; //type: uint32
        YLeaf inter_area_critical; //type: uint32
        YLeaf inter_area_high; //type: uint32
        YLeaf inter_area_medium; //type: uint32
        YLeaf inter_area_low; //type: uint32
        YLeaf external_routes; //type: uint32
        YLeaf external_added; //type: uint32
        YLeaf external_modified; //type: uint32
        YLeaf external_deleted; //type: uint32
        YLeaf external_critical; //type: uint32
        YLeaf external_high; //type: uint32
        YLeaf external_medium; //type: uint32
        YLeaf external_low; //type: uint32



}; // Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics


class Rcmd::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Normal; //type: Rcmd::Server::Normal
        class Detail; //type: Rcmd::Server::Detail

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail> detail;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal> normal;


}; // Rcmd::Server


class Rcmd::Server::Normal : public Entity
{
    public:
        Normal();
        ~Normal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf host_name; //type: string
        YLeaf status; //type: RcmdBagEnableDisableEnum
        YLeaf max_events; //type: uint32
        YLeaf event_buffer_size; //type: uint32
        YLeaf monitoring_interval; //type: uint32
        YLeaf next_interval; //type: uint32
        YLeaf max_interface_count; //type: uint32
        YLeaf interface_count; //type: uint32
        YLeaf node_rp_count; //type: uint32
        YLeaf node_lc_count; //type: uint32
        YLeaf diag_node_count; //type: uint32
        YLeaf disabled_node_count; //type: uint32
        YLeaf in_active_node_count; //type: uint32
        YLeaf last_process_start_time; //type: string
        YLeaf last_process_duration; //type: string
        YLeaf last_process_state; //type: RcmdShowPrcsStateEnum
        YLeaf process_count; //type: uint32
        YLeaf spf_process_count; //type: uint32
        YLeaf reports_archive_path; //type: string
        YLeaf reports_archive_node; //type: string
        YLeaf last_archival_status; //type: string
        YLeaf last_archival_error; //type: string
        YLeaf last_archival_error_time; //type: string
        YLeaf archive_count; //type: uint32
        YLeaf diagnostics_archive_path; //type: string
        YLeaf diagnostics_archive_node; //type: string

        class ProtocolConfig; //type: Rcmd::Server::Normal::ProtocolConfig
        class ServerDetail; //type: Rcmd::Server::Normal::ServerDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal::ProtocolConfig> > protocol_config;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal::ServerDetail> > server_detail;


}; // Rcmd::Server::Normal


class Rcmd::Server::Normal::ProtocolConfig : public Entity
{
    public:
        ProtocolConfig();
        ~ProtocolConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol_name; //type: string

        class Priority; //type: Rcmd::Server::Normal::ProtocolConfig::Priority

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal::ProtocolConfig::Priority> > priority;


}; // Rcmd::Server::Normal::ProtocolConfig


class Rcmd::Server::Normal::ProtocolConfig::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf priority_name; //type: RcmdPriorityLevelEnum
        YLeaf threshold; //type: uint32
        YLeaf disable; //type: RcmdBoolYesNoEnum



}; // Rcmd::Server::Normal::ProtocolConfig::Priority


class Rcmd::Server::Normal::ServerDetail : public Entity
{
    public:
        ServerDetail();
        ~ServerDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf overload_suspend; //type: uint32
        YLeaf memory_suspend; //type: uint32

        class TraceInformation; //type: Rcmd::Server::Normal::ServerDetail::TraceInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Normal::ServerDetail::TraceInformation> > trace_information;


}; // Rcmd::Server::Normal::ServerDetail


class Rcmd::Server::Normal::ServerDetail::TraceInformation : public Entity
{
    public:
        TraceInformation();
        ~TraceInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf trace_name; //type: string
        YLeaf total_stats; //type: uint32
        YLeaf last_run_stats; //type: uint32
        YLeaf error_stats; //type: uint32



}; // Rcmd::Server::Normal::ServerDetail::TraceInformation


class Rcmd::Server::Detail : public Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf host_name; //type: string
        YLeaf status; //type: RcmdBagEnableDisableEnum
        YLeaf max_events; //type: uint32
        YLeaf event_buffer_size; //type: uint32
        YLeaf monitoring_interval; //type: uint32
        YLeaf next_interval; //type: uint32
        YLeaf max_interface_count; //type: uint32
        YLeaf interface_count; //type: uint32
        YLeaf node_rp_count; //type: uint32
        YLeaf node_lc_count; //type: uint32
        YLeaf diag_node_count; //type: uint32
        YLeaf disabled_node_count; //type: uint32
        YLeaf in_active_node_count; //type: uint32
        YLeaf last_process_start_time; //type: string
        YLeaf last_process_duration; //type: string
        YLeaf last_process_state; //type: RcmdShowPrcsStateEnum
        YLeaf process_count; //type: uint32
        YLeaf spf_process_count; //type: uint32
        YLeaf reports_archive_path; //type: string
        YLeaf reports_archive_node; //type: string
        YLeaf last_archival_status; //type: string
        YLeaf last_archival_error; //type: string
        YLeaf last_archival_error_time; //type: string
        YLeaf archive_count; //type: uint32
        YLeaf diagnostics_archive_path; //type: string
        YLeaf diagnostics_archive_node; //type: string

        class ProtocolConfig; //type: Rcmd::Server::Detail::ProtocolConfig
        class ServerDetail; //type: Rcmd::Server::Detail::ServerDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail::ProtocolConfig> > protocol_config;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail::ServerDetail> > server_detail;


}; // Rcmd::Server::Detail


class Rcmd::Server::Detail::ProtocolConfig : public Entity
{
    public:
        ProtocolConfig();
        ~ProtocolConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol_name; //type: string

        class Priority; //type: Rcmd::Server::Detail::ProtocolConfig::Priority

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail::ProtocolConfig::Priority> > priority;


}; // Rcmd::Server::Detail::ProtocolConfig


class Rcmd::Server::Detail::ProtocolConfig::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf priority_name; //type: RcmdPriorityLevelEnum
        YLeaf threshold; //type: uint32
        YLeaf disable; //type: RcmdBoolYesNoEnum



}; // Rcmd::Server::Detail::ProtocolConfig::Priority


class Rcmd::Server::Detail::ServerDetail : public Entity
{
    public:
        ServerDetail();
        ~ServerDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf overload_suspend; //type: uint32
        YLeaf memory_suspend; //type: uint32

        class TraceInformation; //type: Rcmd::Server::Detail::ServerDetail::TraceInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Server::Detail::ServerDetail::TraceInformation> > trace_information;


}; // Rcmd::Server::Detail::ServerDetail


class Rcmd::Server::Detail::ServerDetail::TraceInformation : public Entity
{
    public:
        TraceInformation();
        ~TraceInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf trace_name; //type: string
        YLeaf total_stats; //type: uint32
        YLeaf last_run_stats; //type: uint32
        YLeaf error_stats; //type: uint32



}; // Rcmd::Server::Detail::ServerDetail::TraceInformation


class Rcmd::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NodeInformation; //type: Rcmd::Node::NodeInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Node::NodeInformation> > node_information;


}; // Rcmd::Node


class Rcmd::Node::NodeInformation : public Entity
{
    public:
        NodeInformation();
        ~NodeInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_id; //type: uint32
        YLeaf node_name; //type: string
        YLeaf rack_id; //type: uint32
        YLeaf last_update_time; //type: string
        YLeaf fwd_referenced; //type: RcmdBoolYesNoEnum
        YLeaf node_type; //type: RcmdShowNodeEnum
        YLeaf software_state; //type: uint32
        YLeaf card_state; //type: uint32
        YLeaf node_state; //type: RcmdBoolYesNoEnum
        YLeaf status; //type: RcmdBagEnblDsblEnum
        YLeaf diag_mode; //type: uint32
        YLeaf redundancy_state; //type: uint32



}; // Rcmd::Node::NodeInformation


class Rcmd::Isis : public Entity
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



        class Instances; //type: Rcmd::Isis::Instances

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances> instances;


}; // Rcmd::Isis


class Rcmd::Isis::Instances : public Entity
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



        class Instance; //type: Rcmd::Isis::Instances::Instance

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance> > instance;


}; // Rcmd::Isis::Instances


class Rcmd::Isis::Instances::Instance : public Entity
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

        class IpfrrEventSummaries; //type: Rcmd::Isis::Instances::Instance::IpfrrEventSummaries
        class PrefixEventStatistics; //type: Rcmd::Isis::Instances::Instance::PrefixEventStatistics
        class SpfRunSummaries; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries
        class IpfrrEventOfflines; //type: Rcmd::Isis::Instances::Instance::IpfrrEventOfflines
        class SpfRunOfflines; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines
        class PrefixEventSummaries; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries
        class PrefixEventOfflines; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines
        class LspRegenerateds; //type: Rcmd::Isis::Instances::Instance::LspRegenerateds

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventOfflines> ipfrr_event_offlines;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventSummaries> ipfrr_event_summaries;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::LspRegenerateds> lsp_regenerateds;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines> prefix_event_offlines;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventStatistics> prefix_event_statistics;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries> prefix_event_summaries;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines> spf_run_offlines;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries> spf_run_summaries;


}; // Rcmd::Isis::Instances::Instance


class Rcmd::Isis::Instances::Instance::IpfrrEventSummaries : public Entity
{
    public:
        IpfrrEventSummaries();
        ~IpfrrEventSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IpfrrEventSummary; //type: Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary> > ipfrr_event_summary;


}; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries


class Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary : public Entity
{
    public:
        IpfrrEventSummary();
        ~IpfrrEventSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_id; //type: int32
        YLeaf event_id_xr; //type: uint32
        YLeaf trigger_time; //type: string
        YLeaf trigger_spf_run; //type: uint32
        YLeaf wait_time; //type: uint32
        YLeaf start_time_offset; //type: string
        YLeaf duration; //type: string
        YLeaf completed_spf_run; //type: uint32
        YLeaf total_routes; //type: uint32
        YLeaf fully_protected_routes; //type: uint32
        YLeaf partially_protected_routes; //type: uint32
        YLeaf coverage; //type: string

        class IpfrrStatistic; //type: Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic
        class RemoteNode; //type: Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic> > ipfrr_statistic;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode> > remote_node;


}; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary


class Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic : public Entity
{
    public:
        IpfrrStatistic();
        ~IpfrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf priority; //type: RcmdPriorityLevelEnum
        YLeaf total_routes; //type: uint32
        YLeaf fully_protected_routes; //type: uint32
        YLeaf partially_protected_routes; //type: uint32
        YLeaf coverage; //type: string
        YLeaf local_lfa_coverage; //type: string
        YLeaf remote_lfa_coverage; //type: string
        YLeaf below_threshold; //type: boolean



}; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic


class Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode : public Entity
{
    public:
        RemoteNode();
        ~RemoteNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf remote_node_id; //type: string
        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string
        YLeaf path_count; //type: uint32
        YLeaf in_use_time; //type: string

        class PrimaryPath; //type: Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath> > primary_path;


}; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode


class Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath : public Entity
{
    public:
        PrimaryPath();
        ~PrimaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string



}; // Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath


class Rcmd::Isis::Instances::Instance::PrefixEventStatistics : public Entity
{
    public:
        PrefixEventStatistics();
        ~PrefixEventStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixEventStatistic; //type: Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic> > prefix_event_statistic;


}; // Rcmd::Isis::Instances::Instance::PrefixEventStatistics


class Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic : public Entity
{
    public:
        PrefixEventStatistic();
        ~PrefixEventStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_info; //type: string
        YLeaf prefix; //type: string
        YLeaf prefix_lenth; //type: uint32
        YLeaf last_event_time; //type: string
        YLeaf last_priority; //type: RcmdPriorityLevelEnum
        YLeaf last_route_type; //type: RcmdShowRouteEnum
        YLeaf last_change_type; //type: RcmdChangeEnum
        YLeaf last_cost; //type: uint32
        YLeaf critical_priority; //type: uint32
        YLeaf high_priority; //type: uint32
        YLeaf medium_priority; //type: uint32
        YLeaf low_priority; //type: uint32
        YLeaf add_count; //type: uint32
        YLeaf modify_count; //type: uint32
        YLeaf delete_count; //type: uint32
        YLeaf threshold_exceed_count; //type: uint32



}; // Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic


class Rcmd::Isis::Instances::Instance::SpfRunSummaries : public Entity
{
    public:
        SpfRunSummaries();
        ~SpfRunSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpfRunSummary; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary> > spf_run_summary;


}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary : public Entity
{
    public:
        SpfRunSummary();
        ~SpfRunSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf spf_run_number; //type: int32
        YLeaf start_time; //type: string
        YLeaf wait_time; //type: uint32
        YLeaf reason; //type: string

        class SpfSummary; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary
        class NodeStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics
        class TriggerLsp; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp
        class Priority; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority
        class LspProcessed; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed
        class LspRegenerated; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed> > lsp_processed;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated> > lsp_regenerated;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics> node_statistics;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority> > priority;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary> spf_summary;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp> > trigger_lsp;


}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary : public Entity
{
    public:
        SpfSummary();
        ~SpfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf topology; //type: uint32
        YLeaf isis_level; //type: RcmdIsisLvlEnum
        YLeaf type; //type: RcmdIsisSpfEnum
        YLeaf threshold_exceeded; //type: boolean
        YLeaf state; //type: RcmdSpfStateEnum
        YLeaf is_data_complete; //type: boolean
        YLeaf trigger_time; //type: string
        YLeaf duration; //type: string
        YLeaf total_lsp_changes; //type: uint16

        class PrioritySummary; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary> > priority_summary;


}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary : public Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: RcmdPriorityLevelEnum
        YLeaf threshold_exceeded; //type: boolean

        class RouteStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic> > frr_statistic;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics> route_statistics;


}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics : public Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adds; //type: uint32
        YLeaf deletes; //type: uint32
        YLeaf modifies; //type: uint32
        YLeaf reachables; //type: uint32
        YLeaf unreachables; //type: uint32
        YLeaf touches; //type: uint32



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime : public Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime : public Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic : public Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_routes; //type: uint32
        YLeaf fully_protected_routes; //type: uint32
        YLeaf partially_protected_routes; //type: uint32
        YLeaf coverage; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics : public Entity
{
    public:
        NodeStatistics();
        ~NodeStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adds; //type: uint32
        YLeaf deletes; //type: uint32
        YLeaf modifies; //type: uint32
        YLeaf reachables; //type: uint32
        YLeaf unreachables; //type: uint32
        YLeaf touches; //type: uint32



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp : public Entity
{
    public:
        TriggerLsp();
        ~TriggerLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_id; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrioritySummary; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline> > convergence_timeline;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded> > leaf_networks_added;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary> priority_summary;


}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary : public Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: RcmdPriorityLevelEnum
        YLeaf threshold_exceeded; //type: boolean

        class RouteStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic> > frr_statistic;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics> route_statistics;


}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics : public Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adds; //type: uint32
        YLeaf deletes; //type: uint32
        YLeaf modifies; //type: uint32
        YLeaf reachables; //type: uint32
        YLeaf unreachables; //type: uint32
        YLeaf touches; //type: uint32



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime : public Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime : public Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic : public Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_routes; //type: uint32
        YLeaf fully_protected_routes; //type: uint32
        YLeaf partially_protected_routes; //type: uint32
        YLeaf coverage; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline : public Entity
{
    public:
        ConvergenceTimeline();
        ~ConvergenceTimeline();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RouteOrigin; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin
        class RiBv4Enter; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter
        class RiBv4Exit; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit
        class RiBv4Redistribute; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute
        class LdpEnter; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter
        class LdpExit; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit
        class LsdEnter; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter
        class LsdExit; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit
        class LcIp; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp
        class LcMpls; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp> > lc_ip;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin> route_origin;


}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin : public Entity
{
    public:
        RouteOrigin();
        ~RouteOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter : public Entity
{
    public:
        RiBv4Enter();
        ~RiBv4Enter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit : public Entity
{
    public:
        RiBv4Exit();
        ~RiBv4Exit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute : public Entity
{
    public:
        RiBv4Redistribute();
        ~RiBv4Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter : public Entity
{
    public:
        LdpEnter();
        ~LdpEnter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit : public Entity
{
    public:
        LdpExit();
        ~LdpExit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter : public Entity
{
    public:
        LsdEnter();
        ~LsdEnter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit : public Entity
{
    public:
        LsdExit();
        ~LsdExit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp : public Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum

        class FibComplete; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;


}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete : public Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls : public Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum

        class FibComplete; //type: Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;


}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete : public Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded : public Entity
{
    public:
        LeafNetworksAdded();
        ~LeafNetworksAdded();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf net_mask; //type: uint8



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted : public Entity
{
    public:
        LeafNetworksDeleted();
        ~LeafNetworksDeleted();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf net_mask; //type: uint8



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed : public Entity
{
    public:
        LspProcessed();
        ~LspProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_id; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed


class Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated : public Entity
{
    public:
        LspRegenerated();
        ~LspRegenerated();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf serial_number_xr; //type: uint32
        YLeaf lsp_id; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf reception_time; //type: string
        YLeaf isis_level; //type: RcmdIsisLvlEnum
        YLeaf spf_run_number; //type: uint32
        YLeaf reason; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated


class Rcmd::Isis::Instances::Instance::IpfrrEventOfflines : public Entity
{
    public:
        IpfrrEventOfflines();
        ~IpfrrEventOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IpfrrEventOffline; //type: Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline> > ipfrr_event_offline;


}; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines


class Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline : public Entity
{
    public:
        IpfrrEventOffline();
        ~IpfrrEventOffline();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_id; //type: int32
        YLeaf event_id_xr; //type: uint32
        YLeaf trigger_time; //type: string
        YLeaf trigger_spf_run; //type: uint32
        YLeaf wait_time; //type: uint32
        YLeaf start_time_offset; //type: string
        YLeaf duration; //type: string
        YLeaf completed_spf_run; //type: uint32
        YLeaf total_routes; //type: uint32
        YLeaf fully_protected_routes; //type: uint32
        YLeaf partially_protected_routes; //type: uint32
        YLeaf coverage; //type: string

        class IpfrrStatistic; //type: Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic
        class RemoteNode; //type: Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic> > ipfrr_statistic;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode> > remote_node;


}; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline


class Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic : public Entity
{
    public:
        IpfrrStatistic();
        ~IpfrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf priority; //type: RcmdPriorityLevelEnum
        YLeaf total_routes; //type: uint32
        YLeaf fully_protected_routes; //type: uint32
        YLeaf partially_protected_routes; //type: uint32
        YLeaf coverage; //type: string
        YLeaf local_lfa_coverage; //type: string
        YLeaf remote_lfa_coverage; //type: string
        YLeaf below_threshold; //type: boolean



}; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic


class Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode : public Entity
{
    public:
        RemoteNode();
        ~RemoteNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf remote_node_id; //type: string
        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string
        YLeaf path_count; //type: uint32
        YLeaf in_use_time; //type: string

        class PrimaryPath; //type: Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath> > primary_path;


}; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode


class Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath : public Entity
{
    public:
        PrimaryPath();
        ~PrimaryPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string



}; // Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath


class Rcmd::Isis::Instances::Instance::SpfRunOfflines : public Entity
{
    public:
        SpfRunOfflines();
        ~SpfRunOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SpfRunOffline; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline> > spf_run_offline;


}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline : public Entity
{
    public:
        SpfRunOffline();
        ~SpfRunOffline();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf spf_run_number; //type: int32
        YLeaf start_time; //type: string
        YLeaf wait_time; //type: uint32
        YLeaf reason; //type: string

        class SpfSummary; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary
        class NodeStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics
        class TriggerLsp; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp
        class Priority; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority
        class LspProcessed; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed
        class LspRegenerated; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed> > lsp_processed;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated> > lsp_regenerated;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics> node_statistics;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority> > priority;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary> spf_summary;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp> > trigger_lsp;


}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary : public Entity
{
    public:
        SpfSummary();
        ~SpfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf topology; //type: uint32
        YLeaf isis_level; //type: RcmdIsisLvlEnum
        YLeaf type; //type: RcmdIsisSpfEnum
        YLeaf threshold_exceeded; //type: boolean
        YLeaf state; //type: RcmdSpfStateEnum
        YLeaf is_data_complete; //type: boolean
        YLeaf trigger_time; //type: string
        YLeaf duration; //type: string
        YLeaf total_lsp_changes; //type: uint16

        class PrioritySummary; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary> > priority_summary;


}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary : public Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: RcmdPriorityLevelEnum
        YLeaf threshold_exceeded; //type: boolean

        class RouteStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic> > frr_statistic;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics> route_statistics;


}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics : public Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adds; //type: uint32
        YLeaf deletes; //type: uint32
        YLeaf modifies; //type: uint32
        YLeaf reachables; //type: uint32
        YLeaf unreachables; //type: uint32
        YLeaf touches; //type: uint32



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime : public Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime : public Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic : public Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_routes; //type: uint32
        YLeaf fully_protected_routes; //type: uint32
        YLeaf partially_protected_routes; //type: uint32
        YLeaf coverage; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics : public Entity
{
    public:
        NodeStatistics();
        ~NodeStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adds; //type: uint32
        YLeaf deletes; //type: uint32
        YLeaf modifies; //type: uint32
        YLeaf reachables; //type: uint32
        YLeaf unreachables; //type: uint32
        YLeaf touches; //type: uint32



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp : public Entity
{
    public:
        TriggerLsp();
        ~TriggerLsp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_id; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrioritySummary; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary
        class ConvergenceTimeline; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline
        class LeafNetworksAdded; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded
        class LeafNetworksDeleted; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline> > convergence_timeline;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded> > leaf_networks_added;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted> > leaf_networks_deleted;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary> priority_summary;


}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary : public Entity
{
    public:
        PrioritySummary();
        ~PrioritySummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf level; //type: RcmdPriorityLevelEnum
        YLeaf threshold_exceeded; //type: boolean

        class RouteStatistics; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics
        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime
        class FrrStatistic; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic> > frr_statistic;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime> ip_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime> mpls_convergence_time;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics> route_statistics;


}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics : public Entity
{
    public:
        RouteStatistics();
        ~RouteStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf adds; //type: uint32
        YLeaf deletes; //type: uint32
        YLeaf modifies; //type: uint32
        YLeaf reachables; //type: uint32
        YLeaf unreachables; //type: uint32
        YLeaf touches; //type: uint32



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime : public Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime : public Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic : public Entity
{
    public:
        FrrStatistic();
        ~FrrStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_routes; //type: uint32
        YLeaf fully_protected_routes; //type: uint32
        YLeaf partially_protected_routes; //type: uint32
        YLeaf coverage; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline : public Entity
{
    public:
        ConvergenceTimeline();
        ~ConvergenceTimeline();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RouteOrigin; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin
        class RiBv4Enter; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter
        class RiBv4Exit; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit
        class RiBv4Redistribute; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute
        class LdpEnter; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter
        class LdpExit; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit
        class LsdEnter; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter
        class LsdExit; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit
        class LcIp; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp
        class LcMpls; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp> > lc_ip;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls> > lc_mpls;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter> ldp_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit> ldp_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter> lsd_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit> lsd_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter> ri_bv4_enter;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit> ri_bv4_exit;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute> ri_bv4_redistribute;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin> route_origin;


}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin : public Entity
{
    public:
        RouteOrigin();
        ~RouteOrigin();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter : public Entity
{
    public:
        RiBv4Enter();
        ~RiBv4Enter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit : public Entity
{
    public:
        RiBv4Exit();
        ~RiBv4Exit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute : public Entity
{
    public:
        RiBv4Redistribute();
        ~RiBv4Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter : public Entity
{
    public:
        LdpEnter();
        ~LdpEnter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit : public Entity
{
    public:
        LdpExit();
        ~LdpExit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter : public Entity
{
    public:
        LsdEnter();
        ~LsdEnter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit : public Entity
{
    public:
        LsdExit();
        ~LsdExit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp : public Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum

        class FibComplete; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete> fib_complete;


}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete : public Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls : public Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum

        class FibComplete; //type: Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete> fib_complete;


}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete : public Entity
{
    public:
        FibComplete();
        ~FibComplete();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_time; //type: string
        YLeaf end_time; //type: string
        YLeaf duration; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded : public Entity
{
    public:
        LeafNetworksAdded();
        ~LeafNetworksAdded();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf net_mask; //type: uint8



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted : public Entity
{
    public:
        LeafNetworksDeleted();
        ~LeafNetworksDeleted();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf net_mask; //type: uint8



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed : public Entity
{
    public:
        LspProcessed();
        ~LspProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsp_id; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed


class Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated : public Entity
{
    public:
        LspRegenerated();
        ~LspRegenerated();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf serial_number_xr; //type: uint32
        YLeaf lsp_id; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf reception_time; //type: string
        YLeaf isis_level; //type: RcmdIsisLvlEnum
        YLeaf spf_run_number; //type: uint32
        YLeaf reason; //type: string



}; // Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries : public Entity
{
    public:
        PrefixEventSummaries();
        ~PrefixEventSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixEventSummary; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary> > prefix_event_summary;


}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary : public Entity
{
    public:
        PrefixEventSummary();
        ~PrefixEventSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_id; //type: int32
        YLeaf prefix; //type: string
        YLeaf prefix_lenth; //type: uint32
        YLeaf spf_run_no; //type: uint32
        YLeaf ipfrr_event_id; //type: uint32
        YLeaf threshold_exceeded; //type: boolean
        YLeaf priority; //type: RcmdPriorityLevelEnum
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf route_type; //type: RcmdShowRouteEnum
        YLeaf route_path_change_type; //type: RcmdShowRoutePathChangeEnum
        YLeaf cost; //type: uint32
        YLeaf trigger_time; //type: string

        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime
        class Path; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path
        class TriggerLsa; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa
        class TimeLine; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine
        class LsaProcessed; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime> ip_convergence_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed> > lsa_processed;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime> mpls_convergence_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path> > path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine> > time_line;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa> > trigger_lsa;


}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime : public Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime : public Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf path_metric; //type: uint32

        class LfaPath; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath> > lfa_path;


}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath : public Entity
{
    public:
        LfaPath();
        ~LfaPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lfa_type; //type: RcmdShowIpfrrLfaEnum
        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf path_metric; //type: uint32
        YLeaf remote_node_id; //type: string



}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa : public Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_id; //type: string
        YLeaf sequence_number; //type: string
        YLeaf lsa_type; //type: RcmdLsaEnum
        YLeaf origin_router_id; //type: string
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine : public Entity
{
    public:
        TimeLine();
        ~TimeLine();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_origin; //type: string
        YLeaf ri_bv4_enter; //type: string
        YLeaf ri_bv4_exit; //type: string
        YLeaf ri_bv4_redistribute; //type: string
        YLeaf ldp_enter; //type: string
        YLeaf ldp_exit; //type: string
        YLeaf lsd_enter; //type: string
        YLeaf lsd_exit; //type: string

        class LcIp; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp> > lc_ip;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls> > lc_mpls;


}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp : public Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum
        YLeaf fib_complete; //type: string



}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls : public Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum
        YLeaf fib_complete; //type: string



}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls


class Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed : public Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_id; //type: string
        YLeaf sequence_number; //type: string
        YLeaf lsa_type; //type: RcmdLsaEnum
        YLeaf origin_router_id; //type: string
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines : public Entity
{
    public:
        PrefixEventOfflines();
        ~PrefixEventOfflines();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixEventOffline; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline> > prefix_event_offline;


}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline : public Entity
{
    public:
        PrefixEventOffline();
        ~PrefixEventOffline();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_id; //type: int32
        YLeaf prefix; //type: string
        YLeaf prefix_lenth; //type: uint32
        YLeaf spf_run_no; //type: uint32
        YLeaf ipfrr_event_id; //type: uint32
        YLeaf threshold_exceeded; //type: boolean
        YLeaf priority; //type: RcmdPriorityLevelEnum
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf route_type; //type: RcmdShowRouteEnum
        YLeaf route_path_change_type; //type: RcmdShowRoutePathChangeEnum
        YLeaf cost; //type: uint32
        YLeaf trigger_time; //type: string

        class IpConvergenceTime; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime
        class MplsConvergenceTime; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime
        class Path; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path
        class TriggerLsa; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa
        class TimeLine; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine
        class LsaProcessed; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime> ip_convergence_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed> > lsa_processed;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime> mpls_convergence_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path> > path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine> > time_line;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa> > trigger_lsa;


}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime : public Entity
{
    public:
        IpConvergenceTime();
        ~IpConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime : public Entity
{
    public:
        MplsConvergenceTime();
        ~MplsConvergenceTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_time; //type: string
        YLeaf maximum_time; //type: string
        YLeaf slowest_node_name; //type: string
        YLeaf fastest_node_name; //type: string



}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf path_metric; //type: uint32

        class LfaPath; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath> > lfa_path;


}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath : public Entity
{
    public:
        LfaPath();
        ~LfaPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lfa_type; //type: RcmdShowIpfrrLfaEnum
        YLeaf interface_name; //type: string
        YLeaf neighbour_address; //type: string
        YLeaf change_type; //type: RcmdChangeEnum
        YLeaf path_metric; //type: uint32
        YLeaf remote_node_id; //type: string



}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa : public Entity
{
    public:
        TriggerLsa();
        ~TriggerLsa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_id; //type: string
        YLeaf sequence_number; //type: string
        YLeaf lsa_type; //type: RcmdLsaEnum
        YLeaf origin_router_id; //type: string
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine : public Entity
{
    public:
        TimeLine();
        ~TimeLine();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_origin; //type: string
        YLeaf ri_bv4_enter; //type: string
        YLeaf ri_bv4_exit; //type: string
        YLeaf ri_bv4_redistribute; //type: string
        YLeaf ldp_enter; //type: string
        YLeaf ldp_exit; //type: string
        YLeaf lsd_enter; //type: string
        YLeaf lsd_exit; //type: string

        class LcIp; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp
        class LcMpls; //type: Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp> > lc_ip;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls> > lc_mpls;


}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp : public Entity
{
    public:
        LcIp();
        ~LcIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum
        YLeaf fib_complete; //type: string



}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls : public Entity
{
    public:
        LcMpls();
        ~LcMpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string
        YLeaf speed; //type: RcmdLinecardSpeedEnum
        YLeaf fib_complete; //type: string



}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls


class Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed : public Entity
{
    public:
        LsaProcessed();
        ~LsaProcessed();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsa_id; //type: string
        YLeaf sequence_number; //type: string
        YLeaf lsa_type; //type: RcmdLsaEnum
        YLeaf origin_router_id; //type: string
        YLeaf change_type; //type: RcmdLsChangeEnum
        YLeaf reception_time; //type: string



}; // Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed


class Rcmd::Isis::Instances::Instance::LspRegenerateds : public Entity
{
    public:
        LspRegenerateds();
        ~LspRegenerateds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspRegenerated; //type: Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated> > lsp_regenerated;


}; // Rcmd::Isis::Instances::Instance::LspRegenerateds


class Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated : public Entity
{
    public:
        LspRegenerated();
        ~LspRegenerated();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf serial_number; //type: int32
        YLeaf serial_number_xr; //type: uint32
        YLeaf lsp_id; //type: string
        YLeaf sequence_number; //type: uint32
        YLeaf reception_time; //type: string
        YLeaf isis_level; //type: RcmdIsisLvlEnum
        YLeaf spf_run_number; //type: uint32
        YLeaf reason; //type: string



}; // Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated


class Rcmd::Memory : public Entity
{
    public:
        Memory();
        ~Memory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MemoryInfo; //type: Rcmd::Memory::MemoryInfo
        class EdmMemoryInfo; //type: Rcmd::Memory::EdmMemoryInfo
        class StringMemoryInfo; //type: Rcmd::Memory::StringMemoryInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Memory::EdmMemoryInfo> > edm_memory_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Memory::MemoryInfo> > memory_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Memory::StringMemoryInfo> > string_memory_info;


}; // Rcmd::Memory


class Rcmd::Memory::MemoryInfo : public Entity
{
    public:
        MemoryInfo();
        ~MemoryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf structure_name; //type: string
        YLeaf size; //type: uint32
        YLeaf current_count; //type: uint32
        YLeaf alloc_fails; //type: uint32
        YLeaf alloc_count; //type: uint32
        YLeaf freed_count; //type: uint32
        YLeaf memory_type; //type: RcmdShowMemEnum



}; // Rcmd::Memory::MemoryInfo


class Rcmd::Memory::EdmMemoryInfo : public Entity
{
    public:
        EdmMemoryInfo();
        ~EdmMemoryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf size; //type: uint32
        YLeaf total; //type: uint32
        YLeaf success; //type: uint32
        YLeaf failure; //type: uint32



}; // Rcmd::Memory::EdmMemoryInfo


class Rcmd::Memory::StringMemoryInfo : public Entity
{
    public:
        StringMemoryInfo();
        ~StringMemoryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf size; //type: uint32
        YLeaf total; //type: uint32
        YLeaf success; //type: uint32
        YLeaf failure; //type: uint32



}; // Rcmd::Memory::StringMemoryInfo


class Rcmd::Ldp : public Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sessions; //type: Rcmd::Ldp::Sessions
        class RemoteLfaS; //type: Rcmd::Ldp::RemoteLfaS
        class RemoteLfaSummaries; //type: Rcmd::Ldp::RemoteLfaSummaries

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaS> remote_lfa_s;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaSummaries> remote_lfa_summaries;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::Sessions> sessions;


}; // Rcmd::Ldp


class Rcmd::Ldp::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Session; //type: Rcmd::Ldp::Sessions::Session

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::Sessions::Session> > session;


}; // Rcmd::Ldp::Sessions


class Rcmd::Ldp::Sessions::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_id; //type: int32
        YLeaf event_id_xr; //type: uint32
        YLeaf event_type; //type: RcmdLdpEventEnum
        YLeaf event_time; //type: string
        YLeaf lsr_id; //type: string
        YLeaf interface_name; //type: string
        YLeaf address; //type: string
        YLeaf state; //type: RcmdShowLdpNeighbourStatusEnum



}; // Rcmd::Ldp::Sessions::Session


class Rcmd::Ldp::RemoteLfaS : public Entity
{
    public:
        RemoteLfaS();
        ~RemoteLfaS();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RemoteLfa; //type: Rcmd::Ldp::RemoteLfaS::RemoteLfa

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaS::RemoteLfa> > remote_lfa;


}; // Rcmd::Ldp::RemoteLfaS


class Rcmd::Ldp::RemoteLfaS::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_id; //type: int32
        YLeaf event_id_xr; //type: uint32
        YLeaf end_of_calculation_time; //type: string
        YLeaf igp_protocol; //type: RcmdProtocolIdEnum
        YLeaf process_name; //type: string
        YLeaf ipfrr_event_id; //type: uint32
        YLeaf below_threshold; //type: boolean

        class SessionStatistic; //type: Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic
        class RemoteNode; //type: Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode
        class Logs; //type: Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs> > logs;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode> > remote_node;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic> > session_statistic;


}; // Rcmd::Ldp::RemoteLfaS::RemoteLfa


class Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic : public Entity
{
    public:
        SessionStatistic();
        ~SessionStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_state; //type: RcmdShowLdpSessionStateEnum
        YLeaf session_count; //type: uint32
        YLeaf route_count; //type: uint32
        YLeaf path_count; //type: uint32
        YLeaf remote_label_count; //type: uint32
        YLeaf protected_route_count; //type: uint32
        YLeaf protected_path_count; //type: uint32



}; // Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic


class Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode : public Entity
{
    public:
        RemoteNode();
        ~RemoteNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf remote_node_id; //type: string
        YLeaf lsr_id; //type: string
        YLeaf transport_address; //type: string
        YLeaf in_use_time; //type: string
        YLeaf session_state; //type: RcmdShowLdpSessionStateEnum
        YLeaf route_count; //type: uint32
        YLeaf path_count; //type: uint32
        YLeaf remote_label_count; //type: uint32
        YLeaf protected_route_count; //type: uint32
        YLeaf protected_path_count; //type: uint32



}; // Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode


class Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs : public Entity
{
    public:
        Logs();
        ~Logs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf log_time; //type: string
        YLeaf label_coverage_state; //type: RcmdShowLdpConvStateEnum
        YLeaf route_count; //type: uint32
        YLeaf remote_label_count; //type: uint32



}; // Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs


class Rcmd::Ldp::RemoteLfaSummaries : public Entity
{
    public:
        RemoteLfaSummaries();
        ~RemoteLfaSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RemoteLfaSummary; //type: Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary> > remote_lfa_summary;


}; // Rcmd::Ldp::RemoteLfaSummaries


class Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary : public Entity
{
    public:
        RemoteLfaSummary();
        ~RemoteLfaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_id; //type: int32
        YLeaf event_id_xr; //type: uint32
        YLeaf end_of_calculation_time; //type: string
        YLeaf igp_protocol; //type: RcmdProtocolIdEnum
        YLeaf process_name; //type: string
        YLeaf ipfrr_event_id; //type: uint32
        YLeaf below_threshold; //type: boolean

        class SessionStatistic; //type: Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic
        class RemoteNode; //type: Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode
        class Logs; //type: Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs> > logs;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode> > remote_node;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic> > session_statistic;


}; // Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary


class Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic : public Entity
{
    public:
        SessionStatistic();
        ~SessionStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_state; //type: RcmdShowLdpSessionStateEnum
        YLeaf session_count; //type: uint32
        YLeaf route_count; //type: uint32
        YLeaf path_count; //type: uint32
        YLeaf remote_label_count; //type: uint32
        YLeaf protected_route_count; //type: uint32
        YLeaf protected_path_count; //type: uint32



}; // Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic


class Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode : public Entity
{
    public:
        RemoteNode();
        ~RemoteNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf remote_node_id; //type: string
        YLeaf lsr_id; //type: string
        YLeaf transport_address; //type: string
        YLeaf in_use_time; //type: string
        YLeaf session_state; //type: RcmdShowLdpSessionStateEnum
        YLeaf route_count; //type: uint32
        YLeaf path_count; //type: uint32
        YLeaf remote_label_count; //type: uint32
        YLeaf protected_route_count; //type: uint32
        YLeaf protected_path_count; //type: uint32



}; // Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode


class Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs : public Entity
{
    public:
        Logs();
        ~Logs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf log_time; //type: string
        YLeaf label_coverage_state; //type: RcmdShowLdpConvStateEnum
        YLeaf route_count; //type: uint32
        YLeaf remote_label_count; //type: uint32



}; // Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs


class Rcmd::Intf : public Entity
{
    public:
        Intf();
        ~Intf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Events; //type: Rcmd::Intf::Events

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Intf::Events> events;


}; // Rcmd::Intf


class Rcmd::Intf::Events : public Entity
{
    public:
        Events();
        ~Events();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Event; //type: Rcmd::Intf::Events::Event

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Intf::Events::Event> > event;


}; // Rcmd::Intf::Events


class Rcmd::Intf::Events::Event : public Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_no; //type: int32
        YLeaf sequence_no; //type: uint32
        YLeaf interface_name; //type: string
        YLeaf component; //type: RcmdShowCompIdEnum
        YLeaf event_type; //type: RcmdShowIntfEventEnum
        YLeaf event_time; //type: string
        YLeaf primary_address; //type: string



}; // Rcmd::Intf::Events::Event


class Rcmd::Process : public Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Isis; //type: Rcmd::Process::Isis
        class Ospf; //type: Rcmd::Process::Ospf
        class Ldp; //type: Rcmd::Process::Ldp

        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Isis> isis;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ldp> ldp;
        std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ospf> ospf;


}; // Rcmd::Process


class Rcmd::Process::Isis : public Entity
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



        class Process_; //type: Rcmd::Process::Isis::Process_

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Isis::Process_> > process;


}; // Rcmd::Process::Isis


class Rcmd::Process::Isis::Process_ : public Entity
{
    public:
        Process_();
        ~Process_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol_id; //type: RcmdProtocolIdEnum
        YLeaf process_name; //type: string

        class InstanceName; //type: Rcmd::Process::Isis::Process_::InstanceName

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Isis::Process_::InstanceName> > instance_name;


}; // Rcmd::Process::Isis::Process_


class Rcmd::Process::Isis::Process_::InstanceName : public Entity
{
    public:
        InstanceName();
        ~InstanceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf last_update_time; //type: string
        YLeaf total_spf_nos; //type: uint32
        YLeaf route_change_spf_nos; //type: uint32
        YLeaf no_route_change_spf_nos; //type: uint32
        YLeaf not_interested_spf_nos; //type: uint32
        YLeaf lsp_regeneration_count; //type: uint32
        YLeaf lsp_regeneration_serial; //type: uint32
        YLeaf arch_spf_event; //type: uint32
        YLeaf arch_lsp_regeneration; //type: uint32

        class Instance; //type: Rcmd::Process::Isis::Process_::InstanceName::Instance

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Isis::Process_::InstanceName::Instance> > instance;


}; // Rcmd::Process::Isis::Process_::InstanceName


class Rcmd::Process::Isis::Process_::InstanceName::Instance : public Entity
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


        YLeaf instance_id; //type: uint32
        YLeaf instance_state; //type: RcmdShowInstStateEnum
        YLeaf instance_deleted; //type: RcmdBoolYesNoEnum
        YLeaf fwd_referenced; //type: RcmdBoolYesNoEnum
        YLeaf last_update_time; //type: string
        YLeaf node_id; //type: uint32
        YLeaf spf_offset; //type: uint32
        YLeaf total_spf_nos; //type: uint32
        YLeaf arch_spf_run; //type: uint32
        YLeaf route_change_spf_nos; //type: uint32
        YLeaf no_route_change_spf_nos; //type: uint32
        YLeaf not_interested_spf_nos; //type: uint32
        YLeaf total_spt_nos; //type: uint32



}; // Rcmd::Process::Isis::Process_::InstanceName::Instance


class Rcmd::Process::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Process_; //type: Rcmd::Process::Ospf::Process_

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ospf::Process_> > process;


}; // Rcmd::Process::Ospf


class Rcmd::Process::Ospf::Process_ : public Entity
{
    public:
        Process_();
        ~Process_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol_id; //type: RcmdProtocolIdEnum
        YLeaf process_name; //type: string

        class InstanceName; //type: Rcmd::Process::Ospf::Process_::InstanceName

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ospf::Process_::InstanceName> > instance_name;


}; // Rcmd::Process::Ospf::Process_


class Rcmd::Process::Ospf::Process_::InstanceName : public Entity
{
    public:
        InstanceName();
        ~InstanceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf last_update_time; //type: string
        YLeaf total_spf_nos; //type: uint32
        YLeaf route_change_spf_nos; //type: uint32
        YLeaf no_route_change_spf_nos; //type: uint32
        YLeaf not_interested_spf_nos; //type: uint32
        YLeaf lsp_regeneration_count; //type: uint32
        YLeaf lsp_regeneration_serial; //type: uint32
        YLeaf arch_spf_event; //type: uint32
        YLeaf arch_lsp_regeneration; //type: uint32

        class Instance; //type: Rcmd::Process::Ospf::Process_::InstanceName::Instance

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ospf::Process_::InstanceName::Instance> > instance;


}; // Rcmd::Process::Ospf::Process_::InstanceName


class Rcmd::Process::Ospf::Process_::InstanceName::Instance : public Entity
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


        YLeaf instance_id; //type: uint32
        YLeaf instance_state; //type: RcmdShowInstStateEnum
        YLeaf instance_deleted; //type: RcmdBoolYesNoEnum
        YLeaf fwd_referenced; //type: RcmdBoolYesNoEnum
        YLeaf last_update_time; //type: string
        YLeaf node_id; //type: uint32
        YLeaf spf_offset; //type: uint32
        YLeaf total_spf_nos; //type: uint32
        YLeaf arch_spf_run; //type: uint32
        YLeaf route_change_spf_nos; //type: uint32
        YLeaf no_route_change_spf_nos; //type: uint32
        YLeaf not_interested_spf_nos; //type: uint32
        YLeaf total_spt_nos; //type: uint32



}; // Rcmd::Process::Ospf::Process_::InstanceName::Instance


class Rcmd::Process::Ldp : public Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Process_; //type: Rcmd::Process::Ldp::Process_

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ldp::Process_> > process;


}; // Rcmd::Process::Ldp


class Rcmd::Process::Ldp::Process_ : public Entity
{
    public:
        Process_();
        ~Process_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protocol_id; //type: RcmdProtocolIdEnum
        YLeaf process_name; //type: string

        class InstanceName; //type: Rcmd::Process::Ldp::Process_::InstanceName

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ldp::Process_::InstanceName> > instance_name;


}; // Rcmd::Process::Ldp::Process_


class Rcmd::Process::Ldp::Process_::InstanceName : public Entity
{
    public:
        InstanceName();
        ~InstanceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf last_update_time; //type: string
        YLeaf total_spf_nos; //type: uint32
        YLeaf route_change_spf_nos; //type: uint32
        YLeaf no_route_change_spf_nos; //type: uint32
        YLeaf not_interested_spf_nos; //type: uint32
        YLeaf lsp_regeneration_count; //type: uint32
        YLeaf lsp_regeneration_serial; //type: uint32
        YLeaf arch_spf_event; //type: uint32
        YLeaf arch_lsp_regeneration; //type: uint32

        class Instance; //type: Rcmd::Process::Ldp::Process_::InstanceName::Instance

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_rcmd_oper::Rcmd::Process::Ldp::Process_::InstanceName::Instance> > instance;


}; // Rcmd::Process::Ldp::Process_::InstanceName


class Rcmd::Process::Ldp::Process_::InstanceName::Instance : public Entity
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


        YLeaf instance_id; //type: uint32
        YLeaf instance_state; //type: RcmdShowInstStateEnum
        YLeaf instance_deleted; //type: RcmdBoolYesNoEnum
        YLeaf fwd_referenced; //type: RcmdBoolYesNoEnum
        YLeaf last_update_time; //type: string
        YLeaf node_id; //type: uint32
        YLeaf spf_offset; //type: uint32
        YLeaf total_spf_nos; //type: uint32
        YLeaf arch_spf_run; //type: uint32
        YLeaf route_change_spf_nos; //type: uint32
        YLeaf no_route_change_spf_nos; //type: uint32
        YLeaf not_interested_spf_nos; //type: uint32
        YLeaf total_spt_nos; //type: uint32



}; // Rcmd::Process::Ldp::Process_::InstanceName::Instance

class RcmdBagEnblDsblEnum : public Enum
{
    public:
        static const Enum::YLeaf dsbl;
        static const Enum::YLeaf enbl;

};

class RcmdBoolYesNoEnum : public Enum
{
    public:
        static const Enum::YLeaf no;
        static const Enum::YLeaf yes;

};

class RcmdPriorityLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;
        static const Enum::YLeaf high;
        static const Enum::YLeaf medium;
        static const Enum::YLeaf low;

};

class RcmdSpfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf complete;
        static const Enum::YLeaf in_complete;
        static const Enum::YLeaf collecting;
        static const Enum::YLeaf no_route_change;

};

class RcmdShowIpfrrLfaEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf local;
        static const Enum::YLeaf remote;

};

class RcmdShowPrcsStateEnum : public Enum
{
    public:
        static const Enum::YLeaf success;
        static const Enum::YLeaf cpu;
        static const Enum::YLeaf memory;

};

class RcmdShowCompIdEnum : public Enum
{
    public:
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf isis;
        static const Enum::YLeaf un_known;

};

class RcmdShowLdpSessionStateEnum : public Enum
{
    public:
        static const Enum::YLeaf gr_down;
        static const Enum::YLeaf gr_converging;
        static const Enum::YLeaf establishing;
        static const Enum::YLeaf converging;
        static const Enum::YLeaf converged;
        static const Enum::YLeaf retrying;
        static const Enum::YLeaf total;

};

class RcmdProtocolIdEnum : public Enum
{
    public:
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf isis;
        static const Enum::YLeaf na;

};

class RcmdShowLdpConvStateEnum : public Enum
{
    public:
        static const Enum::YLeaf not_full;
        static const Enum::YLeaf fully_covered;
        static const Enum::YLeaf coverage_above_threshold;
        static const Enum::YLeaf coverage_below_threshold;
        static const Enum::YLeaf coverage_flapping;

};

class RcmdLinecardSpeedEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf fastest;
        static const Enum::YLeaf slowest;

};

class RcmdShowNodeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf lc;
        static const Enum::YLeaf rp;

};

class RcmdShowLdpNeighbourStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf up;

};

class RcmdIsisSpfEnum : public Enum
{
    public:
        static const Enum::YLeaf full;
        static const Enum::YLeaf incremental;
        static const Enum::YLeaf next_hop;
        static const Enum::YLeaf partial_route;

};

class RcmdShowRoutePathChangeEnum : public Enum
{
    public:
        static const Enum::YLeaf primary;
        static const Enum::YLeaf backup;

};

class RcmdIsisLvlEnum : public Enum
{
    public:
        static const Enum::YLeaf l1;
        static const Enum::YLeaf l2;

};

class RcmdChangeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf add;
        static const Enum::YLeaf delete_;
        static const Enum::YLeaf modify;
        static const Enum::YLeaf no_change;

};

class RcmdShowRouteEnum : public Enum
{
    public:
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf intra;
        static const Enum::YLeaf inter;
        static const Enum::YLeaf ext_1;
        static const Enum::YLeaf ext_2;
        static const Enum::YLeaf nssa_1;
        static const Enum::YLeaf nssa_2;
        static const Enum::YLeaf isis;
        static const Enum::YLeaf l1_summary;
        static const Enum::YLeaf l1;
        static const Enum::YLeaf l2_summary;
        static const Enum::YLeaf l2;
        static const Enum::YLeaf inter_area_summary;
        static const Enum::YLeaf inter_area;
        static const Enum::YLeaf default_attached;

};

class RcmdLdpEventEnum : public Enum
{
    public:
        static const Enum::YLeaf neighbor;
        static const Enum::YLeaf adjacency;

};

class RcmdLsaEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf router;
        static const Enum::YLeaf network;
        static const Enum::YLeaf summary;
        static const Enum::YLeaf asbr;
        static const Enum::YLeaf external;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf nssa;

};

class RcmdShowMemEnum : public Enum
{
    public:
        static const Enum::YLeaf standard;
        static const Enum::YLeaf chunk;
        static const Enum::YLeaf edm;
        static const Enum::YLeaf string;
        static const Enum::YLeaf static_;
        static const Enum::YLeaf unknown;

};

class RcmdBagEnableDisableEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf enable;

};

class RcmdShowInstStateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf active;
        static const Enum::YLeaf in_active;
        static const Enum::YLeaf na;

};

class RcmdLsChangeEnum : public Enum
{
    public:
        static const Enum::YLeaf new_;
        static const Enum::YLeaf delete_;
        static const Enum::YLeaf modify;
        static const Enum::YLeaf noop;

};

class RcmdShowIntfEventEnum : public Enum
{
    public:
        static const Enum::YLeaf create;
        static const Enum::YLeaf delete_;
        static const Enum::YLeaf link_up;
        static const Enum::YLeaf link_down;
        static const Enum::YLeaf primary_address;
        static const Enum::YLeaf secondary_address;
        static const Enum::YLeaf ipv6_link_local_address;
        static const Enum::YLeaf ipv6_global_address;
        static const Enum::YLeaf mtu;
        static const Enum::YLeaf band_width;
        static const Enum::YLeaf ldp_sync;
        static const Enum::YLeaf forward_reference;
        static const Enum::YLeaf ldp_no_sync;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_RCMD_OPER_ */

